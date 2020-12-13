---
description: 'Altre informazioni su: classe CMFCToolTipCtrl'
title: Classe CMFCToolTipCtrl
ms.date: 11/04/2016
f1_keywords:
- CMFCToolTipCtrl
- AFXTOOLTIPCTRL/CMFCToolTipCtrl
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::GetIconSize
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::GetParams
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawBorder
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawDescription
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawIcon
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawLabel
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnDrawSeparator
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::OnFillBackground
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetDescription
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetFixedWidth
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetHotRibbonButton
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetLocation
- AFXTOOLTIPCTRL/CMFCToolTipCtrl::SetParams
helpviewer_keywords:
- CMFCToolTipCtrl [MFC], GetIconSize
- CMFCToolTipCtrl [MFC], GetParams
- CMFCToolTipCtrl [MFC], OnDrawBorder
- CMFCToolTipCtrl [MFC], OnDrawDescription
- CMFCToolTipCtrl [MFC], OnDrawIcon
- CMFCToolTipCtrl [MFC], OnDrawLabel
- CMFCToolTipCtrl [MFC], OnDrawSeparator
- CMFCToolTipCtrl [MFC], OnFillBackground
- CMFCToolTipCtrl [MFC], SetDescription
- CMFCToolTipCtrl [MFC], SetFixedWidth
- CMFCToolTipCtrl [MFC], SetHotRibbonButton
- CMFCToolTipCtrl [MFC], SetLocation
- CMFCToolTipCtrl [MFC], SetParams
ms.assetid: 9fbfcfb1-a8ab-417f-ae29-9a9ca85ee58f
ms.openlocfilehash: 918a702a94f2847298d86868d35b2bad65b65b33
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331701"
---
# <a name="cmfctooltipctrl-class"></a>Classe CMFCToolTipCtrl

Implementazione estesa di descrizioni comandi basata sulla [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md). Una descrizione comando basata sulla classe `CMFCToolTipCtrl` può visualizzare un'icona, un'etichetta e una descrizione. È possibile personalizzare l'aspetto visivo utilizzando un riempimento sfumato, testo e colori del bordo personalizzati, testo in grassetto, angoli arrotondati o uno stile di tipo fumetto.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```cpp
class CMFCToolTipCtrl : public CToolTipCtrl
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCToolTipCtrl::CMFCToolTipCtrl`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCToolTipCtrl::GetIconSize](#geticonsize)|Restituisce le dimensioni di un'icona in una descrizione comando.|
|[CMFCToolTipCtrl::GetParams](#getparams)|Restituisce le impostazioni di visualizzazione di una descrizione comando.|
|[CMFCToolTipCtrl::OnDrawBorder](#ondrawborder)|Estrae il bordo di una descrizione comando.|
|[CMFCToolTipCtrl::OnDrawDescription](#ondrawdescription)||
|[CMFCToolTipCtrl::OnDrawIcon](#ondrawicon)|Visualizza un'icona in una descrizione comando.|
|[CMFCToolTipCtrl::OnDrawLabel](#ondrawlabel)|Crea l'etichetta della descrizione comando o calcola la dimensione dell'etichetta.|
|[CMFCToolTipCtrl::OnDrawSeparator](#ondrawseparator)|Crea il separatore tra l'etichetta e la descrizione in una descrizione comando.|
|[CMFCToolTipCtrl::OnFillBackground](#onfillbackground)|Riempie lo sfondo di descrizione comando.|
|[CMFCToolTipCtrl::SetDescription](#setdescription)|Imposta la descrizione che verrà visualizzata dalla descrizione comando.|
|[CMFCToolTipCtrl::SetFixedWidth](#setfixedwidth)||
|[CMFCToolTipCtrl::SetHotRibbonButton](#sethotribbonbutton)||
|[CMFCToolTipCtrl::SetLocation](#setlocation)||
|[CMFCToolTipCtrl::SetParams](#setparams)|Specifica l'aspetto di una descrizione comando con un oggetto `CMFCToolTipInfo`.|

## <a name="remarks"></a>Commenti

Usare `CMFCToolTipCtrl` `CMFCToolTipInfo` insieme oggetti della [classe](../../mfc/reference/ctooltipmanager-class.md) , e CTooltipManager per implementare descrizioni comandi personalizzate nell'applicazione.

Ad esempio, per usare le descrizioni comando di tipo fumetto, seguire questa procedura:

1. Usare il metodo della [classe CWinAppEx](../../mfc/reference/cwinappex-class.md) per inizializzare il gestore della descrizione comando nell'applicazione.

2. Creare una struttura `CMFCToolTipInfo` per specificare lo stile di visualizzazione desiderata:

    ```cpp
    CMFCToolTipInfo params;
    params.m_bBoldLabel = FALSE;
    params.m_bDrawDescription = FALSE;
    params.m_bDrawIcon = FALSE;
    params.m_bRoundedCorners = TRUE;
    params.m_bDrawSeparator = FALSE;
    if (m_bCustomColors)
    {
        params.m_clrFill = RGB (255, 255, 255);
        params.m_clrFillGradient = RGB (228, 228, 240);
        params.m_clrText = RGB (61, 83, 80);
        params.m_clrBorder = RGB (144, 149, 168);

    }
    ```

3. Usare il metodo [CTooltipManager:: SetTooltipParams](../../mfc/reference/ctooltipmanager-class.md#settooltipparams) per impostare lo stile di visualizzazione per tutte le descrizioni comandi nell'applicazione usando gli stili definiti nell' `CMFCToolTipInfo` oggetto:

    ```cpp
    theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,
        RUNTIME_CLASS (CMFCToolTipCtrl), &params);
    ```

È anche possibile derivare una nuova classe da `CMFCToolTipCtrl` per controllare il comportamento e il rendering di descrizione comando. Per specificare una nuova classe del controllo Tooltip, usare il metodo `CTooltipManager::SetTooltipParams`:

```cpp
myApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,
    RUNTIME_CLASS (CMyToolTipCtrl))
