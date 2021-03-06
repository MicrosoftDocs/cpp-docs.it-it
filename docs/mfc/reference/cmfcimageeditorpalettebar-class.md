---
description: 'Altre informazioni su: classe CMFCImageEditorPaletteBar'
title: Classe CMFCImageEditorPaletteBar
ms.date: 11/04/2016
f1_keywords:
- CMFCImageEditorPaletteBar
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar::GetRowHeight
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable
helpviewer_keywords:
- CMFCImageEditorPaletteBar [MFC], GetRowHeight
- CMFCImageEditorPaletteBar [MFC], IsButtonExtraSizeAvailable
ms.assetid: 3fb7ba8e-f254-4d56-b913-9941b4ed8138
ms.openlocfilehash: 19d023776c66559e8d639eb71ebc266f992af4c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265363"
---
# <a name="cmfcimageeditorpalettebar-class"></a>Classe CMFCImageEditorPaletteBar

Fornisce la funzionalità della barra tavolozza a una finestra di dialogo dell'editor di immagini.

## <a name="syntax"></a>Sintassi

```
class CMFCImageEditorPaletteBar : public CMFCToolBar
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|-|-|
|[CMFCImageEditorPaletteBar:: GetRowHeight](#getrowheight)|Restituisce l'altezza dei pulsanti della barra degli strumenti. Esegue l'override di [CMFCToolBar:: getRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).|
|[CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determina se la barra degli strumenti può visualizzare i pulsanti con bordi estesi. Esegue l'override di [CMFCToolBar:: IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).|

### <a name="remarks"></a>Commenti

Questa classe non è destinata a essere utilizzata direttamente dal codice.

Il Framework usa questa classe per visualizzare una barra tavolozza in una finestra di dialogo dell'editor di immagini. Per ulteriori informazioni sulla finestra di dialogo Editor di immagini, vedere [classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBa](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCImageEditorPaletteBar](../../mfc/reference/cmfcimageeditorpalettebar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afximageeditordialog. h

## <a name="cmfcimageeditorpalettebargetrowheight"></a><a name="getrowheight"></a> CMFCImageEditorPaletteBar:: GetRowHeight

Restituisce l'altezza dei pulsanti della barra degli strumenti.

```
virtual int GetRowHeight() const;
```

### <a name="return-value"></a>Valore restituito

Altezza di ogni pulsante sulla barra degli strumenti.

## <a name="cmfcimageeditorpalettebarisbuttonextrasizeavailable"></a><a name="isbuttonextrasizeavailable"></a> CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable

Determina se la barra degli strumenti può visualizzare i pulsanti con bordi estesi.

```
virtual BOOL IsButtonExtraSizeAvailable() const;
```

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce FALSE.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)
