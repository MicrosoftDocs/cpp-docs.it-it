---
description: 'Altre informazioni su: Classe CBaseTabbedPane'
title: CBaseTabbedPane (classe)
ms.date: 11/04/2016
f1_keywords:
- CBaseTabbedPane
- AFXBASETABBEDPANE/CBaseTabbedPane
- AFXBASETABBEDPANE/CBaseTabbedPane::AddTab
- AFXBASETABBEDPANE/CBaseTabbedPane::AllowDestroyEmptyTabbedPane
- AFXBASETABBEDPANE/CBaseTabbedPane::ApplyRestoredTabInfo
- AFXBASETABBEDPANE/CBaseTabbedPane::CanFloat
- AFXBASETABBEDPANE/CBaseTabbedPane::CanSetCaptionTextToTabName
- AFXBASETABBEDPANE/CBaseTabbedPane::ConvertToTabbedDocument
- AFXBASETABBEDPANE/CBaseTabbedPane::DetachPane
- AFXBASETABBEDPANE/CBaseTabbedPane::EnableSetCaptionTextToTabName
- AFXBASETABBEDPANE/CBaseTabbedPane::FillDefaultTabsOrderArray
- AFXBASETABBEDPANE/CBaseTabbedPane::FindBarByTabNumber
- AFXBASETABBEDPANE/CBaseTabbedPane::FindPaneByID
- AFXBASETABBEDPANE/CBaseTabbedPane::FloatTab
- AFXBASETABBEDPANE/CBaseTabbedPane::GetDefaultTabsOrder
- AFXBASETABBEDPANE/CBaseTabbedPane::GetFirstVisibleTab
- AFXBASETABBEDPANE/CBaseTabbedPane::GetMinSize
- AFXBASETABBEDPANE/CBaseTabbedPane::GetPaneIcon
- AFXBASETABBEDPANE/CBaseTabbedPane::GetPaneList
- AFXBASETABBEDPANE/CBaseTabbedPane::GetTabArea
- AFXBASETABBEDPANE/CBaseTabbedPane::GetTabsNum
- AFXBASETABBEDPANE/CBaseTabbedPane::GetUnderlyingWindow
- AFXBASETABBEDPANE/CBaseTabbedPane::GetVisibleTabsNum
- AFXBASETABBEDPANE/CBaseTabbedPane::HasAutoHideMode
- AFXBASETABBEDPANE/CBaseTabbedPane::IsHideSingleTab
- AFXBASETABBEDPANE/CBaseTabbedPane::RecalcLayout
- AFXBASETABBEDPANE/CBaseTabbedPane::RemovePane
- AFXBASETABBEDPANE/CBaseTabbedPane::SetAutoDestroy
- AFXBASETABBEDPANE/CBaseTabbedPane::SetAutoHideMode
- AFXBASETABBEDPANE/CBaseTabbedPane::ShowTab
helpviewer_keywords:
- CBaseTabbedPane [MFC], AddTab
- CBaseTabbedPane [MFC], AllowDestroyEmptyTabbedPane
- CBaseTabbedPane [MFC], ApplyRestoredTabInfo
- CBaseTabbedPane [MFC], CanFloat
- CBaseTabbedPane [MFC], CanSetCaptionTextToTabName
- CBaseTabbedPane [MFC], ConvertToTabbedDocument
- CBaseTabbedPane [MFC], DetachPane
- CBaseTabbedPane [MFC], EnableSetCaptionTextToTabName
- CBaseTabbedPane [MFC], FillDefaultTabsOrderArray
- CBaseTabbedPane [MFC], FindBarByTabNumber
- CBaseTabbedPane [MFC], FindPaneByID
- CBaseTabbedPane [MFC], FloatTab
- CBaseTabbedPane [MFC], GetDefaultTabsOrder
- CBaseTabbedPane [MFC], GetFirstVisibleTab
- CBaseTabbedPane [MFC], GetMinSize
- CBaseTabbedPane [MFC], GetPaneIcon
- CBaseTabbedPane [MFC], GetPaneList
- CBaseTabbedPane [MFC], GetTabArea
- CBaseTabbedPane [MFC], GetTabsNum
- CBaseTabbedPane [MFC], GetUnderlyingWindow
- CBaseTabbedPane [MFC], GetVisibleTabsNum
- CBaseTabbedPane [MFC], HasAutoHideMode
- CBaseTabbedPane [MFC], IsHideSingleTab
- CBaseTabbedPane [MFC], RecalcLayout
- CBaseTabbedPane [MFC], RemovePane
- CBaseTabbedPane [MFC], SetAutoDestroy
- CBaseTabbedPane [MFC], SetAutoHideMode
- CBaseTabbedPane [MFC], ShowTab
ms.assetid: f22c0080-5b29-4a0a-8f74-8f0a4cd2dbcf
ms.openlocfilehash: 980f2691aa9e129b0e47070d7ff095d486c45b65
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97122746"
---
# <a name="cbasetabbedpane-class"></a>CBaseTabbedPane (classe)

