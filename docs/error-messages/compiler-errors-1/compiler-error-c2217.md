---
title: Errore del compilatore C2217 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2217
dev_langs:
- C++
helpviewer_keywords:
- C2217
ms.assetid: 1ce1e3f5-4171-4376-804d-967f7e612935
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a4eb8b9fcaffa30f3a5ced5362a0f9d54a45f07e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46050619"
---
# <a name="compiler-error-c2217"></a>Errore del compilatore C2217

'attribute1' richiede 'attribute2'

Il primo attributo di funzione richiede il secondo attributo.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Interrompe (`__interrupt`) funzione dichiarata come `near`. Interrupt funzioni devono essere `far`.

1. Funzione dichiarata con di interrupt `__stdcall`, o `__fastcall`. Le funzioni di interrupt deve convenzioni di chiamata C USA.

## <a name="example"></a>Esempio

C2217 può verificarsi anche se si tenta di associare un delegato a una funzione CLR che accetta un numero variabile di argomenti. Se la funzione ha anche overload di matrice e param, utilizzarla. L'esempio seguente genera l'errore C2217.

```
// C2217.cpp
// compile with: /clr
using namespace System;
delegate void MyDel(String^, Object^, Object^, ...);   // C2217
delegate void MyDel2(String ^, array<Object ^> ^);   // OK

int main() {
   MyDel2^ wl = gcnew MyDel2(Console::WriteLine);
   array<Object ^ > ^ x = gcnew array<Object ^>(2);
   x[0] = safe_cast<Object^>(0);
   x[1] = safe_cast<Object^>(1);

   // wl("{0}, {1}", 0, 1);
   wl("{0}, {1}", x);
}
```