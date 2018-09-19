---
title: Compilatore avviso (livello 1) C4946 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4946
dev_langs:
- C++
helpviewer_keywords:
- C4946
ms.assetid: b85cbef0-e053-4de6-9b14-7b0f82d40495
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f7186848ffc005721fca430d53558100789eae76
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086655"
---
# <a name="compiler-warning-level-1-c4946"></a>Avviso del compilatore (livello 1) C4946

reinterpret_cast utilizzato tra le classi correlate 'classe1' e 'classe2'

Non utilizzare [reinterpret_cast](../../cpp/reinterpret-cast-operator.md) per eseguire il cast tra tipi correlati. Usare [static_cast](../../cpp/static-cast-operator.md) o, per tipi polimorfici, utilizzare [dynamic_cast](../../cpp/dynamic-cast-operator.md).

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

Nell'esempio riportato di seguito il codice genera l'errore C4946:

```
// C4946.cpp
// compile with: /W1
#pragma warning (default : 4946)
class a {
public:
   a() : m(0) {}
   int m;
};

class b : public virtual a {
};

class b2 : public virtual a {
};

class c : public b, public b2 {
};

int main() {
   c* pC = new c;
   a* pA = reinterpret_cast<a*>(pC);   // C4946
   // try the following line instead
   // a* pA = static_cast<a*>(pC);
}
```