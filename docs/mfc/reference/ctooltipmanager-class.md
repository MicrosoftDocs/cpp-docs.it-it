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
ms.openlocfilehash: 4e721740fc100a34ea08dd7ff5f9291eea2d9b36
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752174"
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

## <a name="remarks"></a>Osservazioni

Utilizzare [CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md) `CMFCToolTipInfo`Class `CTooltipManager` , e insieme per implementare descrizioni comandi personalizzate nell'applicazione. Per un esempio di come utilizzare queste classi di descrizione comandi, vedere il [CMFCToolTipCtrl classe](../../mfc/reference/cmfctooltipctrl-class.md) argomento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtooltipmanager.h

## <a name="ctooltipmanagercreatetooltip"></a><a name="createtooltip"></a>Suggerimento Per CTooltipManager::CreateTool

Crea un controllo descrizione comando.

```
static BOOL CreateToolTip(
    CToolTipCtrl*& pToolTip,
    CWnd* pWndParent,
    UINT nType);
```

### <a name="parameters"></a>Parametri

*pToolTip (Suggerimento per strumenti)*<br/>
[fuori] Un riferimento a un puntatore della descrizione comando. È impostato in modo che punti alla descrizione comando appena creata quando la funzione restituisce.

*pWndParent (padre di pWndParent)*<br/>
[in] Elemento padre della descrizione comando.

*nType*<br/>
[in] Tipo di descrizione comando.

### <a name="return-value"></a>Valore restituito

Diverso da zero se una descrizione comando è stata creata correttamente.

### <a name="remarks"></a>Osservazioni

