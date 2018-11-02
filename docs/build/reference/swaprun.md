---
title: /SWAPRUN
ms.date: 11/04/2016
f1_keywords:
- /swaprun
helpviewer_keywords:
- /SWAPRUN editbin option
- -SWAPRUN editbin option
- SWAPRUN editbin option
ms.assetid: 6eefd7f3-ca47-48e3-8509-323d27cf4ae7
ms.openlocfilehash: 0440d268a807e6f3f43beb9f38bd1950dee55ffd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50550722"
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