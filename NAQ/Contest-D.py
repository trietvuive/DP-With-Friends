import math
import os
import random
import re
import sys
import collections

input = sys.stdin.readline


def Solution(commands):
    #print(commands)
    out=""
    
    if commands[0]=="Simon" and commands[1]=="says":
        for j in range(2,len(commands)):
            out= out + commands[j]+" "
            
    else:
        return "None"
    
    #print(out)
    return out

        



    


    

    
    



if __name__ == '__main__': 
    ans=[]
    q = int(input())
    for i in range(q):
        tmp = input().split()
        val = Solution(tmp)
        ans.append(val)


    for i in range(len(ans)):
        if ans[i]!="None":
            print("%s" % (ans[i]))
    



    

