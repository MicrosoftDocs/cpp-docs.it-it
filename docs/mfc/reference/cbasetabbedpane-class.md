---
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
ms.openlocfilehash: ce7c48263ed511545757c94d61552e6206e74a00
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352861"
---
# <a name="cbasetabbedpane-class"></a>CBaseTabbedPane (classe)

Estende la funzionalità della [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) per supportare la creazione di finestre a schede.

## <a name="syntax"></a>Sintassi

```
class CBaseTabbedPane : public CDockablePane
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CBaseTabbedPane::CBaseTabbedPane`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBaseTabbedPane::AddTab](#addtab)|Aggiunge una nuova scheda a un riquadro a schede.|
|[CBaseTabbedPane::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifica se un riquadro a schede vuoto può essere eliminato.|
|[CBaseTabbedPane::ApplyRestoredTabInfo](#applyrestoredtabinfo)|Applica le impostazioni delle schede, che vengono caricate dal Registro di sistema, a un riquadro a schede.|
|[CBaseTabbedPane::CanFloat](#canfloat)|Determina se il riquadro può essere mobile. (Esegue l'override di [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).)|
|[CBaseTabbedPane::CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determina se la didascalia per il riquadro a schede deve visualizzare lo stesso testo della scheda attiva.|
|[CBaseTabbedPane::ConvertToTabbedDocument](#converttotabbeddocument)|(Overrides [CDockablePane::ConvertToTabbedDocument.)](../../mfc/reference/cdockablepane-class.md#converttotabbeddocument)|
|[CBaseTabbedPane::DetachPane](#detachpane)|Converte uno o più riquadri ancorabili in documenti a schede MDI.|
|[CBaseTabbedPane::EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname)|Abilita o disabilita la possibilità del riquadro a schede di sincronizzare il testo della didascalia con il testo dell'etichetta nella scheda attiva.|
|[CBaseTabbedPane::FillDefaultTabsOrderArray](#filldefaulttabsorderarray)|Ripristina l'ordine di tabulazione interno a uno stato predefinito.|
|[CBaseTabbedPane::FindBarByTabNumber](#findbarbytabnumber)|Restituisce un riquadro che si trova in una scheda quando la scheda è identificata da un indice di tabulazione in base zero.|
|||
|[CBaseTabbedPane::FindPaneByID](#findpanebyid)|Restituisce un riquadro identificato dall'ID del riquadro.|
|[CBaseTabbedPane::FloatTab](#floattab)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile.|
|[CBaseTabbedPane::GetDefaultTabsOrder](#getdefaulttabsorder)|Restituisce l'ordine predefinito delle schede nel riquadro.|
|[CBaseTabbedPane::GetFirstVisibleTab](#getfirstvisibletab)|Recupera un puntatore alla prima scheda visualizzata.|
|[CBaseTabbedPane::GetMinSize](#getminsize)|Recupera le dimensioni minime consentite per il riquadro. (Sostituisce [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).)|
|[CBaseTabbedPane::GetPaneIcon](#getpaneicon)|Restituisce un handle per l'icona del riquadro. (Esegue l'override di [CBasePane::GetPaneIcon](../../mfc/reference/cbasepane-class.md#getpaneicon).)|
|[CBaseTabbedPane::GetPaneList](#getpanelist)|Restituisce un elenco di riquadri contenuti nel riquadro a schede.|
|[CBaseTabbedPane::GetTabArea](#gettabarea)|Restituisce i rettangoli di delimitazione per le aree della scheda superiore e inferiore.|
|[CBaseTabbedPane::GetTabsNum](#gettabsnum)|Restituisce il numero di schede in una finestra delle schede.|
|[CBaseTabbedPane::GetUnderlyingWindow](#getunderlyingwindow)|Ottiene la finestra della scheda sottostante (a capo).|
|[CBaseTabbedPane::GetVisibleTabsNum](#getvisibletabsnum)|Restituisce il numero di schede visualizzate.|
|[CBaseTabbedPane::HasAutoHideMode](#hasautohidemode)|Determina se il riquadro a schede può essere attivato alla modalità Nascondi automaticamente.|
|[CBaseTabbedPane::IsHideSingleTab](#ishidesingletab)|Determina se il riquadro a schede è nascosto se viene visualizzata una sola scheda.|
|`CBaseTabbedPane::LoadSiblingPaneIDs`|Utilizzato internamente durante la serializzazione.|
|[CBaseTabbedPane::RecalcLayout](#recalclayout)|Ricalcola le informazioni di layout per il riquadro. (Sostituisce [CPane::RecalcLayout](../../mfc/reference/cpane-class.md#recalclayout).)|
|[CBaseTabbedPane::RemovePane](#removepane)|Rimuove un riquadro dal riquadro a schede.|
|`CBaseTabbedPane::SaveSiblingBarIDs`|Utilizzato internamente durante la serializzazione.|
|`CBaseTabbedPane::Serialize`|(Esegue l'override di [CDockablePane::Serialize](cdockablepane-class.md).)|
|`CBaseTabbedPane::SerializeTabWindow`|Utilizzato internamente durante la serializzazione.|
|[CBaseTabbedPane::SetAutoDestroy](#setautodestroy)|Determina se la barra di controllo a schede verrà eliminata automaticamente.|
|[CBaseTabbedPane::SetAutoHideMode](#setautohidemode)|Alterna il riquadro ancorato tra la modalità visualizzata e la modalità Nascondi automaticamente. (Overrides [CDockablePane::SetAutoHideMode](../../mfc/reference/cdockablepane-class.md#setautohidemode).)|
|[CBaseTabbedPane::ShowTab](#showtab)|Mostra o nasconde una scheda.|

## <a name="remarks"></a>Osservazioni

Questa classe è una classe astratta e non è possibile crearne un'istanza. Implementa i servizi comuni a tutti i tipi di riquadri a schede.

Attualmente, la libreria include due classi derivate del riquadro a schede: [CTabbedPane (classe)](../../mfc/reference/ctabbedpane-class.md) e [CMFCOutlookBar (classe).](../../mfc/reference/cmfcoutlookbar-class.md)

Oggetto `CBaseTabbedPane` oggetto esegue il wrapping di un puntatore a un [CMFCBaseTabCtrl classe](../../mfc/reference/cmfcbasetabctrl-class.md) oggetto. [CMFCBaseTabCtrl classe](../../mfc/reference/cmfcbasetabctrl-class.md) diventa quindi una finestra figlio del riquadro a schede.

Per ulteriori informazioni sulla creazione di riquadri a schede, vedere [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md), [Classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md)e [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

`CBaseTabbedPane`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxBaseTabbedPane.h

## <a name="cbasetabbedpaneaddtab"></a><a name="addtab"></a>CBaseTabbedPane::AddTab

Aggiunge una nuova scheda a un riquadro a schede.

```
virtual BOOL AddTab(
    CWnd* pNewBar,
    BOOL bVisible = TRUE,
    BOOL bSetActive = TRUE,
    BOOL bDetachable = TRUE);
```

### <a name="parameters"></a>Parametri

*pNewBar (informazioni in stato inquestoendo*<br/>
[in, out] Puntatore al riquadro da aggiungere. Questo puntatore potrebbe diventare non valido dopo la chiamata a questo metodo. Per altre informazioni, vedere la sezione Osservazioni.

*bVisibile*<br/>
[in] TRUE per rendere visibile la scheda; in caso contrario, FALSE.

*bAttivo*<br/>
[in] TRUE per rendere la scheda la scheda attiva; in caso contrario, FALSE.

*bDetachable*<br/>
[in] TRUE per rendere la scheda rimovibile; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro è stato aggiunto correttamente come una scheda e non è stato eliminato nel processo. FALSE se il riquadro da `CBaseTabbedPane`aggiungere è un oggetto di tipo . Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per aggiungere un riquadro come nuova scheda in un riquadro a schede. Se *pNewBar* punta a `CBaseTabbedPane`un oggetto di tipo , tutte le relative schede vengono copiate nel riquadro a schede e quindi *pNewBar* viene eliminato. Pertanto, *pNewBar* diventa un puntatore non valido e non deve essere utilizzato.

## <a name="cbasetabbedpaneallowdestroyemptytabbedpane"></a><a name="allowdestroyemptytabbedpane"></a>CBaseTabbedPane::AllowDestroyEmptyTabbedPane

Specifica se un riquadro a schede vuoto può essere eliminato.

```
virtual BOOL AllowDestroyEmptyTabbedPane() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe un riquadro a schede vuoto può essere eliminato. in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Se un riquadro a schede vuoto non può essere eliminato, il framework nasconde invece il riquadro.

## <a name="cbasetabbedpaneapplyrestoredtabinfo"></a><a name="applyrestoredtabinfo"></a>CBaseTabbedPane::ApplyRestoredTabInfo

Carica le impostazioni della scheda dal Registro di sistema e le applica a un riquadro a schede.

```
virtual void ApplyRestoredTabInfo(BOOL bUseTabIndexes = FALSE);
```

### <a name="parameters"></a>Parametri

*bUseTabIndexes*<br/>
[in] Questo parametro viene utilizzato internamente dal framework.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework quando ricarica le informazioni sullo stato di ancoraggio dal Registro di sistema. Il metodo ottiene informazioni sull'ordine di tabulazione e sui nomi delle schede per un riquadro a schede.

## <a name="cbasetabbedpanecanfloat"></a><a name="canfloat"></a>CBaseTabbedPane::CanFloat

Specifica se il riquadro a schede può essere mobile.

```
virtual BOOL CanFloat() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro può essere mobile; in caso contrario, FALSE.

## <a name="cbasetabbedpanecansetcaptiontexttotabname"></a><a name="cansetcaptiontexttotabname"></a>CBaseTabbedPane::CanSetCaptionTextToTabName

Determina se la didascalia per il riquadro a schede deve visualizzare lo stesso testo della scheda attiva.

```
virtual BOOL CanSetCaptionTextToTabName() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il testo della didascalia del riquadro a schede è impostato sul testo della scheda attiva; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il metodo viene utilizzato per determinare se il testo visualizzato nella didascalia del riquadro a schede duplica l'etichetta della scheda attiva. È possibile abilitare o disabilitare questa funzionalità chiamando [CBaseTabbedPane::EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname).

## <a name="cbasetabbedpaneconverttotabbeddocument"></a><a name="converttotabbeddocument"></a>CBaseTabbedPane::ConvertToTabbedDocument

Converte uno o più riquadri ancorabili in documenti a schede MDI.

```
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```

### <a name="parameters"></a>Parametri

*bActiveTabOnly (solo)*<br/>
[in] Quando si converte un riquadro a schede, specificare TRUE per convertire solo la scheda attiva. Specificare FALSE per convertire tutte le schede nel riquadro.

## <a name="cbasetabbedpanedetachpane"></a><a name="detachpane"></a>CBaseTabbedPane::DetachPane

Scollega un riquadro dal riquadro a schede.

```
virtual BOOL DetachPane(
    CWnd* pBar,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore al riquadro da scollegare.

*bHide*<br/>
[in] Parametro booleano che specifica se il framework nasconde il riquadro dopo che è stato scollegato.

### <a name="return-value"></a>Valore restituito

TRUESe il framework scollega correttamente il riquadro. FALSE se *pBar* è NULL o fa riferimento a un riquadro che non si trova nel riquadro a schede.

### <a name="remarks"></a>Osservazioni

Il framework sposta il riquadro scollegato, se possibile. Per ulteriori informazioni, vedere [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).

## <a name="cbasetabbedpaneenablesetcaptiontexttotabname"></a><a name="enablesetcaptiontexttotabname"></a>CBaseTabbedPane::EnableSetCaptionTextToTabName

Abilita o disabilita la possibilità del riquadro a schede di sincronizzare il testo della didascalia con il testo dell'etichetta nella scheda attiva.

```
virtual void EnableSetCaptionTextToTabName(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per sincronizzare la didascalia del riquadro a schede con la didascalia della scheda attiva; in caso contrario, FALSE.

## <a name="cbasetabbedpanefilldefaulttabsorderarray"></a><a name="filldefaulttabsorderarray"></a>CBaseTabbedPane::FillDefaultTabsOrderArray

Ripristina l'ordine di tabulazione interno a uno stato predefinito.

```
void FillDefaultTabsOrderArray();
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato quando il framework ripristina una barra di Outlook a uno stato iniziale.

## <a name="cbasetabbedpanefindpanebyid"></a><a name="findpanebyid"></a>CBaseTabbedPane::FindPaneByID

Restituisce un riquadro identificato dall'ID del riquadro.

```
virtual CWnd* FindPaneByID(UINT uBarID);
```

### <a name="parameters"></a>Parametri

*uBarID (IDbarraina)*<br/>
[in] Specifica l'ID del riquadro da trovare.

### <a name="return-value"></a>Valore restituito

Un puntatore al riquadro se è stato trovato; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo confronta tutte le schede nel riquadro e restituisce quello con l'ID specificato dal *uBarID* parametro.

## <a name="cbasetabbedpanefindbarbytabnumber"></a><a name="findbarbytabnumber"></a>CBaseTabbedPane::FindBarByTabNumber

Restituisce un riquadro che si trova in una scheda.

```
virtual CWnd* FindBarByTabNumber(
    int nTabNum,
    BOOL bGetWrappedBar = FALSE);
```

### <a name="parameters"></a>Parametri

*nTabNum*<br/>
[in] Specifica l'indice in base zero della scheda da recuperare.

*bGetWrappedBar (Informazioni in la barra dei pali anni)*<br/>
[in] TRUE per restituire la finestra sottostante (incapsulata) del riquadro anziché il riquadro stesso; in caso contrario, FALSE. Questo vale solo per i riquadri derivati da [CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md).

### <a name="return-value"></a>Valore restituito

Se il riquadro viene trovato, viene restituito un puntatore valido al riquadro cercato; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il riquadro che risieda nella scheda specificata dal *nTabNum* parametro.

## <a name="cbasetabbedpanefloattab"></a><a name="floattab"></a>CBaseTabbedPane::FloatTab

Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile.

```
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide = FALSE);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in, out] Puntatore al riquadro da rendere mobile.

*nTabID (informazioni in stato in cui è stato*<br/>
[in] Specifica l'indice in base zero della scheda da rendere mobile.

*dockMethod*<br/>
[in] Specifica il metodo da utilizzare per rendere mobile il riquadro. Per altre informazioni, vedere la sezione Osservazioni.

*bHide*<br/>
[in] TRUE per nascondere il riquadro prima di fluttuare; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro mobile; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per rendere mobile un riquadro che attualmente si trova in una scheda rimovibile.

Se si desidera scollegare un riquadro a livello di codice, specificare DM_SHOW per il *dockMethod* parametro. Se si desidera rendere mobile il riquadro nella stessa posizione in cui è stato mobile in precedenza, specificare DM_DBL_CLICK come parametro *dockMethod.*

## <a name="cbasetabbedpanegetdefaulttabsorder"></a><a name="getdefaulttabsorder"></a>CBaseTabbedPane::GetDefaultTabsOrder

Restituisce l'ordine predefinito delle schede nel riquadro.

```
const CArray<int,int>& GetDefaultTabsOrder();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CArray` che specifica l'ordine predefinito delle schede nel riquadro.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando una barra di Outlook viene reimpostata su uno stato iniziale.

## <a name="cbasetabbedpanegetfirstvisibletab"></a><a name="getfirstvisibletab"></a>CBaseTabbedPane::GetFirstVisibleTab

Recupera un puntatore alla prima scheda visualizzata.

```
virtual CWnd* GetFirstVisibleTab(int& iTabNum);
```

### <a name="parameters"></a>Parametri

*iTabNum*<br/>
[in] Riferimento a un numero intero. Questo metodo scrive l'indice in base zero della prima scheda visualizzata in questo parametro oppure -1 se non viene trovata alcuna scheda visualizzata.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore alla prima scheda visualizzata; in caso contrario, NULL.

## <a name="cbasetabbedpanegetminsize"></a><a name="getminsize"></a>CBaseTabbedPane::GetMinSize

Recupera le dimensioni minime consentite per il riquadro.

```
virtual void GetMinSize(CSize& size) const;
```

### <a name="parameters"></a>Parametri

*Dimensione*<br/>
[fuori] Oggetto `CSize` riempito con le dimensioni minime consentite.

### <a name="remarks"></a>Osservazioni

Se è attiva una gestione coerente delle dimensioni minime del riquadro ( [CPane::m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), le *dimensioni* vengono [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize)riempite con le dimensioni minime consentite per la scheda *attiva.*

## <a name="cbasetabbedpanegetpaneicon"></a><a name="getpaneicon"></a>CBaseTabbedPane::GetPaneIcon

Recupera le dimensioni minime consentite per il riquadro.

```
virtual void GetMinSize(CSize& size) const;
```

### <a name="parameters"></a>Parametri

*Dimensione*<br/>
[fuori] Oggetto `CSize` riempito con le dimensioni minime consentite.

### <a name="remarks"></a>Osservazioni

Se è attiva una gestione coerente delle dimensioni minime del riquadro ( [CPane::m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), le *dimensioni* vengono [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize)riempite con le dimensioni minime consentite per la scheda *attiva.*

## <a name="cbasetabbedpanegetpanelist"></a><a name="getpanelist"></a>CBaseTabbedPane::GetPaneList

Restituisce un elenco di riquadri contenuti nel riquadro a schede.

```
virtual void GetPaneList(
    CObList& lst,
    CRuntimeClass* pRTCFilter = NULL);
```

### <a name="parameters"></a>Parametri

*Lst*<br/>
[fuori] Oggetto `CObList` riempito con i riquadri contenuti nel riquadro a schede.

*filtro pRTC*<br/>
[in] Se non è NULL, l'elenco restituito contiene solo i riquadri che sono della classe di runtime specificata.

## <a name="cbasetabbedpanegettabarea"></a><a name="gettabarea"></a>CBaseTabbedPane::GetTabArea

Restituisce i rettangoli di delimitazione per le aree della scheda superiore e inferiore.

```
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const = 0;
```

### <a name="parameters"></a>Parametri

*rectTabAreaTop*<br/>
[fuori] Riceve le coordinate dello schermo dell'area della linguetta superiore.

*rectTabAreaBottom*<br/>
[fuori] Riceve le coordinate dello schermo dell'area della scheda inferiore.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per determinare i rettangoli di delimitazione, in coordinate dello schermo, per le aree di tabulazione superiore e inferiore.

## <a name="cbasetabbedpanegettabsnum"></a><a name="gettabsnum"></a>CBaseTabbedPane::GetTabsNum

Restituisce il numero di schede in una finestra delle schede.

```
virtual int GetTabsNum() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di schede nel riquadro a schede.

## <a name="cbasetabbedpanegetunderlyingwindow"></a><a name="getunderlyingwindow"></a>CBaseTabbedPane::GetUnderlyingWindow

Ottiene la finestra della scheda sottostante (a capo).

```
virtual CMFCBaseTabCtrl* GetUnderlyingWindow();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra della scheda sottostante.

## <a name="cbasetabbedpanegetvisibletabsnum"></a><a name="getvisibletabsnum"></a>CBaseTabbedPane::GetVisibleTabsNum

Restituisce il numero di schede visibili.

```
virtual int GetVisibleTabsNum() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di schede visibili, che sarà maggiore o uguale a zero.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per determinare il numero di schede visibili nel riquadro a schede.

## <a name="cbasetabbedpanehasautohidemode"></a><a name="hasautohidemode"></a>CBaseTabbedPane::HasAutoHideMode

Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente.

```
virtual BOOL HasAutoHideMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro può essere attivata la modalità Nascondi automaticamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se la modalità Nascondi automaticamente è disattivata, nella didascalia del riquadro a schede non viene visualizzato alcun pulsante di spostamento.

## <a name="cbasetabbedpaneishidesingletab"></a><a name="ishidesingletab"></a>CBaseTabbedPane::IsHideSingleTab

Determina se il riquadro a schede è nascosto se viene visualizzata una sola scheda.

```
virtual BOOL IsHideSingleTab() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la finestra della scheda non viene visualizzata quando è presente una sola scheda visibile; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se il riquadro non viene visualizzato perché è aperta una sola scheda, è possibile chiamare questo metodo per determinare se il riquadro a schede funziona correttamente.

## <a name="cbasetabbedpaneremovepane"></a><a name="removepane"></a>CBaseTabbedPane::RemovePane

Rimuove un riquadro dal riquadro a schede.

```
virtual BOOL RemovePane(CWnd* pBar);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in, out] Puntatore al riquadro da rimuovere dal riquadro a schede.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro è stato rimosso correttamente dal riquadro a schede e se il riquadro a schede è ancora valido. FALSE se l'ultimo riquadro è stato rimosso dal riquadro a schede e il riquadro a schede sta per essere eliminato. Se il valore restituito è FALSE, non utilizzare più il riquadro a schede.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per rimuovere il riquadro specificato dal *parametro pBar* dal riquadro a schede.

## <a name="cbasetabbedpanesetautodestroy"></a><a name="setautodestroy"></a>CBaseTabbedPane::SetAutoDestroy

Determina se la barra di controllo a schede verrà eliminata automaticamente.

```
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoDistruggi*<br/>
[in] TRUESe il riquadro a schede è stato creato in modo dinamico e non si ne controlla la durata. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Impostare la modalità di eliminazione automatica su TRUE se si crea un riquadro a schede in modo dinamico e se non si ne controlla la durata. Se la modalità di eliminazione automatica è TRUE, il riquadro a schede verrà eliminato automaticamente dal framework.

## <a name="cbasetabbedpaneshowtab"></a><a name="showtab"></a>CBaseTabbedPane::ShowTab

Mostra o nasconde una scheda.

```
virtual BOOL ShowTab(
    CWnd* pBar,
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore al riquadro da visualizzare o nascondere.

*bShow*<br/>
[in] TRUE per visualizzare il riquadro; FALSE per nascondere il riquadro.

*bRitarda*<br/>
[in] TRUE per ritardare la regolazione del layout di tabulazione; in caso contrario, FALSE.

*bActivate*<br/>
[in] TRUE per rendere la scheda la scheda attiva; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUESe la scheda è stata visualizzata o nascosta correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Quando si chiama questo metodo, un riquadro viene visualizzato o nascosto, a seconda del valore del *bShow* parametro. Se si nasconde una scheda ed è l'ultima scheda visibile nella finestra della scheda sottostante, il riquadro a schede viene nascosto. Se si visualizza una scheda quando in precedenza non erano visibili schede, viene visualizzato il riquadro a schede.

## <a name="cbasetabbedpanerecalclayout"></a><a name="recalclayout"></a>CBaseTabbedPane::RecalcLayout

Ricalcola le informazioni di layout per il riquadro.

```
virtual void RecalcLayout();
```

### <a name="remarks"></a>Osservazioni

Se il riquadro è mobile, questo metodo notifica al framework di ridimensionare il riquadro in base alle dimensioni correnti del miniframe.

Se il riquadro è ancorato, questo metodo non esegue alcuna operazione.

## <a name="cbasetabbedpanesetautohidemode"></a><a name="setautohidemode"></a>CBaseTabbedPane::SetAutoHideMode

Imposta la modalità Nascondi automaticamente per i riquadri rimovibili nel riquadro a schede.

```
virtual CMFCAutoHideToolBar* SetAutoHideMode(
    BOOL bMode,
    DWORD dwAlignment,
    CMFCAutoHideToolBar* pCurrAutoHideBar = NULL,
    BOOL bUseTimer = TRUE);
```

### <a name="parameters"></a>Parametri

*bModalità*<br/>
[in] TRUE per abilitare la modalità Nascondi automaticamente; FALSE per abilitare la normale modalità di ancoraggio.

*dwAllineamento*<br/>
[in] Specifica l'allineamento del riquadro Nascondi automaticamente da creare. Per un elenco dei valori possibili, vedere [CPane::MoveByAlignment](../../mfc/reference/cpane-class.md#movebyalignment).

*pCurrAutoHideBar*<br/>
[in, out] Puntatore alla barra degli strumenti Nascondi automaticamente corrente. Può essere NULL.

*bUso*<br/>
[in] Specifica se utilizzare l'effetto Nascondi automaticamente quando l'utente passa alla modalità Nascondi automaticamente o nascondere immediatamente il riquadro.

### <a name="return-value"></a>Valore restituito

Puntatore alla barra degli strumenti Nascondi automaticamente creata quando si passa alla modalità Nascondi automaticamente oppure NULL se non viene creata alcuna barra degli strumenti.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando un utente sceglie il pulsante di spostamento per passare il riquadro a schede alla modalità Nascondi automaticamente o alla normale modalità di ancoraggio.

La modalità Nascondi automaticamente è impostata per ogni riquadro rimovibile nel riquadro a schede. I riquadri non rimovibili vengono ignorati. Per ulteriori informazioni, vedere [CMFCBaseTabCtrl::EnableTabDetach](../../mfc/reference/cmfcbasetabctrl-class.md#enabletabdetach).

Chiamare questo metodo per passare un riquadro a schede alla modalità Nascondi automaticamente a livello di codice. Il riquadro deve essere ancorato alla finestra cornice principale ( [CDockablePane::GetDefaultPaneDivider](../../mfc/reference/cdockablepane-class.md#getdefaultpanedivider) deve restituire un puntatore valido a [CPaneDivider](../../mfc/reference/cpanedivider-class.md)).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)
