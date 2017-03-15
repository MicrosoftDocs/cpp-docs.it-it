---
title: "Problemi di inline di funzioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Ob1 C++ (opzione del compilatore)"
  - "/Ob2 C++ (opzione del compilatore)"
  - "problemi di inline di funzioni"
  - "funzioni inline, problemi"
  - "-Ob1 C++ (opzione del compilatore)"
  - "-Ob2 C++ (opzione del compilatore)"
ms.assetid: 65d59943-4b3c-4a43-aeb6-dccbf7686740
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Problemi di inline di funzioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se si utilizza l'inline di funzioni, procedere come indicato di seguito.  
  
-   Implementare le funzioni inline nel file di intestazione da includere.  
  
-   Attivare l'inline nel file di intestazione.  
  
```  
// LNK2019_function_inline.cpp  
// compile with: /c   
// post-build command: lib LNK2019_function_inline.obj  
#include <stdio.h>  
struct _load_config_used {  
   void Test();  
   void Test2() { printf("in Test2\n"); }  
};  
  
void _load_config_used::Test() { printf("in Test\n"); }  
```  
  
 quindi  
  
```  
// LNK2019_function_inline_2.cpp  
// compile with: LNK2019_function_inline.lib  
struct _load_config_used {  
   void Test();  
   void Test2();  
};  
  
int main() {  
   _load_config_used x;  
   x.Test();  
   x.Test2();   // LNK2019  
}  
```  
  
 Se si utilizza la direttiva del compilatore `#pragma inline_depth`, accertarsi di avere impostato un valore pari a 2 o superiore.  Un valore pari a zero disattiva l'inline.  Accertarsi inoltre di utilizzare l'opzione del compilatore **\/Ob1** o **\/Ob2**.  
  
 L'utilizzo combinato di opzioni del compilatore inline e non inline su moduli diversi talvolta può causare problemi.  Se si crea una libreria C\+\+ con l'inline di funzione attivato \([\/Ob1](../../build/reference/ob-inline-function-expansion.md) o [\/Ob2](../../build/reference/ob-inline-function-expansion.md)\), mentre il file di intestazione corrispondente che descrive le funzioni ha l'inline disattivato \(nessuna opzione\), viene generato l'errore LNK2001.  Le funzioni non vengono rese inline nel codice dal file di intestazione, ma, poiché non si trovano nel file della libreria, non è disponibile alcun indirizzo per risolvere il riferimento.  
  
 Analogamente, l'errore LNK2019 viene generato anche da un progetto che utilizza l'inline di funzioni definendo le funzioni in un file cpp anziché nel file di intestazione.  Il file di intestazione viene incluso ovunque sia appropriato, ma le funzioni vengono rese inline solo quando il file cpp passa attraverso il compilatore. Pertanto, le funzioni vengono rilevate dal linker come esterni non risolti quando sono utilizzate in altri moduli.  
  
```  
// LNK2019_FIP.h  
struct testclass {  
   void PublicStatMemFunc1(void);  
};  
```  
  
 quindi  
  
```  
// LNK2019_FIP.cpp  
// compile with: /c  
#include "LNK2019_FIP.h"  
inline void testclass::PublicStatMemFunc1(void) {}  
```  
  
 quindi  
  
```  
// LNK2019_FIP_2.cpp  
// compile with: LNK2019_FIP.cpp  
// LNK2019 expected  
#include "LNK2019_FIP.h"  
int main() {  
   testclass testclsObject;  
  
   // module cannot see the implementation of PublicStatMemFunc1  
   testclsObject.PublicStatMemFunc1();  
}  
```  
  
## Vedere anche  
 [Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)