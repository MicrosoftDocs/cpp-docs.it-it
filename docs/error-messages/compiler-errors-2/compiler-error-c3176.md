---
title: Errore del compilatore C3176 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3176
dev_langs:
- C++
helpviewer_keywords:
- C3176
ms.assetid: 6cc8d602-8e15-47a7-b1b5-e93e5d50e271
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ce046573ebeaf68f3b48d0e3d096b172bf26a66c
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3176"></a>Errore del compilatore C3176
'type': Impossibile dichiarare un tipo valore locale  
  
 Una classe può solo essere dichiarata come tipo di valore in ambito globale.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3176.  
  
```  
// C3176.cpp  
// compile with: /clr  
int main () {  
   enum class C {};   // C3176  
}  
```
