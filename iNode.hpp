//
//  iNode.hpp
//
//
//  Created by oliver on 4/6/17.
//
//

#ifndef iNode_hpp
#define iNode_hpp

#include <stdio.h>
#include <string>
#include <vector>

struct indBlock{

	int pointer;
	std::vector<int> blockTable;
};


class iNode{
public:
    iNode();
    iNode(int, int[12], int, int, char[32],int);
	iNode(char[32],int);
    char * getFileName();
    void setFileName(char* fn);
	int blockAddressTable[12];

	
    // fileName is char arry of size 32 bytes, as specified in Program5 instructions
    int fSize;
    indBlock ib;
	std::vector<indBlock> doubleIndBlockTable;

	
    int doubleIndBlock;
    char fileName[32];

	
};




#endif /* iNode_hpp */
