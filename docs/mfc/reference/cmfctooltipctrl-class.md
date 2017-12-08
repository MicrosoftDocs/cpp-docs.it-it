---
title: Classe CMFCToolTipCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
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
caps.latest.revision: "33"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 83fe6fc144f4a8864cccb68edef230ba91364416
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cmfctooltipctrl-class"></a>Classe CMFCToolTipCtrl
Implementazione estesa di descrizioni comandi basata sulla [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md). Una descrizione comando basata sulla classe `CMFCToolTipCtrl` può visualizzare un'icona, un'etichetta e una descrizione. È possibile personalizzare l'aspetto visivo utilizzando un riempimento sfumato, testo e colori del bordo personalizzati, testo in grassetto, angoli arrotondati o uno stile di tipo fumetto.  

 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
  
## <a name="remarks"></a>Note  
 Utilizzare `CMFCToolTipCtrl`, `CMFCToolTipInfo`, e [CTooltipManager classe](../../mfc/reference/ctooltipmanager-class.md) oggetti interagiscono per implementare le descrizioni comandi personalizzate nell'applicazione.  
  
 Ad esempio, per usare le descrizioni comando di tipo fumetto, seguire questa procedura:  
  
 1. Utilizzare il [CWinAppEx Class](../../mfc/reference/cwinappex-class.md) metodo per inizializzare la gestione di descrizione comandi nell'applicazione.  
  
 2. Creare una struttura `CMFCToolTipInfo` per specificare lo stile di visualizzazione desiderata:  
  
