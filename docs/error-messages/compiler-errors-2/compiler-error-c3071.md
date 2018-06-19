---
title: Errore del compilatore C3071 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3071
dev_langs:
- C++
helpviewer_keywords:
- C3071
ms.assetid: 69879e66-a60e-4058-9bbd-d5c5e2d8ee37
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 163cb170953c444789e39b906ff4d408739f7514
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33247677"
---
# <a name="compiler-error-c3071"></a>Errore del compilatore C3071
operatore 'operator' applicabile solo a un'istanza di una classe di riferimento o un tipo di valore  
  
 Un operatore CLR non può essere usato in un tipo nativo. L'operatore può essere usato in una classe di riferimento o in un una struct di riferimento (un tipo di valore), ma non in un tipo nativo, ad esempio int, o in un alias per un tipo nativo, ad esempio System::Int32. Questi tipi non possono essere boxed nel codice C++ in modo da fare riferimento alla variabile nativa e quindi l'operatore non può essere usato.  
  
 Per ulteriori informazioni, vedere [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3071.  
  
```  
// C3071.cpp  
// compile with: /clr  
class N {};  
ref struct R {};  
  
int main() {  
   N n;  
   %n;   // C3071  
  
   R r;  
   R ^ r2 = %r;   // OK  
}  
```