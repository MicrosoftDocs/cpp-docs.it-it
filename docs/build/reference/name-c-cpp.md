---
title: NAME (C/C++)
ms.date: 11/04/2016
f1_keywords:
- name
helpviewer_keywords:
- NAME .def file statement
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
ms.openlocfilehash: d0813befc622db72e095c449794405fc5d58465b
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57812187"
---
# <a name="name-cc"></a>NAME (C/C++)

Specifica un nome per il file di output principale.

```
NAME [application][BASE=address]
```

## <a name="remarks"></a>Note

È un modo equivalente per specificare un nome di file di output con il [/out](out-output-file-name.md) è l'opzione del linker e un modo equivalente per impostare l'indirizzo di base con il [/base](base-base-address.md) l'opzione del linker. Se vengono specificati entrambi, / OUT esegue l'override **nome**.

Se si compila una DLL, nome influiranno solo il nome della DLL.

## <a name="see-also"></a>Vedere anche

[Regole relative alle istruzioni di definizione dei moduli](rules-for-module-definition-statements.md)
