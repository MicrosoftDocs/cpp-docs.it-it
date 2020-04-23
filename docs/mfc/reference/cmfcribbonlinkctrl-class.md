---
title: CMFCRibbonLinkCtrl (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonLinkCtrl
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::CopyFrom
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetCompactSize
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetLink
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetRegularSize
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetToolTipText
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::IsDrawTooltipImage
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnDraw
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnDrawMenuImage
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnMouseMove
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnSetIcon
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OpenLink
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::SetLink
helpviewer_keywords:
- CMFCRibbonLinkCtrl [MFC], CMFCRibbonLinkCtrl
- CMFCRibbonLinkCtrl [MFC], CopyFrom
- CMFCRibbonLinkCtrl [MFC], GetCompactSize
- CMFCRibbonLinkCtrl [MFC], GetLink
- CMFCRibbonLinkCtrl [MFC], GetRegularSize
- CMFCRibbonLinkCtrl [MFC], GetToolTipText
- CMFCRibbonLinkCtrl [MFC], IsDrawTooltipImage
- CMFCRibbonLinkCtrl [MFC], OnDraw
- CMFCRibbonLinkCtrl [MFC], OnDrawMenuImage
- CMFCRibbonLinkCtrl [MFC], OnMouseMove
- CMFCRibbonLinkCtrl [MFC], OnSetIcon
- CMFCRibbonLinkCtrl [MFC], OpenLink
- CMFCRibbonLinkCtrl [MFC], SetLink
ms.assetid: 77ae1941-e0ab-4a9d-911e-1752d34c079b
ms.openlocfilehash: 3c0cbe843aac172464683288d61e2aec2af60b68
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753565"
---
# <a name="cmfcribbonlinkctrl-class"></a>CMFCRibbonLinkCtrl (classe)

Implementa un collegamento ipertestuale collocato in una barra multifunzione. Il collegamento ipertestuale apre una pagina Web quando si fa clic su di esso.
Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonLinkCtrl : public CMFCRibbonButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl](#cmfcribbonlinkctrl)|Costruisce e inizializza un oggetto `CMFCRibbonLinkCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonLinkCtrl::CopyFrom](#copyfrom)|Esegue l'override di `CMFCRibbonButton::CopyFrom`.|
|[CMFCRibbonLinkCtrl::GetCompactSize](#getcompactsize)|(Esegue l'override [di CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|
|[CMFCRibbonLinkCtrl::GetLink](#getlink)|Restituisce il valore del collegamento ipertestuale.|
|[CMFCRibbonLinkCtrl::GetRegularSize](#getregularsize)|(Esegue l'override [di CMFCRibbonButton::GetRegularSize.)](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize)|
|[CMFCRibbonLinkCtrl::GetToolTipText](#gettooltiptext)|(Esegue l'override [di CMFCRibbonButton::GetToolTipText.)](../../mfc/reference/cmfcribbonbutton-class.md#gettooltiptext)|
|[CMFCRibbonLinkCtrl::IsDrawTooltipImage](#isdrawtooltipimage)|Esegue l'override di `CMFCRibbonButton::IsDrawTooltipImage`.|
|[CMFCRibbonLinkCtrl::OnDraw](#ondraw)|(OverrideS [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|
|[CMFCRibbonLinkCtrl::OnDrawMenuImage](#ondrawmenuimage)|(Overrides [CMFCRibbonBaseElement::OnDrawMenuImage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).)|
|[CMFCRibbonLinkCtrl::OnMouseMove](#onmousemove)|Esegue l'override di `CMFCRibbonButton::OnMouseMove`.|
|[CMFCRibbonLinkCtrl::OnSetIcon](#onseticon)||
|[CMFCRibbonLinkCtrl::OpenLink](#openlink)|Apre la pagina Web specificata nel collegamento ipertestuale.|
|[CMFCRibbonLinkCtrl::SetLink](#setlink)|Imposta il valore del collegamento ipertestuale.|

## <a name="remarks"></a>Osservazioni

Dopo aver creato un collegamento ipertestuale, aggiungerlo a un pannello chiamando [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Cobject](../../mfc/reference/cobject-class.md)\
&nbsp;[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CMFCRibbonButton (Pulsante di controllo CMFCRibbonButton)](../../mfc/reference/cmfcribbonbutton-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CMFCRibbonLinkCtrl (CMFCRibbonLinkCtrl)](../../mfc/reference/cmfcribbonlinkctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonLinkCtrl.h

## <a name="cmfcribbonlinkctrlcmfcribbonlinkctrl"></a><a name="cmfcribbonlinkctrl"></a>CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl

Costruisce e inizializza un oggetto [CMFCRibbonLinkCtrl.](../../mfc/reference/cmfcribbonlinkctrl-class.md)

```
CMFCRibbonLinkCtrl(
    UINT nID,
    LPCTSTR lpszText,
    LPCTSTR lpszLink);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] Specifica l'ID di comando del comando che viene eseguito quando si fa clic sul controllo collegamento.

*lpszText*<br/>
[in] Specifica l'etichetta da visualizzare nel controllo collegamento.

*lpszLink (collegamento)*<br/>
[in] Specifica il collegamento ipertestuale associato al controllo collegamento.

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito `CMFCRibbonLinkCtrl` viene illustrato come utilizzare il costruttore della classe . Questo frammento di codice fa parte [dell'esempio Ribbon Gadgets](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RibbonGadgets#1](../../mfc/reference/codesnippet/cpp/cmfcribbonlinkctrl-class_1.cpp)]

## <a name="cmfcribbonlinkctrlcopyfrom"></a><a name="copyfrom"></a>CMFCRibbonLinkCtrl::CopyFrom

```
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### <a name="parameters"></a>Parametri

[in] *src*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlgetcompactsize"></a><a name="getcompactsize"></a>CMFCRibbonLinkCtrl::GetCompactSize

```
virtual CSize GetCompactSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlgetlink"></a><a name="getlink"></a>CMFCRibbonLinkCtrl::GetLink

Restituisce il valore del collegamento ipertestuale.

```
LPCTSTR GetLink() const;
```

### <a name="return-value"></a>Valore restituito

Valore corrente del collegamento ipertestuale.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlgetregularsize"></a><a name="getregularsize"></a>CMFCRibbonLinkCtrl::GetRegularSize

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlgettooltiptext"></a><a name="gettooltiptext"></a>CMFCRibbonLinkCtrl::GetToolTipText

```
virtual CString GetToolTipText() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlondrawmenuimage"></a><a name="ondrawmenuimage"></a>CMFCRibbonLinkCtrl::OnDrawMenuImage

```
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```

### <a name="parameters"></a>Parametri

[in] *&#42;CDC*<br/>
[in] *CRect*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlisdrawtooltipimage"></a><a name="isdrawtooltipimage"></a>CMFCRibbonLinkCtrl::IsDrawTooltipImage

```
virtual BOOL IsDrawTooltipImage() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlondraw"></a><a name="ondraw"></a>CMFCRibbonLinkCtrl::OnDraw

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlonmousemove"></a><a name="onmousemove"></a>CMFCRibbonLinkCtrl::OnMouseMove

```
virtual void OnMouseMove(CPoint point);
```

### <a name="parameters"></a>Parametri

[in] *punto*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlonseticon"></a><a name="onseticon"></a>CMFCRibbonLinkCtrl::OnSetIcon

```
virtual void OnSetIcon();
```

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonlinkctrlopenlink"></a><a name="openlink"></a>CMFCRibbonLinkCtrl::OpenLink

Apre la pagina Web specificata nel collegamento ipertestuale.

```
BOOL OpenLink();
```

### <a name="return-value"></a>Valore restituito

TRUESe la pagina Web associata è stata aperta correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Apre una pagina Web utilizzando `CMFCRibbonLinkCtrl` il collegamento ipertestuale associato all'oggetto.

## <a name="cmfcribbonlinkctrlsetlink"></a><a name="setlink"></a>CMFCRibbonLinkCtrl::SetLink

Imposta il valore del collegamento ipertestuale.

```cpp
void SetLink(LPCTSTR lpszLink);
```

### <a name="parameters"></a>Parametri

*lpszLink (collegamento)*<br/>
[in] Specifica il testo del collegamento ipertestuale.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
