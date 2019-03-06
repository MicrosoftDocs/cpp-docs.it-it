---
title: VERSION (C/C++)
ms.date: 11/04/2016
f1_keywords:
- VERSION
helpviewer_keywords:
- VERSION .def file statement
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
ms.openlocfilehash: 6d275e1e191e0550143dd5e7a828b734bba0fc96
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414057"
---
# <a name="version-cc"></a>VERSION (C/C++)

Indica a LINK di inserire un numero nell'intestazione del file .exe o DLL.

```
VERSION major[.minor]
```

## <a name="remarks"></a>Note

Il *principali* e *secondaria* argomenti sono numeri decimali compresi tra 0 e 65.535. Il valore predefinito è la versione 0.0.

È un modo equivalente per specificare un numero di versione con il [le informazioni sulla versione](../../build/reference/version-version-information.md) (/ versione) opzione.

## <a name="see-also"></a>Vedere anche

[Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)
