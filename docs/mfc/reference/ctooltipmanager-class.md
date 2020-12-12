---
description: 'Altre informazioni su: classe CTooltipManager'
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
ms.openlocfilehash: 0ec6d691abbceb7026fe9656c17ff899f1d07759
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318546"
---
# <a name="ctooltipmanager-class"></a>Classe CTooltipManager

Gestisce informazioni di runtime sulle descrizioni comandi. L'istanza della classe `CTooltipManager` viene avviata una volta per applicazione.

## <a name="syntax"></a>Sintassi

```
class CTooltipManager : public CObject
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTooltipManager::CreateToolTip](#createtooltip)|Crea un controllo ToolTip per i tipi di controllo di Windows specificati.|
|[CTooltipManager::DeleteToolTip](#deletetooltip)|Elimina un controllo ToolTip.|
|[CTooltipManager::SetTooltipParams](#settooltipparams)|Personalizza l'aspetto visivo del controllo ToolTip per i tipi di controllo di Windows specificati.|
|[CTooltipManager::SetTooltipText](#settooltiptext)|Imposta il testo e la descrizione per un controllo ToolTip.|
|[CTooltipManager::UpdateTooltips](#updatetooltips)||

## <a name="remarks"></a>Commenti

Usare la [classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo` e `CTooltipManager` insieme per implementare descrizioni comandi personalizzate nell'applicazione. Per un esempio di come usare queste classi ToolTip, vedere l'argomento relativo alla [classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtooltipmanager. h

## <a name="ctooltipmanagercreatetooltip"></a><a name="createtooltip"></a> CTooltipManager:: CreateToolTip

Crea un controllo ToolTip.

```
static BOOL CreateToolTip(
    CToolTipCtrl*& pToolTip,
    CWnd* pWndParent,
    UINT nType);
```

### <a name="parameters"></a>Parametri

*pToolTip*<br/>
out Riferimento a un puntatore a descrizione comando. Viene impostato in modo da puntare alla descrizione comando appena creata quando la funzione restituisce.

*pWndParent*<br/>
in Elemento padre della descrizione comando.

*nType*<br/>
in Tipo della descrizione comando.

### <a name="return-value"></a>Valore restituito

Diverso da zero se una descrizione comando è stata creata correttamente.

### <a name="remarks"></a>Commenti

È necessario chiamare [CTooltipManager::D eletetooltip](#deletetooltip) per eliminare il controllo ToolTip restituito in *pToolTip*.

[CTooltipManager](../../mfc/reference/ctooltipmanager-class.md) imposta i parametri di visualizzazione visivi di ogni descrizione comando creata in base al tipo di descrizione comando specificato da *nType* . Per modificare i parametri per uno o più tipi di descrizione comando, chiamare [CTooltipManager:: SetTooltipParams](#settooltipparams).

I tipi di descrizione comando validi sono elencati nella tabella seguente:

|Tipo di descrizione comando|Categoria di controllo|Tipi di esempio|
|------------------|----------------------|-------------------|
|AFX_TOOLTIP_TYPE_BUTTON|Un pulsante.|CMFCButton|
|AFX_TOOLTIP_TYPE_CAPTIONBAR|Barra del titolo.|CMFCCaptionBar|
|AFX_TOOLTIP_TYPE_DEFAULT|Qualsiasi controllo che non si adatta a un'altra categoria.|Nessuno.|
|AFX_TOOLTIP_TYPE_DOCKBAR|Un riquadro ancorabile.|CDockablePane|
|AFX_TOOLTIP_TYPE_EDIT|Casella di testo.|Nessuno.|
|AFX_TOOLTIP_TYPE_MINIFRAME|Sta mobile.|CPaneFrameWnd|
|AFX_TOOLTIP_TYPE_PLANNER|Un pianificatore.|Nessuno.|
|AFX_TOOLTIP_TYPE_RIBBON|Barra multifunzione.|CMFCRibbonBar, CMFCRibbonPanelMenuBar|
|AFX_TOOLTIP_TYPE_TAB|Controllo struttura A schede.|CMFCTabCtrl|
|AFX_TOOLTIP_TYPE_TOOLBAR|Barra degli strumenti.|CMFCToolBar, CMFCPopupMenuBar|
|AFX_TOOLTIP_TYPE_TOOLBOX|Casella degli strumenti.|Nessuno.|

## <a name="ctooltipmanagerdeletetooltip"></a><a name="deletetooltip"></a> CTooltipManager::D eleteToolTip

Elimina un controllo ToolTip.

```
static void DeleteToolTip(CToolTipCtrl*& pToolTip);
```

### <a name="parameters"></a>Parametri

*pToolTip*<br/>
[in, out] Riferimento a un puntatore a una descrizione comando da eliminare definitivamente.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per ogni [classe CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) creata da [CTooltipManager:: CreateToolTip](#createtooltip). Il controllo padre deve chiamare questo metodo dal relativo `OnDestroy` gestore. Questa operazione è necessaria per rimuovere correttamente la descrizione comando dal Framework. Questo metodo imposta *pToolTip* su null prima che venga restituito.

## <a name="ctooltipmanagersettooltipparams"></a><a name="settooltipparams"></a> CTooltipManager:: SetTooltipParams

Personalizza l'aspetto del controllo ToolTip per i tipi di controllo di Windows specificati.

```cpp
void SetTooltipParams(
    UINT nTypes,
    CRuntimeClass* pRTC=RUNTIME_CLASS(CMFCToolTipCtrl),
    CMFCToolTipInfo* pParams=NULL);
```

### <a name="parameters"></a>Parametri

*nTypes*<br/>
in Specifica i tipi di controllo.

*pRTC*<br/>
in Classe di runtime della descrizione comando personalizzata.

*pParams*<br/>
in Parametri della descrizione comando.

### <a name="remarks"></a>Commenti

Questo metodo imposta la classe di runtime e i parametri iniziali utilizzati da [CToolTipManager](../../mfc/reference/ctooltipmanager-class.md) durante la creazione di descrizioni comandi. Quando un controllo chiama [CTooltipManager:: CreateToolTip](#createtooltip) e passa un tipo di descrizione comando che corrisponde a uno dei tipi indicati da *nTypes*, il gestore della descrizione comando crea un controllo ToolTip che è un'istanza della classe di runtime specificata da *PRTC* e passa i parametri specificati da *pParams* alla nuova descrizione comando.

Quando si chiama questo metodo, tutti i proprietari della descrizione comando esistenti ricevono il messaggio di AFX_WM_UPDATETOOLTIPS e devono ricreare le descrizioni comandi usando [CTooltipManager:: CreateToolTip](#createtooltip).

*nTypes* può essere qualsiasi combinazione dei tipi di descrizione comando validi usati da [CTooltipManager:: CreateToolTip](#createtooltip) oppure può essere AFX_TOOLTIP_TYPE_ALL. Se si passa AFX_TOOLTIP_TYPE_ALL, vengono interessati tutti i tipi di descrizione comando.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `SetTooltipParams` metodo della `CTooltipManager` classe. Questo frammento di codice fa parte dell' [esempio Draw Client](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#11](../../mfc/reference/codesnippet/cpp/ctooltipmanager-class_1.cpp)]

## <a name="ctooltipmanagersettooltiptext"></a><a name="settooltiptext"></a> CTooltipManager:: SetTooltipText

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

*pTI*<br/>
in Puntatore a un oggetto TOOLINFO.

*pToolTip*<br/>
[in, out] Puntatore al controllo ToolTip per il quale impostare il testo e la descrizione.

*nType*<br/>
in Specifica il tipo di controllo a cui è associata questa descrizione comando.

*strText*<br/>
in Testo da impostare come testo della descrizione comando.

*lpszDescr*<br/>
in Puntatore alla descrizione della descrizione comando. Può essere NULL.

### <a name="remarks"></a>Commenti

Il valore di *nType* deve essere uguale al parametro *nType* di [CTooltipManager:: CreateToolTip](#createtooltip) al momento della creazione della descrizione comando.

## <a name="ctooltipmanagerupdatetooltips"></a><a name="updatetooltips"></a> CTooltipManager:: UpdateTooltips

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```cpp
void UpdateTooltips();
```

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)<br/>
[Classe CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)
