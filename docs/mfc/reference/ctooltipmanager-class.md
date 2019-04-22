---
title: Classe CTooltipManager
ms.date: 11/04/2016
f1_keywords:
- CTooltipManager
- AFXTOOLTIPMANAGER/CTooltipManager
- AFXTOOLTIPMANAGER/CTooltipManager::CreateToolTip
- AFXTOOLTIPMANAGER/CTooltipManager::DeleteToolTip
- AFXTOOLTIPMANAGER/CTooltipManager::SetTooltipParams
- AFXTOOLTIPMANAGER/CTooltipManager::SetTooltipText
- AFXTOOLTIPMANAGER/CTooltipManager::UpdateTooltips
helpviewer_keywords:
- CTooltipManager [MFC], CreateToolTip
- CTooltipManager [MFC], DeleteToolTip
- CTooltipManager [MFC], SetTooltipParams
- CTooltipManager [MFC], SetTooltipText
- CTooltipManager [MFC], UpdateTooltips
ms.assetid: c71779d7-8b6e-47ef-8500-d4552731fe86
ms.openlocfilehash: e8b88f2722f5a4379276f13c2ef159aa4d120533
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58776505"
---
# <a name="ctooltipmanager-class"></a>Classe CTooltipManager

Gestisce informazioni di runtime sulle descrizioni comandi. L'istanza della classe `CTooltipManager` viene avviata una volta per applicazione.

## <a name="syntax"></a>Sintassi

```
class CTooltipManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTooltipManager::CreateToolTip](#createtooltip)|Crea un controllo ToolTip per i tipi di controllo di Windows specificati.|
|[CTooltipManager::DeleteToolTip](#deletetooltip)|Elimina un controllo ToolTip.|
|[CTooltipManager::SetTooltipParams](#settooltipparams)|Personalizza l'aspetto visivo del controllo ToolTip per i tipi di controllo di Windows specificati.|
|[CTooltipManager::SetTooltipText](#settooltiptext)|Imposta il testo e la descrizione per un controllo ToolTip.|
|[CTooltipManager::UpdateTooltips](#updatetooltips)||

## <a name="remarks"></a>Note

Uso [classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo`, e `CTooltipManager` interagiscono per implementare le descrizioni comandi personalizzate nell'applicazione. Per un esempio di come usare queste classi di descrizione comando, vedere la [classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md) argomento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtooltipmanager. h

##  <a name="createtooltip"></a>  CTooltipManager::CreateToolTip

Crea un controllo tooltip.

```
static BOOL CreateToolTip(
    CToolTipCtrl*& pToolTip,
    CWnd* pWndParent,
    UINT nType);
```

### <a name="parameters"></a>Parametri

*pToolTip*<br/>
[out] Un riferimento a un puntatore della descrizione comando. È impostato in modo da puntare alla descrizione comando appena creata al completamento della funzione.

*pWndParent*<br/>
[in] Elemento padre della descrizione comando.

*nType*<br/>
[in] Tipo della descrizione comando.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stata creata una descrizione comando.

### <a name="remarks"></a>Note

