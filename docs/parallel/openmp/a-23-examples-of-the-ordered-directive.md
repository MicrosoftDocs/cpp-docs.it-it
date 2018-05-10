---
title: Esempi A.23 della direttiva ordinato | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: f8fa761b-7fc5-4447-95f9-8571e9ca31bf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 37cc4ea9db8cbd1a7bf095e2bde0ae482053a584
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="a23---examples-of-the-ordered-directive"></a>A.23   Esempi della direttiva ordered
È possibile avere più sezioni ordinate con un `for` specificato con il `ordered` clausola. Nel primo esempio non è conforme in quanto l'API specifica le operazioni seguenti:  
  
 "Un'iterazione di un ciclo con un `for` non deve essere eseguito lo stesso costrutto `ordered` direttiva più di una volta e non deve eseguire più `ordered` direttiva." (Vedere [sezione 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) nella pagina 22)  
  
 In questo esempio non conforme, tutte le iterazioni eseguire 2 sezioni ordinate:  
  
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
  
 Nel seguente esempio conforme un `for` con più di una sezione ordinata:  
  
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