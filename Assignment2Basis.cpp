if(vec1[i] == 0){//1
    vec1[i] = vec2[i];
    vec2[i] = vec3[i];
    vec3[i] = vec4[i];
    vec4[i] = 0;
    if(vec1[i] == 0){//2
        vec1[i] = vec2[i];
        vec2[i] = vec3[i];
        vec3[i] = 0;
        if(vec1[i] == 0){//3
            vec1[i] = vec2[i];
            vec2[i] = 0;
            vec3[i] = 0;
        }
        else{
            if(vec1[i] == vec2[i]){//4
                vec1[i] = 2*vec2[i];
                vec2[i] = 0;
                vec3[i] = 0;
            }
        }
    }
    else{
        if(vec1[i] == vec2[i]){//5
            vec1[i] = 2*vec2[i];
            vec2[i] = vec3[i];
            vec3[i] = 0;
        }
        else{
            if(vec2[i] == 0){//6
                vec2[i] = vec3[i];
                vec3[i] = 0;
            }
            else{
                if(vec2[i] == vec3[i]){//7
                    vec2[i] = 2*vec3[i];
                    vec3[i] = 0;
                }
            }
        }
    }
}
else{//8
    if(vec1[i] == vec2[i]){//9
        vec1[i] = 2*vec2[i];
        vec2[i] = vec3[i];
        vec3[i] = vec4[i];
        vec4[i] = 0;
        if(vec2[i] == 0){//10
            vec2[i] = vec3[i];
            vec3[i] = 0;
        }
        else{
            if(vec2[i] == vec3[i]){//11
                vec2[i] = 2*vec3[i];
                vec3[i] = 0;
            }
        }
    }
    else{
        if(vec2[i] == 0){//12
            vec2[i] = vec3[i];
            vec3[i] = vec4[i];
            vec4[i] = 0;
        }
        else{
            if(vec2[i] == vec3[i]){//13
                vec2[i] = 2*vec3[i];
                vec3[i] = vec4[i];
                vec4[i] = 0;
            }
        }
    }
}
