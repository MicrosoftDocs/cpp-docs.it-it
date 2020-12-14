---
description: Altre informazioni su:/SWAPRUN
title: /SWAPRUN
ms.date: 11/04/2016
f1_keywords:
- /swaprun_editbin
helpviewer_keywords:
- /SWAPRUN editbin option
- -SWAPRUN editbin option
- SWAPRUN editbin option
ms.assetid: 6eefd7f3-ca47-48e3-8509-323d27cf4ae7
ms.openlocfilehash: 68d53a8d5fa7337fb29f624e26b71790f78d29dd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230172"
---
# <a name="swaprun"></a>/SWAPRUN

```
/SWAPRUN:{[!]NET|[!]CD}
```

## <a name="remarks"></a>Commenti

Questa opzione consente di modificare l'immagine per indicare al sistema operativo di copiare l'immagine in un file di scambio e di eseguirla da questa posizione. Usare questa opzione per le immagini che si trovano in reti o supporti rimovibili.

È possibile aggiungere o rimuovere i qualificatori NET o CD:

- NET indica che l'immagine si trova in una rete.

- CD indica che l'immagine si trova in un CD-ROM o in un supporto rimovibile simile.

- USA! NET e! CD per invertire gli effetti di NET e CD.

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)
