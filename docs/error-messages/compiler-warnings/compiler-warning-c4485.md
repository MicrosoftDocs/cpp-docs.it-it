---
title: Avviso del compilatore C4485 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4485
dev_langs:
- C++
helpviewer_keywords:
- C4485
ms.assetid: a6f2b437-ca93-4dcd-b9cb-df415e10df86
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 435e49a857e3c448ac7e5f7ef00bb9032320aa25
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-warning-c4485"></a>Avviso del compilatore C4485
'funzione_override': corrisponde al metodo di classe di base di riferimento 'funzione_classe_base', ma non è contrassegnato 'new' o 'override'; 'new' (e 'virtual') equivale a  
  
 Sostituisce una funzione di accesso, con o senza il `virtual` (parola chiave), una funzione di accesso della classe base, ma la `override` o `new` identificatore non faceva parte della firma della funzione esegue l'override. Aggiungere il `new` o `override` identificatore per risolvere il problema.  
  
 Vedere [override](../../windows/override-cpp-component-extensions.md) e [new (nuovo slot in vtable)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md) per ulteriori informazioni.  
  
 C4485 viene sempre generato come errore. Utilizzare il [avviso](../../preprocessor/warning.md) pragma C4485 di esclusione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4485  
  
```  
// C4485.cpp  
// compile with: /clr  
delegate void Del();  
  
ref struct A {  
   virtual event Del ^E;  
};  
  
ref struct B : A {  
   virtual event Del ^E;   // C4485  
};  
  
ref struct C : B {  
   virtual event Del ^E {  
      void raise() override {}  
      void add(Del ^) override {}  
      void remove(Del^) override {}  
   }  
};  
```
