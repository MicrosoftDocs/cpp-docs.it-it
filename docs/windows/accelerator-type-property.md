---
title: Proprietà del tipo acceleratore (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- Type property
- VIRTKEY
ms.assetid: 8c349bc4-e6ad-43fa-959e-f29168af35b8
ms.openlocfilehash: 00699f31b821aa508feec9ffe062d768f27ee5a2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475585"
---
# <a name="accelerator-type-property-c"></a>Proprietà del tipo acceleratore (C++)

L'acceleratore **tipo** proprietà determina se la combinazione di tasti di scelta rapida associata all'ID acceleratore è una combinazione di tasti virtuale o un valore di chiave ASCII/ANSI:

- Se il **tipo** proprietà è ASCII, il [modificatore](../windows/accelerator-modifier-property.md) può essere solo `None` o `Alt`, oppure può avere un acceleratore che utilizza il **Ctrl** chiave (specificata da precede la chiave con un `^`).

- Se il **tipo** proprietà è VIRTKEY, qualsiasi combinazione delle `Modifier` e `Key` valori è valido.

   > [!NOTE]
   > Se si desidera immettere un valore nella tabella di tasti di scelta rapida e deve essere considerato come ASCII/ANSI, è sufficiente fare clic sui **tipo** per la voce nella tabella e ASCII selezionare dall'elenco a discesa. Tuttavia, se si usa il **digita** comando (**modificare** menu) per specificare il `Key`, è necessario modificare il **tipo** proprietà da VIRTKEY ASCII *prima* immettendo il `Key` codice.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Impostazione delle proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)<br/>
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)