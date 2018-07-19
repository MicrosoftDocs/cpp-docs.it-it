---
title: Classe CSnapInItemImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- snap-ins, data items
- snap-ins, ATL support for
- CSnapInItemImpl class
- snap-ins
ms.assetid: 52caefbd-9eae-49b0-add2-d55524271aa7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 77f92e2a0a5ea65fce361c19ae52745932f58deb
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884931"
---
# <a name="csnapinitemimpl-class"></a>Classe CSnapInItemImpl
Questa classe fornisce metodi per l'implementazione di un oggetto snap-in di nodo.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, BOOL bIsExtension = FALSE>  
class ATL_NO_VTABLE CSnapInItemImpl : public CSnapInItem
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `CSnapInItemImpl`.  
  
 *bIsExtension*  
 TRUE se l'oggetto è un'estensione lo snap-in. in caso contrario, FALSE.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInItemImpl::CSnapInItemImpl](#csnapinitemimpl)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInItemImpl::AddMenuItems](#addmenuitems)|Aggiunge voci di menu al menu di scelta rapida.|  
|[CSnapInItemImpl::Command](#command)|Chiamato dalla console di quando è selezionata una voce di menu personalizzato.|  
|[CSnapInItemImpl::CreatePropertyPages](#createpropertypages)|Aggiunge pagine alla finestra delle proprietà dello snap-in.|  
|[CSnapInItemImpl::FillData](#filldata)|Copia le informazioni sull'oggetto snap-in un flusso specificato.|  
|[CSnapInItemImpl::GetResultPaneInfo](#getresultpaneinfo)|Recupera il `RESULTDATAITEM` struttura dello snap-in.|  
|[CSnapInItemImpl::GetResultViewType](#getresultviewtype)|Determina il tipo di visualizzazione usate dal riquadro risultati.|  
|[CSnapInItemImpl::GetScopePaneInfo](#getscopepaneinfo)|Recupera il `SCOPEDATAITEM` struttura dello snap-in.|  
|[CSnapInItemImpl::Notify](#notify)|Chiamato dalla console per notificare lo snap-in delle azioni eseguite dall'utente.|  
|[CSnapInItemImpl::QueryPagesFor](#querypagesfor)|Chiamata eseguita per verificare se il nodo snap-in supporta le pagine delle proprietà.|  
|[CSnapInItemImpl::SetMenuInsertionFlags](#setmenuinsertionflags)|Consente di modificare i flag di inserimento di menu per un oggetto snap-in.|  
|[CSnapInItemImpl::SetToolbarButtonInfo](#settoolbarbuttoninfo)|Imposta le informazioni del pulsante della barra degli strumenti specificato.|  
|[CSnapInItemImpl::UpdateMenuState](#updatemenustate)|Aggiorna lo stato di un menu di scelta rapida.|  
|[CSnapInItemImpl::UpdateToolbarButton](#updatetoolbarbutton)|Aggiorna lo stato del pulsante della barra degli strumenti specificato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInItemImpl::m_bstrDisplayName](#m_bstrdisplayname)|Il nome dell'oggetto snap-in.|  
|[CSnapInItemImpl::m_resultDataItem](#m_resultdataitem)|Il Windows `RESULTDATAITEM` struttura usata dal `CSnapInItemImpl` oggetto.|  
|[CSnapInItemImpl::m_scopeDataItem](#m_scopedataitem)|Il Windows `SCOPEDATAITEM` struttura usata dal `CSnapInItemImpl` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CSnapInItemImpl` fornisce un'implementazione di base per un oggetto snap-in di nodo, ad esempio l'aggiunta di voci di menu e barre degli strumenti e comandi per il nodo snap-in per la funzione di gestione appropriato di inoltro. Queste funzionalità vengono implementate tramite diverse interfacce diverse ed eseguire il mapping di tipi. L'implementazione predefinita gestisce le notifiche inviate all'oggetto del nodo, determinando l'istanza corretta di classe derivata, quindi l'inoltro del messaggio all'istanza corretta.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CSnapInItem`  
  
 `CSnapInItemImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsnap.h  
  
##  <a name="addmenuitems"></a>  CSnapInItemImpl::AddMenuItems  
 Questo metodo implementa la funzione Win32 [IExtendContextMenu::AddMenuItems](http://msdn.microsoft.com/library/aa814841).  
  
```
AddMenuItems(  
    LPCONTEXTMENUCALLBACK piCallback,
    long* pInsertionAllowed,
    DATA_OBJECT_TYPES type);
```  
  
### <a name="parameters"></a>Parametri  
 *piCallback*  
 [in] Puntatore al `IContextMenuCallback` in grado di aggiungere elementi al menu di scelta rapida.  
  
 *pInsertionAllowed*  
 [in, out] Identifica definito Microsoft Management Console MMC, voci di menu i punti di inserimento che possono essere utilizzati. Può trattarsi di una combinazione dei flag seguenti:  
  
- È possibile inserire elementi CCM_INSERTIONALLOWED_TOP nella parte superiore di un menu di scelta rapida.  
  
- È possibile inserire elementi CCM_INSERTIONALLOWED_NEW nel sottomenu Crea nuovo.  
  
- È possibile inserire elementi CCM_INSERTIONALLOWED_TASK nel sottomenu attività.  
  
- CCM_INSERTIONALLOWED_VIEW elementi possono essere inseriti nel menu Visualizza sulla barra degli strumenti o nel sottomenu di visualizzazione del menu di scelta rapida riquadro risultati.  
  
 *type*  
 [in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:  
  
- Oggetto dati CCT_SCOPE per contesto riquadro dell'ambito.  
  
- Oggetto dati CCT_RESULT per contesto riquadro risultati.  
  
- Oggetto dati CCT_SNAPIN_MANAGER per contesto snap-in di gestione.  
  
- Oggetto dati CCT_UNINITIALIZED ha un tipo non valido.  
  
##  <a name="command"></a>  CSnapInItemImpl::Command  
 Questo metodo implementa la funzione Win32 [IExtendContextMenu::Command](http://msdn.microsoft.com/library/aa814842).  
  
```
Command(long lCommandID, DATA_OBJECT_TYPES type);
```  
  
### <a name="parameters"></a>Parametri  
 *lCommandID*  
 [in] Specifica l'identificatore di comando della voce di menu.  
  
 *type*  
 [in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:  
  
- Oggetto dati CCT_SCOPE per contesto riquadro dell'ambito.  
  
- Oggetto dati CCT_RESULT per contesto riquadro risultati.  
  
- Oggetto dati CCT_SNAPIN_MANAGER per contesto snap-in di gestione.  
  
- Oggetto dati CCT_UNINITIALIZED ha un tipo non valido.  
  
##  <a name="createpropertypages"></a>  CSnapInItemImpl::CreatePropertyPages  
 Questo metodo implementa la funzione Win32 [IExtendPropertySheet::CreatePropertyPages](http://msdn.microsoft.com/library/aa814846).  
  
```
CreatePropertyPages(  
    LPPROPERTYSHEETCALLBACK lpProvider,
    long handle,
    IUnknown* pUnk,
    DATA_OBJECT_TYPES type);
```  
  
### <a name="parameters"></a>Parametri  
 *lpProvider*  
 [in] Puntatore al `IPropertySheetCallback` interfaccia.  
  
 *handle*  
 [in] Specifica l'handle utilizzato per indirizzare il messaggio di notifica MMCN_PROPERTY_CHANGE alla classe di dati appropriato.  
  
 *pUnk*  
 [in] Puntatore al `IExtendPropertySheet` interfaccia sull'oggetto che contiene informazioni sul nodo di contesto.  
  
 *type*  
 [in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:  
  
- Oggetto dati CCT_SCOPE per contesto riquadro dell'ambito.  
  
- Oggetto dati CCT_RESULT per contesto riquadro risultati.  
  
- Oggetto dati CCT_SNAPIN_MANAGER per contesto snap-in di gestione.  
  
- Oggetto dati CCT_UNINITIALIZED ha un tipo non valido.  
  
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
 *cloud Foundry*  
 [in] Formato degli Appunti (testo, testo RTF o testo RTF con gli elementi OLE).  
  
 *pStream*  
 [in] Puntatore al flusso contenente i dati dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Per implementare correttamente questa funzione, copiare le informazioni corrette nel flusso (*pStream*), a seconda del formato degli Appunti indicato da *cf*.  
  
##  <a name="getresultviewtype"></a>  CSnapInItemImpl::GetResultViewType  
 Chiamare questa funzione per recuperare il tipo di visualizzazione per il riquadro dei risultati dell'oggetto snap-in.  
  
```
GetResultViewType(
    LPOLESTR* ppViewType,
    long* pViewOptions);
```  
  
### <a name="parameters"></a>Parametri  
 *ppViewType*  
 [out] Puntatore all'indirizzo del tipo di visualizzazione restituito.  
  
 *pViewOptions*  
 [out] Puntatore all'enumerazione MMC_VIEW_OPTIONS, che fornisce la console con le opzioni specificate per lo snap-in appartenenza. Questo valore può essere uno dei seguenti:  
  
- MMC_VIEW_OPTIONS_NOLISTVIEWS = 0x00000001 indica fintato presentando le opzioni di visualizzazione elenco standard alla console di **vista** menu. Consente lo snap-in visualizzare il proprio visualizzazioni personalizzate solo nel riquadro di visualizzazione dei risultati. Questo è il solo flag di opzione definito in questo momento.  
  
- MMC_VIEW_OPTIONS_NONE = 0 consente le opzioni di visualizzazione predefinito.  
  
##  <a name="getscopepaneinfo"></a>  CSnapInItemImpl::GetScopePaneInfo  
 Chiamare questa funzione per recuperare il `SCOPEDATAITEM` struttura dello snap-in.  
  
```
GetScopePaneInfo (SCOPEDATAITEM* pScopeDataItem);
```  
  
### <a name="parameters"></a>Parametri  
 *pScopeDataItem*  
 [out] Un puntatore per il `SCOPEDATAITEM` struttura del `CSnapInItemImpl` oggetto.  
  
##  <a name="getresultpaneinfo"></a>  CSnapInItemImpl::GetResultPaneInfo  
 Chiamare questa funzione per recuperare il `RESULTDATAITEM` struttura dello snap-in.  
  
```
GetResultPaneInfo (RESULTDATAITEM* pResultDataItem);
```  
  
### <a name="parameters"></a>Parametri  
 *pResultDataItem*  
 [out] Un puntatore per il `RESULTDATAITEM` struttura del `CSnapInItemImpl` oggetto.  
  
##  <a name="m_bstrdisplayname"></a>  CSnapInItemImpl::m_bstrDisplayName  
 Contiene la stringa visualizzata per l'elemento nodo.  
  
```
CComBSTR m_bstrDisplayName;
```  
  
##  <a name="m_scopedataitem"></a>  CSnapInItemImpl::m_scopeDataItem  
 Il `SCOPEDATAITEM` struttura dell'oggetto dati lo snap-in.  
  
```
SCOPEDATAITEM m_scopeDataItem;
```  
  
##  <a name="m_resultdataitem"></a>  CSnapInItemImpl::m_resultDataItem  
 Il [RESULTDATAITEM](http://msdn.microsoft.com/library/aa815165) struttura dell'oggetto dati lo snap-in.  
  
```
RESULTDATAITEM m_resultDataItem;
```  
  
##  <a name="notify"></a>  CSnapInItemImpl::Notify  
 Chiamato quando l'oggetto snap-in viene utilizzata dall'utente.  
  
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
 *event*  
 [in] Identifica un'azione eseguita da un utente. Sono possibili le notifiche seguenti:  
  
- MMCN_ACTIVATE inviati quando una finestra viene attivata e disattivata.  
  
- MMCN_ADD_IMAGES inviato per aggiungere immagini al riquadro dei risultati.  
  
- MMCN_BTN_CLICK inviato quando l'utente fa clic su uno dei pulsanti della barra degli strumenti.  
  
- MMCN_CLICK inviato quando un utente fa clic su un pulsante del mouse su un elemento della visualizzazione elenco.  
  
- MMCN_DBLCLICK inviato quando un utente fa doppio clic un pulsante del mouse su un elemento della visualizzazione elenco.  
  
- MMCN_DELETE inviato per indicare lo snap-in che l'oggetto deve essere eliminato.  
  
- MMCN_EXPAND inviati quando una cartella deve essere di espansione o riduzione.  
  
- MMCN_MINIMIZED inviato quando è in fase di una finestra ridotta a icona o ingrandita.  
  
- MMCN_PROPERTY_CHANGE inviato per notificare a un oggetto snap-in di visualizzazione dell'oggetto snap-in-sta per essere modificata.  
  
- MMCN_REMOVE_CHILDREN inviato quando lo snap-in necessario eliminare l'intero sottoalbero che è aggiunto di sotto del nodo specificato.  
  
- MMCN_RENAME inviata la prima volta per eseguire query per un'operazione di ridenominazione e la seconda volta per eseguire la ridenominazione.  
  
- MMCN_SELECT inviati quando viene selezionato un elemento nel riquadro Vista di ambito o del risultato.  
  
- MMCN_SHOW inviato quando un elemento di ambito è selezionato o deselezionato per la prima volta.  
  
- MMCN_VIEW_CHANGE inviato quando lo snap-in può aggiornare tutte le viste quando viene apportata una modifica.  
  
 *arg*  
 [in] Dipende dal tipo di notifica.  
  
 *param*  
 [in] Dipende dal tipo di notifica.  
  
 *pComponentData*  
 [out] Un puntatore all'oggetto che implementa `IComponentData`. Questo parametro è NULL se la notifica non viene inoltrata dal `IComponentData::Notify`.  
  
 *pComponent*  
 [out] Un puntatore all'oggetto che implementa `IComponent`. Questo parametro è NULL se la notifica non viene inoltrata dal `IComponent::Notify`.  
  
 *type*  
 [in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:  
  
- Oggetto dati CCT_SCOPE per contesto riquadro dell'ambito.  
  
- Oggetto dati CCT_RESULT per contesto riquadro risultati.  
  
- Oggetto dati CCT_SNAPIN_MANAGER per contesto snap-in di gestione.  
  
- Oggetto dati CCT_UNINITIALIZED ha un tipo non valido.  
  
##  <a name="querypagesfor"></a>  CSnapInItemImpl::QueryPagesFor  
 Chiamata eseguita per verificare se il nodo snap-in supporta le pagine delle proprietà.  
  
```
QueryPagesFor(DATA_OBJECT_TYPES type);
```  
  
##  <a name="setmenuinsertionflags"></a>  CSnapInItemImpl::SetMenuInsertionFlags  
 Chiamare questa funzione per modificare i flag di inserimento di menu, specificati da *pInsertionAllowed*, per l'oggetto snap-in.  
  
```
void SetMenuInsertionFlags(  
    bool bBeforeInsertion,
    long* pInsertionAllowed);
```  
  
### <a name="parameters"></a>Parametri  
 *bBeforeInsertion*  
 [in] Diverso da zero se la funzione deve essere chiamata prima che gli elementi vengono aggiunti al menu di scelta rapida; in caso contrario 0.  
  
 *pInsertionAllowed*  
 [in, out] Identifica definito Microsoft Management Console MMC, voci di menu i punti di inserimento che possono essere utilizzati. Può trattarsi di una combinazione dei flag seguenti:  
  
- È possibile inserire elementi CCM_INSERTIONALLOWED_TOP nella parte superiore di un menu di scelta rapida.  
  
- È possibile inserire elementi CCM_INSERTIONALLOWED_NEW nel sottomenu Crea nuovo.  
  
- È possibile inserire elementi CCM_INSERTIONALLOWED_TASK nel sottomenu attività.  
  
- CCM_INSERTIONALLOWED_VIEW elementi possono essere inseriti nel menu Visualizza sulla barra degli strumenti o nel sottomenu di visualizzazione del menu di scelta rapida riquadro risultati.  
  
### <a name="remarks"></a>Note  
 Se si sviluppa uno snap-in primaria, è possibile reimpostare uno o più flag inserimento allo scopo di limitare il tipo di voci di menu che è possibile aggiungere un'estensione di terze parti. Ad esempio, lo snap-in primaria può cancellare il flag CCM_INSERTIONALLOWED_NEW per impedire le estensioni di aggiungere i propri creare nuove voci di menu.  
  
 Non provare a impostare i bit *pInsertionAllowed* originariamente che sono stati cancellati. Le versioni future di MMC potrebbero utilizzare bits non è attualmente definita in modo che non è necessario modificare i bit che non sono attualmente definiti.  
  
##  <a name="settoolbarbuttoninfo"></a>  CSnapInItemImpl::SetToolbarButtonInfo  
 Chiamare questa funzione per modificare eventuali stili dei pulsanti della barra degli strumenti, dell'oggetto snap-in, prima che venga creata la barra degli strumenti.  
  
```
void SetToolbarButtonInfo(  
    UINT id,
    BYTE* fsState,
    BYTE* fsType);
```  
  
### <a name="parameters"></a>Parametri  
 *ID*  
 [in] L'ID del pulsante della barra degli strumenti da impostare.  
  
 *fsState*  
 [in] I flag di stato del pulsante. Può essere uno o più dei seguenti:  
  
- TBSTATE_CHECKED il pulsante è applicato lo stile TBSTYLE_CHECKED e viene premuto.  
  
- TBSTATE_ENABLED pulsante accetta l'input dell'utente. Un pulsante che non ha questo stato non accetta input dell'utente e viene disattivato.  
  
- TBSTATE_HIDDEN il pulsante non è visibile e non può ricevere l'input dell'utente.  
  
- TBSTATE_INDETERMINATE il pulsante è inattivo.  
  
- TBSTATE_PRESSED viene premuto il pulsante.  
  
- Interruzione di riga A TBSTATE_WRAP segue il pulsante. Il pulsante deve inoltre disporre di TBSTATE_ENABLED.  
  
 *fsType*  
 [in] I flag di stato del pulsante. Può essere uno o più dei seguenti:  
  
- TBSTYLE_BUTTON crea un pulsante di comando standard.  
  
- TBSTYLE_CHECK crea un pulsante che alterna tra gli stati premuti e premuto non ogni volta che l'utente fa clic. Il pulsante presenta un colore di sfondo diverso quando si trova nello stato premuto.  
  
- TBSTYLE_CHECKGROUP crea premuto un pulsante di controllo che rimane finché non viene premuto un altro pulsante nel gruppo.  
  
- TBSTYLE_GROUP crea premuto un pulsante che rimane finché non viene premuto un altro pulsante nel gruppo.  
  
- TBSTYLE_SEP crea un separatore, fornendo un breve intervallo tra i gruppi di pulsanti. Un pulsante con questo stile non riceve input dell'utente.  
  
##  <a name="updatemenustate"></a>  CSnapInItemImpl::UpdateMenuState  
 Chiamare questa funzione per modificare una voce di menu prima che venga inserito nel menu di scelta rapida dell'oggetto snap-in.  
  
```
void UpdateMenuState(  
    UINT id,
    LPTSTR pBuf,
    UINT* flags);
```  
  
### <a name="parameters"></a>Parametri  
 *ID*  
 [in] L'ID della voce di menu da impostare.  
  
 *pBuf*  
 [in] Puntatore alla stringa della voce di menu da aggiornare.  
  
 *flags*  
 [in] Specifica il nuovo flag di stato. Può trattarsi di una combinazione dei flag seguenti:  
  
- MF_POPUP specifica che si tratta di un sottomenu all'interno di menu di scelta rapida. Possono aggiungere voci di menu, i punti di inserimento e sottomenu ulteriormente questa usando sottomenu relativo `lCommandID` come loro `IInsertionPointID`.  
  
- MF_BITMAP e MF_OWNERDRAW questi flag non sono consentiti e causano un valore restituito E_INVALIDARG.  
  
- MF_SEPARATOR Disegna una linea orizzontale. Solo `IContextMenuProvider` è consentito aggiungere voci di menu con MF_SEPARATOR set.  
  
- MF_CHECKED inserito un segno di spunta accanto alla voce di menu.  
  
- MF_DISABLED disabilita la voce di menu in modo che non può essere selezionato, ma il flag non grigio.  
  
- MF_ENABLED abilita la voce di menu in modo che può essere selezionato, il ripristino dallo stato inattivo.  
  
- MF_GRAYED disabilita la voce di menu, che diventa di colore, in modo che non può essere selezionato.  
  
- Funzioni MF_MENUBARBREAK identico il MF_MENUBREAK flag per una barra dei menu. Per un elenco a discesa menu, sottomenu o menu di scelta rapida, la nuova colonna è separata dalla precedente da una linea verticale.  
  
- MF_MENUBREAK posiziona l'elemento in una nuova riga (per una barra dei menu) o in una nuova colonna (per un elenco a discesa menu, sottomenu o menu di scelta rapida) senza la separazione di colonne.  
  
- MF_UNCHECKED non si impono un segno di spunta accanto all'elemento (impostazione predefinita).  
  
 Impossibile utilizzare insieme i gruppi di flag seguenti:  
  
- MF_DISABLED MF_ENABLED e MF_GRAYED.  
  
- MF_MENUBARBREAK e MF_MENUBREAK.  
  
- MF_CHECKED e MF_UNCHECKED.  
  
##  <a name="updatetoolbarbutton"></a>  CSnapInItemImpl::UpdateToolbarButton  
 Chiamare questa funzione per modificare un pulsante della barra degli strumenti, dell'oggetto snap-in, prima che venga visualizzato.  
  
```
BOOL UpdateToolbarButton(UINT id, BYTE fsState);
```  
  
### <a name="parameters"></a>Parametri  
 *ID*  
 Specifica l'ID del pulsante della barra degli strumenti da aggiornare.  
  
 *fsState*  
 Specifica uno stato del pulsante della barra degli strumenti. Se è necessario impostare questo stato, restituisce TRUE. Può trattarsi di una combinazione dei flag seguenti:  
  
- ABILITATO il pulsante accetta l'input dell'utente. Un pulsante che non ha questo stato non accetta input dell'utente e viene disattivato.  
  
- SELEZIONATO il pulsante è applicato lo stile selezionato e viene premuto.  
  
- Nascondi il pulsante non sono visibile e non possono ricevere l'input dell'utente.  
  
- INDETERMINATO il pulsante è inattivo.  
  
- BUTTONPRESSED viene premuto il pulsante.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
