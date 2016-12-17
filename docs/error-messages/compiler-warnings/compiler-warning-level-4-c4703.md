---
title: "Avviso del compilatore (livello 4) C4703 | Microsoft Docs"
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
  - "C4703"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4703"
ms.assetid: 5dad454e-69e3-4931-9168-050a861c05f8
caps.latest.revision: 7
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4703
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzata variabile puntatore locale 'nome' potenzialmente non inizializzata.  
  
 La variabile puntatore locale *name* può essere utilizzata senza che le venga assegnato un valore.  La situazione può provocare risultati imprevisti.  
  
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
 [Avviso del compilatore \(livello 4\) C4701](../../error-messages/compiler-warnings/compiler-warning-level-4-c4701.md)   
 [Avvisi, \/sdl e migliorare rilevamento variabile non inizializzata](http://blogs.msdn.com/b/sdl/archive/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection.aspx)