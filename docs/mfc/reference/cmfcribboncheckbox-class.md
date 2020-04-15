---
title: Classe CMFCRibbonCheckBox
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonCheckBox
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::CMFCRibbonCheckBox
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetCompactSize
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetIntermediateSize
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::GetRegularSize
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::IsDrawTooltipImage
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDraw
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDrawMenuImage
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::OnDrawOnList
- AFXRIBBONCHECKBOX/CMFCRibbonCheckBox::SetACCData
helpviewer_keywords:
- CMFCRibbonCheckBox [MFC], CMFCRibbonCheckBox
- CMFCRibbonCheckBox [MFC], GetCompactSize
- CMFCRibbonCheckBox [MFC], GetIntermediateSize
- CMFCRibbonCheckBox [MFC], GetRegularSize
- CMFCRibbonCheckBox [MFC], IsDrawTooltipImage
- CMFCRibbonCheckBox [MFC], OnDraw
- CMFCRibbonCheckBox [MFC], OnDrawMenuImage
- CMFCRibbonCheckBox [MFC], OnDrawOnList
- CMFCRibbonCheckBox [MFC], SetACCData
ms.assetid: 3a6c3891-c8d1-4af0-b954-7b9ab048782a
ms.openlocfilehash: 089c8056afebef31ff98a435bf145566ae64fe1e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375262"
---
# <a name="cmfcribboncheckbox-class"></a>Classe CMFCRibbonCheckBox

