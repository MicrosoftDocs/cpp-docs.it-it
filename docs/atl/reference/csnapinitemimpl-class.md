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
ms.openlocfilehash: 04eeba0239789b9f3220b7bfece3eb41dc7f2826
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81746423"
---
# <a name="csnapinitemimpl-class"></a>Classe CSnapInItemImpl

Questa classe fornisce metodi per l'implementazione di un oggetto nodo snap-in.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, BOOL bIsExtension = FALSE>
class ATL_NO_VTABLE CSnapInItemImpl : public CSnapInItem
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `CSnapInItemImpl`derivata da .

*bEstensione di bIs*<br/>
TRUESe l'oggetto è un'estensione snap-in. in caso contrario, FALSE.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSnapInItemImpl::CSnapInItemImpl](#csnapinitemimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSnapInItemImpl::AddMenuItems](#addmenuitems)|Aggiunge voci di menu a un menu di scelta rapida.|
|[CSnapInItemImpl::Comando](#command)|Chiamato dalla console quando viene selezionata una voce di menu personalizzata.|
|[CSnapInItemImpl::CreatePropertyPages](#createpropertypages)|Aggiunge pagine alla finestra delle proprietà dello snap-in.|
|[CSnapInItemImpl::FillData](#filldata)|Copia le informazioni sull'oggetto snap-in in un flusso specificato.|
|[CSnapInItemImpl::GetResultPaneInfo](#getresultpaneinfo)|Recupera la `RESULTDATAITEM` struttura dello snap-in.|
|[CSnapInItemImpl::GetResultViewType](#getresultviewtype)|Determina il tipo di visualizzazione utilizzato dal riquadro dei risultati.|
|[CSnapInItemImpl::GetScopePaneInfo](#getscopepaneinfo)|Recupera la `SCOPEDATAITEM` struttura dello snap-in.|
|[CSnapInItemImpl::Notify](#notify)|Chiamato dalla console per notificare allo snap-in le azioni eseguite dall'utente.|
|[CSnapInItemImpl::QueryPagesPer](#querypagesfor)|Chiamato per verificare se il nodo dello snap-in supporta le pagine delle proprietà.|
|[CSnapInItemImpl::SetMenuInsertionFlags](#setmenuinsertionflags)|Modifica i flag di inserimento di menu per un oggetto snap-in.|
|[CSnapInItemImpl::SetToolbarButtonInfo](#settoolbarbuttoninfo)|Imposta le informazioni del pulsante della barra degli strumenti specificato.|
|[CSnapInItemImpl::UpdateMenuState](#updatemenustate)|Aggiorna lo stato di una voce di menu di scelta rapida.|
|[CSnapInItemImpl::UpdateToolbarButton](#updatetoolbarbutton)|Aggiorna lo stato del pulsante della barra degli strumenti specificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSnapInItemImpl::m_bstrDisplayName](#m_bstrdisplayname)|Nome dell'oggetto snap-in.|
|[CSnapInItemImpl::m_resultDataItem](#m_resultdataitem)|Struttura `RESULTDATAITEM` Windows utilizzata `CSnapInItemImpl` dall'oggetto.|
|[CSnapInItemImpl::m_scopeDataItem](#m_scopedataitem)|Struttura `SCOPEDATAITEM` Windows utilizzata `CSnapInItemImpl` dall'oggetto.|

## <a name="remarks"></a>Osservazioni

`CSnapInItemImpl`fornisce un'implementazione di base per un oggetto nodo snap-in, ad esempio l'aggiunta di voci di menu e barre degli strumenti e l'inoltro di comandi per il nodo dello snap-in alla funzione di gestione appropriata. Queste funzionalità vengono implementate utilizzando diverse interfacce e tipi di mappa. L'implementazione predefinita gestisce le notifiche inviate all'oggetto node determinando l'istanza corretta della classe derivata e quindi inoltrando il messaggio all'istanza corretta.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CSnapInItem`

`CSnapInItemImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsnap.h

## <a name="csnapinitemimpladdmenuitems"></a><a name="addmenuitems"></a>CSnapInItemImpl::AddMenuItems

Questo metodo implementa la funzione Win32 [IExtendContextMenu::AddMenuItems](/windows/win32/api/mmc/nf-mmc-iextendcontextmenu-addmenuitems).

```
AddMenuItems(
    LPCONTEXTMENUCALLBACK piCallback,
    long* pInsertionAllowed,
    DATA_OBJECT_TYPES type);
```

### <a name="parameters"></a>Parametri

*piCallback*<br/>
[in] Puntatore `IContextMenuCallback` all'oggetto che può aggiungere voci al menu di scelta rapida.

*pInsertionAllowed*<br/>
[in, out] Identifica i punti di inserimento delle voci di menu definiti da Microsoft Management Console (MMC) che possono essere utilizzati. Può trattarsi di una combinazione dei seguenti flag:

- CCM_INSERTIONALLOWED_TOP elementi possono essere inseriti nella parte superiore di un menu di scelta rapida.

- CCM_INSERTIONALLOWED_NEW elementi possono essere inseriti nel sottomenu Crea nuovo.

- CCM_INSERTIONALLOWED_TASK Elementi possono essere inseriti nel sottomenu Attività.

- CCM_INSERTIONALLOWED_VIEW elementi possono essere inseriti nel menu della visualizzazione della barra degli strumenti o nel sottomenu Visualizza del menu di scelta rapida del riquadro dei risultati.

*type*<br/>
[in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:

- CCT_SCOPE oggetto Data per il contesto del riquadro ambito.

- CCT_RESULT oggetto dati per il contesto del riquadro dei risultati.

- CCT_SNAPIN_MANAGER oggetto data per il contesto di gestione snap-in.

- CCT_UNINITIALIZEDoggetto Data ha un tipo non valido.

## <a name="csnapinitemimplcommand"></a><a name="command"></a>CSnapInItemImpl::Comando

Questo metodo implementa la funzione Win32 [IExtendContextMenu::Command](/windows/win32/api/mmc/nf-mmc-iextendcontextmenu-command).

```
Command(long lCommandID, DATA_OBJECT_TYPES type);
```

### <a name="parameters"></a>Parametri

*lCommandID (IDcomando)*<br/>
[in] Specifica l'identificatore di comando della voce di menu.

*type*<br/>
[in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:

- CCT_SCOPE oggetto Data per il contesto del riquadro ambito.

- CCT_RESULT oggetto dati per il contesto del riquadro dei risultati.

- CCT_SNAPIN_MANAGER oggetto data per il contesto di gestione snap-in.

- CCT_UNINITIALIZEDoggetto Data ha un tipo non valido.

## <a name="csnapinitemimplcreatepropertypages"></a><a name="createpropertypages"></a>CSnapInItemImpl::CreatePropertyPages

Questo metodo implementa la funzione Win32 [IExtendPropertySheet::CreatePropertyPages](/windows/win32/api/mmc/nn-mmc-iextendpropertysheet2).

```
CreatePropertyPages(
    LPPROPERTYSHEETCALLBACK lpProvider,
    long handle,
    IUnknown* pUnk,
    DATA_OBJECT_TYPES type);
```

### <a name="parameters"></a>Parametri

*LpProvider (informazioni in base al fatto di*<br/>
[in] Puntatore all'interfaccia `IPropertySheetCallback`.

*Gestire*<br/>
[in] Specifica l'handle utilizzato per instradare il messaggio di notifica MMCN_PROPERTY_CHANGE alla classe di dati appropriata.

*Punk*<br/>
[in] Puntatore `IExtendPropertySheet` all'interfaccia sull'oggetto che contiene informazioni di contesto sul nodo.

*type*<br/>
[in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:

- CCT_SCOPE oggetto Data per il contesto del riquadro ambito.

- CCT_RESULT oggetto dati per il contesto del riquadro dei risultati.

- CCT_SNAPIN_MANAGER oggetto data per il contesto di gestione snap-in.

- CCT_UNINITIALIZEDoggetto Data ha un tipo non valido.

## <a name="csnapinitemimplcsnapinitemimpl"></a><a name="csnapinitemimpl"></a>CSnapInItemImpl::CSnapInItemImpl

Costruisce un oggetto `CSnapInItemImpl`.

```
CSnapInItemImpl();
```

## <a name="csnapinitemimplfilldata"></a><a name="filldata"></a>CSnapInItemImpl::FillData

Questa funzione viene chiamata per recuperare informazioni sull'elemento.

```
FillData(CLIPFORMAT cf, LPSTREAM pStream);
```

### <a name="parameters"></a>Parametri

*Cfr*<br/>
[in] Formato (testo, RTF o RTF con elementi OLE) degli Appunti.

*pStream (corso)*<br/>
[in] Puntatore al flusso contenente i dati dell'oggetto.

### <a name="remarks"></a>Osservazioni

Per implementare correttamente questa funzione, copiare le informazioni corrette nel flusso (*pStream*), a seconda del formato degli Appunti indicato da *cf*.

## <a name="csnapinitemimplgetresultviewtype"></a><a name="getresultviewtype"></a>CSnapInItemImpl::GetResultViewType

Chiamare questa funzione per recuperare il tipo di visualizzazione per il riquadro dei risultati dell'oggetto snap-in.

```
GetResultViewType(
    LPOLESTR* ppViewType,
    long* pViewOptions);
```

### <a name="parameters"></a>Parametri

*ppViewType (tipo ppViewType)*<br/>
[fuori] Puntatore all'indirizzo del tipo di visualizzazione restituito.

*pViewOpzioni*<br/>
[fuori] Puntatore all'enumerazione MMC_VIEW_OPTIONS, che fornisce alla console le opzioni specificate dallo snap-in proprietario. I valori validi sono i seguenti:

- MMC_VIEW_OPTIONS_NOLISTVIEWS 0x00000001 Indica alla console di non presentare le opzioni di visualizzazione elenco standard nel menu **Visualizza.** Consente allo snap-in di visualizzare le proprie visualizzazioni personalizzate solo nel riquadro di visualizzazione dei risultati. Questo è l'unico flag di opzione definito in questo momento.

- MMC_VIEW_OPTIONS_NONE - 0 Consente le opzioni di visualizzazione predefinite.

## <a name="csnapinitemimplgetscopepaneinfo"></a><a name="getscopepaneinfo"></a>CSnapInItemImpl::GetScopePaneInfo

Chiamare questa funzione `SCOPEDATAITEM` per recuperare la struttura dello snap-in.

```
GetScopePaneInfo (SCOPEDATAITEM* pScopeDataItem);
```

### <a name="parameters"></a>Parametri

*pScopeDataItem (elemento)*<br/>
[fuori] Puntatore alla `SCOPEDATAITEM` struttura `CSnapInItemImpl` dell'oggetto.

## <a name="csnapinitemimplgetresultpaneinfo"></a><a name="getresultpaneinfo"></a>CSnapInItemImpl::GetResultPaneInfo

Chiamare questa funzione `RESULTDATAITEM` per recuperare la struttura dello snap-in.

```
GetResultPaneInfo (RESULTDATAITEM* pResultDataItem);
```

### <a name="parameters"></a>Parametri

*pResultDataItem (elemento pResultDataItem)*<br/>
[fuori] Puntatore alla `RESULTDATAITEM` struttura `CSnapInItemImpl` dell'oggetto.

## <a name="csnapinitemimplm_bstrdisplayname"></a><a name="m_bstrdisplayname"></a>CSnapInItemImpl::m_bstrDisplayName

Contiene la stringa visualizzata per l'elemento del nodo.

```
CComBSTR m_bstrDisplayName;
```

## <a name="csnapinitemimplm_scopedataitem"></a><a name="m_scopedataitem"></a>CSnapInItemImpl::m_scopeDataItem

Struttura `SCOPEDATAITEM` dell'oggetto dati dello snap-in.

```
SCOPEDATAITEM m_scopeDataItem;
```

## <a name="csnapinitemimplm_resultdataitem"></a><a name="m_resultdataitem"></a>CSnapInItemImpl::m_resultDataItem

Struttura [RESULTDATAITEM](/windows/win32/api/mmc/ns-mmc-resultdataitem) dell'oggetto dati dello snap-in.

```
RESULTDATAITEM m_resultDataItem;
```

## <a name="csnapinitemimplnotify"></a><a name="notify"></a>CSnapInItemImpl::Notify

Chiamato quando l'oggetto snap-in viene agito dall'utente.

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
[in] Identifica un'azione eseguita da un utente. Sono possibili le seguenti notifiche:

- MMCN_ACTIVATE Inviato quando una finestra viene attivata e disattivata.

- MMCN_ADD_IMAGES Inviato per aggiungere immagini al riquadro dei risultati.

- MMCN_BTN_CLICK Inviato quando l'utente fa clic su uno dei pulsanti della barra degli strumenti.

- MMCN_CLICK Inviato quando un utente fa clic su un pulsante del mouse in un elemento della visualizzazione elenco.

- MMCN_DBLCLICK Inviato quando un utente fa doppio clic su un pulsante del mouse su un elemento della visualizzazione elenco.

- MMCN_DELETE Sent per informare lo snap-in che l'oggetto deve essere eliminato.

- MMCN_EXPAND Inviato quando una cartella deve essere espansa o contratta.

- MMCN_MINIMIZED Inviato quando una finestra viene ridotta a icona o ingrandita.

- MMCN_PROPERTY_CHANGE Inviato per notificare a un oggetto snap-in che la visualizzazione dell'oggetto snap-in sta per cambiare.

- MMCN_REMOVE_CHILDREN Inviato quando lo snap-in deve eliminare l'intero sottoalbero che ha aggiunto sotto il nodo specificato.

- MMCN_RENAME Inviata la prima volta a eseguire una query per una ridenominazione e la seconda volta a eseguire la ridenominazione.

- MMCN_SELECT Inviato quando viene selezionato un elemento nel riquadro dell'ambito o della visualizzazione dei risultati.

- MMCN_SHOW Inviato quando un elemento dell'ambito viene selezionato o deselezionato per la prima volta.

- MMCN_VIEW_CHANGE Inviato quando lo snap-in può aggiornare tutte le viste quando si verifica una modifica.

*Arg*<br/>
[in] Dipende dal tipo di notifica.

*Param*<br/>
[in] Dipende dal tipo di notifica.

*pComponentData*<br/>
[fuori] Puntatore all'oggetto `IComponentData`che implementa . Questo parametro è NULL se la `IComponentData::Notify`notifica non viene inoltrata da .

*pComponente*<br/>
[fuori] Puntatore all'oggetto `IComponent`che implementa . Questo parametro è NULL se la `IComponent::Notify`notifica non viene inoltrata da .

*type*<br/>
[in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:

- CCT_SCOPE oggetto Data per il contesto del riquadro ambito.

- CCT_RESULT oggetto dati per il contesto del riquadro dei risultati.

- CCT_SNAPIN_MANAGER oggetto data per il contesto di gestione snap-in.

- CCT_UNINITIALIZEDoggetto Data ha un tipo non valido.

## <a name="csnapinitemimplquerypagesfor"></a><a name="querypagesfor"></a>CSnapInItemImpl::QueryPagesPer

Chiamato per verificare se il nodo dello snap-in supporta le pagine delle proprietà.

```
QueryPagesFor(DATA_OBJECT_TYPES type);
```

## <a name="csnapinitemimplsetmenuinsertionflags"></a><a name="setmenuinsertionflags"></a>CSnapInItemImpl::SetMenuInsertionFlags

Chiamare questa funzione per modificare i flag di inserimento dei menu, specificati da *pInsertionAllowed*, per l'oggetto snap-in.

```cpp
void SetMenuInsertionFlags(
    bool bBeforeInsertion,
    long* pInsertionAllowed);
```

### <a name="parameters"></a>Parametri

*bPrimainserimento*<br/>
[in] Diverso da zero se la funzione deve essere chiamata prima che gli elementi vengono aggiunti al menu di scelta rapida; in caso contrario 0.

*pInsertionAllowed*<br/>
[in, out] Identifica i punti di inserimento delle voci di menu definiti da Microsoft Management Console (MMC) che possono essere utilizzati. Può trattarsi di una combinazione dei seguenti flag:

- CCM_INSERTIONALLOWED_TOP elementi possono essere inseriti nella parte superiore di un menu di scelta rapida.

- CCM_INSERTIONALLOWED_NEW elementi possono essere inseriti nel sottomenu Crea nuovo.

- CCM_INSERTIONALLOWED_TASK Elementi possono essere inseriti nel sottomenu Attività.

- CCM_INSERTIONALLOWED_VIEW elementi possono essere inseriti nel menu della visualizzazione della barra degli strumenti o nel sottomenu Visualizza del menu di scelta rapida del riquadro dei risultati.

### <a name="remarks"></a>Osservazioni

Se si sviluppa uno snap-in primario, è possibile reimpostare uno qualsiasi dei flag di inserimento per limitare il tipo di voci di menu che un'estensione di terze parti può aggiungere. Ad esempio, lo snap-in primario può cancellare il flag di CCM_INSERTIONALLOWED_NEW per impedire alle estensioni di aggiungere le proprie voci di menu Crea nuovo.

Non tentare di impostare i bit in *pInsertionAllowed* che sono stati originariamente cancellati. Le versioni future di MMC potrebbero utilizzare bit non attualmente definiti, pertanto non è consigliabile modificare i bit che non sono attualmente definiti.

## <a name="csnapinitemimplsettoolbarbuttoninfo"></a><a name="settoolbarbuttoninfo"></a>CSnapInItemImpl::SetToolbarButtonInfo

Chiamare questa funzione per modificare gli stili dei pulsanti della barra degli strumenti, dell'oggetto snap-in, prima che venga creata la barra degli strumenti.

```cpp
void SetToolbarButtonInfo(
    UINT id,
    BYTE* fsState,
    BYTE* fsType);
```

### <a name="parameters"></a>Parametri

*id*<br/>
[in] ID del pulsante della barra degli strumenti da impostare.

*fsState*<br/>
[in] Flag di stato del pulsante. Può essere uno o più dei seguenti:

- TBSTATE_CHECKED Il pulsante ha lo stile TBSTYLE_CHECKED e viene premuto.

- TBSTATE_ENABLED Il pulsante Accetta l'input dell'utente. Un pulsante che non dispone di questo stato non accetta l'input dell'utente ed è in grigio.

- TBSTATE_HIDDEN Il pulsante non è visibile e non può ricevere l'input dell'utente.

- TBSTATE_INDETERMINATE Il pulsante è disattivato.

- TBSTATE_PRESSED Il pulsante viene premuto.

- TBSTATE_WRAP Un'interruzione di riga segue il pulsante. Il pulsante deve inoltre avere il TBSTATE_ENABLED.

*Tipo fs*<br/>
[in] Flag di stato del pulsante. Può essere uno o più dei seguenti:

- TBSTYLE_BUTTON Crea un pulsante di comando standard.

- TBSTYLE_CHECK Crea un pulsante che consente di passare da uno stato premuto a uno non premuto ogni volta che l'utente fa clic su di esso. Il pulsante ha un colore di sfondo diverso quando è nello stato premuto.

- TBSTYLE_CHECKGROUP Crea un pulsante di controllo che rimane premuto fino a quando non viene premuto un altro pulsante del gruppo.

- TBSTYLE_GROUP Crea un pulsante che rimane premuto fino a quando non viene premuto un altro pulsante del gruppo.

- TBSTYLE_SEP Crea un separatore, fornendo un piccolo spazio tra i gruppi di pulsanti. Un pulsante con questo stile non riceve l'input dell'utente.

## <a name="csnapinitemimplupdatemenustate"></a><a name="updatemenustate"></a>CSnapInItemImpl::UpdateMenuState

Chiamare questa funzione per modificare una voce di menu prima che venga inserita nel menu di scelta rapida dell'oggetto snap-in.

```cpp
void UpdateMenuState(
    UINT id,
    LPTSTR pBuf,
    UINT* flags);
```

### <a name="parameters"></a>Parametri

*id*<br/>
[in] ID della voce di menu da impostare.

*pBuf*<br/>
[in] Puntatore alla stringa per la voce di menu da aggiornare.

*flags*<br/>
[in] Specifica i nuovi flag di stato. Può trattarsi di una combinazione dei seguenti flag:

- MF_POPUP specifica che si tratta di un sottomenu all'interno del menu di scelta rapida. Le voci di menu, i punti di inserimento e `lCommandID` altri `IInsertionPointID`sottomenu possono essere aggiunti a questo sottomenu utilizzando il relativo .

- MF_BITMAP e MF_OWNERDRAW Questi flag non sono consentiti e restituiranno un valore restituito di E_INVALIDARG.

- MF_SEPARATOR disegna una linea di divisione orizzontale. Solo `IContextMenuProvider` è consentito aggiungere voci di menu con MF_SEPARATOR impostato.

- MF_CHECKED Inserisce un segno di spunta accanto alla voce di menu.

- MF_DISABLED Disabilita la voce di menu in modo che non possa essere selezionata, ma il flag non la rende grigia.

- MF_ENABLED Abilita la voce di menu in modo che possa essere selezionata, ripristinandola dallo stato in grigio.

- MF_GRAYED Disabilita la voce di menu, in grigio in modo che non possa essere selezionata.

- MF_MENUBARBREAK funziona allo stesso modo del flag di MF_MENUBREAK per una barra dei menu. Per un menu a discesa, un sottomenu o un menu di scelta rapida, la nuova colonna è separata dalla colonna precedente da una linea verticale.

- MF_MENUBREAK Inserisce l'elemento in una nuova riga (per una barra dei menu) o in una nuova colonna (per un menu a discesa, un sottomenu o un menu di scelta rapida) senza separare le colonne.

- MF_UNCHECKED Non inserisce un segno di spunta accanto all'elemento (impostazione predefinita).

I seguenti gruppi di flag non possono essere utilizzati insieme:

- MF_DISABLED, MF_ENABLED e MF_GRAYED.

- MF_MENUBARBREAK e MF_MENUBREAK.

- MF_CHECKED e MF_UNCHECKED.

## <a name="csnapinitemimplupdatetoolbarbutton"></a><a name="updatetoolbarbutton"></a>CSnapInItemImpl::UpdateToolbarButton

Chiamare questa funzione per modificare un pulsante della barra degli strumenti, dell'oggetto snap-in, prima che venga visualizzato.

```
BOOL UpdateToolbarButton(UINT id, BYTE fsState);
```

### <a name="parameters"></a>Parametri

*id*<br/>
Specifica l'ID del pulsante della barra degli strumenti da aggiornare.

*fsState*<br/>
Specifica uno stato del pulsante della barra degli strumenti. Se questo stato deve essere impostato, restituire TRUE. Può trattarsi di una combinazione dei seguenti flag:

- ENABLED Il pulsante accetta l'input dell'utente. Un pulsante che non dispone di questo stato non accetta l'input dell'utente ed è in grigio.

- CHECKED Il pulsante ha lo stile CHECKED ed è premuto.

- HIDDEN Il pulsante non è visibile e non può ricevere l'input dell'utente.

- INDETERMINATE Il pulsante è in grigio.

- BUTTONPRESSED Il pulsante viene premuto.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
