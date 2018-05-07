---
title: Errore del compilatore C2800 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2800
dev_langs:
- C++
helpviewer_keywords:
- C2800
ms.assetid: a2f1a590-9fe6-44cb-ad09-b4505ef47c6a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9dd9723513042ae7ef6d63914f5abecd63192e37
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2800"></a>Errore del compilatore C2800
Impossibile eseguire l'overload di 'operator operator'  
  
 Impossibile eseguire l'overload di operatori seguenti: accesso a membro di classe (`.`), puntatore a membro (`.*`), risoluzione ambito (`::`), espressione condizionale (`? :`), e `sizeof`.  
  
 L'esempio seguente genera l'errore C2800:  
  
```  
// C2800.cpp  
// compile with: /c  
class C {  
   operator:: ();   // C2800  
};  
```