La classe `CMFCRibbonCheckBox` implementa una casella di controllo che è possibile aggiungere a un pannello della barra multifunzione, a una barra di accesso rapido o a un menu di scelta rapida.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonCheckBox : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonCheckBox::CMFCRibbonCheckBox](#cmfcribboncheckbox)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonCheckBox::GetCompactSize](#getcompactsize)|(Esegue l'override [di CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|
|[CMFCRibbonCheckBox::GetIntermediateSize](#getintermediatesize)|(Esegue l'override [di CMFCRibbonButton::GetIntermediateSize.)](../../mfc/reference/cmfcribbonbutton-class.md#getintermediatesize)|
|[CMFCRibbonCheckBox::GetRegularSize](#getregularsize)|(Esegue l'override [di CMFCRibbonButton::GetRegularSize.)](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize)|
|[CMFCRibbonCheckBox::IsDrawTooltipImage](#isdrawtooltipimage)|Esegue l'override di `CMFCRibbonButton::IsDrawTooltipImage`.|
|[CMFCRibbonCheckBox::OnDraw](#ondraw)|(OverrideS [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|
|[CMFCRibbonCheckBox::OnDrawMenuImage](#ondrawmenuimage)|(Overrides [CMFCRibbonBaseElement::OnDrawMenuImage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).)|
|[CMFCRibbonCheckBox::OnDrawOnList](#ondrawonlist)|Esegue l'override di `CMFCRibbonButton::OnDrawOnList`.|
|[CMFCRibbonCheckBox::SetACCData](#setaccdata)|(Overrides [CMFCRibbonButton::SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).)|

## <a name="remarks"></a>Osservazioni

Per usare un `CMFCRibbonCheckBox` nell'applicazione, aggiungere il seguente costruttore al codice:

```
CMFCRibbonCheckBox (UINT nID, LPCTSTR lpszText)
```

dove *nID* è l'ID di comando della casella di controllo e *lpszText* è l'etichetta di testo della casella di controllo.

È possibile aggiungere una casella di controllo a un gruppo della barra multifunzione utilizzando [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonCheckBox](../../mfc/reference/cmfcribboncheckbox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribboncheckbox.h

## <a name="cmfcribboncheckboxcmfcribboncheckbox"></a><a name="cmfcribboncheckbox"></a>CMFCRibbonCheckBox::CMFCRibbonCheckBox

Costruttore di un oggetto casella di controllo della barra multifunzione

```
CMFCRibbonCheckBox(
    UINT nID,
    LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] Specifica l'ID del comando.

*lpszText*<br/>
[in] Specifica l'etichetta di testo.

### <a name="return-value"></a>Valore restituito

Costruisce un oggetto casella di controllo della barra multifunzione.

### <a name="example"></a>Esempio

Nell'esempio `CMFCRibbonCheckBox` seguente viene illustrato come costruire un oggetto della classe.

[!code-cpp[NVC_MFC_RibbonApp#17](../../mfc/reference/codesnippet/cpp/cmfcribboncheckbox-class_1.cpp)]

## <a name="cmfcribboncheckboxgetcompactsize"></a><a name="getcompactsize"></a>CMFCRibbonCheckBox::GetCompactSize

Quando sottoposto a override, ottiene le dimensioni compatte della casella di controllo.

```
virtual CSize GetCompactSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al CDC associato alla casella di controllo.

### <a name="return-value"></a>Valore restituito

Restituisce `CSize` un oggetto che contiene le dimensioni compatte della casella di controllo.

### <a name="remarks"></a>Osservazioni

Se non sottoposto a override, restituisce la dimensione intermedia della casella di controllo.

## <a name="cmfcribboncheckboxgetintermediatesize"></a><a name="getintermediatesize"></a>CMFCRibbonCheckBox::GetIntermediateSize

Ottiene la dimensione intermedia della casella di controllo.

```
virtual CSize GetIntermediateSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al CDC associato a questa casella di controllo.

### <a name="return-value"></a>Valore restituito

Oggetto `CSize` contenente le dimensioni intermedie della casella di controllo.

### <a name="remarks"></a>Osservazioni

Se non viene eseguito l'override, calcola `AFX_CHECK_BOX_DEFAULT_SIZE`la dimensione intermedia come dimensione predefinita della casella di controllo ( ) più la dimensione del testo, più i margini.

## <a name="cmfcribboncheckboxgetregularsize"></a><a name="getregularsize"></a>CMFCRibbonCheckBox::GetRegularSize

Ottiene le dimensioni normali della casella di controllo.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore all'oggetto CDC associato a questa casella di controllo.

### <a name="return-value"></a>Valore restituito

Restituisce `CSize` un oggetto che contiene le dimensioni normali della casella di controllo.

### <a name="remarks"></a>Osservazioni

Se non sottoposto a override, restituisce la dimensione intermedia della casella di controllo.

## <a name="cmfcribboncheckboxisdrawtooltipimage"></a><a name="isdrawtooltipimage"></a>CMFCRibbonCheckBox::IsDrawTooltipImage

Indica se alla casella di controllo è associata un'immagine della descrizione comando.

```
virtual BOOL IsDrawTooltipImage() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se è presente un'immagine della descrizione comando associata alla casella di controllo o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboncheckboxondraw"></a><a name="ondraw"></a>CMFCRibbonCheckBox::OnDraw

Chiamato dal framework per disegnare la casella di controllo utilizzando un contesto di dispositivo specificato.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al CDC in cui disegnare la casella di controllo.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboncheckboxondrawmenuimage"></a><a name="ondrawmenuimage"></a>CMFCRibbonCheckBox::OnDrawMenuImage

Chiamato dal framework per disegnare un'immagine di menu per la casella di controllo.

```
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```

### <a name="parameters"></a>Parametri

[in] *&#42;CDC*<br/>
Puntatore al CDC associato alla casella di controllo.

*CRect*<br/>
[in] Oggetto `CRect` che specifica il rettangolo in cui disegnare l'immagine del menu.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'immagine è stata disegnata o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Se non sottoposto a override, restituisce FALSE.

## <a name="cmfcribboncheckboxondrawonlist"></a><a name="ondrawonlist"></a>CMFCRibbonCheckBox::OnDrawOnList

Chiamato dal framework per disegnare la casella di controllo in una casella di riepilogo dei comandi.

```
virtual void OnDrawOnList(
    CDC* pDC,
    CString strText,
    int nTextOffset,
    CRect rect,
    BOOL bIsSelected,
    BOOL bHighlighted);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contesto di dispositivo in cui disegnare la casella di controllo.

*strText (testo str)*<br/>
[in] Testo visualizzato.

*nTextOffset (Offset testo)*<br/>
[in] Distanza, in pixel, dal lato sinistro della casella di riepilogo al testo visualizzato.

*Rect*<br/>
[in] Rettangolo di visualizzazione per la casella di controllo.

*bIsSelezionato*<br/>
[in] TRUE se la casella di controllo è selezionata o FALSE in caso contrario.

*bEvidenziato*<br/>
[in] TRUE se la casella di controllo è evidenziata o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribboncheckboxsetaccdata"></a><a name="setaccdata"></a>CMFCRibbonCheckBox::SetACCData

Imposta i dati di accessibilità per la casella di controllo.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pPadre*<br/>
Finestra padre della casella di controllo.

*data*<br/>
Dati di accessibilità per la casella di controllo.

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo imposta i dati di accessibilità per la casella di controllo e restituisce sempre TRUE. Eseguire l'override di questo metodo per impostare i dati di accessibilità e restituire un valore che indica l'esito positivo o negativo.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonPanel (classe)](../../mfc/reference/cmfcribbonpanel-class.md)
