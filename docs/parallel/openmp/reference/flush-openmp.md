---
title: "flush (OpenMP) | Microsoft Docs"
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
  - "Flush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flush OpenMP directive"
ms.assetid: 150ca46e-d4f7-4423-b0a4-838df40aeb67
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# flush (OpenMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che tutti i thread hanno la stessa visualizzazione della memoria per tutti gli oggetti condivisi.  
  
## Sintassi  
  
```  
#pragma omp flush [(var)]  
```  
  
## Note  
 dove:  
  
 `var` \(facoltativo\)  
 Un elenco delimitato da virgole di variabili che rappresentano oggetti si desidera sincronizzare.  se `var` non viene specificato, deallocare la memoria viene scaricata.  
  
## Note  
 **arrossir** la direttiva non supporta clausole di OpenMP.  
  
 Per ulteriori informazioni, vedere [2.6.5 flush Directive](../../../parallel/openmp/2-6-5-flush-directive.md).  
  
## Esempio  
  
```  
// omp_flush.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
void read(int *data) {  
   printf_s("read data\n");  
   *data = 1;  
}  
  
void process(int *data) {  
   printf_s("process data\n");  
   (*data)++;  
}  
  
int main() {  
   int data;  
   int flag;  
  
   flag = 0;  
  
   #pragma omp parallel sections num_threads(2)  
   {  
      #pragma omp section  
      {  
         printf_s("Thread %d: ", omp_get_thread_num( ));  
         read(&data);  
         #pragma omp flush(data)  
         flag = 1;  
         #pragma omp flush(flag)  
         // Do more work.  
      }  
  
      #pragma omp section   
      {  
         while (!flag) {  
            #pragma omp flush(flag)  
         }  
         #pragma omp flush(data)  
  
         printf_s("Thread %d: ", omp_get_thread_num( ));  
         process(&data);  
         printf_s("data = %d\n", data);  
      }  
   }  
}  
```  
  
  **thread 0: leggere i dati**  
**thread 1: dati gestiti**  
**dati \= 2**   
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)