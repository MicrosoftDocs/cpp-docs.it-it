---
title: Errore del compilatore C3198 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3198
dev_langs:
- C++
helpviewer_keywords:
- C3198
ms.assetid: ec4ecf61-0067-4aa4-b443-a91013a1e59d
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 56325b1410e2d7255eec599cdb73f52710bbe1c1
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3198"></a>Errore del compilatore C3198
utilizzo non valido di pragma a virgola mobile: il pragma fenv_access funziona solo in modalità precise  
  
 [fenv_access](../../preprocessor/fenv-access.md) pragma è stato utilizzato in un [/fp](../../build/reference/fp-specify-floating-point-behavior.md) impostazione diversa da **/fp: precise**.  
  
 L'esempio seguente genera l'errore C3198:  
  
```  
// C3198.cpp  
// compile with: /fp:fast  
#pragma fenv_access(on)   // C3198  
```
