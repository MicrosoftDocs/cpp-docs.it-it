---
description: 'Altre informazioni su: classe CMFCRibbonLinkCtrl'
title: Classe CMFCRibbonLinkCtrl
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
ms.openlocfilehash: 19b10643fa1af25dae4a5dc888f61d1c9ecaaee7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321787"
---
# <a name="cmfcribbonlinkctrl-class"></a>Classe CMFCRibbonLinkCtrl

Implementa un collegamento ipertestuale collocato in una barra multifunzione. Il collegamento ipertestuale apre una pagina Web quando si fa clic su di esso.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonLinkCtrl : public CMFCRibbonButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl](#cmfcribbonlinkctrl)|Costruisce e inizializza un oggetto `CMFCRibbonLinkCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonLinkCtrl::CopyFrom](#copyfrom)|Esegue l'override di `CMFCRibbonButton::CopyFrom`.|
|[CMFCRibbonLinkCtrl::GetCompactSize](#getcompactsize)|Esegue l'override di [CMFCRibbonButton:: GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).|
|[CMFCRibbonLinkCtrl::GetLink](#getlink)|Restituisce il valore del collegamento ipertestuale.|
|[CMFCRibbonLinkCtrl::GetRegularSize](#getregularsize)|Esegue l'override di [CMFCRibbonButton:: GetRegularSize](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize).|
|[CMFCRibbonLinkCtrl::GetToolTipText](#gettooltiptext)|Esegue l'override di [CMFCRibbonButton:: GetToolTipText](../../mfc/reference/cmfcribbonbutton-class.md#gettooltiptext).|
|[CMFCRibbonLinkCtrl::IsDrawTooltipImage](#isdrawtooltipimage)|Esegue l'override di `CMFCRibbonButton::IsDrawTooltipImage`.|
|[CMFCRibbonLinkCtrl::OnDraw](#ondraw)|Esegue l'override di [CMFCRibbonButton:: onpare](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).|
|[CMFCRibbonLinkCtrl::OnDrawMenuImage](#ondrawmenuimage)|Esegue l'override di [CMFCRibbonBaseElement:: OnDrawMenuImage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).|
|[CMFCRibbonLinkCtrl::OnMouseMove](#onmousemove)|Esegue l'override di `CMFCRibbonButton::OnMouseMove`.|
|[CMFCRibbonLinkCtrl::OnSetIcon](#onseticon)||
|[CMFCRibbonLinkCtrl::OpenLink](#openlink)|Apre la pagina Web specificata nel collegamento ipertestuale.|
|[CMFCRibbonLinkCtrl::SetLink](#setlink)|Imposta il valore del collegamento ipertestuale.|

## <a name="remarks"></a>Commenti

Dopo aver creato un collegamento ipertestuale, aggiungerlo a un pannello chiamando [CMFCRibbonPanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)\
&nbsp;[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md) └

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonLinkCtrl. h

## <a name="cmfcribbonlinkctrlcmfcribbonlinkctrl"></a><a name="cmfcribbonlinkctrl"></a> CMFCRibbonLinkCtrl:: CMFCRibbonLinkCtrl

Costruisce e Inizializza un oggetto [CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md) .

```
CMFCRibbonLinkCtrl(
    UINT nID,
    LPCTSTR lpszText,
    LPCTSTR lpszLink);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
in Specifica l'ID del comando eseguito quando si fa clic sul controllo collegamento.

*lpszText*<br/>
in Specifica l'etichetta da visualizzare sul controllo collegamento.

*lpszLink*<br/>
in Specifica il collegamento ipertestuale associato al controllo collegamento.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il costruttore della `CMFCRibbonLinkCtrl` classe. Questo frammento di codice fa parte dell' [esempio di gadget della barra multifunzione](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_RibbonGadgets#1](../../mfc/reference/codesnippet/cpp/cmfcribbonlinkctrl-class_1.cpp)]

## <a name="cmfcribbonlinkctrlcopyfrom"></a><a name="copyfrom"></a> CMFCRibbonLinkCtrl:: CopyFrom

```
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### <a name="parameters"></a>Parametri

in *src*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlgetcompactsize"></a><a name="getcompactsize"></a> CMFCRibbonLinkCtrl:: GetCompactSize

```
virtual CSize GetCompactSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlgetlink"></a><a name="getlink"></a> CMFCRibbonLinkCtrl:: GetLink

Restituisce il valore del collegamento ipertestuale.

```
LPCTSTR GetLink() const;
```

### <a name="return-value"></a>Valore restituito

Valore corrente del collegamento ipertestuale.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlgetregularsize"></a><a name="getregularsize"></a> CMFCRibbonLinkCtrl:: GetRegularSize

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlgettooltiptext"></a><a name="gettooltiptext"></a> CMFCRibbonLinkCtrl:: GetToolTipText

```
virtual CString GetToolTipText() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlondrawmenuimage"></a><a name="ondrawmenuimage"></a> CMFCRibbonLinkCtrl:: OnDrawMenuImage

```
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```

### <a name="parameters"></a>Parametri

in *&#42;CDC*<br/>
in *CRect*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlisdrawtooltipimage"></a><a name="isdrawtooltipimage"></a> CMFCRibbonLinkCtrl:: IsDrawTooltipImage

```
virtual BOOL IsDrawTooltipImage() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlondraw"></a><a name="ondraw"></a> CMFCRibbonLinkCtrl:: onpare

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlonmousemove"></a><a name="onmousemove"></a> CMFCRibbonLinkCtrl:: OnMouseMove

```
virtual void OnMouseMove(CPoint point);
```

### <a name="parameters"></a>Parametri

in *punto* di<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlonseticon"></a><a name="onseticon"></a> CMFCRibbonLinkCtrl:: OnSetIcon

```
virtual void OnSetIcon();
```

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonlinkctrlopenlink"></a><a name="openlink"></a> CMFCRibbonLinkCtrl:: OpenLink

Apre la pagina Web specificata nel collegamento ipertestuale.

```
BOOL OpenLink();
```

### <a name="return-value"></a>Valore restituito

TRUE se la pagina Web associata è stata aperta correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Apre una pagina Web utilizzando il collegamento ipertestuale associato all' `CMFCRibbonLinkCtrl` oggetto.

## <a name="cmfcribbonlinkctrlsetlink"></a><a name="setlink"></a> CMFCRibbonLinkCtrl:: selink

Imposta il valore del collegamento ipertestuale.

```cpp
void SetLink(LPCTSTR lpszLink);
```

### <a name="parameters"></a>Parametri

*lpszLink*<br/>
in Specifica il testo del collegamento ipertestuale.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
