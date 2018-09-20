---
title: 'Enumerazione cmfcimagepaintarea:: Image_edit_mode | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- IMAGE_EDIT_MODE Enumeration
dev_langs:
- C++
helpviewer_keywords:
- IMAGE_EDIT_MODE Enumeration method [MFC]
ms.assetid: e51db66a-fa1c-4766-9dac-a25b595f871a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 913a87383e617f331043751c4e3089acac744c7f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46374644"
---
# <a name="cmfcimagepaintareaimageeditmode-enumeration"></a>Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE

Specifica una modalità di disegno che consente di modificare un'immagine in una finestra di dialogo dell'editor di immagini.

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

|||
|-|-|
|Nome|Descrizione|
|IMAGE_EDIT_MODE_PEN|Utilizzato per disegnare singoli pixel.|
|IMAGE_EDIT_MODE_FILL|Utilizzato per riempire tutte le aree adiacenti contenenti il colore in corrispondenza della posizione del cursore corrente.|
|IMAGE_EDIT_MODE_LINE|Utilizzato per disegnare una linea.|
|IMAGE_EDIT_MODE_RECT|Utilizzato per disegnare un rettangolo.|
|IMAGE_EDIT_MODE_ELLIPSE|Utilizzato per disegnare un'ellisse.|
|IMAGE_EDIT_MODE_COLOR|Utilizzato per impostare il colore corrente al colore nella posizione corrente del cursore.|

### <a name="remarks"></a>Note

Il `CMFCImagePaintArea` e `CMFCImageEditorDialog` classi usano questa enumerazione per impostare la modalità di disegno corrente. La modalità di disegno e il colore corrente vengono utilizzati per modificare l'area dell'immagine in una finestra di dialogo dell'editor di immagini. Per altre informazioni sulle `CMFCImagePaintArea` e `CMFCImageEditorDialog`, vedere [classe CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md) e [classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md).

Quando si seleziona un colore da un'immagine utilizzando la modalità di disegno IMAGE_EDIT_MODE_COLOR, il framework imposta la modalità di disegno corrente a IMAGE_EDIT_MODE_PEN.

## <a name="requirements"></a>Requisiti

**Intestazione:** afximagepaintarea.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)<br/>
[Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)