È necessario chiamare [CTooltipManager::DeleteToolTip](#deletetooltip) per eliminare il controllo descrizione comando passato in *pToolTip*.

Il [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) imposta i parametri di visualizzazione di ogni descrizione comando che crea in base al tipo di descrizione comando specificato *da nType.* Per modificare i parametri per uno o più tipi di descrizione comando, chiamare [CTooltipManager::SetTooltipParams](#settooltipparams).

I tipi di descrizione comandi validi sono elencati nella tabella seguente:Valid tooltip types are listed in the following table:

|Tipo di descrizione comando|Categoria di controllo|Tipi di esempio|
|------------------|----------------------|-------------------|
|AFX_TOOLTIP_TYPE_BUTTON|Un pulsante.|CMFCButton|
|AFX_TOOLTIP_TYPE_CAPTIONBAR|Una barra del titolo.|CMFCCaptionBar|
|AFX_TOOLTIP_TYPE_DEFAULT|Qualsiasi controllo che non rientra in un'altra categoria.|No.|
|AFX_TOOLTIP_TYPE_DOCKBAR|Un riquadro ancorabile.|CDockablePane|
|AFX_TOOLTIP_TYPE_EDIT|Casella di testo.|No.|
|AFX_TOOLTIP_TYPE_MINIFRAME|Un miniframe.|CPaneFrameWnd|
|AFX_TOOLTIP_TYPE_PLANNER|Un pianificatore.|No.|
|AFX_TOOLTIP_TYPE_RIBBON|Una barra multifunzione.|CMFCRibbonBar, CMFCRibbonPanelMenuBar|
|AFX_TOOLTIP_TYPE_TAB|Controllo struttura a schede.|CMFCTabCtrl|
|AFX_TOOLTIP_TYPE_TOOLBAR|Una barra degli strumenti.|CMFCToolBar, CMFCPopupMenuBar|
|AFX_TOOLTIP_TYPE_TOOLBOX|Una casella degli strumenti.|No.|

## <a name="ctooltipmanagerdeletetooltip"></a><a name="deletetooltip"></a>CTooltipManager::DeleteToolTip

Elimina un controllo ToolTip.

```
static void DeleteToolTip(CToolTipCtrl*& pToolTip);
```

### <a name="parameters"></a>Parametri

*pToolTip (Suggerimento per strumenti)*<br/>
[in, out] Riferimento a un puntatore a una descrizione comandi da eliminare.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per ogni [classe CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) creata da [CTooltipManager::CreateToolTip](#createtooltip). Il controllo padre deve chiamare `OnDestroy` questo metodo dal relativo gestore. Questa operazione è necessaria per rimuovere correttamente la descrizione comando dal framework. Questo metodo imposta *pToolTip* su NULL prima che venga restituito.

## <a name="ctooltipmanagersettooltipparams"></a><a name="settooltipparams"></a>CTooltipManager::SetTooltipParams

Personalizza l'aspetto del controllo descrizione comandi per i tipi di controllo di Windows specificati.

```cpp
void SetTooltipParams(
    UINT nTypes,
    CRuntimeClass* pRTC=RUNTIME_CLASS(CMFCToolTipCtrl),
    CMFCToolTipInfo* pParams=NULL);
```

### <a name="parameters"></a>Parametri

*nTipi*<br/>
[in] Specifica i tipi di controllo.

*pRTC*<br/>
[in] Classe di runtime della descrizione comandi personalizzata.

*paramedrici*<br/>
[in] Parametri della descrizione comando.

### <a name="remarks"></a>Osservazioni

Questo metodo imposta la classe di runtime e i parametri iniziali che il [CToolTipManager](../../mfc/reference/ctooltipmanager-class.md) utilizza quando crea le descrizioni comandi. Quando un controllo chiama [CTooltipManager::CreateToolTip](#createtooltip) e passa un tipo di descrizione comando che è uno dei tipi indicati da *nTypes*, il gestore della descrizione comando crea un controllo descrizione comando che è un'istanza della classe di runtime specificata da *pRTC* e passa i parametri specificati da *pParams* alla nuova descrizione comando.

Quando si chiama questo metodo, tutti i proprietari di descrizioni comandi esistenti ricevono il messaggio AFX_WM_UPDATETOOLTIPS e devono ricreare le descrizioni comandi utilizzando [CTooltipManager::CreateToolTip](#createtooltip).

*nTypes* può essere qualsiasi combinazione dei tipi di descrizione comandi validi utilizzati da [CTooltipManager::CreateToolTip](#createtooltip) oppure può essere AFX_TOOLTIP_TYPE_ALL. Se si passa AFX_TOOLTIP_TYPE_ALL, tutti i tipi di descrizione comando sono interessati.

### <a name="example"></a>Esempio

Nell'esempio riportato di `SetTooltipParams` seguito `CTooltipManager` viene illustrato come utilizzare il metodo della classe . Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#11](../../mfc/reference/codesnippet/cpp/ctooltipmanager-class_1.cpp)]

## <a name="ctooltipmanagersettooltiptext"></a><a name="settooltiptext"></a>CTooltipManager::SetTooltipText

Imposta il testo e la descrizione di una descrizione comando.

```
static void SetTooltipText(
    TOOLINFO* pTI,
    CToolTipCtrl* pToolTip,
    UINT nType,
    const CString strText,
    LPCTSTR lpszDescr=NULL);
```

### <a name="parameters"></a>Parametri

*Pti*<br/>
[in] Puntatore a un oggetto TOOLINFO.

*pToolTip (Suggerimento per strumenti)*<br/>
[in, out] Puntatore al controllo descrizione comandi per il quale impostare il testo e la descrizione.

*nType*<br/>
[in] Specifica il tipo di controllo a cui è associata questa descrizione comando.

*strText (testo str)*<br/>
[in] Testo da impostare come testo della descrizione comando.

*lpszDescr*<br/>
[in] Puntatore alla descrizione comando. Può essere NULL.

### <a name="remarks"></a>Osservazioni

Il valore di *nType* deve essere lo stesso valore del parametro *nType* di [CTooltipManager::CreateToolTip](#createtooltip) quando è stata creata la descrizione comandi.

## <a name="ctooltipmanagerupdatetooltips"></a><a name="updatetooltips"></a>CTooltipManager::UpdateTooltips

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```cpp
void UpdateTooltips();
```

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolTipCtrl (classe)](../../mfc/reference/cmfctooltipctrl-class.md)<br/>
[CMFCToolTipInfo (classe)](../../mfc/reference/cmfctooltipinfo-class.md)
