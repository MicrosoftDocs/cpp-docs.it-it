---
title: Personalizzazione o modifica di colori (Editor di immagini per le icone)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.customcolorselector
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
ms.openlocfilehash: 7ab353ad0aa22c74eeba58e9310d9bc0f8d5a832
ms.sourcegitcommit: efcc8c97570ddf7631570226c700e8f6ebb6c7be
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2019
ms.locfileid: "55560283"
---
# <a name="customizing-or-changing-colors-image-editor-for-icons"></a>Personalizzazione o modifica di colori (Editor di immagini per le icone)

Il **immagine** redattore [tavolozza di colori](../windows/colors-window-image-editor-for-icons.md) inizialmente Visualizza 16 colori standard. Con i colori visualizzati, è anche possibile creare colori personalizzati. È quindi possibile [salvare e caricare una tavolozza colori personalizzata](../windows/saving-and-loading-different-color-palettes-image-editor-for-icons.md).

Il **regola colori** nella finestra di dialogo consente di personalizzare i colori utilizzati per l'immagine. Sono incluse le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Visualizzazione delle sfumature**|Modifica i valori del colore selezionato. Posizionare il selettore di precisione sul colore che si desidera modificare. Quindi spostare il dispositivo di scorrimento verso l'alto o il basso per modificarne la luminosità o valori RGB del colore.|
|**Barra luminosità**|Imposta la luminosità per il colore selezionato nel **visualizzazione delle sfumature** casella. Selezionare e trascinare la freccia bianca la barra della luminosità maggiore o verso il basso per il minore. Il **colore** casella viene visualizzato il colore selezionato e l'effetto della luminosità è impostato.|
|**Colore**|Elenca la tonalità (il valore del selettore) del colore che si sta definendo. I valori compresi tra 0 e 240, dove 0 è rosso, 60 è giallo, 120 è verde, 180 è ciano, 200 è magenta e 240 è blu.|
|**Hue**|Elenca la tonalità (il valore del selettore) del colore che si sta definendo. I valori compresi tra 0 e 240, dove 0 è rosso, 60 è giallo, 120 è verde, 180 è ciano, 200 è magenta e 240 è blu.|
|**Sat**|Specifica il valore di saturazione del colore che si sta definendo. La saturazione è la quantità di colore in una tonalità specificata. I valori compresi tra 0 e 240.|
|**Lum**|Elenca la luminosità del colore che si sta definendo. I valori compresi tra 0 e 240.|
|**Rosso**|Specifica il valore di colore rosso del colore che si sta definendo. I valori compresi tra 0 e 255.|
|**Verde**|Specifica il valore di colore verde del colore che si sta definendo. I valori compresi tra 0 e 255.|
|**Blu**|Specifica il valore di colore blu del colore che si sta definendo. I valori compresi tra 0 e 255.|

## <a name="to-change-colors-on-the-colors-palette"></a>Per modificare i colori nella Tavolozza colori

1. Dal **immagine** menu, scegliere **regola colori**.

1. Nel **regola colori** finestra di dialogo casella, definire il colore digitando i valori RGB o HSL nelle caselle di testo appropriate o scegliere un colore nella **visualizzazione delle sfumature** casella.

1. Impostare la luminosità spostando il dispositivo di scorrimento **luminosità** barra.

1. Molti colori personalizzati sono retinati. Se si desidera il colore a tinta unita più vicino al colore retinato, fare doppio clic il **colore** casella.

   Se si decide in seguito si desidera che il colore retinato, spostare il dispositivo di scorrimento **luminosità** barre o a spostare il mirino **visualizzazione delle sfumature** nuovamente la casella per ripristinare il dithering.

1. Selezionare **OK** per aggiungere il nuovo colore.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Menu immagine](../windows/image-menu-image-editor-for-icons.md)<br/>
[Finestra colori](../windows/colors-window-image-editor-for-icons.md)