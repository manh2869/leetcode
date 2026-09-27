def bfs(maze, start):
    queue = []
    queue.append(start)
    visited = [[False] * len(maze[0]) for _ in range(len(maze))]
    mx = [1, -1, 0, 0]
    my = [0, 0, 1, -1]
    maze[start[0]][start[1]] = "P"
    visited[start[0]][start[1]] = True
    while queue:
        Y = queue[0]
        queue.pop(0)
        x = Y[0]
        y = Y[1]
        for i in range(4):
            nx = x + mx[i]
            ny = y + my[i]
            if nx < 0 or ny < 0 or nx >= len(maze) or ny >= len(maze[0]):
                continue

            if maze[nx][ny] == 1 or visited[nx][ny]:
                continue

            if (
                nx == 0 or nx == len(maze) - 1 or ny == 0 or ny == len(maze[0]) - 1
            ) and maze[nx][ny] == 0:
                return [nx, ny]
            visited[nx][ny] = True
            queue.append([nx, ny])

        maze[queue[0][0]][queue[0][1]] = "P"
        for row in maze:
            for x in row:
                print(x, end=" ")
            print()
        print()
        input()

    return -1




maze = [
    [1, 1, 1, 1, 1, 1, 0, 1],
    [1, 0, 1, 0, 0, 0, 0, 1],
    [1, 0, 1, 0, 1, 1, 0, 1],
    [1, 0, 0, 0, 1, 0, 0, 1],
    [1, 1, 1, 0, 0, 0, 1, 1],
    [1, 0, 0, 0, 1, 0, 0, 1],
    [1, 0, 1, 0, 0, 1, 0, 1],
    [1, 0, 1, 1, 1, 1, 0, 0],
]
E = bfs(maze, [1, 1])
maze[E[0]][E[1]] = "P"
for row in maze:
    for x in row:
        print(x, end=" ")
    print()
print("exit in ", E)
