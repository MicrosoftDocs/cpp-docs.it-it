---
title: Errore del compilatore C2529 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2529
dev_langs:
- C++
helpviewer_keywords:
- C2529
ms.assetid: 73a99e55-b91e-488d-9b72-cc80faaeb436
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 7c0a693af458818b8c5ac44e160272d8b15fa5f5
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2529"></a>Errore del compilatore C2529
'name': riferimento a riferimento non valido  
  
 Questo errore può essere risolto utilizzando la sintassi dei puntatori e dichiarare un riferimento a un puntatore.  
  
 L'esempio seguente genera l'errore C2529:  
  
```  
// C2529.cpp  
// compile with: /c  
int i;  
int &ri = i;  
int &(&rri) = ri;   // C2529  
```
