---
title: "copyprivate | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "copyprivate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "copyprivate OpenMP clause"
ms.assetid: 02c0209d-abe8-4797-8365-a82b53c3f15d
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# copyprivate
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che una o più variabili devono essere condivise da tutti i thread.  
  
## Sintassi  
  
```  
copyprivate(var)  
```  
  
## Note  
 dove:  
  
 `var`  
 Una o più variabili da condividere.  Se più di uno variabile specificata, nomi di variabili separati da una virgola.  
  
## Note  
 `copyprivate` si applica a  [single](../../../parallel/openmp/reference/single.md) direttiva.  
  
 Per ulteriori informazioni, vedere [2.7.2.8 copyprivate](../../../parallel/openmp/2-7-2-8-copyprivate.md).  
  
## Esempio  
  
```  
// omp_copyprivate.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
float x, y, fGlobal = 1.0;  
#pragma omp threadprivate(x, y)  
  
float get_float() {  
   fGlobal += 0.001;  
   return fGlobal;  
}  
  
void use_float(float f, int t) {  
   printf_s("Value = %f, thread = %d\n", f, t);  
}  
  
void CopyPrivate(float a, float b) {  
   #pragma omp single copyprivate(a, b, x, y)   
   {  
      a = get_float();  
      b = get_float();  
      x = get_float();  
      y = get_float();  
    }  
  
   use_float(a, omp_get_thread_num());     
   use_float(b, omp_get_thread_num());     
   use_float(x, omp_get_thread_num());  
   use_float(y, omp_get_thread_num());  
}  
  
int main() {  
   float a = 9.99, b = 123.456;  
  
   printf_s("call CopyPrivate from a single thread\n");  
   CopyPrivate(9.99, 123.456);  
  
   printf_s("call CopyPrivate from a parallel region\n");  
   #pragma omp parallel       
   {  
      CopyPrivate(a, b);  
   }  
}  
```  
  
  **chiamata CopyPrivate da un singolo thread**  
**valore \= 1,001000, thread \= 0**  
**valore \= 1,002000, thread \= 0**  
**valore \= 1,003000, thread \= 0**  
**valore \= 1,004000, thread \= 0**  
**chiamata CopyPrivate da un'area parallela**  
**valore \= 1,005000, thread \= 0**  
**valore \= 1,005000, thread \= 1**  
**valore \= 1,006000, thread \= 0**  
**valore \= 1,006000, thread \= 1**  
**valore \= 1,007000, thread \= 0**  
**valore \= 1,007000, thread \= 1**  
**valore \= 1,008000, thread \= 0**  
**valore \= 1,008000, thread \= 1**   
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)