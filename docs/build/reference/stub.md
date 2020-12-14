---
description: 'Altre informazioni su: STUB'
title: STUB
ms.date: 11/04/2016
f1_keywords:
- STUB
helpviewer_keywords:
- STUB .def file statement
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
ms.openlocfilehash: 79a2002c119bf211652e2aab51d9656b36e3d159
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230289"
---
# <a name="stub"></a>STUB

Se usato in un file di definizione del modulo che compila un driver di dispositivo virtuale (VxD), consente di specificare un nome di file che contiene una struttura di IMAGE_DOS_HEADER (definita in WINNT. H) da utilizzare nel driver di dispositivo virtuale (VxD), anziché nell'intestazione predefinita.

```
STUB:filename
```

## <a name="remarks"></a>Commenti

Un modo equivalente per specificare *filename* è con l'opzione del linker [/Stub](stub-ms-dos-stub-file-name.md) .

STUB è valido in un file di definizione del modulo solo quando si compila un VxD.

## <a name="see-also"></a>Vedi anche

[Regole per Module-Definition istruzioni](rules-for-module-definition-statements.md)
