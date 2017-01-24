---
title: "A.24   Example of the private Clause | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: f90a5b49-81ff-4746-ae03-37bbd33f6c08
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.24   Example of the private Clause
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`private` clausola \([parte 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) nella pagina 25\) in parallelo un'area è solo in effetti per l'ambito lessicale dell'area, non per l'ambito dinamico dell'area.  Pertanto, nell'esempio che segue, qualsiasi utilizzo della variabile in all'interno di `for` ciclo nella routine f fa riferimento a una copia privata di in, mentre un utilizzo della routine g si riferisce a globale in.  
  
```  
int a;  
  
void f(int n)   
{  
    a = 0;  
  
    #pragma omp parallel for private(a)  
    for (int i=1; i<n; i++)   
    {  
        a = i;  
        g(i, n);  
        d(a);     // Private copy of "a"  
        ...  
    }  
    ...  
  
void g(int k, int n)   
{  
    h(k,a); // The global "a", not the private "a" in f  
}  
```