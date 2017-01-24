---
title: "Avviso del compilatore (livello 1) C4750 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4750"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4750"
ms.assetid: b0b2c938-7d2a-4c36-8270-7daee15ffee3
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4750
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': funzione con \_alloca\(\) resa inline in un ciclo  
  
 La funzione 'identifier' impone l'espansione inline della funzione [\_alloca](../../c-runtime-library/reference/alloca.md) all'interno di un ciclo, che può provocare un overflow dello stack all'esecuzione del ciclo.  
  
### Per correggere l'errore  
  
1.  Verificare che la funzione 'identifier' non venga modificata con l'identificatore [\_\_forceinline](../../misc/inline-inline-forceinline.md).  
  
2.  Verificare che la funzione 'identifier' non contenga una funzione [\_alloca](../../c-runtime-library/reference/alloca.md) all'interno di un ciclo.  
  
3.  Non specificare l'opzione di compilazione [\/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [\/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [\/Ox](../../build/reference/ox-full-optimization.md) o [\/Og](../../build/reference/og-global-optimizations.md).  
  
4.  Inserire la funzione [\_alloca](../../c-runtime-library/reference/alloca.md) in un'istruzione [try\-except](../../cpp/try-except-statement.md) che intercetterà un overflow dello stack.  
  
## Esempio  
 Nell'esempio di codice seguente viene chiamato `MyFunction` in un ciclo e `MyFunction` chiama la funzione `_alloca`. Il modificatore `__forceinline` provoca l'espansione inline della funzione `_alloca`.  
  
```  
// c4750.cpp // compile with: /O2 /W1 /c #include <intrin.h> char * volatile newstr; __forceinline void myFunction(void) // C4750 warning { // The _alloca function does not require a __try/__except // block because the example uses compiler option /c. newstr = (char * volatile) _alloca(1000); } int main(void) { for (int i=0; i<50000; i++) myFunction(); return 0; }  
```  
  
## Vedere anche  
 [\_alloca](../../c-runtime-library/reference/alloca.md)