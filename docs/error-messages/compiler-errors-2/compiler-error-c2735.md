---
title: Errore del compilatore C2735 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2735
dev_langs:
- C++
helpviewer_keywords:
- C2735
ms.assetid: 6ce45600-7148-4bc0-8699-af0ef137571e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1ab970aa4e46ed0206f311e100f7ee777907aff8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2735"></a>Errore del compilatore C2735
parola chiave' keyword ' non è consentito nell'identificatore di tipo di parametro formale  
  
 La parola chiave non è valida in questo contesto.  
  
 L'esempio seguente genera l'errore C2735:  
  
```  
// C2735.cpp  
void f(inline int){}   // C2735  
```