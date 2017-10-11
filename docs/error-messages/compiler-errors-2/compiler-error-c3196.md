---
title: Errore del compilatore C3196 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3196
dev_langs:
- C++
helpviewer_keywords:
- C3196
ms.assetid: d9c38a13-191d-472d-aa2b-f61a6459d16c
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: c7425abce554427aafa1443d4a5cc6828deefef8
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3196"></a>Errore del compilatore C3196
'keyword': utilizzato più volte  
  
 Una parola chiave è stata usata più volte.  
  
 L'esempio seguente genera l'errore C3196:  
  
```  
// C3196.cpp  
// compile with: /clr  
ref struct R abstract abstract {};   // C3196  
ref struct S abstract {};   // OK  
```
