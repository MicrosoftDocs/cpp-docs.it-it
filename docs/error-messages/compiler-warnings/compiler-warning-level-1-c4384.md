---
title: Avviso del compilatore (livello 1) C4384
ms.date: 11/04/2016
f1_keywords:
- C4384
helpviewer_keywords:
- C4384
ms.assetid: fafa8eb2-cbfc-4edb-8b0f-511ff5d37ac0
ms.openlocfilehash: 467f15522503d16d3b023661ee339c986f74ddec
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73964893"
---
# <a name="compiler-warning-level-1-c4384"></a>Avviso del compilatore (livello 1) C4384

\#pragma ' make_public ' deve essere utilizzato solo in ambito globale

Il pragma [make_public](../../preprocessor/make-public.md) è stato applicato in modo errato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4384.

```cpp
// C4384.cpp
// compile with: /c /W1
namespace n {
   #pragma make_public(N::C)   // C4384
   namespace N {
      class C {};
   }
}
```