Estende la funzionalità della [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) per supportare la creazione di finestre a schede.

## <a name="syntax"></a>Sintassi

```
class CBaseTabbedPane : public CDockablePane
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CBaseTabbedPane::CBaseTabbedPane`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CBaseTabbedPane:: AddTab](#addtab)|Aggiunge una nuova scheda a un riquadro a schede.|
|[CBaseTabbedPane:: AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifica se è possibile eliminare definitivamente un riquadro a schede vuoto.|
|[CBaseTabbedPane:: ApplyRestoredTabInfo](#applyrestoredtabinfo)|Applica le impostazioni delle schede, caricate dal registro di sistema, in un riquadro a schede.|
|[CBaseTabbedPane:: CanFloat](#canfloat)|Determina se il riquadro può essere float. Esegue l'override di [CBasePane:: CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).|
|[CBaseTabbedPane:: CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determina se la didascalia del riquadro a schede deve visualizzare lo stesso testo della scheda attiva.|
|[CBaseTabbedPane:: ConvertToTabbedDocument](#converttotabbeddocument)|Esegue l'override di [CDockablePane:: ConvertToTabbedDocument](../../mfc/reference/cdockablepane-class.md#converttotabbeddocument).|
|[CBaseTabbedPane::D etachPane](#detachpane)|Converte uno o più riquadri ancorabili in documenti a schede MDI.|
|[CBaseTabbedPane:: EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname)|Abilita o Disabilita la funzionalità del riquadro a schede per sincronizzare il testo della didascalia con il testo dell'etichetta nella scheda attiva.|
|[CBaseTabbedPane:: FillDefaultTabsOrderArray](#filldefaulttabsorderarray)|Ripristina lo stato predefinito dell'ordine di tabulazione interno.|
|[CBaseTabbedPane:: FindBarByTabNumber](#findbarbytabnumber)|Restituisce un riquadro che risiede in una scheda quando la scheda è identificata da un indice di tabulazione in base zero.|
|[CBaseTabbedPane:: FindPaneByID](#findpanebyid)|Restituisce un riquadro identificato dall'ID del riquadro.|
|[CBaseTabbedPane:: FloatTab](#floattab)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile.|
|[CBaseTabbedPane:: GetDefaultTabsOrder](#getdefaulttabsorder)|Restituisce l'ordine predefinito delle schede nel riquadro.|
|[CBaseTabbedPane:: GetFirstVisibleTab](#getfirstvisibletab)|Recupera un puntatore alla prima scheda visualizzata.|
|[CBaseTabbedPane:: GetMinSize](#getminsize)|Recupera la dimensione minima consentita per il riquadro. Esegue l'override di [CPane:: GetMinSize](../../mfc/reference/cpane-class.md#getminsize).|
|[CBaseTabbedPane:: GetPaneIcon](#getpaneicon)|Restituisce un handle per l'icona del riquadro. Esegue l'override di [CBasePane:: GetPaneIcon](../../mfc/reference/cbasepane-class.md#getpaneicon).|
|[CBaseTabbedPane:: getpanell](#getpanelist)|Restituisce un elenco di riquadri contenuti nel riquadro a schede.|
|[CBaseTabbedPane:: GetTabArea](#gettabarea)|Restituisce i rettangoli di delimitazione per le aree superiore e inferiore della scheda.|
|[CBaseTabbedPane:: GetTabsNum](#gettabsnum)|Restituisce il numero di schede in una finestra di tabulazione.|
|[CBaseTabbedPane:: GetUnderlyingWindow](#getunderlyingwindow)|Ottiene la finestra della scheda sottostante (con incapsulamento).|
|[CBaseTabbedPane:: GetVisibleTabsNum](#getvisibletabsnum)|Restituisce il conteggio delle schede visualizzate.|
|[CBaseTabbedPane:: HasAutoHideMode](#hasautohidemode)|Determina se il riquadro a schede può essere impostato sulla modalità Nascondi automaticamente.|
|[CBaseTabbedPane:: IsHideSingleTab](#ishidesingletab)|Determina se il riquadro a schede è nascosto se viene visualizzata una sola scheda.|
|`CBaseTabbedPane::LoadSiblingPaneIDs`|Utilizzato internamente durante la serializzazione.|
|[CBaseTabbedPane:: RecalcLayout](#recalclayout)|Ricalcola le informazioni di layout per il riquadro. Esegue l'override di [CPane:: RecalcLayout](../../mfc/reference/cpane-class.md#recalclayout).|
|[CBaseTabbedPane:: RemovePane](#removepane)|Rimuove un riquadro dal riquadro a schede.|
|`CBaseTabbedPane::SaveSiblingBarIDs`|Utilizzato internamente durante la serializzazione.|
|`CBaseTabbedPane::Serialize`|Esegue l'override di [CDockablePane:: Serialize](cdockablepane-class.md).|
|`CBaseTabbedPane::SerializeTabWindow`|Utilizzato internamente durante la serializzazione.|
|[CBaseTabbedPane:: SetAutoDestroy](#setautodestroy)|Determina se la barra di controllo a schede verrà distrutta automaticamente.|
|[CBaseTabbedPane:: SetAutoHideMode](#setautohidemode)|Consente di alternare il riquadro di ancoraggio tra la modalità di visualizzazione e la modalità Nascondi automaticamente. Esegue l'override di [CDockablePane:: SetAutoHideMode](../../mfc/reference/cdockablepane-class.md#setautohidemode).|
|[CBaseTabbedPane:: ShowTab](#showtab)|Consente di visualizzare o nascondere una scheda.|

## <a name="remarks"></a>Commenti

Questa classe è una classe astratta e non è possibile crearne un'istanza. Implementa i servizi comuni a tutti i tipi di riquadri a schede.

Attualmente la libreria include due classi di riquadri a schede derivate: [classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md) e [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).

Un `CBaseTabbedPane` oggetto esegue il wrapping di un puntatore a un oggetto della [classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) . La [classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) diventa quindi una finestra figlio del riquadro a schede.

Per ulteriori informazioni sulla creazione di riquadri a schede, vedere classe [CDockablePane](../../mfc/reference/cdockablepane-class.md), [classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md)e [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

`CBaseTabbedPane`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxBaseTabbedPane. h

## <a name="cbasetabbedpaneaddtab"></a><a name="addtab"></a> CBaseTabbedPane:: AddTab

Aggiunge una nuova scheda a un riquadro a schede.

```
virtual BOOL AddTab(
    CWnd* pNewBar,
    BOOL bVisible = TRUE,
    BOOL bSetActive = TRUE,
    BOOL bDetachable = TRUE);
```

### <a name="parameters"></a>Parametri

*pNewBar*<br/>
[in, out] Puntatore al riquadro da aggiungere. Questo puntatore potrebbe non essere più valido dopo la chiamata a questo metodo. Per altre informazioni, vedere la sezione Osservazioni.

*bVisible*<br/>
in TRUE per rendere visibile la scheda; in caso contrario, FALSE.

*bSetActive*<br/>
in TRUE per rendere la scheda attiva. in caso contrario, FALSE.

*bDetachable*<br/>
in TRUE per rendere la scheda scollegabile; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è stato aggiunto correttamente come scheda e non è stato eliminato definitivamente nel processo. FALSE se il riquadro aggiunto è un oggetto di tipo `CBaseTabbedPane` . Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per aggiungere un riquadro come nuova scheda in un riquadro a schede. Se *pNewBar* punta a un oggetto di tipo `CBaseTabbedPane` , tutte le relative schede vengono copiate nel riquadro a schede e quindi *pNewBar* viene eliminato definitivamente. Pertanto, *pNewBar* diventa un puntatore non valido e non deve essere utilizzato.

## <a name="cbasetabbedpaneallowdestroyemptytabbedpane"></a><a name="allowdestroyemptytabbedpane"></a> CBaseTabbedPane:: AllowDestroyEmptyTabbedPane

Specifica se è possibile eliminare definitivamente un riquadro a schede vuoto.

```
virtual BOOL AllowDestroyEmptyTabbedPane() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è possibile eliminare definitivamente un riquadro a schede vuoto; in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Commenti

Se non è consentito eliminare definitivamente un riquadro a schede vuoto, il framework nasconde invece il riquadro.

## <a name="cbasetabbedpaneapplyrestoredtabinfo"></a><a name="applyrestoredtabinfo"></a> CBaseTabbedPane:: ApplyRestoredTabInfo

Carica le impostazioni delle schede dal registro di sistema e le applica a un riquadro a schede.

```
virtual void ApplyRestoredTabInfo(BOOL bUseTabIndexes = FALSE);
```

### <a name="parameters"></a>Parametri

*bUseTabIndexes*<br/>
in Questo parametro viene utilizzato internamente dal Framework.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato dal framework quando ricarica le informazioni sullo stato di ancoraggio dal registro di sistema. Il metodo ottiene informazioni sull'ordine di tabulazione e i nomi delle schede per un riquadro a schede.

## <a name="cbasetabbedpanecanfloat"></a><a name="canfloat"></a> CBaseTabbedPane:: CanFloat

Specifica se il riquadro a schede può essere float.

```
virtual BOOL CanFloat() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro può essere float; in caso contrario, FALSE.

## <a name="cbasetabbedpanecansetcaptiontexttotabname"></a><a name="cansetcaptiontexttotabname"></a> CBaseTabbedPane:: CanSetCaptionTextToTabName

Determina se la didascalia del riquadro a schede deve visualizzare lo stesso testo della scheda attiva.

```
virtual BOOL CanSetCaptionTextToTabName() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il testo della didascalia del riquadro a schede è impostato sul testo della scheda attiva; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Il metodo viene utilizzato per determinare se il testo visualizzato sulla didascalia del riquadro a schede Duplica l'etichetta della scheda attiva. È possibile abilitare o disabilitare questa funzionalità chiamando [CBaseTabbedPane:: EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname).

## <a name="cbasetabbedpaneconverttotabbeddocument"></a><a name="converttotabbeddocument"></a> CBaseTabbedPane:: ConvertToTabbedDocument

Converte uno o più riquadri ancorabili in documenti a schede MDI.

```
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```

### <a name="parameters"></a>Parametri

*bActiveTabOnly*<br/>
in Quando si converte un riquadro a schede, specificare TRUE per convertire solo la scheda attiva. Specificare FALSE per convertire tutte le schede nel riquadro.

## <a name="cbasetabbedpanedetachpane"></a><a name="detachpane"></a> CBaseTabbedPane::D etachPane

Scollega un riquadro dal riquadro a schede.

```
virtual BOOL DetachPane(
    CWnd* pBar,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
in Puntatore al riquadro da scollegare.

*bHide*<br/>
in Parametro booleano che specifica se il framework nasconde il riquadro dopo che è stato scollegato.

### <a name="return-value"></a>Valore restituito

TRUE se il Framework disconnette correttamente il riquadro; FALSE se *pBar* è null o fa riferimento a un riquadro che non si trova nel riquadro a schede.

### <a name="remarks"></a>Commenti

Se possibile, il Framework sposta il riquadro scollegato. Per ulteriori informazioni, vedere [CBasePane:: CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).

## <a name="cbasetabbedpaneenablesetcaptiontexttotabname"></a><a name="enablesetcaptiontexttotabname"></a> CBaseTabbedPane:: EnableSetCaptionTextToTabName

Abilita o Disabilita la funzionalità del riquadro a schede per sincronizzare il testo della didascalia con il testo dell'etichetta nella scheda attiva.

```
virtual void EnableSetCaptionTextToTabName(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per sincronizzare la didascalia del riquadro a schede con la didascalia della scheda attiva; in caso contrario, FALSE.

## <a name="cbasetabbedpanefilldefaulttabsorderarray"></a><a name="filldefaulttabsorderarray"></a> CBaseTabbedPane:: FillDefaultTabsOrderArray

Ripristina lo stato predefinito dell'ordine di tabulazione interno.

```cpp
void FillDefaultTabsOrderArray();
```

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato quando il Framework Ripristina uno stato iniziale di una barra di Outlook.

## <a name="cbasetabbedpanefindpanebyid"></a><a name="findpanebyid"></a> CBaseTabbedPane:: FindPaneByID

Restituisce un riquadro identificato dall'ID del riquadro.

```
virtual CWnd* FindPaneByID(UINT uBarID);
```

### <a name="parameters"></a>Parametri

*uBarID*<br/>
in Specifica l'ID del riquadro da trovare.

### <a name="return-value"></a>Valore restituito

Puntatore al riquadro se è stato trovato. in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Questo metodo confronta tutte le schede nel riquadro e restituisce quello con l'ID specificato dal parametro *uBarID* .

## <a name="cbasetabbedpanefindbarbytabnumber"></a><a name="findbarbytabnumber"></a> CBaseTabbedPane:: FindBarByTabNumber

Restituisce un riquadro che risiede in una scheda.

```
virtual CWnd* FindBarByTabNumber(
    int nTabNum,
    BOOL bGetWrappedBar = FALSE);
```

### <a name="parameters"></a>Parametri

*nTabNum*<br/>
in Specifica l'indice in base zero della scheda da recuperare.

*bGetWrappedBar*<br/>
in TRUE per restituire la finestra sottostante (di cui è stato eseguito il wrapper) del riquadro anziché il riquadro stesso; in caso contrario, FALSE. Questo vale solo per i riquadri derivati da [CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md).

### <a name="return-value"></a>Valore restituito

Se il riquadro viene trovato, viene restituito un puntatore valido al riquadro cercato. in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare il riquadro che risiede nella scheda specificata dal parametro *nTabNum* .

## <a name="cbasetabbedpanefloattab"></a><a name="floattab"></a> CBaseTabbedPane:: FloatTab

Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile.

```
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in, out] Puntatore al riquadro da float.

*nTabID*<br/>
in Specifica l'indice in base zero della scheda da fluttuare.

*dockMethod*<br/>
in Specifica il metodo da utilizzare per rendere float il riquadro. Per altre informazioni, vedere la sezione Osservazioni.

*bHide*<br/>
in TRUE per nascondere il riquadro prima del valore mobile; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è fluttuato; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per rendere mobile un riquadro che attualmente risiede in una scheda scollegabile.

Se si desidera scollegare un riquadro a livello di codice, specificare DM_SHOW per il parametro *dockMethod* . Se si vuole eseguire il Floating del riquadro nella stessa posizione in cui è stato eseguito il float in precedenza, specificare DM_DBL_CLICK come parametro *dockMethod* .

## <a name="cbasetabbedpanegetdefaulttabsorder"></a><a name="getdefaulttabsorder"></a> CBaseTabbedPane:: GetDefaultTabsOrder

Restituisce l'ordine predefinito delle schede nel riquadro.

```
const CArray<int,int>& GetDefaultTabsOrder();
```

### <a name="return-value"></a>Valore restituito

`CArray`Oggetto che specifica l'ordine predefinito delle schede nel riquadro.

### <a name="remarks"></a>Commenti

Il Framework chiama questo metodo quando una barra di Outlook viene reimpostata su uno stato iniziale.

## <a name="cbasetabbedpanegetfirstvisibletab"></a><a name="getfirstvisibletab"></a> CBaseTabbedPane:: GetFirstVisibleTab

Recupera un puntatore alla prima scheda visualizzata.

```
virtual CWnd* GetFirstVisibleTab(int& iTabNum);
```

### <a name="parameters"></a>Parametri

*iTabNum*<br/>
in Riferimento a un intero. Questo metodo scrive l'indice in base zero della prima scheda visualizzata in questo parametro oppure-1 se non viene trovata alcuna scheda visualizzata.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore alla prima scheda visualizzata; in caso contrario, NULL.

## <a name="cbasetabbedpanegetminsize"></a><a name="getminsize"></a> CBaseTabbedPane:: GetMinSize

Recupera la dimensione minima consentita per il riquadro.

```
virtual void GetMinSize(CSize& size) const;
```

### <a name="parameters"></a>Parametri

*size*<br/>
out `CSize` Oggetto riempito con la dimensione minima consentita.

### <a name="remarks"></a>Commenti

Se la gestione coerente delle dimensioni minime del riquadro è attiva ( [CPane:: m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), le *dimensioni* vengono riempite con la dimensione minima consentita per la scheda attiva. In caso contrario, la *dimensione* viene riempita con il valore restituito di [CPane:: GetMinSize](../../mfc/reference/cpane-class.md#getminsize).

## <a name="cbasetabbedpanegetpaneicon"></a><a name="getpaneicon"></a> CBaseTabbedPane:: GetPaneIcon

Recupera la dimensione minima consentita per il riquadro.

```
virtual void GetMinSize(CSize& size) const;
```

### <a name="parameters"></a>Parametri

*size*<br/>
out `CSize` Oggetto riempito con la dimensione minima consentita.

### <a name="remarks"></a>Commenti

Se la gestione coerente delle dimensioni minime del riquadro è attiva ( [CPane:: m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), le *dimensioni* vengono riempite con la dimensione minima consentita per la scheda attiva. In caso contrario, la *dimensione* viene riempita con il valore restituito di [CPane:: GetMinSize](../../mfc/reference/cpane-class.md#getminsize).

## <a name="cbasetabbedpanegetpanelist"></a><a name="getpanelist"></a> CBaseTabbedPane:: getpanell

Restituisce un elenco di riquadri contenuti nel riquadro a schede.

```
virtual void GetPaneList(
    CObList& lst,
    CRuntimeClass* pRTCFilter = NULL);
```

### <a name="parameters"></a>Parametri

*LST*<br/>
out Oggetto `CObList` riempito con i riquadri contenuti nel riquadro a schede.

*pRTCFilter*<br/>
in Se non è NULL, l'elenco restituito contiene solo i riquadri che sono della classe di runtime specificata.

## <a name="cbasetabbedpanegettabarea"></a><a name="gettabarea"></a> CBaseTabbedPane:: GetTabArea

Restituisce i rettangoli di delimitazione per le aree superiore e inferiore della scheda.

```
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const = 0;
```

### <a name="parameters"></a>Parametri

*rectTabAreaTop*<br/>
out Riceve le coordinate dello schermo dell'area della scheda superiore.

*rectTabAreaBottom*<br/>
out Riceve le coordinate dello schermo dell'area inferiore della scheda.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per determinare i rettangoli di delimitazione, nelle coordinate dello schermo, per le aree della scheda superiore e inferiore.

## <a name="cbasetabbedpanegettabsnum"></a><a name="gettabsnum"></a> CBaseTabbedPane:: GetTabsNum

Restituisce il numero di schede in una finestra di tabulazione.

```
virtual int GetTabsNum() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di schede nel riquadro a schede.

## <a name="cbasetabbedpanegetunderlyingwindow"></a><a name="getunderlyingwindow"></a> CBaseTabbedPane:: GetUnderlyingWindow

Ottiene la finestra della scheda sottostante (con incapsulamento).

```
virtual CMFCBaseTabCtrl* GetUnderlyingWindow();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra della scheda sottostante.

## <a name="cbasetabbedpanegetvisibletabsnum"></a><a name="getvisibletabsnum"></a> CBaseTabbedPane:: GetVisibleTabsNum

Restituisce il numero delle schede visibili.

```
virtual int GetVisibleTabsNum() const;
```

### <a name="return-value"></a>Valore restituito

Numero di schede visibili, che saranno maggiori o uguali a zero.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per determinare il numero di schede visibili nel riquadro a schede.

## <a name="cbasetabbedpanehasautohidemode"></a><a name="hasautohidemode"></a> CBaseTabbedPane:: HasAutoHideMode

Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente.

```
virtual BOOL HasAutoHideMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro può essere impostato sulla modalità Nascondi automaticamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Se la modalità Nascondi automaticamente è disabilitata, non viene visualizzato alcun pulsante pin nella didascalia del riquadro a schede.

## <a name="cbasetabbedpaneishidesingletab"></a><a name="ishidesingletab"></a> CBaseTabbedPane:: IsHideSingleTab

Determina se il riquadro a schede è nascosto se viene visualizzata una sola scheda.

```
virtual BOOL IsHideSingleTab() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la finestra della scheda non viene visualizzata quando è presente una sola scheda visibile; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Se il riquadro non viene visualizzato perché è aperta una sola scheda, è possibile chiamare questo metodo per determinare se il riquadro a schede funziona correttamente.

## <a name="cbasetabbedpaneremovepane"></a><a name="removepane"></a> CBaseTabbedPane:: RemovePane

Rimuove un riquadro dal riquadro a schede.

```
virtual BOOL RemovePane(CWnd* pBar);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in, out] Puntatore al riquadro da rimuovere dal riquadro a schede.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è stato rimosso correttamente dal riquadro a schede e se il riquadro a schede è ancora valido. FALSE se l'ultimo riquadro è stato rimosso dal riquadro a schede e il riquadro a schede sta per essere eliminato definitivamente. Se il valore restituito è FALSE, non usare più il riquadro a schede.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per rimuovere il riquadro specificato dal parametro *pBar* dal riquadro a schede.

## <a name="cbasetabbedpanesetautodestroy"></a><a name="setautodestroy"></a> CBaseTabbedPane:: SetAutoDestroy

Determina se la barra di controllo a schede verrà distrutta automaticamente.

```cpp
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoDestroy*<br/>
in TRUE se il riquadro a schede è stato creato dinamicamente e non si sta controllando la durata; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Impostare la modalità di eliminazione automatica su TRUE se si crea un riquadro a schede in modo dinamico e se non si controlla la relativa durata. Se la modalità di eliminazione automatica è TRUE, il riquadro a schede verrà eliminato automaticamente dal Framework.

## <a name="cbasetabbedpaneshowtab"></a><a name="showtab"></a> CBaseTabbedPane:: ShowTab

Consente di visualizzare o nascondere una scheda.

```
virtual BOOL ShowTab(
    CWnd* pBar,
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
in Puntatore al riquadro da visualizzare o nascondere.

*bShow*<br/>
in TRUE per visualizzare il riquadro; FALSE per nascondere il riquadro.

*bDelay*<br/>
in TRUE per ritardare la regolazione del layout della scheda; in caso contrario, FALSE.

*bActivate*<br/>
in TRUE per rendere la scheda attiva. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se la scheda è stata visualizzata o nascosta correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Quando si chiama questo metodo, un riquadro viene visualizzato o nascosto, a seconda del valore del parametro *bShow* . Se si nasconde una scheda ed è l'ultima scheda visibile nella finestra della scheda sottostante, il riquadro a schede è nascosto. Se si visualizza una scheda quando in precedenza non sono presenti schede visibili, viene visualizzato il riquadro a schede.

## <a name="cbasetabbedpanerecalclayout"></a><a name="recalclayout"></a> CBaseTabbedPane:: RecalcLayout

Ricalcola le informazioni di layout per il riquadro.

```
virtual void RecalcLayout();
```

### <a name="remarks"></a>Commenti

Se il riquadro è mobile, questo metodo notifica al Framework di ridimensionare il riquadro alla dimensione corrente del mini-frame.

Se il riquadro è ancorato, questo metodo non esegue alcuna operazione.

## <a name="cbasetabbedpanesetautohidemode"></a><a name="setautohidemode"></a> CBaseTabbedPane:: SetAutoHideMode

Imposta la modalità Nascondi automaticamente per i riquadri rimovibili nel riquadro a schede.

```
virtual CMFCAutoHideToolBar* SetAutoHideMode(
    BOOL bMode,
    DWORD dwAlignment,
    CMFCAutoHideToolBar* pCurrAutoHideBar = NULL,
    BOOL bUseTimer = TRUE);
```

### <a name="parameters"></a>Parametri

*bMode*<br/>
in TRUE per abilitare la modalità Nascondi automaticamente; FALSE per abilitare la modalità di ancoraggio normale.

*dwAlignment*<br/>
in Specifica l'allineamento del riquadro Nascondi automaticamente da creare. Per un elenco di valori possibili, vedere [CPane:: MoveByAlignment](../../mfc/reference/cpane-class.md#movebyalignment).

*pCurrAutoHideBar*<br/>
[in, out] Puntatore alla barra degli strumenti Nascondi automaticamente corrente. Può essere NULL.

*bUseTimer*<br/>
in Specifica se utilizzare l'effetto Nascondi automaticamente quando l'utente passa al riquadro in modalità Nascondi automaticamente oppure se deve essere nascosto immediatamente.

### <a name="return-value"></a>Valore restituito

Puntatore alla barra degli strumenti Nascondi automaticamente creato quando si passa alla modalità Nascondi automaticamente o NULL se non viene creata alcuna barra degli strumenti.

### <a name="remarks"></a>Commenti

Il Framework chiama questo metodo quando un utente sceglie il pulsante Aggiungi per cambiare il riquadro a schede in modalità Nascondi automaticamente o in modalità di ancoraggio normale.

La modalità Nascondi automaticamente è impostata per ogni riquadro scollegabile nel riquadro a schede. I riquadri non rimovibili vengono ignorati. Per ulteriori informazioni, vedere [CMFCBaseTabCtrl:: EnableTabDetach](../../mfc/reference/cmfcbasetabctrl-class.md#enabletabdetach).

Chiamare questo metodo per passare a un riquadro a schede per la modalità Nascondi automaticamente a livello di codice. Il riquadro deve essere ancorato alla finestra cornice principale ( [CDockablePane:: GetDefaultPaneDivider](../../mfc/reference/cdockablepane-class.md#getdefaultpanedivider) deve restituire un puntatore valido a [CPaneDivider](../../mfc/reference/cpanedivider-class.md)).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)
