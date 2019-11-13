---
title: Avviso del compilatore (livello 1) C4518
ms.date: 11/04/2016
f1_keywords:
- C4518
helpviewer_keywords:
- C4518
ms.assetid: 4ad21004-f076-43fd-99f4-4bf1f9be4c0b
ms.openlocfilehash: 9992032c71798f604b5a45a1b48c1266067b2acb
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966291"
---
# <a name="compiler-warning-level-1-c4518"></a>Avviso del compilatore (livello 1) C4518

' specifier ': gli identificatori di tipo o la classe di archiviazione non sono previsti qui; ignorato

L'esempio seguente genera l'C4518:

```cpp
// C4518.cpp
// compile with: /c /W1
_declspec(dllexport) extern "C" void MyFunction();   // C4518

extern "C" void MyFunction();   // OK
```