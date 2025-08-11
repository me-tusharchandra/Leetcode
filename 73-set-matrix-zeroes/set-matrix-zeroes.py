class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:

        r = len(matrix)
        c = len(matrix[0])

        r0 = False
        c0 = False
        temp = False

        if(matrix[0][0] == 0):
            temp = True

        for i in range(1, r):
            if(matrix[i][0] == 0):
                c0 = True
                break
        
        for i in range(1, c):
            if(matrix[0][i] == 0):
                r0 = True
                break

        for i in range(1,r):
            for j in range(1,c):
                if(matrix[i][j] == 0):
                    matrix[i][0] = 0
                    matrix[0][j] = 0

        for i in range(1,r):
            if(matrix[i][0] == 0):
                for j in range(1,c):
                    matrix[i][j] = 0

        for i in range(1,c):
            if(matrix[0][i] == 0):
                for j in range(1,r):
                    matrix[j][i] = 0

        if(c0):
            for i in range(r):
                matrix[i][0] = 0
            
        if(r0):
            for i in range(c):
                matrix[0][i] = 0
        
        if(temp):
            for i in range(r):
                matrix[i][0] = 0
            
            for i in range(c):
                matrix[0][i] = 0
        