È necessario chiamare [CTooltipManager::DeleteToolTip](#deletetooltip) per eliminare il controllo descrizione comando che viene restituito *pToolTip*.

Il [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) imposta i parametri di rappresentazione visiva di ciascuna descrizione comando viene creato in base la descrizione comando del tipo che *NLE* specifica. Per modificare i parametri per uno o più tipi di descrizione comando, chiamare [Settooltipparams](#settooltipparams).

Nella tabella seguente sono elencati i tipi di descrizione comandi validi:

|Tipo della descrizione comando|Categoria di controllo|Esempio di tipi|
|------------------|----------------------|-------------------|
|AFX_TOOLTIP_TYPE_BUTTON|Un pulsante.|CMFCButton|
|AFX_TOOLTIP_TYPE_CAPTIONBAR|Una barra del titolo.|CMFCCaptionBar|
|AFX_TOOLTIP_TYPE_DEFAULT|Qualsiasi controllo che non si adatta a un'altra categoria.|Nessuno.|
|AFX_TOOLTIP_TYPE_DOCKBAR|Un riquadro ancorato.|CDockablePane|
|AFX_TOOLTIP_TYPE_EDIT|Una casella di testo.|Nessuno.|
|AFX_TOOLTIP_TYPE_MINIFRAME|Una con mini-cornice.|CPaneFrameWnd|
|AFX_TOOLTIP_TYPE_PLANNER|Una pianificazione.|Nessuno.|
|AFX_TOOLTIP_TYPE_RIBBON|Una barra multifunzione.|CMFCRibbonBar, CMFCRibbonPanelMenuBar|
|AFX_TOOLTIP_TYPE_TAB|Un controllo struttura a schede.|CMFCTabCtrl|
|AFX_TOOLTIP_TYPE_TOOLBAR|Una barra degli strumenti.|CMFCToolBar, CMFCPopupMenuBar|
|AFX_TOOLTIP_TYPE_TOOLBOX|Una casella degli strumenti.|Nessuno.|

##  <a name="deletetooltip"></a>  CTooltipManager::DeleteToolTip

Elimina un controllo ToolTip.

```
static void DeleteToolTip(CToolTipCtrl*& pToolTip);
```

### <a name="parameters"></a>Parametri

*pToolTip*<br/>
[in, out] Un riferimento a un puntatore a una descrizione comando da distruggere.

### <a name="remarks"></a>Note

Chiamare questo metodo per ogni [classe CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) che è stato creato da [CTooltipManager::CreateToolTip](#createtooltip). Il controllo padre deve chiamare questo metodo dalla relativa `OnDestroy` gestore. Questa è necessaria per rimuovere correttamente la descrizione comando da framework. Questo metodo imposta *pToolTip* su NULL prima della restituzione.

##  <a name="settooltipparams"></a>  CTooltipManager::SetTooltipParams

Consente di personalizzare l'aspetto del controllo tooltip per i tipi di controllo di Windows specificati.

```
void SetTooltipParams(
    UINT nTypes,
    CRuntimeClass* pRTC=RUNTIME_CLASS(CMFCToolTipCtrl),
    CMFCToolTipInfo* pParams=NULL);
```

### <a name="parameters"></a>Parametri

*nTypes*<br/>
[in] Specifica i tipi di controllo.

*pRTC*<br/>
[in] Classe di runtime della descrizione comando personalizzata.

*pParams*<br/>
[in] Parametri della descrizione comando.

### <a name="remarks"></a>Note

Questo metodo imposta la classe di runtime e i parametri iniziali che il [CToolTipManager](../../mfc/reference/ctooltipmanager-class.md) usati durante la creazione di descrizioni comandi. Quando un controllo chiama [CTooltipManager::CreateToolTip](#createtooltip) e passa in una descrizione comando di tipo che rappresenta uno dei tipi indicati da *nTypes*, la gestione della descrizione comando crea un controllo descrizione comando che è un'istanza del classe di runtime specificata da *pRTC* e passa i parametri specificati dal *pParams* per il nuovo controllo tooltip.

Quando si chiama questo metodo, tutti i proprietari esistenti della descrizione comando venga visualizzato il messaggio AFX_WM_UPDATETOOLTIPS e è necessario ricreare le relative descrizioni comandi utilizzando [CTooltipManager::CreateToolTip](#createtooltip).

*nTypes* può essere qualsiasi combinazione della descrizione comando valida tipi [CTooltipManager::CreateToolTip](#createtooltip) Usa, o può essere AFX_TOOLTIP_TYPE_ALL. Se si passa AFX_TOOLTIP_TYPE_ALL, tutti i tipi di descrizione comando sono interessati.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `SetTooltipParams` metodo del `CTooltipManager` classe. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#11](../../mfc/reference/codesnippet/cpp/ctooltipmanager-class_1.cpp)]

##  <a name="settooltiptext"></a>  CTooltipManager::SetTooltipText

Imposta il testo e la descrizione per una descrizione comando.

```
static void SetTooltipText(
    TOOLINFO* pTI,
    CToolTipCtrl* pToolTip,
    UINT nType,
    const CString strText,
    LPCTSTR lpszDescr=NULL);
```

### <a name="parameters"></a>Parametri

*pTI*<br/>
[in] Un puntatore a un oggetto TOOLINFO.

*pToolTip*<br/>
[in, out] Puntatore al controllo descrizione comando per cui impostare il testo e la descrizione.

*nType*<br/>
[in] Specifica il tipo di controllo a cui è associata questa descrizione comando.

*strText*<br/>
[in] Testo da impostare come testo della descrizione comando.

*lpszDescr*<br/>
[in] Puntatore alla descrizione della descrizione comando. Può essere NULL.

### <a name="remarks"></a>Note

Il valore di *NLE* deve essere lo stesso valore di *NLE* parametro del [CTooltipManager::CreateToolTip](#createtooltip) durante la creazione della descrizione comandi.

##  <a name="updatetooltips"></a>  CTooltipManager::UpdateTooltips

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

```
void UpdateTooltips();
```

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)<br/>
[Classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)
