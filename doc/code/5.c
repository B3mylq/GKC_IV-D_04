while(1) {
    if(SW1()){
    	if(!sw1Flag){
    		sw1Flag = 1;
    		initVar();
    	}
    	Task1();
    }
    else{
    	if(sw1Flag){
    		sw1Flag = 0;
    	}
    	Task2();
	}
}