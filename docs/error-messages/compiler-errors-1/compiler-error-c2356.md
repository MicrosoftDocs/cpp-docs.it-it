---
title: Errore del compilatore C2356 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2356
dev_langs:
- C++
helpviewer_keywords:
- C2356
ms.assetid: 84d5a816-9a61-4d45-9978-38e485bbf767
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 99f29fb1e651c8182c8aa4dc037fc8cd6af6c6cc
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2356"></a>Errore del compilatore C2356
il segmento di inizializzazione non deve essere modificato durante l'unità di conversione  
  
 Possibili cause:  
  
-   `#pragma init_seg`preceduto dal codice di inizializzazione di segmento  
  
-   `#pragma init_seg`preceduto da un altro`#pragma init_seg`  
  
 Per risolvere, spostare il codice di inizializzazione del segmento all'inizio del modulo. Se è necessario inizializzare più aree, spostarli per separare i moduli.  
  
 L'esempio seguente genera l'errore C2356:  
  
```  
// C2356.cpp  
#pragma warning(disable : 4075)  
  
int __cdecl myexit(void (__cdecl *)());  
int __cdecl myexit2(void (__cdecl *)());  
  
#pragma init_seg(".mine$m",myexit)  
#pragma init_seg(".mine$m",myexit2)   // C2356  
```
