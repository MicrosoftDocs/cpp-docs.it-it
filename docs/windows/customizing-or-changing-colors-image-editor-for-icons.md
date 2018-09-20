---
title: Personalizzazione o modifica di colori (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dithered color, Image editor
- Custom Color Selector dialog box [C++]
- Image editor [C++], Colors Palette
- colors [C++], image
- bitmaps [C++], colors
- images [C++], colors
- HSL values
- Colors Palette, Image editor
- RGB color values
- Adjust Colors command [C++]
- Image editor [C++], dithered color
ms.assetid: e58f6b32-f435-4d9a-a570-7569433661ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e507942bbb0e6f77ec6423a51e4260f3fdd647a3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405190"
---
# <a name="customizing-or-changing-colors-image-editor-for-icons"></a>Personalizzazione o modifica di colori (Editor di immagini per le icone)

Il **immagine** redattore [tavolozza di colori](../windows/colors-window-image-editor-for-icons.md) inizialmente Visualizza 16 colori standard. Oltre ai colori visualizzati, è possibile creare colori personalizzati. È quindi possibile [salvare e caricare una tavolozza colori personalizzata](../windows/saving-and-loading-different-color-palettes-image-editor-for-icons.md).

### <a name="to-change-colors-on-the-colors-palette"></a>Per modificare i colori nella Tavolozza colori

1. Dal **immagine** menu, scegliere **regola colori**.

2. Nel [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md), definire il colore digitando i valori RGB o HSL nelle caselle di testo appropriate o scegliere un colore nella **visualizzazione delle sfumature** casella.

3. Impostare la luminosità spostando il dispositivo di scorrimento **luminosità** barra.

4. Molti colori personalizzati sono retinati. Se si desidera il colore a tinta unita più vicino al colore retinato, fare doppio clic il **colore** casella.

   Se si decide in seguito si desidera che il colore retinato, spostare il dispositivo di scorrimento **luminosità** barre o a spostare il mirino **visualizzazione delle sfumature** nuovamente la casella per ripristinare il dithering.

5. Fare clic su **OK** per aggiungere il nuovo colore.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md)