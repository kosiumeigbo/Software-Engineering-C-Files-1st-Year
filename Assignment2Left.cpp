if(vec[i] == 0){//1
    vec[i] = vec[i + 1];
    vec[i + 1] = vec[i + 2];
    vec[i + 2] = vec[i + 3];
    vec[i + 3] = 0;
    if(vec[i] == 0){//2
        vec[i] = vec[i + 1];
        vec[i + 1] = vec[i + 2];
        vec[i + 2] = 0;
        if(vec[i] == 0){//3
            vec[i] = vec[i + 1];
            vec[i + 1] = 0;
            vec[i + 2] = 0;
        }
        else{
            if(vec[i] == vec[i + 1]){//4
                vec[i] = 2*vec[i + 1];
                vec[i + 1] = 0;
                vec[i + 2] = 0;
            }
        }
    }
    else{
        if(vec[i] == vec[i + 1]){//5
            vec[i] = 2*vec[i + 1];
            vec[i + 1] = vec[i + 2];
            vec[i + 2] = 0;
        }
        else{
            if(vec[i + 1] == 0){//6
                vec[i + 1] = vec[i + 2];
                vec[i + 2] = 0;
            }
            else{
                if(vec[i + 1] == vec[i + 2]){//7
                    vec[i + 1] = 2*vec[i + 2];
                    vec[i + 2] = 0;
                }
            }
        }
    }
}
else{//8
    if(vec[i] == vec[i + 1]){//9
        vec[i] = 2*vec[i + 1];
        vec[i + 1] = vec[i + 2];
        vec[i + 2] = vec[i + 3];
        vec[i + 3] = 0;
        if(vec[i + 1] == 0){//10
            vec[i + 1] = vec[i + 2];
            vec[i + 2] = 0;
        }
        else{
            if(vec[i + 1] == vec[i + 2]){//11
                vec[i + 1] = 2*vec[i + 2];
                vec[i + 2] = 0;
            }
        }
    }
    else{
        if(vec[i + 1] == 0){//12
            vec[i + 1] = vec[i + 2];
            vec[i + 2] = vec[i + 3];
            vec[i + 3] = 0;
        }
        else{
            if(vec[i + 1] == vec[i + 2]){//13
                vec[i + 1] = 2*vec[i + 2];
                vec[i + 2] = vec[i + 3];
                vec[i + 3] = 0;
            }
        }
    }
}
