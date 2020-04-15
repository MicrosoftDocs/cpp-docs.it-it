---
title: CMFCToolTipCtrl (classe)
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
ms.openlocfilehash: 6c8bb41b82d1dca9235e1184c2152a61c07c8071
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377346"
---
# <a name="cmfctooltipctrl-class"></a>CMFCToolTipCtrl (classe)

Implementazione estesa di descrizioni comandi basata sulla [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md). Una descrizione comando basata sulla classe `CMFCToolTipCtrl` può visualizzare un'icona, un'etichetta e una descrizione. È possibile personalizzare l'aspetto visivo utilizzando un riempimento sfumato, testo e colori del bordo personalizzati, testo in grassetto, angoli arrotondati o uno stile di tipo fumetto.

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```cpp
class CMFCToolTipCtrl : public CToolTipCtrl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCToolTipCtrl::CMFCToolTipCtrl`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
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

## <a name="remarks"></a>Osservazioni

Utilizzare `CMFCToolTipCtrl` `CMFCToolTipInfo`insieme gli oggetti , e [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md) per implementare descrizioni comandi personalizzate nell'applicazione.

Ad esempio, per usare le descrizioni comando di tipo fumetto, seguire questa procedura:

1. Utilizzare il [metodo della classe CWinAppEx](../../mfc/reference/cwinappex-class.md) per inizializzare il gestore della descrizione comandi nell'applicazione.

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

