---
title: Problemi di inline di funzioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
dev_langs:
- C++
helpviewer_keywords:
- /Ob1 C++ compiler option
- inline functions, problems
- -Ob1 C++ compiler option
- /Ob2 C++ compiler option
- -Ob2 C++ compiler option
- function inlining problems
ms.assetid: 65d59943-4b3c-4a43-aeb6-dccbf7686740
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 670136a61d5991655a5d99e8257c6bcc907f2dfb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33300228"
---
# <a name="function-inlining-problems"></a>Problemi di inline di funzioni
Se si utilizza l'inline delle funzioni, è necessario:  
  
-   Definire le funzioni inline implementate nel file di intestazione che è includere.  
  
-   Avere inline nel file di intestazione.  
  
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
  
 E quindi,  
  
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
  
 Se si utilizza il `#pragma inline_depth` del compilatore direttiva, assicurarsi impostare un valore uguale o maggiore di 2. Un valore pari a zero per disattivare l'incorporamento. Assicurarsi inoltre che si utilizza il **/Ob1** o **/Ob2** opzioni del compilatore.  
  
 Combinazione di opzioni di compilazione inline e non inline in moduli diversi può causare problemi. Se si crea una libreria di C++ con attivata l'inline delle funzioni ([/Ob1](../../build/reference/ob-inline-function-expansion.md) o [/Ob2](../../build/reference/ob-inline-function-expansion.md)) ma il file di intestazione corrispondente che descrive le funzioni ha l'inline disattivato (nessuna opzione), verrà visualizzato l'errore LNK2001. Le funzioni vengono rese inline nel codice dal file di intestazione, ma poiché non sono nel file di libreria non è disponibile alcun indirizzo per risolvere il riferimento.  
  
 Analogamente, un progetto che utilizza l'inline delle funzioni, ma definisce le funzioni in un file con estensione cpp anziché nell'intestazione del file verrà visualizzato anche l'errore LNK2019. Il file di intestazione è incluso ovunque sia appropriato, ma le funzioni sono solo inline quando il file con estensione cpp passa attraverso il compilatore. Pertanto, il linker rileva le funzioni come esterni non risolti quando usate in altri moduli.  
  
```  
// LNK2019_FIP.h  
struct testclass {  
   void PublicStatMemFunc1(void);  
};  
```  
  
 E poi  
  
```  
// LNK2019_FIP.cpp  
// compile with: /c  
#include "LNK2019_FIP.h"  
inline void testclass::PublicStatMemFunc1(void) {}  
```  
  
 E poi  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)