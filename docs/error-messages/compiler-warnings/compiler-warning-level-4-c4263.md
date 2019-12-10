---
title: Avviso del compilatore (livello 4) C4263
ms.date: 11/04/2016
f1_keywords:
- C4263
helpviewer_keywords:
- C4263
ms.assetid: daabb05d-ab56-460f-ab6c-c74d222ef649
ms.openlocfilehash: ed4b8561975f3d808781551e0d5f363d0d0088b8
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991447"
---
# <a name="compiler-warning-level-4-c4263"></a>Avviso del compilatore (livello 4) C4263

' Function ': la funzione membro non esegue l'override di nessuna funzione membro virtuale della classe di base

Una definizione di funzione di classe ha lo stesso nome di una funzione virtuale in una classe base, ma non lo stesso numero o tipo di argomenti. In questo modo viene nascosta la funzione virtuale nella classe di base.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4263:

```cpp
// C4263.cpp
// compile with: /W4
#pragma warning(default:4263)
#pragma warning(default:4264)
class B {
public:
   virtual void func();
};

class D : public B {
   void func(int);   // C4263
};

int main() {
}
```
