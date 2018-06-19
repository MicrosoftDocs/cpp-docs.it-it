---
title: Errore del compilatore C2553 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2553
dev_langs:
- C++
helpviewer_keywords:
- C2553
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8cfb09f2701b418ab5570641a78c465ff72ed943
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33232534"
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