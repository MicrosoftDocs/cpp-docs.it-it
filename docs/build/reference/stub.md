---
title: STUB
ms.date: 11/04/2016
f1_keywords:
- STUB
helpviewer_keywords:
- STUB .def file statement
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
ms.openlocfilehash: fd2e7c4a3bd9fa09b88f4c3caa9b7d5b73c1ad98
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57412939"
---
# <a name="stub"></a>STUB

Se usato in un file di definizione di modulo che consente di creare un driver di dispositivo virtuali (VxD), consente di specificare un nome di file che contiene una struttura IMAGE_DOS_HEADER (definita in WINNT. H) da utilizzare per il driver di dispositivo virtuali (VxD), anziché l'intestazione predefinita.

```
STUB:filename
```

## <a name="remarks"></a>Note

Un modo equivalente per specificare *nomefile* riguarda il [stub](../../build/reference/stub-ms-dos-stub-file-name.md) l'opzione del linker.

STUB è valido in un file di definizione del modulo solo quando si compila un VxD.

## <a name="see-also"></a>Vedere anche

[Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)
