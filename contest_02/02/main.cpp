bool is_valid_move(const std::vector<std::string>& maze, int row, int col, std::vector<std::vector<bool>>& visited) {
    int rows = maze.size();
    int cols = maze[0].size();
    
    return (row >= 0 && row < rows && col >= 0 && col < cols && maze[row][col] != '#' && !visited[row][col]);
}

bool dfs(const std::vector<std::string>& maze, int row, int col, std::vector<std::vector<bool>>& visited) {
    int rows = maze.size();
    int cols = maze[0].size();
    
    if (maze[row][col] == 'E') {
        return true;
    }
    
    visited[row][col] = true;
    
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};
    
    for (int i = 0; i < 4; i++) {
        int newRow = row + dr[i];
        int newCol = col + dc[i];
        
        if (is_valid_move(maze, newRow, newCol, visited) && dfs(maze, newRow, newCol, visited)) {
            return true;
        }
    }
    
    return false;
}

bool is_can_exit_from_maze(const std::vector<std::string>& maze, int startRow, int startCol) {
    int rows = maze.size();
    int cols = maze[0].size();
    
    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));

    if (startRow < 0 || startRow >= rows || startCol < 0 || startCol >= cols || maze[startRow][startCol] == '#') {
        return false;
    }

    return dfs(maze, startRow, startCol, visited);
}
