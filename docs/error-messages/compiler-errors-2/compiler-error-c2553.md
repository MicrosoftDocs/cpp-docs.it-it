---
title: Errore del compilatore C2553 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2553
dev_langs: C++
helpviewer_keywords: C2553
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a1b701773ccb5156a6365e938b0deea6d8e7f15e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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