---
title: "Avviso del compilatore (livello 3) C4535 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4535"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4535"
ms.assetid: 2c5ad1aa-2558-41d1-8f06-47fef74c8d9b
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4535
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

calling \_set\_se\_translator\(\) richiede \/EHa  
  
 Per utilizzare [\_set\_se\_translator](../../c-runtime-library/reference/set-se-translator.md), è necessario specificare l'opzione del compilatore [\/EHa](../../build/reference/eh-exception-handling-model.md) e non **\/EHs**.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4535:  
  
```  
// C4535.cpp  
// compile with: /W3 /EHsc /c  
// C4535 expected  
// to fix, compile with /EHa instead  
#include <stdio.h>  
#include <windows.h>  
#include <eh.h>  
  
void SEFunc();  
void trans_func( unsigned int, EXCEPTION_POINTERS* );  
  
class SE_Exception {  
private:  
   unsigned int nSE;  
public:  
   SE_Exception() {}  
   SE_Exception( unsigned int n ) : nSE( n ) {}  
   ~SE_Exception() {}  
   unsigned int getSeNumber() { return nSE; }  
};  
  
int main() {  
   try {  
      _set_se_translator( trans_func );  
      SEFunc();  
   }  
   catch( SE_Exception e ) {  
      printf_s( "Caught a __try exception with SE_Exception.\n" );  
   }  
}  
  
void SEFunc() {  
   __try {  
      int x, y=0;  
      x = 5 / y;  
   }  
   __finally {  
      printf_s( "In finally\n" );  
   }  
}  
  
void trans_func( unsigned int u, EXCEPTION_POINTERS* pExp ) {  
   printf_s( "In trans_func.\n" );  
   throw SE_Exception();  
}  
```