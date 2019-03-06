---
title: Destinazioni in più blocchi di descrizione
ms.date: 11/04/2016
helpviewer_keywords:
- description blocks
- blocks, multiple description
- multiple description blocks
ms.assetid: 8618dcd9-c11d-4562-91a7-0c904ed438a8
ms.openlocfilehash: df5ebba67b3fd041cbf28c90ec25f5a415c0669d
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414044"
---
# <a name="targets-in-multiple-description-blocks"></a>Destinazioni in più blocchi di descrizione

Per aggiornare una destinazione in più blocchi di descrizione usando comandi diversi, specificare due punti consecutivi (:) tra le destinazioni e gli oggetti dipendenti.

```
target.lib :: one.asm two.asm three.asm
    ml one.asm two.asm three.asm
    lib target one.obj two.obj three.obj
target.lib :: four.c five.c
    cl /c four.c five.c
    lib target four.obj five.obj
```

## <a name="see-also"></a>Vedere anche

[Destinazioni](../build/targets.md)
