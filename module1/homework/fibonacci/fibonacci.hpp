#pragma once

int fibonacci_iterative(int sequence) {
    if(sequence==0){
        return 0;
    }
    if(sequence==1 || sequence==2){
        return 1;
    }
    int last = 1, conteiner , score = 1; 
    for(int i = 0;i<sequence-2;i++){
        
        conteiner=score;
        score +=last;
        last = conteiner;

    }
    return score;
}

int fibonacci_recursive(int sequence) {
    if(sequence==0)return 0;
    if(sequence <= 2)return 1;
    return fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2);

}