```

Per ripristinare la classe predefinita del controllo Tooltip e reimpostare il relativo aspetto allo stato predefinito, specificare NULL nei parametri di informazioni di descrizione comando e nella classe di runtime `SetTooltipParams`:

```cpp
theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,
    NULL,
    NULL);
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCToolTipCtrl`, come impostare la descrizione visualizzata dalla descrizione comando e come impostare la larghezza del controllo Tooltip.

[!code-cpp[NVC_MFC_RibbonApp#41](../../mfc/reference/codesnippet/cpp/cmfctooltipctrl-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md)

[CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtooltipctrl. h

## <a name="cmfctooltipctrlcmfctooltipctrl"></a><a name="cmfctooltipctrl"></a> CMFCToolTipCtrl:: CMFCToolTipCtrl

```cpp
CMFCToolTipCtrl(CMFCToolTipInfo* pParams = NULL);
```

### <a name="parameters"></a>Parametri

in *pParams*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfctooltipctrlgeticonsize"></a><a name="geticonsize"></a> CMFCToolTipCtrl:: GetIconSize

Restituisce le dimensioni di un'icona in una descrizione comando.

```cpp
virtual CSize GetIconSize();
```

### <a name="return-value"></a>Valore restituito

Dimensioni dell'icona in pixel.

## <a name="cmfctooltipctrlgetparams"></a><a name="getparams"></a> CMFCToolTipCtrl:: getparams

Restituisce le impostazioni di visualizzazione di una descrizione comando.

```cpp
const CMFCToolTipInfo& GetParams() const;
```

### <a name="return-value"></a>Valore restituito

Le impostazioni di visualizzazione correnti della descrizione comando, archiviate in un oggetto della [classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) .

## <a name="cmfctooltipctrlondrawborder"></a><a name="ondrawborder"></a> CMFCToolTipCtrl:: OnDrawBorder

Estrae il bordo di una descrizione comando.

```cpp
virtual void OnDrawBorder(
    CDC* pDC,
    CRect rect,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Rettangolo delimitatore della descrizione comando.

*clrLine*<br/>
in Colore del bordo.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo in una classe derivata per personalizzare l'aspetto del bordo della descrizione comando.

## <a name="cmfctooltipctrlondrawdescription"></a><a name="ondrawdescription"></a> CMFCToolTipCtrl:: OnDrawDescription

```cpp
virtual CSize OnDrawDescription(
    CDC* pDC,
    CRect rect,
    BOOL bCalcOnly);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>
[in] *rect*<br/>
in *bCalcOnly*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfctooltipctrlondrawicon"></a><a name="ondrawicon"></a> CMFCToolTipCtrl:: OnDrawIcon

Visualizza un'icona in una descrizione comando.

```cpp
virtual BOOL OnDrawIcon(
    CDC* pDC,
    CRect rectImage);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*rectImage*<br/>
in Coordinate dell'icona.

### <a name="return-value"></a>Valore restituito

TRUE se l'icona è stata disegnata. In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo in una classe derivata per visualizzare un'icona personalizzata. È inoltre necessario eseguire l'override di [CMFCToolTipCtrl:: GetIconSize](#geticonsize) per abilitare la descrizione comando per il corretto calcolo del layout del testo e della descrizione.

## <a name="cmfctooltipctrlondrawlabel"></a><a name="ondrawlabel"></a> CMFCToolTipCtrl:: OnDrawLabel

Crea l'etichetta della descrizione comando o calcola la dimensione dell'etichetta.

```cpp
virtual CSize OnDrawLabel(
    CDC* pDC,
    CRect rect,
    BOOL bCalcOnly);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Rettangolo di delimitazione dell'area dell'etichetta.

*bCalcOnly*<br/>
in Se TRUE, l'etichetta non verrà disegnata.

### <a name="return-value"></a>Valore restituito

Dimensioni dell'etichetta, in pixel.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto dell'etichetta della descrizione comando.

## <a name="cmfctooltipctrlondrawseparator"></a><a name="ondrawseparator"></a> CMFCToolTipCtrl:: OnDrawSeparator

Crea il separatore tra l'etichetta e la descrizione in una descrizione comando.

```cpp
virtual void OnDrawSeparator(
    CDC* pDC,
    int x1,
    int x2,
    int y);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*X1*<br/>
in Coordinata orizzontale dell'estremità sinistra del separatore.

*X2*<br/>
in Coordinata orizzontale dell'estremità destra del separatore.

*S*<br/>
in Coordinata verticale del separatore.

### <a name="remarks"></a>Commenti

L'implementazione predefinita disegna una linea dal punto (x1, y) al punto (X2, y).

Eseguire l'override di questo metodo in una classe derivata per personalizzare l'aspetto del separatore.

## <a name="cmfctooltipctrlonfillbackground"></a><a name="onfillbackground"></a> CMFCToolTipCtrl:: OnFillBackground

Riempie lo sfondo di descrizione comando.

```cpp
virtual void OnFillBackground(
    CDC* pDC,
    CRect rect,
    COLORREF& clrText,
    COLORREF& clrLine);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*Rect*<br/>
in Specifica il rettangolo di delimitazione dell'area da riempire.

*clrText*<br/>
in Colore di primo piano della descrizione comando.

*clrLine*<br/>
in Colore dei bordi e la riga delimitatore tra etichetta e descrizione.

### <a name="remarks"></a>Commenti

L'implementazione predefinita riempie il rettangolo specificato da *Rect* con il colore o il modello specificato dalla chiamata più recente a [CMFCToolTipCtrl:: separams](#setparams).

Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto della descrizione comando.

## <a name="cmfctooltipctrlsetdescription"></a><a name="setdescription"></a> CMFCToolTipCtrl:: FileDescription

Imposta la descrizione che verrà visualizzata dalla descrizione comando.

```cpp
virtual void SetDescription(const CString strDesrciption);
```

### <a name="parameters"></a>Parametri

*strDesrciption*<br/>
in Testo della descrizione.

### <a name="remarks"></a>Commenti

Il testo della descrizione viene visualizzato nella descrizione comando sotto il separatore.

## <a name="cmfctooltipctrlsetfixedwidth"></a><a name="setfixedwidth"></a> CMFCToolTipCtrl:: SetFixedWidth

```cpp
void SetFixedWidth(
    int nWidthRegular,
    int nWidthLargeImage);
```

### <a name="parameters"></a>Parametri

in *nWidthRegular*<br/>
in *nWidthLargeImage*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfctooltipctrlsethotribbonbutton"></a><a name="sethotribbonbutton"></a> CMFCToolTipCtrl:: SetHotRibbonButton

```cpp
void SetHotRibbonButton(CMFCRibbonButton* pRibbonButton);
```

### <a name="parameters"></a>Parametri

in *pRibbonButton*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfctooltipctrlsetlocation"></a><a name="setlocation"></a> CMFCToolTipCtrl:: selocation

```cpp
void SetLocation(CPoint pt);
```

### <a name="parameters"></a>Parametri

in *PT*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfctooltipctrlsetparams"></a><a name="setparams"></a> CMFCToolTipCtrl:: separams

Specifica l'aspetto visivo di una descrizione comando utilizzando un oggetto della [classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) .

```cpp
void SetParams(CMFCToolTipInfo* pParams);
```

### <a name="parameters"></a>Parametri

*pParams*<br/>
in Puntatore a un oggetto della [classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) che contiene i parametri di visualizzazione.

### <a name="remarks"></a>Commenti

Ogni volta che la descrizione comando viene visualizzata, viene disegnata usando i colori e gli stili di visualizzazione specificati da *pParams* . Il valore di *pParams* viene archiviato nel membro protetto `m_Params` , a cui è possibile accedere da una classe derivata che esegue l'override di [CMFCToolTipCtrl:: OnDrawBorder](#ondrawborder), [CMFCToolTipCtrl:: OnDrawIcon](#ondrawicon), [CMFCToolTipCtrl:: OnDrawLabel](#ondrawlabel), [CMFCToolTipCtrl:: OnDrawSeparator](#ondrawseparator)o [CMFCToolTipCtrl:: OnFillBackground](#onfillbackground) per mantenere l'aspetto specificato.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md)<br/>
[Classe CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)<br/>
[Classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
