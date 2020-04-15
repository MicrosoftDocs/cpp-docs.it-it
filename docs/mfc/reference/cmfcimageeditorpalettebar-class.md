---
title: CMFCImageEditorPaletteBar (classe)
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
ms.openlocfilehash: 33d4bc0c72718d028031ac11bc67da6aec5e4907
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374419"
---
# <a name="cmfcimageeditorpalettebar-class"></a>CMFCImageEditorPaletteBar (classe)

Fornisce la funzionalità della barra della tavolozza a una finestra di dialogo dell'editor di immagini.

## <a name="syntax"></a>Sintassi

```
class CMFCImageEditorPaletteBar : public CMFCToolBar
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCImageEditorPaletteBar::GetRowHeight](#getrowheight)|Restituisce l'altezza dei pulsanti della barra degli strumenti. (Esegue l'override di [CMFCToolBar::GetRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).)|
|[CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determina se la barra degli strumenti può visualizzare i pulsanti con bordi estesi. (Esegue l'override [di CMFCToolBar::IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).)|

### <a name="remarks"></a>Osservazioni

Questa classe non è destinata a essere utilizzata direttamente dal codice.

Il framework utilizza questa classe per visualizzare una barra della tavolozza in una finestra di dialogo dell'editor di immagini. Per ulteriori informazioni sulla finestra di dialogo dell'editor di immagini, vedere [Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBa (informazioni in base a un'applicazione di uno strumento C](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCImageEditorPaletteBar](../../mfc/reference/cmfcimageeditorpalettebar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afximageeditordialog.h

## <a name="cmfcimageeditorpalettebargetrowheight"></a><a name="getrowheight"></a>CMFCImageEditorPaletteBar::GetRowHeight

Restituisce l'altezza dei pulsanti della barra degli strumenti.

```
virtual int GetRowHeight() const;
```

### <a name="return-value"></a>Valore restituito

L'altezza di ogni pulsante sulla barra degli strumenti.

## <a name="cmfcimageeditorpalettebarisbuttonextrasizeavailable"></a><a name="isbuttonextrasizeavailable"></a>CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable

Determina se la barra degli strumenti può visualizzare i pulsanti con bordi estesi.

```
virtual BOOL IsButtonExtraSizeAvailable() const;
```

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce FALSE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCImageEditorDialog (classe)](../../mfc/reference/cmfcimageeditordialog-class.md)
