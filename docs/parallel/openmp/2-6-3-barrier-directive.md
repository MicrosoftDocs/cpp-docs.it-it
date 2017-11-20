---
title: 2.6.3 direttiva barrier | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 4485a3d7-533f-4fec-8128-a131bec7fa16
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: adc480a82668da3c3ad7fdb88a701b3fa80ae9e3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="263-barrier-directive"></a>2.6.3 Direttiva barrier
Il **barriera** direttiva Sincronizza tutti i thread in un team. Se rilevato, ogni thread del team rimane in attesa fino a quando tutte le altre deve raggiungere questo punto. La sintassi del **barriera** direttiva è come segue:  
  
```  
#pragma omp barrier new-line  
```  
  
 Dopo che tutti i thread del team hanno rilevato la barriera, ogni thread del team avvia l'esecuzione delle istruzioni dopo la direttiva barriera in parallelo. Si noti che poiché il **barriera** direttiva non dispone di un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni relative alla relativa posizione all'interno di un programma. Vedere [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md) per la grammatica formale. Nell'esempio seguente vengono illustrate queste restrizioni.  
  
```  
/* ERROR - The barrier directive cannot be the immediate  
*          substatement of an if statement  
*/  
if (x!=0)  
   #pragma omp barrier  
...  
  
/* OK - The barrier directive is enclosed in a  
*      compound statement.  
*/  
if (x!=0) {  
   #pragma omp barrier  
}  
```