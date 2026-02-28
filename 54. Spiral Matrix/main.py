class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        m=len(matrix)
        n=len(matrix[0])

        GO_UP=1
        GO_DOWN=2
        GO_RIGHT=3
        GO_LEFT=4

        UP_WALL=0
        DOWN_WALL=m
        RIGHT_WALL=n
        LEFT_WALL=-1


        ans=[]

        i=0
        j=0

        DIRECTION=GO_RIGHT

        while len(ans)<m*n:
            if DIRECTION==GO_RIGHT:
                while j<RIGHT_WALL:
                    ans.append(matrix[i][j])
                    j=j+1
                DIRECTION=GO_DOWN
                RIGHT_WALL=RIGHT_WALL-1
                i=i+1
                j=j-1
            elif DIRECTION==GO_DOWN:
                while i< DOWN_WALL:
                    ans.append(matrix[i][j])
                    i=i+1
                DOWN_WALL=DOWN_WALL-1
                DIRECTION=GO_LEFT
                i=i-1
                j=j-1
            elif DIRECTION==GO_LEFT:
                while  j> LEFT_WALL:
                     ans.append(matrix[i][j])
                     j=j-1
                DIRECTION=GO_UP
                LEFT_WALL=LEFT_WALL+1
                i=i-1
                j=j+1
            else :
                while i>UP_WALL:
                    ans.append(matrix[i][j])
                    i=i-1
                UP_WALL=UP_WALL+1
                DIRECTION=GO_RIGHT
                i=i+1
                j=j+1

        return ans




        