```  
CMFCToolTipInfo params;  
    params.m_bBoldLabel = FALSE;  
    params.m_bDrawDescription = FALSE;  
    params.m_bDrawIcon = FALSE;  
    params.m_bRoundedCorners = TRUE;  
    params.m_bDrawSeparator = FALSE;  
    if (m_bCustomColors)  
 {  
    params.m_clrFill = RGB (255,
    255,
    255);

    params.m_clrFillGradient = RGB (228,
    228,
    240);

    params.m_clrText = RGB (61,
    83,
    80);

    params.m_clrBorder = RGB (144,
    149,
    168);

 }  
```  
3. Utilizzare il [ctooltipmanager:: Settooltipparams](../../mfc/reference/ctooltipmanager-class.md#settooltipparams) per impostare lo stile di visualizzazione per tutte le descrizioni comandi nell'applicazione tramite gli stili definiti nel `CMFCToolTipInfo` oggetto:  
  
```  
theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,  
    RUNTIME_CLASS (CMFCToolTipCtrl), &params);
```  
È anche possibile derivare una nuova classe da `CMFCToolTipCtrl` per controllare il comportamento e il rendering di descrizione comando. Per specificare una nuova classe del controllo Tooltip, usare il metodo `CTooltipManager::SetTooltipParams`:  
  
```  
myApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,  
    RUNTIME_CLASS (CMyToolTipCtrl))  
```  
Per ripristinare la classe predefinita del controllo Tooltip e reimpostare il relativo aspetto allo stato predefinito, specificare NULL nei parametri di informazioni di descrizione comando e nella classe di runtime `SetTooltipParams`:  
  
```  
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
  
##  <a name="cmfctooltipctrl"></a>CMFCToolTipCtrl::CMFCToolTipCtrl  

  
```  
CMFCToolTipCtrl(CMFCToolTipInfo* pParams = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParams`  
  
### <a name="remarks"></a>Note  
  
##  <a name="geticonsize"></a>CMFCToolTipCtrl::GetIconSize  
 Restituisce le dimensioni di un'icona in una descrizione comando.  
  
```  
virtual CSize GetIconSize();
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni dell'icona, in pixel.  
  
##  <a name="getparams"></a>CMFCToolTipCtrl::GetParams  
 Restituisce le impostazioni di visualizzazione di una descrizione comando.  
  
```  
const CMFCToolTipInfo& GetParams() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le impostazioni di visualizzazione della descrizione comando corrente, che vengono archiviate in un [CMFCToolTipInfo classe](../../mfc/reference/cmfctooltipinfo-class.md) oggetto.  
  
##  <a name="ondrawborder"></a>CMFCToolTipCtrl::OnDrawBorder  
 Estrae il bordo di una descrizione comando.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect rect,  
    COLORREF clrLine);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] pDC`  
 Puntatore a un contesto di dispositivo.  
  
 `[in] rect`  
 Il rettangolo di delimitazione della descrizione comando.  
  
 `[in] clrLine`  
 Colore del bordo.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata per personalizzare l'aspetto del bordo della descrizione comando.  
  
##  <a name="ondrawdescription"></a>CMFCToolTipCtrl::OnDrawDescription  

  
```  
virtual CSize OnDrawDescription(
    CDC* pDC,  
    CRect rect,  
    BOOL bCalcOnly);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bCalcOnly`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawicon"></a>CMFCToolTipCtrl::OnDrawIcon  
 Visualizza un'icona in una descrizione comando.  
  
```  
virtual BOOL OnDrawIcon(
    CDC* pDC,  
    CRect rectImage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rectImage`  
 Coordinate dell'icona.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'icona è stato creato. In caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata per visualizzare un'icona personalizzata. È inoltre necessario eseguire l'override [CMFCToolTipCtrl::GetIconSize](#geticonsize) per abilitare la descrizione comando calcolare correttamente il layout del testo e la descrizione.  
  
##  <a name="ondrawlabel"></a>CMFCToolTipCtrl::OnDrawLabel  
 Crea l'etichetta della descrizione comando o calcola la dimensione dell'etichetta.  
  
```  
virtual CSize OnDrawLabel(
    CDC* pDC,  
    CRect rect,  
    BOOL bCalcOnly);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] pDC`  
 Puntatore a un contesto di dispositivo.  
  
 `[in] rect`  
 Rettangolo di delimitazione dell'area dell'etichetta.  
  
 `[in] bCalcOnly`  
 Se `TRUE`, l'etichetta non verrà creata.  
  
### <a name="return-value"></a>Valore restituito  
 Dimensioni dell'etichetta, in pixel.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto dell'etichetta della descrizione comando.  
  
##  <a name="ondrawseparator"></a>CMFCToolTipCtrl::OnDrawSeparator  
 Crea il separatore tra l'etichetta e la descrizione in una descrizione comando.  
  
```  
virtual void OnDrawSeparator(
    CDC* pDC,  
    int x1,  
    int x2,  
    int y);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `x1`  
 Coordinata orizzontale estremità sinistra del separatore.  
  
 [in] `x2`  
 Coordinata orizzontale destra del separatore.  
  
 [in] `Y`  
 Coordinata verticale del separatore.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita Disegna una linea tra il punto (x1, y) per il punto (x2, y).  
  
 Eseguire l'override di questo metodo in una classe derivata per personalizzare l'aspetto del separatore.  
  
##  <a name="onfillbackground"></a>CMFCToolTipCtrl::OnFillBackground  
 Riempie lo sfondo di descrizione comando.  
  
```  
virtual void OnFillBackground(
    CDC* pDC,  
    CRect rect,  
    COLORREF& clrText,  
    COLORREF& clrLine);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] pDC`  
 Puntatore a un contesto di dispositivo.  
  
 `[in] rect`  
 Specifica il rettangolo di delimitazione dell'area da riempire.  
  
 `[in] clrText`  
 Colore di primo piano della descrizione comando.  
  
 `[in] clrLine`  
 Colore dei bordi e la riga delimitatore tra l'etichetta e descrizione.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita riempie il rettangolo specificato da `rect` con il colore o il modello specificato dall'ultima chiamata a [CMFCToolTipCtrl::SetParams](#setparams).  
  
 Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto della descrizione comando.  
  
##  <a name="setdescription"></a>CMFCToolTipCtrl::SetDescription  
 Imposta la descrizione che verrà visualizzata dalla descrizione comando.  
  
```  
virtual void SetDescription(const CString strDesrciption);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] strDesrciption`  
 Testo della descrizione.  
  
### <a name="remarks"></a>Note  
 Il testo della descrizione viene visualizzato nella descrizione comando sotto il separatore.  
  
##  <a name="setfixedwidth"></a>CMFCToolTipCtrl::SetFixedWidth  

  
```  
void SetFixedWidth(
    int nWidthRegular,  
    int nWidthLargeImage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nWidthRegular`  
 [in] `nWidthLargeImage`  
  
### <a name="remarks"></a>Note  
  
##  <a name="sethotribbonbutton"></a>CMFCToolTipCtrl::SetHotRibbonButton  

  
```  
void SetHotRibbonButton(CMFCRibbonButton* pRibbonButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRibbonButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setlocation"></a>CMFCToolTipCtrl::SetLocation  

  
```  
void SetLocation(CPoint pt);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pt`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setparams"></a>CMFCToolTipCtrl::SetParams  
 Specifica l'aspetto di una descrizione comando con un [CMFCToolTipInfo classe](../../mfc/reference/cmfctooltipinfo-class.md) oggetto.  
  
```  
void SetParams(CMFCToolTipInfo* pParams);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] pParams`  
 Puntatore a un [CMFCToolTipInfo classe](../../mfc/reference/cmfctooltipinfo-class.md) oggetto che contiene i parametri di visualizzazione.  
  
### <a name="remarks"></a>Note  
 Ogni volta che viene visualizzata la descrizione comando, viene disegnato utilizzando i colori e gli stili di visualizzazione `pParams` specifica. Il valore di `pParams` viene memorizzato nel membro protetto `m_Params`, che è possibile accedere da una classe derivata che esegue l'override [CMFCToolTipCtrl::OnDrawBorder](#ondrawborder), [CMFCToolTipCtrl::OnDrawIcon](#ondrawicon), [CMFCToolTipCtrl::OnDrawLabel](#ondrawlabel), [CMFCToolTipCtrl::OnDrawSeparator](#ondrawseparator), o [CMFCToolTipCtrl::OnFillBackground](#onfillbackground) per mantenere il aspetto specificato.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CToolTipCtrl (classe)](../../mfc/reference/ctooltipctrl-class.md)   
 [Classe CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)   
 [Classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)   
 [Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)