---
title: Classe CSnapInItemImpl
ms.date: 11/04/2016
f1_keywords:
- CSnapInItemImpl
- ATLSNAP/ATL::CSnapInItemImpl
- ATLSNAP/ATL::CSnapInItemImpl::CSnapInItemImpl
- ATLSNAP/ATL::CSnapInItemImpl::AddMenuItems
- ATLSNAP/ATL::CSnapInItemImpl::Command
- ATLSNAP/ATL::CSnapInItemImpl::CreatePropertyPages
- ATLSNAP/ATL::CSnapInItemImpl::FillData
- ATLSNAP/ATL::CSnapInItemImpl::GetResultPaneInfo
- ATLSNAP/ATL::CSnapInItemImpl::GetResultViewType
- ATLSNAP/ATL::CSnapInItemImpl::GetScopePaneInfo
- ATLSNAP/ATL::CSnapInItemImpl::Notify
- ATLSNAP/ATL::CSnapInItemImpl::QueryPagesFor
- ATLSNAP/ATL::CSnapInItemImpl::SetMenuInsertionFlags
- ATLSNAP/ATL::CSnapInItemImpl::SetToolbarButtonInfo
- ATLSNAP/ATL::CSnapInItemImpl::UpdateMenuState
- ATLSNAP/ATL::CSnapInItemImpl::UpdateToolbarButton
- ATLSNAP/ATL::CSnapInItemImpl::m_bstrDisplayName
- ATLSNAP/ATL::CSnapInItemImpl::m_resultDataItem
- ATLSNAP/ATL::CSnapInItemImpl::m_scopeDataItem
helpviewer_keywords:
- snap-ins, data items
- snap-ins, ATL support for
- CSnapInItemImpl class
- snap-ins
ms.assetid: 52caefbd-9eae-49b0-add2-d55524271aa7
ms.openlocfilehash: a9ebcf8827d79a9613ce14251d361dd607aa6af3
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496554"
---
# <a name="csnapinitemimpl-class"></a>Classe CSnapInItemImpl

Questa classe fornisce metodi per l'implementazione di un oggetto nodo di snap-in.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, BOOL bIsExtension = FALSE>
class ATL_NO_VTABLE CSnapInItemImpl : public CSnapInItem
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `CSnapInItemImpl`.

