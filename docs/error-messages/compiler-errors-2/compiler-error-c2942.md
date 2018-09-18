---
title: Errore del compilatore C2942 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2942
dev_langs:
- C++
helpviewer_keywords:
- C2942
ms.assetid: 13abf744-8fa1-450d-886d-e5717c04956e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 024557750def49151d835545eec62bfc6f4727e0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46033199"
---
# <a name="compiler-error-c2942"></a>Errore del compilatore C2942

'class': type-class-id ridefinito come argomento formale di una funzione

Non è possibile usare una classe generica o modello come argomento formale. Non è possibile passare un argomento direttamente al costruttore di una classe generica o modello.

L'esempio seguente genera l'errore C2942:

```

// C2942.cpp
// compile with: /c
template<class T>
struct TC {};
void f(int TC<int>) {}   // C2942

// OK
struct TC2 {};
void f(TC2 i) {}
```

L'errore C2942 può verificarsi anche quando si usano i generics:

```
// C2942b.cpp
// compile with: /clr /c
generic<class T>
ref struct GC {};
void f(int GC<int>) {}   // C2942
ref struct GC2 { };
void f(int GC2) {}
```