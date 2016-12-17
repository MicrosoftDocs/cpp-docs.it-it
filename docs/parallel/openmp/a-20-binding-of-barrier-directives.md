---
title: "A.20   Binding of barrier Directives | Microsoft Docs"
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
ms.assetid: a3fdcc26-6873-429b-998e-de451401483b
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.20   Binding of barrier Directives
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La richiesta direttiva di regole di associazione per un oggetto **barriera** direttiva da associare a un tipo più vicina  `parallel` direttiva.  Per ulteriori informazioni sull'associazione direttiva, vedere [parte 2,8](../../parallel/openmp/2-8-directive-binding.md) nella pagina 32.  
  
 Nell'esempio seguente, la chiamata da principale in sub2 è conforme perché **barriera** \(in sub3\) associa all'area parallela in sub2.  la chiamata da principale in sub1 è conforme perché **barriera** associazioni all'area parallela nella subroutine sub2.  la chiamata da principale in sub3 è conforme perché **barriera** non è associato ad alcuna area parallela e viene ignorato.  Si noti inoltre che **barriera** sincronizza unicamente il team di thread nell'area parallela di inclusione e di non tutti i thread creati in sub1.  
  
```  
int main()  
{  
    sub1(2);  
    sub2(2);  
    sub3(2);  
}  
  
void sub1(int n)  
{  
    int i;  
    #pragma omp parallel private(i) shared(n)  
    {  
        #pragma omp for  
        for (i=0; i<n; i++)  
            sub2(i);  
    }  
}  
  
void sub2(int k)  
{  
     #pragma omp parallel shared(k)  
     sub3(k);  
}  
  
void sub3(int n)  
{  
    work(n);  
    #pragma omp barrier  
    work(n);  
}  
```