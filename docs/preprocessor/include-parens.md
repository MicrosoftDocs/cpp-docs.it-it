---
title: include()
ms.date: 10/18/2018
f1_keywords:
- include()
helpviewer_keywords:
- include() attribute
ms.assetid: 86c9dcb2-d9e0-4fd5-97d7-0bb3e23d6ecc
ms.openlocfilehash: 1208f14a9f6b3724dd5353df57213baa3910d07f
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59040927"
---
# <a name="include"></a>include()

**Sezione specifica C++**

Disabilita l'esclusione automatica.

## <a name="syntax"></a>Sintassi

```
include("Name1"[,"Name2", ...])
```

### <a name="parameters"></a>Parametri

*Nome1*<br/>
Primo elemento da includere forzatamente.

*Nome2*<br/>
Secondo elemento da includere forzatamente (se necessario).

## <a name="remarks"></a>Note

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. `#import` tentativi di evitare più errori di definizione escludendo automaticamente tali elementi. Se gli elementi sono stati esclusi, come indicato dal [avviso del compilatore (livello 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md), e non sarebbe stato, questo attributo può essere utilizzato per disabilitare l'esclusione automatica. Questo attributo può accettare un numero qualsiasi di argomenti, ognuno dei quali costituisce il nome dell'elemento della libreria dei tipi da includere.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)