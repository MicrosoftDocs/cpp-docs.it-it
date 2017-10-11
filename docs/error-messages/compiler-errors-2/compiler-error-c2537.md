---
title: Errore del compilatore C2537 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2537
dev_langs:
- C++
helpviewer_keywords:
- C2537
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 610fe53b68ccfa9f0ec187356a737e67837656a4
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2537"></a>Errore del compilatore C2537
'identificatore': specifiche di collegamento non valido  
  
 Possibili cause:  
  
1.  L'identificatore di collegamento non è supportata. È supportato solo l'identificatore di collegamento "C".  
  
2.  Il collegamento "C" specificato per più di una funzione in un set di funzioni in overload. ma questa operazione non è consentita.  
  
 L'esempio seguente genera l'errore C2537:  
  
```  
// C2537.cpp  
// compile with: /c  
extern "c" void func();   // C2537  
extern "C" void func2();   // OK  
```
