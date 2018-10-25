---
title: Classe CMFCRibbonCheckBox | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8bc91a98d1909245e09268cc7129084392a4c096
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50076256"
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
|[CMFCRibbonCheckBox::GetCompactSize](#getcompactsize)|(Esegue l'override [cmfcribbonbutton:: Getcompactsize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|
|[CMFCRibbonCheckBox::GetIntermediateSize](#getintermediatesize)|(Esegue l'override [cmfcribbonbutton:: Getintermediatesize](../../mfc/reference/cmfcribbonbutton-class.md#getintermediatesize).)|
|[CMFCRibbonCheckBox::GetRegularSize](#getregularsize)|(Esegue l'override [cmfcribbonbutton:: Getregularsize](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize).)|
|[CMFCRibbonCheckBox::IsDrawTooltipImage](#isdrawtooltipimage)|Esegue l'override di `CMFCRibbonButton::IsDrawTooltipImage`.|
|[CMFCRibbonCheckBox::OnDraw](#ondraw)|(Esegue l'override [cmfcribbonbutton:: OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|
|[CMFCRibbonCheckBox::OnDrawMenuImage](#ondrawmenuimage)|(Esegue l'override [cmfcribbonbaseelement:: Ondrawmenuimage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).)|
|[CMFCRibbonCheckBox::OnDrawOnList](#ondrawonlist)|Esegue l'override di `CMFCRibbonButton::OnDrawOnList`.|
|[CMFCRibbonCheckBox::SetACCData](#setaccdata)|(Esegue l'override [cmfcribbonbutton:: Setaccdata](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).)|

## <a name="remarks"></a>Note

Per usare un `CMFCRibbonCheckBox` nell'applicazione, aggiungere il seguente costruttore al codice:

```
CMFCRibbonCheckBox (UINT nID, LPCTSTR lpszText)
```
in cui *nID* è l'ID comando casella di controllo e *lpszText* l'etichetta di testo della casella di controllo.

È possibile aggiungere una casella di controllo a un pannello della barra multifunzione usando [cmfcribbonpanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonCheckBox](../../mfc/reference/cmfcribboncheckbox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribboncheckbox. h

##  <a name="cmfcribboncheckbox"></a>  CMFCRibbonCheckBox::CMFCRibbonCheckBox

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

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCRibbonCheckBox` classe.

[!code-cpp[NVC_MFC_RibbonApp#17](../../mfc/reference/codesnippet/cpp/cmfcribboncheckbox-class_1.cpp)]

##  <a name="getcompactsize"></a>  CMFCRibbonCheckBox::GetCompactSize

Quando sottoposto a override, ottiene la dimensione compatta della casella di controllo.

```
virtual CSize GetCompactSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a CDC associati con la casella di controllo.

### <a name="return-value"></a>Valore restituito

Restituisce un `CSize` oggetto che contiene la dimensione compatta della casella di controllo.

### <a name="remarks"></a>Note

Se non viene sottoposto a override, restituisce la dimensione intermedia della casella di controllo.

##  <a name="getintermediatesize"></a>  CMFCRibbonCheckBox::GetIntermediateSize

Ottiene la dimensione intermedia della casella di controllo.

```
virtual CSize GetIntermediateSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a CDC associato a questa casella di controllo.

### <a name="return-value"></a>Valore restituito

Oggetto `CSize` oggetto che contiene la dimensione intermedia della casella di controllo.

### <a name="remarks"></a>Note

Se non viene sottoposto a override, calcola la dimensione intermedia come dimensione della casella di controllo predefinito ( `AFX_CHECK_BOX_DEFAULT_SIZE`) oltre le dimensioni del testo, più i margini.

##  <a name="getregularsize"></a>  CMFCRibbonCheckBox::GetRegularSize

Ottiene le dimensioni normali della casella di controllo.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore all'oggetto CDC associato a questa casella di controllo.

### <a name="return-value"></a>Valore restituito

Restituisce un `CSize` oggetto che contiene la dimensione regolare della casella di controllo.

### <a name="remarks"></a>Note

Se non viene sottoposto a override, restituisce la dimensione intermedia della casella di controllo.

##  <a name="isdrawtooltipimage"></a>  CMFCRibbonCheckBox::IsDrawTooltipImage

Indica se è presente un'immagine di descrizione comando associata con la casella di controllo.

```
virtual BOOL IsDrawTooltipImage() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se è presente un'immagine di descrizione comando associata con la casella di controllo oppure FALSE in caso contrario.

### <a name="remarks"></a>Note

##  <a name="ondraw"></a>  CMFCRibbonCheckBox::OnDraw

Chiamata eseguita dal framework per disegnare la casella di controllo utilizzando un contesto di dispositivo specificato.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a CDC in cui disegnare la casella di controllo.

### <a name="remarks"></a>Note

##  <a name="ondrawmenuimage"></a>  CMFCRibbonCheckBox::OnDrawMenuImage

Chiamata eseguita dal framework per disegnare un'immagine di menu per la casella di controllo.

```
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```

### <a name="parameters"></a>Parametri

[in] *CDC&#42;*<br/>
Puntatore a CDC associati con la casella di controllo.

*CRect*<br/>
[in] Oggetto `CRect` oggetto che specifica il rettangolo in cui disegnare l'immagine del menu.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se è stata disegnata l'immagine o FALSE in caso contrario.

### <a name="remarks"></a>Note

Se non viene sottoposto a override, restituisce FALSE.

##  <a name="ondrawonlist"></a>  CMFCRibbonCheckBox::OnDrawOnList

Chiamata eseguita dal framework per disegnare la casella di controllo in una casella di riepilogo di comandi.

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

*strText*<br/>
[in] Testo visualizzato.

*nTextOffset*<br/>
[in] Distanza, espressa in pixel, dal lato sinistro della casella di riepilogo per il testo visualizzato.

*Rect*<br/>
[in] Il rettangolo di visualizzazione per la casella di controllo.

*bIsSelected*<br/>
[in] TRUE se la casella di controllo è selezionata oppure FALSE in caso contrario.

*bHighlighted*<br/>
[in] TRUE se la casella di controllo è evidenziato o FALSE in caso contrario.

### <a name="remarks"></a>Note

##  <a name="setaccdata"></a>  CMFCRibbonCheckBox::SetACCData

Imposta i dati di accessibilità per la casella di controllo.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### <a name="parameters"></a>Parametri

*pParent*<br/>
La finestra padre della casella di controllo.

*data*<br/>
I dati di accessibilità per la casella di controllo.

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo imposta i dati di accessibilità per la casella di controllo e restituisce sempre TRUE. Eseguire l'override di questo metodo per impostare i dati di accessibilità e restituire un valore che indica l'esito positivo o negativo.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)
