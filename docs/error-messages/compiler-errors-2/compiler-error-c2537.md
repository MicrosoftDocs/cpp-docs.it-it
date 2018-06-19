---
title: Errore del compilatore C2537 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2537
dev_langs:
- C++
helpviewer_keywords:
- C2537
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6100f77d3a1487bfa1eb12a78ac8187cec43fe64
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33199957"
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