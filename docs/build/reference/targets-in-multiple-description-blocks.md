---
title: Destinazioni in più blocchi di descrizione
ms.date: 11/04/2016
helpviewer_keywords:
- description blocks
- blocks, multiple description
- multiple description blocks
ms.assetid: 8618dcd9-c11d-4562-91a7-0c904ed438a8
ms.openlocfilehash: 03a6e1d0be44e12bb76767b7334ab647a6054b6e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317380"
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

[Destinazioni](targets.md)
