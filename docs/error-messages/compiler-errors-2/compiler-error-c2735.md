---
title: Errore del compilatore C2735 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2735
dev_langs:
- C++
helpviewer_keywords:
- C2735
ms.assetid: 6ce45600-7148-4bc0-8699-af0ef137571e
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 1008ef6178a4220bac718e08ba31a36d5db3242f
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2735"></a>Errore del compilatore C2735
parola chiave' keyword ' non è consentito nell'identificatore di tipo di parametro formale  
  
 La parola chiave non è valida in questo contesto.  
  
 L'esempio seguente genera l'errore C2735:  
  
```  
// C2735.cpp  
void f(inline int){}   // C2735  
```
