---
title: "Macro variadic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro variadic [C++]"
  - "__VA_ARGS__ (identificatore macro variadic)"
ms.assetid: 51e757dc-0134-4bb2-bb74-64ea5ad75134
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Macro variadic
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le macro variadiche sono delle macro tipo funzioni che contengono un numero variabile di argomenti.  
  
## Note  
 Per usare le macro variadiche, le ellissi devo essere specificate come argomento formale finale nella definizione della macro, e l'identificatore `__VA_ARGS__` può essere usato nella definizione per inserire degli argomenti aggiuntivi.  `__VA_ARGS__` viene sostituito da tutti gli argomenti che combaciano con le ellissi, incluse le virgole tra di loro.  
  
 Lo standard C specifica che almeno un argomento deve essere passato all'ellisse, per garantire che la macro non risolva un espressione con un virgola finale.  L'implementazione Visual C\+\+ tronca una virgola finale se nessun argomento è stato passato all'ellisse.  
  
## Esempio  
  
```cpp  
// variadic_macros.cpp  
#include <stdio.h>  
#define EMPTY  
  
#define CHECK1(x, ...) if (!(x)) { printf(__VA_ARGS__); }  
#define CHECK2(x, ...) if ((x)) { printf(__VA_ARGS__); }  
#define CHECK3(...) { printf(__VA_ARGS__); }  
#define MACRO(s, ...) printf(s, __VA_ARGS__)  
  
int main() {  
    CHECK1(0, "here %s %s %s", "are", "some", "varargs1(1)\n");  
    CHECK1(1, "here %s %s %s", "are", "some", "varargs1(2)\n");   // won't print  
  
    CHECK2(0, "here %s %s %s", "are", "some", "varargs2(3)\n");   // won't print  
    CHECK2(1, "here %s %s %s", "are", "some", "varargs2(4)\n");  
  
    // always invokes printf in the macro  
    CHECK3("here %s %s %s", "are", "some", "varargs3(5)\n");  
  
    MACRO("hello, world\n");  
  
    MACRO("error\n", EMPTY); // would cause error C2059, except VC++   
                             // suppresses the trailing comma  
}  
```  
  
## Output  
  
```  
here are some varargs1(1)  
here are some varargs2(4)  
here are some varargs3(5)  
hello, world  
error  
  
```  
  
## Vedere anche  
 [Macro](../preprocessor/macros-c-cpp.md)