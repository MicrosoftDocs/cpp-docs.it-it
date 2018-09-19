---
title: Compilatore avviso (livello 4) C4263 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4263
dev_langs:
- C++
helpviewer_keywords:
- C4263
ms.assetid: daabb05d-ab56-460f-ab6c-c74d222ef649
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf93a010ac10b8b55bd22b9ab2db12d77a02c13a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079635"
---
# <a name="compiler-warning-level-4-c4263"></a>Avviso del compilatore (livello 4) C4263

'function': funzione membro non esegue l'override di qualsiasi funzione membro virtuale di classe di base

Una definizione di funzione di classe ha lo stesso nome di una funzione virtuale in una classe di base, ma non la stesso numero o tipo di argomenti. Questa condizione nasconde la funzione nella classe base virtuale.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4263:

```
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