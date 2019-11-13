---
title: Avviso del compilatore (livello 1) C4581
ms.date: 11/04/2016
f1_keywords:
- C4581
helpviewer_keywords:
- C4581
ms.assetid: 598bcd87-257d-4eb3-94e4-15bb31aadc99
ms.openlocfilehash: 5931516e3f4eba91c3b7a3ab4d0ca4979ce1ed84
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73965919"
---
# <a name="compiler-warning-level-1-c4581"></a>Avviso del compilatore (livello 1) C4581

comportamento deprecato:' "string1"' sostituito con ' string2' per elaborare l'attributo

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: controllo dei parametri per gli attributi visivi C++ .

Nelle versioni precedenti i valori degli attributi venivano accettati indipendentemente dal fatto che fossero racchiusi tra virgolette. Se il valore è un'enumerazione, non deve essere racchiuso tra virgolette.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4581.

```cpp
// C4581.cpp
// compile with: /c /W1
#include "unknwn.h"
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyI : IUnknown {};

[coclass, uuid(12345678-1111-2222-3333-123456789012), threading("free")]   // C4581
// try the following line instead
// [coclass, uuid(12345678-1111-2222-3333-123456789012), threading(free)]
class CSample : public IMyI {};
```