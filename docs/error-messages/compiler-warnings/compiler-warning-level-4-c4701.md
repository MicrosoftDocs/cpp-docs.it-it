---
title: "Avviso del compilatore (livello 4) C4701 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4701"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4701"
ms.assetid: d7c76c66-1f3f-4d3c-abe4-5d94c84a5a1f
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Avviso del compilatore (livello 4) C4701
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzata variabile locale 'nome' potenzialmente non inizializzata.  
  
 La variabile locale *name* può essere utilizzata senza che le venga assegnato un valore.  La situazione può provocare risultati imprevisti.  
  
## Esempio  
 Nel codice seguente vengono generati gli errore C4701 and C4703.  
  
```cpp  
#include <malloc.h>  
  
void func(int size)  
{  
    void* p;  
    if (size < 256) {  
        p = malloc(size);  
    }  
  
    if (p != nullptr) // C4701 and C4703  
        free(p);  
}  
  
void main()  
{  
    func(9);  
}  
```  
  
  **c:\\src\\test.cpp\(10\) : avviso C4701: utilizzata variabile locale "p" potenzialmente non inizializzata**  
 **c:\\src\\test.cpp\(10\) : avviso C4703: utilizzata variabile locale "p" potenzialmente non inizializzata** Per risolvere il problema, inizializzare la variabile come indicato nel codice seguente:  
  
```cpp  
#include <malloc.h>  
  
void func(int size)  
{  
    void* p = nullptr;  
    if (size < 256) {  
        p = malloc(size);  
    }  
  
    if (p != nullptr)  
        free(p);  
}  
  
void main()  
{  
    func(9);  
}  
```  
  
## Vedere anche  
 [Avviso del compilatore \(livello 4\) C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)   
 [Avvisi, \/sdl e migliorare rilevamento variabile non inizializzata](http://blogs.msdn.com/b/sdl/archive/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection.aspx)