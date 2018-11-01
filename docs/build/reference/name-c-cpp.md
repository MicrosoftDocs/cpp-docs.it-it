---
title: NAME (C/C++)
ms.date: 11/04/2016
f1_keywords:
- name
helpviewer_keywords:
- NAME .def file statement
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
ms.openlocfilehash: c05e82409d6b6e48390d54160e8ff23ada788d41
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50646199"
---
# <a name="name-cc"></a>NAME (C/C++)

Specifica un nome per il file di output principale.

```
NAME [application][BASE=address]
```

## <a name="remarks"></a>Note

È un modo equivalente per specificare un nome di file di output con il [/out](../../build/reference/out-output-file-name.md) è l'opzione del linker e un modo equivalente per impostare l'indirizzo di base con il [/base](../../build/reference/base-base-address.md) l'opzione del linker. Se vengono specificati entrambi, / OUT esegue l'override **nome**.

Se si compila una DLL, nome influiranno solo il nome della DLL.

## <a name="see-also"></a>Vedere anche

[Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)