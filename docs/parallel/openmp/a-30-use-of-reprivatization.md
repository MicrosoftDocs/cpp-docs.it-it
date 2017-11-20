---
title: Utilizzo A.30 di Reprivatization | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 26529090-6c39-40f2-b806-e12374d6b5f8
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8ab359fdc63d90494b686684d26cc73e0135c886
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="a30---use-of-reprivatization"></a>A.30   Utilizzo della riprivatizzazione
L'esempio seguente illustra il reprivatization delle variabili. È possibile contrassegnare le variabili private `private` nuovamente in una direttiva annidata. Non devono essere condivisi in tale area che lo contiene.  
  
```  
int i, a;  
...  
#pragma omp parallel private(a)  
{  
  ...  
  #pragma omp parallel for private(a)  
  for (i=0; i<10; i++)  
     {  
       ...  
     }  
}  
```