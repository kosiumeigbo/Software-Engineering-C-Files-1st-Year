if(vec[i] == 0){//1
    vec[i] = vec[i + 4];
    vec[i + 4] = vec[i + 8];
    vec[i + 8] = vec[i + 12];
    vec[i + 12] = 0;
    if(vec[i] == 0){//2
        vec[i] = vec[i + 4];
        vec[i + 4] = vec[i + 8];
        vec[i + 8] = 0;
        if(vec[i] == 0){//3
            vec[i] = vec[i + 4];
            vec[i + 4] = 0;
            vec[i + 8] = 0;
        }
        else{
            if(vec[i] == vec[i + 4]){//4
                vec[i] = 2*vec[i + 4];
                vec[i + 4] = 0;
                vec[i + 8] = 0;
            }
        }
    }
    else{
        if(vec[i] == vec[i + 4]){//5
            vec[i] = 2*vec[i + 4];
            vec[i + 4] = vec[i + 8];
            vec[i + 8] = 0;
        }
        else{
            if(vec[i + 4] == 0){//6
                vec[i + 4] = vec[i + 8];
                vec[i + 8] = 0;
            }
            else{
                if(vec[i + 4] == vec[i + 8]){//7
                    vec[i + 4] = 2*vec[i + 8];
                    vec[i + 8] = 0;
                }
            }
        }
    }
}
else{//8
    if(vec[i] == vec[i + 4]){//9
        vec[i] = 2*vec[i + 4];
        vec[i + 4] = vec[i + 8];
        vec[i + 8] = vec[i + 12];
        vec[i + 12] = 0;
        if(vec[i + 4] == 0){//10
            vec[i + 4] = vec[i + 8];
            vec[i + 8] = 0;
        }
        else{
            if(vec[i + 4] == vec[i + 8]){//11
                vec[i + 4] = 2*vec[i + 8];
                vec[i + 8] = 0;
            }
        }
    }
    else{
        if(vec[i + 4] == 0){//12
            vec[i + 4] = vec[i + 8];
            vec[i + 8] = vec[i + 12];
            vec[i + 12] = 0;
        }
        else{
            if(vec[i + 4] == vec[i + 8]){//13
                vec[i + 4] = 2*vec[i + 8];
                vec[i + 8] = vec[i + 12];
                vec[i + 12] = 0;
            }
        }
    }
}