3. Utilizzare il [CTooltipManager::SetTooltipParams](../../mfc/reference/ctooltipmanager-class.md#settooltipparams) metodo per impostare lo stile di visualizzazione per `CMFCToolTipInfo` tutte le descrizioni comandi nell'applicazione utilizzando gli stili definiti nell'oggetto:

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

**Intestazione:** afxtooltipctrl.h

## <a name="cmfctooltipctrlcmfctooltipctrl"></a><a name="cmfctooltipctrl"></a>CMFCToolTipCtrl::CMFCToolTipCtrl

```cpp
CMFCToolTipCtrl(CMFCToolTipInfo* pParams = NULL);
```

### <a name="parameters"></a>Parametri

[in] *paramedrici*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfctooltipctrlgeticonsize"></a><a name="geticonsize"></a>CMFCToolTipCtrl::GetIconSize

Restituisce le dimensioni di un'icona in una descrizione comando.

```cpp
virtual CSize GetIconSize();
```

### <a name="return-value"></a>Valore restituito

Le dimensioni dell'icona, in pixel.

## <a name="cmfctooltipctrlgetparams"></a><a name="getparams"></a>CMFCToolTipCtrl::GetParams

Restituisce le impostazioni di visualizzazione di una descrizione comando.

```cpp
const CMFCToolTipInfo& GetParams() const;
```

### <a name="return-value"></a>Valore restituito

Le impostazioni di visualizzazione della descrizione comandi corrente, archiviate in un oggetto [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md) .

## <a name="cmfctooltipctrlondrawborder"></a><a name="ondrawborder"></a>CMFCToolTipCtrl::OnDrawBorder

Estrae il bordo di una descrizione comando.

```cpp
virtual void OnDrawBorder(
    CDC* pDC,
    CRect rect,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Rettangolo di delimitazione della descrizione comandi.

*Proprietà clrLine*<br/>
[in] Colore del bordo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per personalizzare l'aspetto del bordo della descrizione comandi.

## <a name="cmfctooltipctrlondrawdescription"></a><a name="ondrawdescription"></a>CMFCToolTipCtrl::OnDrawDescription

```cpp
virtual CSize OnDrawDescription(
    CDC* pDC,
    CRect rect,
    BOOL bCalcOnly);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>
[in] *rect*<br/>
[in] *bCalcolsolo*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfctooltipctrlondrawicon"></a><a name="ondrawicon"></a>CMFCToolTipCtrl::OnDrawIcon

Visualizza un'icona in una descrizione comando.

```cpp
virtual BOOL OnDrawIcon(
    CDC* pDC,
    CRect rectImage);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*rectImage (immagine rect)*<br/>
[in] Coordinate dell'icona.

### <a name="return-value"></a>Valore restituito

TRUESe l'icona è stata disegnata. In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per visualizzare un'icona personalizzata. È inoltre necessario eseguire l'override [cMFCToolTipCtrl::GetIconSize](#geticonsize) per consentire alla descrizione comando di calcolare correttamente il layout di testo e descrizione.

## <a name="cmfctooltipctrlondrawlabel"></a><a name="ondrawlabel"></a>CMFCToolTipCtrl::OnDrawLabel

Crea l'etichetta della descrizione comando o calcola la dimensione dell'etichetta.

```cpp
virtual CSize OnDrawLabel(
    CDC* pDC,
    CRect rect,
    BOOL bCalcOnly);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Rettangolo di delimitazione dell'area dell'etichetta.

*bCalcolsolo*<br/>
[in] Se TRUE, l'etichetta non verrà disegnata.

### <a name="return-value"></a>Valore restituito

Dimensioni dell'etichetta, in pixel.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto dell'etichetta della descrizione comandi.

## <a name="cmfctooltipctrlondrawseparator"></a><a name="ondrawseparator"></a>CMFCToolTipCtrl::OnDrawSeparator

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
[in] Puntatore a un contesto di dispositivo.

*x1 (in modo non in0*<br/>
[in] Coordinata orizzontale dell'estremità sinistra del separatore.

*x2 (in modo non in0*<br/>
[in] Coordinata orizzontale dell'estremità destra del separatore.

*S*<br/>
[in] Coordinata verticale del separatore.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita disegna una linea dal punto (x1, y) al punto (x2, y).

Eseguire l'override di questo metodo in una classe derivata per personalizzare l'aspetto del separatore.

## <a name="cmfctooltipctrlonfillbackground"></a><a name="onfillbackground"></a>CMFCToolTipCtrl::OnFillBackground

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
[in] Puntatore a un contesto di dispositivo.

*Rect*<br/>
[in] Specifica il rettangolo di delimitazione dell'area da riempire.

*clrText*<br/>
[in] Colore di primo piano della descrizione comando.

*Proprietà clrLine*<br/>
[in] Colore dei bordi e della linea delimitatore tra etichetta e descrizione.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita riempie il rettangolo specificato da *rect* con il colore o il motivo specificato dalla chiamata più recente a [CMFCToolTipCtrl::SetParams](#setparams).

Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto della descrizione comandi.

## <a name="cmfctooltipctrlsetdescription"></a><a name="setdescription"></a>CMFCToolTipCtrl::SetDescription

Imposta la descrizione che verrà visualizzata dalla descrizione comando.

```cpp
virtual void SetDescription(const CString strDesrciption);
```

### <a name="parameters"></a>Parametri

*strDesrciption*<br/>
[in] Testo della descrizione.

### <a name="remarks"></a>Osservazioni

Il testo della descrizione viene visualizzato nella descrizione comando sotto il separatore.

## <a name="cmfctooltipctrlsetfixedwidth"></a><a name="setfixedwidth"></a>CMFCToolTipCtrl::SetFixedWidth

```cpp
void SetFixedWidth(
    int nWidthRegular,
    int nWidthLargeImage);
```

### <a name="parameters"></a>Parametri

[in] *nWidthRegular*<br/>
[in] *nWidthLargeImage (informazioni in base alla larghezza di un'immagine*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfctooltipctrlsethotribbonbutton"></a><a name="sethotribbonbutton"></a>CMFCToolTipCtrl::SetHotRibbonButton

```cpp
void SetHotRibbonButton(CMFCRibbonButton* pRibbonButton);
```

### <a name="parameters"></a>Parametri

[in] *pRibbonButton*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfctooltipctrlsetlocation"></a><a name="setlocation"></a>CMFCToolTipCtrl::SetLocation

```cpp
void SetLocation(CPoint pt);
```

### <a name="parameters"></a>Parametri

[in] *pt pt*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfctooltipctrlsetparams"></a><a name="setparams"></a>CMFCToolTipCtrl::SetParams

Specifica l'aspetto visivo di una descrizione comandi utilizzando un [CMFCToolTipInfo classe](../../mfc/reference/cmfctooltipinfo-class.md) oggetto.

```cpp
void SetParams(CMFCToolTipInfo* pParams);
```

### <a name="parameters"></a>Parametri

*paramedrici*<br/>
[in] Puntatore a un [CMFCToolTipInfo classe](../../mfc/reference/cmfctooltipinfo-class.md) oggetto che contiene i parametri di visualizzazione.

### <a name="remarks"></a>Osservazioni

Ogni volta che viene visualizzata la descrizione comandi, viene disegnata utilizzando i colori e gli stili di visualizzazione specificati da *pParams.* Il valore di *pParams* viene `m_Params`archiviato nel membro protetto , a cui è possibile accedere una classe derivata che esegue l'override di [CMFCToolTipCtrl::OnDrawBorder](#ondrawborder), [CMFCToolTipCtrl::OnDrawIcon](#ondrawicon), [CMFCToolTipCtrl::OnDrawLabel](#ondrawlabel), [CMFCToolTipCtrl::OnDrawSeparator](#ondrawseparator)o [CMFCToolTipCtrl::OnFillBackground](#onfillbackground) per mantenere l'aspetto specificato.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md)<br/>
[Classe CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)<br/>
[CMFCToolTipInfo (classe)](../../mfc/reference/cmfctooltipinfo-class.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
