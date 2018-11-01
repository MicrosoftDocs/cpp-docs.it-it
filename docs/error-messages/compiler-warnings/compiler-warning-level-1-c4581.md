---
title: Avviso del compilatore (livello 1) C4581
ms.date: 11/04/2016
f1_keywords:
- C4581
helpviewer_keywords:
- C4581
ms.assetid: 598bcd87-257d-4eb3-94e4-15bb31aadc99
ms.openlocfilehash: 9e370bcff0c30fb508ebc22aaff1f6a56dd420a1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50625121"
---
# <a name="compiler-warning-level-1-c4581"></a>Avviso del compilatore (livello 1) C4581

comportamento deprecato: '"string1" ' sostituito con 'string2' per elaborare l'attributo

Questo errore può verificarsi in seguito a operazioni di conformità del compilatore eseguite per Visual C++ 2005: controllo dei parametri per gli attributi di Visual C++.

Nelle versioni precedenti, i valori di attributo sono stati accettati se sono stati racchiusi tra virgolette. Se il valore è un'enumerazione, non deve essere racchiuso tra virgolette.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4581.

```
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