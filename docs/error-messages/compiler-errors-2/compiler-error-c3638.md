---
title: Errore del compilatore C3638
ms.date: 11/04/2016
f1_keywords:
- C3638
helpviewer_keywords:
- C3638
ms.assetid: 8d8bc5ca-75aa-480e-b6b6-3178fab51b1d
ms.openlocfilehash: 33bb248faf946c39543de4a14a44e2ebbda49880
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385888"
---
# <a name="compiler-error-c3638"></a>Errore del compilatore C3638

'operator': non è possibile ridefinire il boxing standard e gli operatori di conversione unboxing

Il compilatore definisce un operatore di conversione per ogni classe gestita per supportare la conversione boxing implicita. Questo operatore non può essere ridefinito.

Per altre informazioni, vedere [conversione Boxing implicita](../../extensions/boxing-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3638:

```
// C3638.cpp
// compile with: /clr
value struct V {
   V(){}
   static operator V^(V);   // C3638
};

int main() {
   V myV;
   V ^ pmyV = myV;   // operator supports implicit boxing
}
```