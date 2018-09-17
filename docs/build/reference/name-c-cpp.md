---
title: NOME (C/C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- name
dev_langs:
- C++
helpviewer_keywords:
- NAME .def file statement
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bc37a96e50c6cd5bae2cc60661db04f3b92d162b
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45715754"
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