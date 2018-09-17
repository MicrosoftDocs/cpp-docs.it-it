---
title: -SWAPRUN | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /swaprun
dev_langs:
- C++
helpviewer_keywords:
- /SWAPRUN editbin option
- -SWAPRUN editbin option
- SWAPRUN editbin option
ms.assetid: 6eefd7f3-ca47-48e3-8509-323d27cf4ae7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1a93b854dba2855fa68bb3be163cecdcd3570df0
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45723099"
---
# <a name="swaprun"></a>/SWAPRUN

```
/SWAPRUN:{[!]NET|[!]CD}
```

## <a name="remarks"></a>Note

Questa opzione Modifica l'immagine per indicare al sistema operativo di copiare l'immagine in un file di scambio ed eseguirlo da tale posizione. Usare questa opzione per le immagini che si trovano in reti o su supporti rimovibili.

È possibile aggiungere o rimuovere i qualificatori di rete o CD:

- NET indica che l'immagine si trova in una rete.

- CD indica che si trova l'immagine su CD-ROM o supporto rimovibile simile.

- Usare! NET e! Distribuzione continua per ripristinare gli effetti del CD e NET.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)