*bIsExtension*<br/>
TRUE se l'oggetto è un'estensione dello snap-in. in caso contrario, FALSE.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSnapInItemImpl::CSnapInItemImpl](#csnapinitemimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CSnapInItemImpl::AddMenuItems](#addmenuitems)|Aggiunge voci di menu a un menu di scelta rapida.|
|[CSnapInItemImpl::Command](#command)|Chiamato dalla console quando viene selezionata una voce di menu personalizzata.|
|[CSnapInItemImpl::CreatePropertyPages](#createpropertypages)|Aggiunge pagine alla finestra delle proprietà dello snap-in.|
|[CSnapInItemImpl::FillData](#filldata)|Copia le informazioni sull'oggetto snap-in in un flusso specificato.|
|[CSnapInItemImpl::GetResultPaneInfo](#getresultpaneinfo)|Recupera la `RESULTDATAITEM` struttura dello snap-in.|
|[CSnapInItemImpl::GetResultViewType](#getresultviewtype)|Determina il tipo di visualizzazione utilizzato dal riquadro dei risultati.|
|[CSnapInItemImpl::GetScopePaneInfo](#getscopepaneinfo)|Recupera la `SCOPEDATAITEM` struttura dello snap-in.|
|[CSnapInItemImpl::Notify](#notify)|Chiamato dalla console per notificare lo snap-in delle azioni eseguite dall'utente.|
|[CSnapInItemImpl::QueryPagesFor](#querypagesfor)|Chiamata eseguita per verificare se il nodo snap-in supporta le pagine delle proprietà.|
|[CSnapInItemImpl::SetMenuInsertionFlags](#setmenuinsertionflags)|Modifica i flag di inserimento dei menu per un oggetto snap-in.|
|[CSnapInItemImpl::SetToolbarButtonInfo](#settoolbarbuttoninfo)|Imposta le informazioni del pulsante della barra degli strumenti specificato.|
|[CSnapInItemImpl::UpdateMenuState](#updatemenustate)|Aggiorna lo stato di una voce di menu di scelta rapida.|
|[CSnapInItemImpl::UpdateToolbarButton](#updatetoolbarbutton)|Aggiorna lo stato del pulsante della barra degli strumenti specificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CSnapInItemImpl::m_bstrDisplayName](#m_bstrdisplayname)|Nome dell'oggetto snap-in.|
|[CSnapInItemImpl::m_resultDataItem](#m_resultdataitem)|`RESULTDATAITEM` Struttura`CSnapInItemImpl` di Windows utilizzata dall'oggetto.|
|[CSnapInItemImpl::m_scopeDataItem](#m_scopedataitem)|`SCOPEDATAITEM` Struttura`CSnapInItemImpl` di Windows utilizzata dall'oggetto.|

## <a name="remarks"></a>Note

`CSnapInItemImpl`fornisce un'implementazione di base per un oggetto nodo di snap-in, ad esempio l'aggiunta di voci di menu e barre degli strumenti e l'invio di comandi per il nodo snap-in alla funzione del gestore appropriata. Queste funzionalità vengono implementate utilizzando diverse interfacce e tipi di mappa. L'implementazione predefinita gestisce le notifiche inviate all'oggetto nodo determinando l'istanza corretta della classe derivata e quindi inoltrando il messaggio all'istanza corretta.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CSnapInItem`

`CSnapInItemImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsnap. h

##  <a name="addmenuitems"></a>  CSnapInItemImpl::AddMenuItems

Questo metodo implementa la funzione Win32 [IExtendContextMenu:: AddMenuItems](/windows/win32/api/mmc/nf-mmc-iextendcontextmenu-addmenuitems).

```
AddMenuItems(
    LPCONTEXTMENUCALLBACK piCallback,
    long* pInsertionAllowed,
    DATA_OBJECT_TYPES type);
```

### <a name="parameters"></a>Parametri

*piCallback*<br/>
in Puntatore all'oggetto `IContextMenuCallback` che può aggiungere elementi al menu di scelta rapida.

*pInsertionAllowed*<br/>
[in, out] Identifica i punti di inserimento di voci di menu di Microsoft Management Console (MMC) che è possibile utilizzare. Può trattarsi di una combinazione dei flag seguenti:

- Gli elementi CCM_INSERTIONALLOWED_TOP possono essere inseriti nella parte superiore di un menu di scelta rapida.

- Gli elementi CCM_INSERTIONALLOWED_NEW possono essere inseriti nel sottomenu Crea nuovo.

- Gli elementi CCM_INSERTIONALLOWED_TASK possono essere inseriti nel sottomenu attività.

- Gli elementi CCM_INSERTIONALLOWED_VIEW possono essere inseriti nel menu di visualizzazione della barra degli strumenti o nel sottomenu Visualizza del menu di scelta rapida del riquadro risultati.

*type*<br/>
in Specifica il tipo di oggetto. Può avere uno dei valori seguenti:

- Oggetto dati CCT_SCOPE per il contesto del riquadro ambito.

- Oggetto dati CCT_RESULT per il contesto del riquadro risultati.

- Oggetto dati CCT_SNAPIN_MANAGER per il contesto di gestione snap-in.

- Il tipo dell'oggetto dati CCT_UNINITIALIZED non è valido.

##  <a name="command"></a>  CSnapInItemImpl::Command

Questo metodo implementa la funzione Win32 [IExtendContextMenu:: Command](/windows/win32/api/mmc/nf-mmc-iextendcontextmenu-command).

```
Command(long lCommandID, DATA_OBJECT_TYPES type);
```

### <a name="parameters"></a>Parametri

*lCommandID*<br/>
in Specifica l'identificatore del comando della voce di menu.

*type*<br/>
in Specifica il tipo di oggetto. Può avere uno dei valori seguenti:

- Oggetto dati CCT_SCOPE per il contesto del riquadro ambito.

- Oggetto dati CCT_RESULT per il contesto del riquadro risultati.

- Oggetto dati CCT_SNAPIN_MANAGER per il contesto di gestione snap-in.

- Il tipo dell'oggetto dati CCT_UNINITIALIZED non è valido.

##  <a name="createpropertypages"></a>  CSnapInItemImpl::CreatePropertyPages

Questo metodo implementa la funzione Win32 [IExtendPropertySheet:: CreatePropertyPages](/windows/win32/api/mmc/nn-mmc-iextendpropertysheet2).

```
CreatePropertyPages(
    LPPROPERTYSHEETCALLBACK lpProvider,
    long handle,
    IUnknown* pUnk,
    DATA_OBJECT_TYPES type);
```

### <a name="parameters"></a>Parametri

*lpProvider*<br/>
in Puntatore all' `IPropertySheetCallback` interfaccia.

*gestire*<br/>
in Specifica l'handle utilizzato per indirizzare il messaggio di notifica MMCN_PROPERTY_CHANGE alla classe di dati appropriata.

*pUnk*<br/>
in Puntatore all' `IExtendPropertySheet` interfaccia nell'oggetto che contiene le informazioni di contesto relative al nodo.

*type*<br/>
in Specifica il tipo di oggetto. Può avere uno dei valori seguenti:

- Oggetto dati CCT_SCOPE per il contesto del riquadro ambito.

- Oggetto dati CCT_RESULT per il contesto del riquadro risultati.

- Oggetto dati CCT_SNAPIN_MANAGER per il contesto di gestione snap-in.

- Il tipo dell'oggetto dati CCT_UNINITIALIZED non è valido.

##  <a name="csnapinitemimpl"></a>  CSnapInItemImpl::CSnapInItemImpl

Costruisce un oggetto `CSnapInItemImpl`.

```
CSnapInItemImpl();
```

##  <a name="filldata"></a>  CSnapInItemImpl::FillData

Questa funzione viene chiamata per recuperare le informazioni sull'elemento.

```
FillData(CLIPFORMAT cf, LPSTREAM pStream);
```

### <a name="parameters"></a>Parametri

*cf*<br/>
in Formato (testo, testo RTF o testo RTF con elementi OLE) degli Appunti.

*pStream*<br/>
in Puntatore al flusso contenente i dati dell'oggetto.

### <a name="remarks"></a>Note

Per implementare correttamente questa funzione, copiare le informazioni corrette nel flusso (*pStream*), in base al formato degli Appunti indicato da *CF*.

##  <a name="getresultviewtype"></a>  CSnapInItemImpl::GetResultViewType

Chiamare questa funzione per recuperare il tipo di visualizzazione per il riquadro dei risultati dell'oggetto snap-in.

```
GetResultViewType(
    LPOLESTR* ppViewType,
    long* pViewOptions);
```

### <a name="parameters"></a>Parametri

*ppViewType*<br/>
out Puntatore all'indirizzo del tipo di visualizzazione restituito.

*pViewOptions*<br/>
out Puntatore all'enumerazione MMC_VIEW_OPTIONS, che fornisce alla console le opzioni specificate dallo snap-in proprietario. Il valore può essere uno dei seguenti:

- MMC_VIEW_OPTIONS_NOLISTVIEWS = 0x00000001 indica alla console di evitare di presentare scelte di visualizzazione elenco standard dal menu **Visualizza** . Consente allo snap-in di visualizzare le proprie visualizzazioni personalizzate solo nel riquadro di visualizzazione dei risultati. Questo è l'unico flag di opzione definito in questo momento.

- MMC_VIEW_OPTIONS_NONE = 0 consente le opzioni di visualizzazione predefinite.

##  <a name="getscopepaneinfo"></a>  CSnapInItemImpl::GetScopePaneInfo

Chiamare questa funzione per recuperare la `SCOPEDATAITEM` struttura dello snap-in.

```
GetScopePaneInfo (SCOPEDATAITEM* pScopeDataItem);
```

### <a name="parameters"></a>Parametri

*pScopeDataItem*<br/>
out Puntatore alla `SCOPEDATAITEM` struttura `CSnapInItemImpl` dell'oggetto.

##  <a name="getresultpaneinfo"></a>  CSnapInItemImpl::GetResultPaneInfo

Chiamare questa funzione per recuperare la `RESULTDATAITEM` struttura dello snap-in.

```
GetResultPaneInfo (RESULTDATAITEM* pResultDataItem);
```

### <a name="parameters"></a>Parametri

*pResultDataItem*<br/>
out Puntatore alla `RESULTDATAITEM` struttura `CSnapInItemImpl` dell'oggetto.

##  <a name="m_bstrdisplayname"></a>  CSnapInItemImpl::m_bstrDisplayName

Contiene la stringa visualizzata per l'elemento del nodo.

```
CComBSTR m_bstrDisplayName;
```

##  <a name="m_scopedataitem"></a>  CSnapInItemImpl::m_scopeDataItem

`SCOPEDATAITEM` Struttura dell'oggetto dati dello snap-in.

```
SCOPEDATAITEM m_scopeDataItem;
```

##  <a name="m_resultdataitem"></a>  CSnapInItemImpl::m_resultDataItem

Struttura [RESULTDATAITEM](/windows/win32/api/mmc/ns-mmc-resultdataitem) dell'oggetto dati dello snap-in.

```
RESULTDATAITEM m_resultDataItem;
```

##  <a name="notify"></a>  CSnapInItemImpl::Notify

Chiamato quando l'oggetto snap-in viene utilizzato dall'utente.

```
STDMETHOD(Notify)(
    MMC_NOTIFY_TYPE event,
    long arg,
    long param,
    IComponentData* pComponentData,
    IComponent* pComponent,
    DATA_OBJECT_TYPES type) = 0;
```

### <a name="parameters"></a>Parametri

*event*<br/>
in Identifica un'azione eseguita da un utente. Sono possibili le notifiche seguenti:

- MMCN_ACTIVATE inviato quando una finestra viene attivata e disattivata.

- MMCN_ADD_IMAGES inviati per aggiungere immagini al riquadro dei risultati.

- MMCN_BTN_CLICK inviato quando l'utente fa clic su uno dei pulsanti della barra degli strumenti.

- MMCN_CLICK inviato quando un utente fa clic con un pulsante del mouse su un elemento della visualizzazione elenco.

- MMCN_DBLCLICK inviato quando un utente fa doppio clic con un pulsante del mouse su un elemento della visualizzazione elenco.

- MMCN_DELETE inviato per informare lo snap-in che l'oggetto deve essere eliminato.

- MMCN_EXPAND inviato quando è necessario espandere o contrarre una cartella.

- MMCN_MINIMIZED inviati quando una finestra viene ridotta a icona o ingrandita.

- MMCN_PROPERTY_CHANGE inviato per notificare a un oggetto snap-in che la visualizzazione dell'oggetto snap-in sta per essere modificata.

- MMCN_REMOVE_CHILDREN inviati quando lo snap-in deve eliminare l'intero sottoalbero aggiunto al di sotto del nodo specificato.

- MMCN_RENAME inviato la prima volta per eseguire una query per una ridenominazione e la seconda volta per eseguire la ridenominazione.

- MMCN_SELECT inviato quando viene selezionato un elemento nel riquadro dell'ambito o della visualizzazione dei risultati.

- MMCN_SHOW inviato quando un elemento scope viene selezionato o deselezionato per la prima volta.

- MMCN_VIEW_CHANGE inviato quando lo snap-in può aggiornare tutte le visualizzazioni quando si verifica una modifica.

*arg*<br/>
in Dipende dal tipo di notifica.

*param*<br/>
in Dipende dal tipo di notifica.

*pComponentData*<br/>
out Puntatore all'oggetto che implementa `IComponentData`. Questo parametro è NULL se la notifica non viene trasmessa da `IComponentData::Notify`.

*pComponent*<br/>
out Puntatore all'oggetto che implementa `IComponent`. Questo parametro è NULL se la notifica non viene trasmessa da `IComponent::Notify`.

*type*<br/>
in Specifica il tipo di oggetto. Può avere uno dei valori seguenti:

- Oggetto dati CCT_SCOPE per il contesto del riquadro ambito.

- Oggetto dati CCT_RESULT per il contesto del riquadro risultati.

- Oggetto dati CCT_SNAPIN_MANAGER per il contesto di gestione snap-in.

- Il tipo dell'oggetto dati CCT_UNINITIALIZED non è valido.

##  <a name="querypagesfor"></a>  CSnapInItemImpl::QueryPagesFor

Chiamata eseguita per verificare se il nodo snap-in supporta le pagine delle proprietà.

```
QueryPagesFor(DATA_OBJECT_TYPES type);
```

##  <a name="setmenuinsertionflags"></a>  CSnapInItemImpl::SetMenuInsertionFlags

Chiamare questa funzione per modificare i flag di inserimento dei menu, specificati da *pInsertionAllowed*, per l'oggetto snap-in.

```
void SetMenuInsertionFlags(
    bool bBeforeInsertion,
    long* pInsertionAllowed);
```

### <a name="parameters"></a>Parametri

*bBeforeInsertion*<br/>
in Diverso da zero se la funzione deve essere chiamata prima che gli elementi vengano aggiunti al menu di scelta rapida; in caso contrario, 0.

*pInsertionAllowed*<br/>
[in, out] Identifica i punti di inserimento di voci di menu di Microsoft Management Console (MMC) che è possibile utilizzare. Può trattarsi di una combinazione dei flag seguenti:

- Gli elementi CCM_INSERTIONALLOWED_TOP possono essere inseriti nella parte superiore di un menu di scelta rapida.

- Gli elementi CCM_INSERTIONALLOWED_NEW possono essere inseriti nel sottomenu Crea nuovo.

- Gli elementi CCM_INSERTIONALLOWED_TASK possono essere inseriti nel sottomenu attività.

- Gli elementi CCM_INSERTIONALLOWED_VIEW possono essere inseriti nel menu di visualizzazione della barra degli strumenti o nel sottomenu Visualizza del menu di scelta rapida del riquadro risultati.

### <a name="remarks"></a>Note

Se si sviluppa uno snap-in principale, è possibile reimpostare i flag di inserimento come metodo per limitare il tipo di voci di menu che possono essere aggiunte da un'estensione di terze parti. Ad esempio, lo snap-in primario può cancellare il flag CCM_INSERTIONALLOWED_NEW per impedire alle estensioni di aggiungere le proprie voci di menu create new.

Non tentare di impostare BITS in *pInsertionAllowed* che sono stati cancellati in origine. Le versioni future di MMC possono utilizzare BITS non attualmente definite, pertanto non è necessario modificare i bit che non sono attualmente definiti.

##  <a name="settoolbarbuttoninfo"></a>  CSnapInItemImpl::SetToolbarButtonInfo

Chiamare questa funzione per modificare gli stili dei pulsanti della barra degli strumenti, dell'oggetto snap-in, prima della creazione della barra degli strumenti.

```
void SetToolbarButtonInfo(
    UINT id,
    BYTE* fsState,
    BYTE* fsType);
```

### <a name="parameters"></a>Parametri

*id*<br/>
in ID del pulsante della barra degli strumenti da impostare.

*fsState*<br/>
in Flag di stato del pulsante. Può essere uno o più degli elementi seguenti:

- TBSTATE_CHECKED il pulsante ha lo stile TBSTYLE_CHECKED ed è in corso la pressione.

- TBSTATE_ENABLED il pulsante accetta l'input dell'utente. Un pulsante che non dispone di questo stato non accetta l'input dell'utente ed è disattivato.

- TBSTATE_HIDDEN il pulsante non è visibile e non è in grado di ricevere l'input dell'utente.

- TBSTATE_INDETERMINATE il pulsante è disattivato.

- TBSTATE_PRESSED è in corso la pressione del pulsante.

- TBSTATE_WRAP un'interruzioni di riga segue il pulsante. Il pulsante deve avere anche TBSTATE_ENABLED.

*fsType*<br/>
in Flag di stato del pulsante. Può essere uno o più degli elementi seguenti:

- TBSTYLE_BUTTON crea un pulsante di push standard.

- TBSTYLE_CHECK crea un pulsante che alterna gli stati premuto e non premuto ogni volta che l'utente fa clic su di esso. Il pulsante ha un colore di sfondo diverso quando si trova nello stato premuto.

- TBSTYLE_CHECKGROUP crea un pulsante di controllo che rimane premuto fino a quando non viene premuto un altro pulsante del gruppo.

- TBSTYLE_GROUP crea un pulsante che rimane premuto fino a quando non viene premuto un altro pulsante del gruppo.

- TBSTYLE_SEP crea un separatore che fornisce un piccolo gap tra i gruppi di pulsanti. Un pulsante con questo stile non riceve l'input dell'utente.

##  <a name="updatemenustate"></a>  CSnapInItemImpl::UpdateMenuState

Chiamare questa funzione per modificare una voce di menu prima che venga inserita nel menu di scelta rapida dell'oggetto snap-in.

```
void UpdateMenuState(
    UINT id,
    LPTSTR pBuf,
    UINT* flags);
```

### <a name="parameters"></a>Parametri

*id*<br/>
in ID della voce di menu da impostare.

*pBuf*<br/>
in Puntatore alla stringa per la voce di menu da aggiornare.

*flags*<br/>
in Specifica i nuovi flag di stato. Può trattarsi di una combinazione dei flag seguenti:

- MF_POPUP specifica che si tratta di un sottomenu nel menu di scelta rapida. Le voci di menu, i punti di inserimento e i `lCommandID` sottomenu aggiuntivi possono essere aggiunti a questo sottomenu utilizzando `IInsertionPointID`come.

- MF_BITMAP e MF_OWNERDRAW questi flag non sono consentiti e restituiranno un valore restituito di E_INVALIDARG.

- MF_SEPARATOR disegna una linea di divisione orizzontale. È `IContextMenuProvider` consentito solo l'aggiunta di voci di menu con MF_SEPARATOR impostato.

- MF_CHECKED posiziona un segno di spunta accanto alla voce di menu.

- MF_DISABLED disabilita la voce di menu in modo che non possa essere selezionata, ma il flag non è grigio.

- MF_ENABLED Abilita la voce di menu in modo da poterla selezionare, ripristinando lo stato in grigio.

- MF_GRAYED disabilita la voce di menu, in modo che non possa essere selezionata.

- MF_MENUBARBREAK funziona allo stesso modo del flag MF_MENUBREAK per una barra dei menu. Per un menu a discesa, un sottomenu o un menu di scelta rapida, la nuova colonna viene separata dalla colonna precedente con una linea verticale.

- MF_MENUBREAK posiziona l'elemento su una nuova riga (per una barra dei menu) o in una nuova colonna (per un menu a discesa, un sottomenu o un menu di scelta rapida) senza separare le colonne.

- MF_UNCHECKED non inserisce un segno di spunta accanto all'elemento (impostazione predefinita).

Non è possibile usare contemporaneamente i gruppi di flag seguenti:

- MF_DISABLED, MF_ENABLED e MF_GRAYED.

- MF_MENUBARBREAK e MF_MENUBREAK.

- MF_CHECKED e MF_UNCHECKED.

##  <a name="updatetoolbarbutton"></a>  CSnapInItemImpl::UpdateToolbarButton

Chiamare questa funzione per modificare un pulsante della barra degli strumenti, dell'oggetto snap-in, prima che venga visualizzato.

```
BOOL UpdateToolbarButton(UINT id, BYTE fsState);
```

### <a name="parameters"></a>Parametri

*id*<br/>
Specifica l'ID del pulsante della barra degli strumenti da aggiornare.

*fsState*<br/>
Specifica lo stato di un pulsante della barra degli strumenti. Se questo stato deve essere impostato, restituisce TRUE. Può trattarsi di una combinazione dei flag seguenti:

- ABILITATO il pulsante accetta l'input dell'utente. Un pulsante che non dispone di questo stato non accetta l'input dell'utente ed è disattivato.

- Il pulsante è selezionato e viene premuto lo stile selezionato.

- Il pulsante nascosto non è visibile e non è in grado di ricevere l'input dell'utente.

- Indeterminato. il pulsante è disattivato.

- BUTTONPRESSED è in corso la pressione del pulsante.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
