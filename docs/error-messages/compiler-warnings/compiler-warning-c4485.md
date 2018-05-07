---
title: Avviso del compilatore C4485 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4485
dev_langs:
- C++
helpviewer_keywords:
- C4485
ms.assetid: a6f2b437-ca93-4dcd-b9cb-df415e10df86
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4b84d2976e31d5cc3a9b6547d0c4b02a61327ce0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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