---
title: Errore del compilatore C3655 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3655
dev_langs:
- C++
helpviewer_keywords:
- C3655
ms.assetid: 724919ab-2915-4b61-8794-44648e162d62
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 24be78d6e80f5c6246d2bc06b78fad1202d5badb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33269948"
---
# <a name="compiler-error-c3655"></a>Errore del compilatore C3655
'function': funzione già sottoposta a override esplicito  
  
 Una funzione può solo essere sottoposto a override esplicito di una volta. Per ulteriori informazioni, vedere [override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3655:  
  
```  
// C3655.cpp  
// compile with: /clr /c  
public ref struct B {  
   virtual void f();  
   virtual void g();  
};  
  
public ref struct D : B {  
   virtual void f() new sealed = B::f;  
   virtual void g() new sealed = B::f;   // C3655  
   // try the following line instead  
   // virtual void g() new sealed = B::g;  
};  
```