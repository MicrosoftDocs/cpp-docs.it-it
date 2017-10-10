---
title: Errore del compilatore C2635 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2635
dev_langs:
- C++
helpviewer_keywords:
- C2635
ms.assetid: 9deca2a8-2d61-42eb-9783-6578132ee3fb
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 8a8ff1361a312c8d2abf7e07de3add2dbd3254ca
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2635"></a>Errore del compilatore C2635
non è possibile convertire un 'identifier1 *' per un ' identifier2\*'; la conversione da una classe base virtuale è implicita  
  
 La conversione richiede un cast da un `virtual` classe di base per una classe derivata, non è consentita.  
  
 L'esempio seguente genera l'errore C2635:  
  
```  
// C2635.cpp  
class B {};  
class D : virtual public B {};  
class E : public B {};  
  
int main() {  
   B b;  
   D d;  
   E e;  
  
   D * pD = &d;  
   E * pE = &e;  
   pD = (D*)&b;   // C2635  
   pE = (E*)&b;   // OK  
}  
```
