---
title: Esempi A.19 che mostrano l'annidamento non corretto di direttive di condivisione del lavoro | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 906e900d-9259-44d6-a095-c1ba9135d269
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6778ba61a3367cd4fc90d568508f1a039fd1f7ef
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="a19---examples-showing-incorrect-nesting-of-work-sharing-directives"></a>A.19   Esempi sull'annidamento non corretto di direttive per la condivisione del lavoro
Gli esempi in questa sezione illustrano le regole di nidificazione della direttiva. Per ulteriori informazioni su annidamento di direttive, vedere [sezione 2.9](../../parallel/openmp/2-9-directive-nesting.md) nella pagina 33.  
  
 Nell'esempio seguente non è conforme perché l'interno ed esterno `for` direttive sono annidate e associati allo stesso `parallel` direttiva:  
  
```  
void wrong1(int n)  
{  
  #pragma omp parallel default(shared)  
  {  
      int i, j;  
      #pragma omp for  
      for (i=0; i<n; i++) {  
          #pragma omp for  
              for (j=0; j<n; j++)  
                 work(i, j);  
     }  
   }  
}  
```  
  
 La seguente versione dinamicamente nidificata dell'esempio precedente è inoltre non conforme:  
  
```  
void wrong2(int n)  
{  
  #pragma omp parallel default(shared)  
  {  
    int i;  
    #pragma omp for  
      for (i=0; i<n; i++)  
        work1(i, n);  
  }  
}  
  
void work1(int i, int n)  
{  
  int j;  
  #pragma omp for  
    for (j=0; j<n; j++)  
      work2(i, j);  
}  
```  
  
 Nell'esempio seguente non è conforme in quanto il `for` e `single` direttive sono nidificate e vengono associate alla stessa area parallela:  
  
```  
void wrong3(int n)  
{  
  #pragma omp parallel default(shared)  
  {  
    int i;  
    #pragma omp for  
      for (i=0; i<n; i++) {  
        #pragma omp single  
          work(i);  
      }  
  }  
}  
```  
  
 Nell'esempio seguente non è conforme in quanto un `barrier` direttiva all'interno di un `for` può causare deadlock:  
  
```  
void wrong4(int n)  
{  
  #pragma omp parallel default(shared)  
  {  
    int i;  
    #pragma omp for  
      for (i=0; i<n; i++) {  
        work1(i);  
        #pragma omp barrier  
        work2(i);  
      }  
  }  
}  
```  
  
 Nell'esempio seguente non è conforme in quanto il `barrier` risultati deadlock dovuto al fatto che un solo thread alla volta può accedere alla sezione critica:  
  
```  
void wrong5()  
{  
  #pragma omp parallel  
  {  
    #pragma omp critical  
    {  
       work1();  
       #pragma omp barrier  
       work2();  
    }  
  }  
}  
```  
  
 Nell'esempio seguente non è conforme in quanto il `barrier` risultati deadlock che solo un thread esegue il `single` sezione:  
  
```  
void wrong6()  
{  
  #pragma omp parallel  
  {  
    setup();  
    #pragma omp single  
    {  
      work1();  
      #pragma omp barrier  
      work2();  
    }  
    finish();  
  }  
}  
```