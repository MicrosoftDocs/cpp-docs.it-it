---
title: STUB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- STUB
dev_langs:
- C++
helpviewer_keywords:
- STUB .def file statement
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 151d7b425a7f397a05e3a06e9d94489a0c76f899
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45725114"
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