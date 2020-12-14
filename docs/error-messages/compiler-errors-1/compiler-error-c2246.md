---
description: 'Altre informazioni su: errore del compilatore C2246'
title: Errore del compilatore C2246
ms.date: 11/04/2016
f1_keywords:
- C2246
helpviewer_keywords:
- C2246
ms.assetid: 4f3e4f83-21f3-4256-af96-43e0bb060311
ms.openlocfilehash: 1868389c98dd864e7d92bf33d57dbe96b831f3e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302204"
---
# <a name="compiler-error-c2246"></a>Errore del compilatore C2246

'identifier': membro dati statici non valido in una classe definita localmente

Un membro di una classe, di una struttura o di un'Unione con ambito locale è dichiarato **`static`** .

L'esempio seguente genera l'errore C2246:

```cpp
// C2246.cpp
// compile with: /c
void func( void ) {
   class A { static int i; };   // C2246  i is local to func
   static int j;   // OK
};
```
