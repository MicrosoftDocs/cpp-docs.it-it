---
description: 'Altre informazioni su: nome (C/C++)'
title: NAME (C/C++)
ms.date: 11/04/2016
f1_keywords:
- name
helpviewer_keywords:
- NAME .def file statement
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
ms.openlocfilehash: 7444aa20539b47b1f04d17a266a0b65a552af3f3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137774"
---
# <a name="name-cc"></a>NAME (C/C++)

Specifica un nome per il file di output principale.

```
NAME [application][BASE=address]
```

## <a name="remarks"></a>Commenti

Un modo equivalente per specificare il nome di un file di output è con l'opzione [/out](out-output-file-name.md) del linker e un modo equivalente per impostare l'indirizzo di base è con l'opzione del linker [/base](base-base-address.md) . Se vengono specificati entrambi,/OUT sostituisce il **nome**.

Se si compila una DLL, il nome influirà solo sul nome della DLL.

## <a name="see-also"></a>Vedi anche

[Regole per Module-Definition istruzioni](rules-for-module-definition-statements.md)
