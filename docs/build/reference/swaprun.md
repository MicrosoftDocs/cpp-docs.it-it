---
title: /SWAPRUN
ms.date: 11/04/2016
f1_keywords:
- /swaprun_editbin
helpviewer_keywords:
- /SWAPRUN editbin option
- -SWAPRUN editbin option
- SWAPRUN editbin option
ms.assetid: 6eefd7f3-ca47-48e3-8509-323d27cf4ae7
ms.openlocfilehash: 83aa2cdb445ed1ac6bac5b1237f90a116986b0a9
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438853"
---
# <a name="swaprun"></a>/SWAPRUN

```
/SWAPRUN:{[!]NET|[!]CD}
```

## <a name="remarks"></a>Osservazioni

Questa opzione consente di modificare l'immagine per indicare al sistema operativo di copiare l'immagine in un file di scambio e di eseguirla da questa posizione. Usare questa opzione per le immagini che si trovano in reti o supporti rimovibili.

È possibile aggiungere o rimuovere i qualificatori NET o CD:

- NET indica che l'immagine si trova in una rete.

- CD indica che l'immagine si trova in un CD-ROM o in un supporto rimovibile simile.

- USA! NET e! CD per invertire gli effetti di NET e CD.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](editbin-options.md)
