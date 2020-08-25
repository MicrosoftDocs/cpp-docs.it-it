---
title: Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE
ms.date: 11/04/2016
f1_keywords:
- IMAGE_EDIT_MODE Enumeration
helpviewer_keywords:
- IMAGE_EDIT_MODE Enumeration method [MFC]
ms.assetid: e51db66a-fa1c-4766-9dac-a25b595f871a
ms.openlocfilehash: 37c877cc8562a9479535d9c6132e49e7c9b7e82f
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88831138"
---
# <a name="cmfcimagepaintareaimage_edit_mode-enumeration"></a>Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE

Specifica una modalità di disegno utilizzata per modificare un'immagine in una finestra di dialogo dell'editor di immagini.

## <a name="syntax"></a>Sintassi

```
enum IMAGE_EDIT_MODE
{
    IMAGE_EDIT_MODE_PEN = 0,
    IMAGE_EDIT_MODE_FILL,
    IMAGE_EDIT_MODE_LINE,
    IMAGE_EDIT_MODE_RECT,
    IMAGE_EDIT_MODE_ELLIPSE,
    IMAGE_EDIT_MODE_COLOR
};
```

## <a name="members"></a>Membri

|Nome|Descrizione|
|-|-|
|IMAGE_EDIT_MODE_PEN|Utilizzato per creare singoli pixel.|
|IMAGE_EDIT_MODE_FILL|Utilizzato per riempire tutte le aree adiacenti che contengono il colore in corrispondenza della posizione corrente del cursore.|
|IMAGE_EDIT_MODE_LINE|Utilizzato per creare una linea.|
|IMAGE_EDIT_MODE_RECT|Utilizzato per creare un rettangolo.|
|IMAGE_EDIT_MODE_ELLIPSE|Utilizzato per creare un'ellisse.|
|IMAGE_EDIT_MODE_COLOR|Utilizzato per impostare il colore corrente sul colore in corrispondenza della posizione corrente del cursore.|

### <a name="remarks"></a>Osservazioni

Le `CMFCImagePaintArea` `CMFCImageEditorDialog` classi e usano questa enumerazione per impostare la modalità di disegno corrente. La modalità di disegno e il colore corrente vengono utilizzati per modificare l'area dell'immagine in una finestra di dialogo dell'editor di immagini. Per ulteriori informazioni su `CMFCImagePaintArea` e `CMFCImageEditorDialog` , vedere [classe Enumerazione CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md) e [classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md).

Quando si seleziona un colore da un'immagine usando la modalità di disegno IMAGE_EDIT_MODE_COLOR, il Framework imposta la modalità di disegno corrente su IMAGE_EDIT_MODE_PEN.

## <a name="requirements"></a>Requisiti

**Intestazione:** afximagepaintarea. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe Enumerazione CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)<br/>
[Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)
