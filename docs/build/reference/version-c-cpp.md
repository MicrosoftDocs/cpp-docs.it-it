---
title: VERSIONE (C/C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VERSION
dev_langs:
- C++
helpviewer_keywords:
- VERSION .def file statement
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7330d979e841d952f7e800e52ae762256ede6808
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718302"
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