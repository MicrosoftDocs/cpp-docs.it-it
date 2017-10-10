---
title: Errore del compilatore C2553 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2553
dev_langs:
- C++
helpviewer_keywords:
- C2553
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 623a09c54333ef62de7a7924cc4be02ff1b2c726
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2553"></a>Errore del compilatore C2553
'funzione_base': funzione virtual in override tipo restituito differisce da 'funzione_override'  
  
 Una funzione in una classe derivata ha tentato di eseguire l'override di una funzione virtuale in una classe di base, ma la funzione della classe derivata non includono lo stesso tipo restituito della funzione di classe di base.  Una firma della funzione di override deve corrispondere alla firma della funzione da sottoporre a override.  
  
 L'esempio seguente genera l'errore C2553:  
  
```  
// C2553.cpp  
// compile with: /clr /c  
ref struct C {  
   virtual void f();  
};  
  
ref struct D : C {  
   virtual int f() override ;   // C2553   
  
   // try the following line instead  
   // virtual void f() override;  
};  
```
