---
title: Errore del compilatore C2537 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2537
dev_langs: C++
helpviewer_keywords: C2537
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7095511e401dfb1aa703e1d0be4f998e40416c58
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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