---
title: Errore del compilatore C2714 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2714
dev_langs:
- C++
helpviewer_keywords:
- C2714
ms.assetid: 401a5a42-660c-4bad-9d63-1a2d092bc489
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 1f0fc4847cc6f3ab50f840b1ed5a097cc405cff8
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2714"></a>Errore del compilatore C2714
non è consentito __alignof(void)  
  
 Un valore non valido passato a un operatore.  
  
 Vedere [operatore alignof](../../cpp/alignof-operator.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2714.  
  
```  
// C2714.cpp  
int main() {  
   return __alignof(void);   // C2714  
   return __alignof(char);   // OK  
}  
```
