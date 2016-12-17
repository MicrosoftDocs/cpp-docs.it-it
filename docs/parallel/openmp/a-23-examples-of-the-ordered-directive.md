---
title: "A.23   Examples of the ordered Directive | Microsoft Docs"
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
ms.assetid: f8fa761b-7fc5-4447-95f9-8571e9ca31bf
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.23   Examples of the ordered Directive
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile che vengono ordinate più con un oggetto `for` specificato con  `ordered` clausola.  Il primo esempio non è conforme in quanto l'API specificare quanto segue:  
  
 “Un'iterazione del ciclo con un oggetto `for` il costrutto non è necessario eseguire la stessa operazione  `ordered` la direttiva più volte e non richiedono l'esecuzione di più  `ordered` direttiva.„ \(Vedere [parte 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) nella pagina 22\)  
  
 in questo esempio non conforme, tutte le iterazioni eseguono 2 sezioni ordinate:  
  
```  
#pragma omp for ordered  
for (i=0; i<n; i++)   
{  
    ...  
    #pragma omp ordered  
    { ... }  
    ...  
    #pragma omp ordered  
    { ... }  
    ...  
}  
```  
  
 Nell'esempio conforme seguente viene illustrato un oggetto `for` con più sezione ordinata:  
  
```  
#pragma omp for ordered  
for (i=0; i<n; i++)   
{  
    ...  
    if (i <= 10)   
    {  
        ...  
        #pragma omp ordered  
        { ... }  
    }  
    ...  
    (i > 10)   
    {  
        ...  
        #pragma omp ordered  
        { ... }  
    }  
    ...  
}  
```