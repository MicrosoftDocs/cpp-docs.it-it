---
description: 'Altre informazioni su: enumerazione Enumerazione CMFCImagePaintArea:: IMAGE_EDIT_MODE'
title: Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE
ms.date: 11/04/2016
f1_keywords:
- IMAGE_EDIT_MODE Enumeration
helpviewer_keywords:
- IMAGE_EDIT_MODE Enumeration method [MFC]
ms.assetid: e51db66a-fa1c-4766-9dac-a25b595f871a
ms.openlocfilehash: f28880d108be8fb4f2b14ede1a3cbd3c7dac9f2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265324"
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

## <a name="members"></a>Members

|Nome|Description|
|-|-|
|IMAGE_EDIT_MODE_PEN|Utilizzato per creare singoli pixel.|
|IMAGE_EDIT_MODE_FILL|Utilizzato per riempire tutte le aree adiacenti che contengono il colore in corrispondenza della posizione corrente del cursore.|
|IMAGE_EDIT_MODE_LINE|Utilizzato per creare una linea.|
|IMAGE_EDIT_MODE_RECT|Utilizzato per creare un rettangolo.|
|IMAGE_EDIT_MODE_ELLIPSE|Utilizzato per creare un'ellisse.|
|IMAGE_EDIT_MODE_COLOR|Utilizzato per impostare il colore corrente sul colore in corrispondenza della posizione corrente del cursore.|

### <a name="remarks"></a>Commenti

Le `CMFCImagePaintArea` `CMFCImageEditorDialog` classi e usano questa enumerazione per impostare la modalità di disegno corrente. La modalità di disegno e il colore corrente vengono utilizzati per modificare l'area dell'immagine in una finestra di dialogo dell'editor di immagini. Per ulteriori informazioni su `CMFCImagePaintArea` e `CMFCImageEditorDialog` , vedere [classe Enumerazione CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md) e [classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md).

Quando si seleziona un colore da un'immagine usando la modalità di disegno IMAGE_EDIT_MODE_COLOR, il Framework imposta la modalità di disegno corrente su IMAGE_EDIT_MODE_PEN.

## <a name="requirements"></a>Requisiti

**Intestazione:** afximagepaintarea. h

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe Enumerazione CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)<br/>
[Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)
