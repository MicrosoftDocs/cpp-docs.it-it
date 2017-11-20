---
title: Classe CSnapInItemImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
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
dev_langs: C++
helpviewer_keywords:
- snap-ins, data items
- snap-ins, ATL support for
- CSnapInItemImpl class
- snap-ins
ms.assetid: 52caefbd-9eae-49b0-add2-d55524271aa7
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1758a3d3bec03015abf35626adec69e1db9a7fdb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="csnapinitemimpl-class"></a>Classe CSnapInItemImpl
Questa classe fornisce metodi per l'implementazione di un oggetto del nodo snap-in.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, BOOL bIsExtension = FALSE>  
class ATL_NO_VTABLE CSnapInItemImpl : public CSnapInItem
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `CSnapInItemImpl`.  
  
 *bIsExtension*  
 **TRUE** se l'oggetto è un'estensione di snap-in; in caso contrario **FALSE**.  
  
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
|[CSnapInItemImpl::GetResultPaneInfo](#getresultpaneinfo)|Recupera il **RESULTDATAITEM** struttura dello snap-in.|  
|[CSnapInItemImpl::GetResultViewType](#getresultviewtype)|Determina il tipo di visualizzazione utilizzato dal riquadro dei risultati.|  
|[CSnapInItemImpl::GetScopePaneInfo](#getscopepaneinfo)|Recupera il **SCOPEDATAITEM** struttura dello snap-in.|  
|[CSnapInItemImpl::Notify](#notify)|Chiamato dalla console per notificare lo snap-in di azioni eseguite dall'utente.|  
|[CSnapInItemImpl::QueryPagesFor](#querypagesfor)|Chiamata eseguita per verificare se il nodo snap-in supporta pagine delle proprietà.|  
|[CSnapInItemImpl::SetMenuInsertionFlags](#setmenuinsertionflags)|Modifica i flag di inserimento di menu per un oggetto snap-in.|  
|[CSnapInItemImpl::SetToolbarButtonInfo](#settoolbarbuttoninfo)|Imposta le informazioni del pulsante della barra degli strumenti specificato.|  
|[CSnapInItemImpl::UpdateMenuState](#updatemenustate)|Aggiorna lo stato di una voce di menu di scelta.|  
|[CSnapInItemImpl::UpdateToolbarButton](#updatetoolbarbutton)|Aggiorna lo stato del pulsante della barra degli strumenti specificato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInItemImpl::m_bstrDisplayName](#m_bstrdisplayname)|Il nome dell'oggetto snap-in.|  
|[CSnapInItemImpl::m_resultDataItem](#m_resultdataitem)|Le finestre **RESULTDATAITEM** struttura utilizzata per il `CSnapInItemImpl` oggetto.|  
|[CSnapInItemImpl::m_scopeDataItem](#m_scopedataitem)|Le finestre **SCOPEDATAITEM** struttura utilizzata per il `CSnapInItemImpl` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CSnapInItemImpl`fornisce un'implementazione di base per un oggetto nodo snap-in, ad esempio l'aggiunta di voci di menu e barre degli strumenti e l'inoltro dei comandi per il nodo snap-in per la funzione del gestore appropriato. Queste funzionalità vengono implementate tramite diverse interfacce diverse e mapping di tipi. L'implementazione predefinita gestisce le notifiche inviate all'oggetto del nodo, determinando l'istanza della classe derivata corretto, quindi inoltrare il messaggio all'istanza corretta.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CSnapInItem`  
  
 `CSnapInItemImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsnap.h  
  
##  <a name="addmenuitems"></a>CSnapInItemImpl::AddMenuItems  
 Questo metodo implementa la funzione Win32 [IExtendContextMenu::AddMenuItems](http://msdn.microsoft.com/library/aa814841).  
  
```
AddMenuItems(  
    LPCONTEXTMENUCALLBACK piCallback,
    long* pInsertionAllowed,
    DATA_OBJECT_TYPES type);
```  
  
### <a name="parameters"></a>Parametri  
 *piCallback*  
 [in] Puntatore al **IContextMenuCallback** che possono aggiungere elementi a menu di scelta rapida.  
  
 `pInsertionAllowed`  
 [in, out] Identifica definito a Microsoft Management Console MMC, voce di menu punti di inserimento che possono essere utilizzati. Può trattarsi di una combinazione dei flag seguenti:  
  
- **CCM_INSERTIONALLOWED_TOP** elementi possono essere inseriti nella parte superiore di un menu di scelta rapida.  
  
- **CCM_INSERTIONALLOWED_NEW** elementi possono essere inseriti nel sottomenu Crea nuovo.  
  
- **CCM_INSERTIONALLOWED_TASK** elementi possono essere inseriti nel sottomenu attività.  
  
- **CCM_INSERTIONALLOWED_VIEW** elementi possono essere inseriti nel menu Visualizza sulla barra degli strumenti o nel sottomenu del menu di scelta rapida risultati riquadro visualizzazione.  
  
 `type`  
 [in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:  
  
- **CCT_SCOPE** oggetto di contesto dell'ambito riquadro dati.  
  
- **CCT_RESULT** oggetto dati per il contesto di riquadro risultati.  
  
- **CCT_SNAPIN_MANAGER** oggetto di contesto snap-in Gestione dati.  
  
- **CCT_UNINITIALIZED** oggetto dati dispone di un tipo non valido.  
  
##  <a name="command"></a>CSnapInItemImpl::Command  
 Questo metodo implementa la funzione Win32 [IExtendContextMenu::Command](http://msdn.microsoft.com/library/aa814842).  
  
```
Command(long lCommandID, DATA_OBJECT_TYPES type);
```  
  
### <a name="parameters"></a>Parametri  
 *lCommandID*  
 [in] Specifica l'identificatore di comando della voce di menu.  
  
 `type`  
 [in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:  
  
- **CCT_SCOPE** oggetto di contesto dell'ambito riquadro dati.  
  
- **CCT_RESULT** oggetto dati per il contesto di riquadro risultati.  
  
- **CCT_SNAPIN_MANAGER** oggetto di contesto snap-in Gestione dati.  
  
- **CCT_UNINITIALIZED** oggetto dati dispone di un tipo non valido.  
  
##  <a name="createpropertypages"></a>CSnapInItemImpl::CreatePropertyPages  
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
 [in] Puntatore al **IPropertySheetCallback** interfaccia.  
  
 *handle*  
 [in] Specifica l'handle utilizzato per instradare il **MMCN_PROPERTY_CHANGE** messaggio di notifica per la classe di dati appropriato.  
  
 *pUnk*  
 [in] Puntatore al **IExtendPropertySheet** interfaccia sull'oggetto che contiene le informazioni sul nodo di contesto.  
  
 `type`  
 [in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:  
  
- **CCT_SCOPE** oggetto di contesto dell'ambito riquadro dati.  
  
- **CCT_RESULT** oggetto dati per il contesto di riquadro risultati.  
  
- **CCT_SNAPIN_MANAGER** oggetto di contesto snap-in Gestione dati.  
  
- **CCT_UNINITIALIZED** oggetto dati dispone di un tipo non valido.  
  
##  <a name="csnapinitemimpl"></a>CSnapInItemImpl::CSnapInItemImpl  
 Costruisce un oggetto `CSnapInItemImpl`.  
  
```
CSnapInItemImpl();
```  
  
##  <a name="filldata"></a>CSnapInItemImpl::FillData  
 Questa funzione viene chiamata per recuperare le informazioni sull'elemento.  
  
```
FillData(CLIPFORMAT cf, LPSTREAM pStream);
```  
  
### <a name="parameters"></a>Parametri  
 `cf`  
 [in] Formato degli Appunti (testo, testo o testo RTF con elementi OLE).  
  
 `pStream`  
 [in] Un puntatore al flusso contenente i dati dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Per implementare correttamente questa funzione, copiare le informazioni corrette nel flusso ( `pStream`), a seconda del formato degli Appunti indicato da `cf`.  
  
##  <a name="getresultviewtype"></a>CSnapInItemImpl::GetResultViewType  
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
 [out] Puntatore al **MMC_VIEW_OPTIONS** enumerazione, che fornisce la console con le opzioni specificate per lo snap-in appartenenza. Questo valore può essere uno dei valori seguenti:  
  
- **MMC_VIEW_OPTIONS_NOLISTVIEWS** = 0x00000001 indica la console per evitare di presentazione delle opzioni di visualizzazione elenco standard di **vista** menu. Consente di visualizzare i proprio visualizzazioni personalizzate solo nel riquadro di visualizzazione dei risultati con lo snap-in. Questo è l'unico flag di opzione definita in questo momento.  
  
- **MMC_VIEW_OPTIONS_NONE** = 0 consente le opzioni di visualizzazione predefinito.  
  
##  <a name="getscopepaneinfo"></a>CSnapInItemImpl::GetScopePaneInfo  
 Chiamare questa funzione per recuperare il **SCOPEDATAITEM** struttura dello snap-in.  
  
```
GetScopePaneInfo (SCOPEDATAITEM* pScopeDataItem);
```  
  
### <a name="parameters"></a>Parametri  
 *pScopeDataItem*  
 [out] Un puntatore al **SCOPEDATAITEM** struttura il `CSnapInItemImpl` oggetto.  
  
##  <a name="getresultpaneinfo"></a>CSnapInItemImpl::GetResultPaneInfo  
 Chiamare questa funzione per recuperare il **RESULTDATAITEM** struttura dello snap-in.  
  
```
GetResultPaneInfo (RESULTDATAITEM* pResultDataItem);
```  
  
### <a name="parameters"></a>Parametri  
 *pResultDataItem*  
 [out] Un puntatore al **RESULTDATAITEM** struttura il `CSnapInItemImpl` oggetto.  
  
##  <a name="m_bstrdisplayname"></a>CSnapInItemImpl::m_bstrDisplayName  
 Contiene la stringa visualizzata per l'elemento del nodo.  
  
```
CComBSTR m_bstrDisplayName;
```  
  
##  <a name="m_scopedataitem"></a>CSnapInItemImpl::m_scopeDataItem  
 Il `SCOPEDATAITEM` struttura dell'oggetto dati snap-in.  
  
```
SCOPEDATAITEM m_scopeDataItem;
```  
  
##  <a name="m_resultdataitem"></a>CSnapInItemImpl::m_resultDataItem  
 Il [RESULTDATAITEM](http://msdn.microsoft.com/library/aa815165) struttura dell'oggetto dati snap-in.  
  
```
RESULTDATAITEM m_resultDataItem;
```  
  
##  <a name="notify"></a>CSnapInItemImpl::Notify  
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
 `event`  
 [in] Identifica l'azione eseguita da un utente. Le notifiche seguenti sono possibili:  
  
- **MMCN_ACTIVATE** inviati quando una finestra è attivato e disattivato.  
  
- **MMCN_ADD_IMAGES** inviati per aggiungere immagini al riquadro dei risultati.  
  
- **MMCN_BTN_CLICK** inviato quando l'utente fa clic su uno dei pulsanti della barra degli strumenti.  
  
- **MMCN_CLICK** inviato quando un utente fa clic su un pulsante del mouse su un elemento della visualizzazione elenco.  
  
- **MMCN_DBLCLICK** inviato quando un utente fa doppio clic un pulsante del mouse su un elemento della visualizzazione elenco.  
  
- **MMCN_DELETE** inviati per comunicare lo snap-in che l'oggetto deve essere eliminato.  
  
- **MMCN_EXPAND** inviato quando una cartella deve essere espanso o contratto.  
  
- **MMCN_MINIMIZED** inviato quando una finestra viene ridotta a icona o ingrandita.  
  
- **MMCN_PROPERTY_CHANGE** inviati per notificare a un oggetto snap-in vista dell'oggetto snap-in verrà modificato.  
  
- **MMCN_REMOVE_CHILDREN** inviato quando lo snap-in necessario, eliminare il sottoalbero intero è aggiunto di sotto del nodo specificato.  
  
- **MMCN_RENAME** inviati la prima volta per eseguire query per un'operazione di ridenominazione e la seconda volta per eseguire l'operazione di ridenominazione.  
  
- **MMCN_SELECT** inviati quando viene selezionato un elemento nel riquadro di visualizzazione di ambito o del risultato.  
  
- **MMCN_SHOW** inviato quando un elemento dell'ambito viene selezionato o deselezionato per la prima volta.  
  
- **MMCN_VIEW_CHANGE** inviato quando lo snap-in possono aggiornare tutte le viste quando viene apportata una modifica.  
  
 `arg`  
 [in] Dipende dal tipo di notifica.  
  
 `param`  
 [in] Dipende dal tipo di notifica.  
  
 *pComponentData*  
 [out] Puntatore all'oggetto che implementa **IComponentData**. Questo parametro è **NULL** se la notifica non viene inoltrata da **IComponentData::Notify**.  
  
 *pComponent*  
 [out] Un puntatore all'oggetto che implementa **IComponent**. Questo parametro è **NULL** se la notifica non viene inoltrata da **IComponent::Notify**.  
  
 `type`  
 [in] Specifica il tipo di oggetto. Può avere uno dei valori seguenti:  
  
- **CCT_SCOPE** oggetto di contesto dell'ambito riquadro dati.  
  
- **CCT_RESULT** oggetto dati per il contesto di riquadro risultati.  
  
- **CCT_SNAPIN_MANAGER** oggetto di contesto snap-in Gestione dati.  
  
- **CCT_UNINITIALIZED** oggetto dati dispone di un tipo non valido.  
  
##  <a name="querypagesfor"></a>CSnapInItemImpl::QueryPagesFor  
 Chiamata eseguita per verificare se il nodo snap-in supporta pagine delle proprietà.  
  
```
QueryPagesFor(DATA_OBJECT_TYPES type);
```  
  
##  <a name="setmenuinsertionflags"></a>CSnapInItemImpl::SetMenuInsertionFlags  
 Chiamare questa funzione per modificare i flag di inserimento di menu, specificati da `pInsertionAllowed`, per l'oggetto snap-in.  
  
```
void SetMenuInsertionFlags(  
    bool bBeforeInsertion,
    long* pInsertionAllowed);
```  
  
### <a name="parameters"></a>Parametri  
 *bBeforeInsertion*  
 [in] Diverso da zero se la funzione deve essere chiamata prima che gli elementi vengono aggiunti al menu di scelta rapida; in caso contrario 0.  
  
 `pInsertionAllowed`  
 [in, out] Identifica definito a Microsoft Management Console MMC, voce di menu punti di inserimento che possono essere utilizzati. Può trattarsi di una combinazione dei flag seguenti:  
  
- **CCM_INSERTIONALLOWED_TOP** elementi possono essere inseriti nella parte superiore di un menu di scelta rapida.  
  
- **CCM_INSERTIONALLOWED_NEW** elementi possono essere inseriti nel sottomenu Crea nuovo.  
  
- **CCM_INSERTIONALLOWED_TASK** elementi possono essere inseriti nel sottomenu attività.  
  
- **CCM_INSERTIONALLOWED_VIEW** elementi possono essere inseriti nel menu Visualizza sulla barra degli strumenti o nel sottomenu del menu di scelta rapida risultati riquadro visualizzazione.  
  
### <a name="remarks"></a>Note  
 Se si sviluppa uno snap-in primario, è possibile ripristinare uno o più flag inserimento allo scopo di limitare il tipo di voci di menu che è possibile aggiungere un'estensione di terze parti. Ad esempio, lo snap-in primario può cancellare il **CCM_INSERTIONALLOWED_NEW** flag per impedire le estensioni di aggiungere i propri creare nuove voci di menu.  
  
 Non tentare di impostare i bit `pInsertionAllowed` che sono state cancellate originariamente. Le versioni future di MMC potrebbero utilizzare bits non è attualmente definita in modo da non modificare bits che attualmente non sono definiti.  
  
##  <a name="settoolbarbuttoninfo"></a>CSnapInItemImpl::SetToolbarButtonInfo  
 Chiamare questa funzione per modificare tutti gli stili pulsante della barra degli strumenti dell'oggetto snap-in, prima che venga creata la barra degli strumenti.  
  
```
void SetToolbarButtonInfo(  
    UINT id,
    BYTE* fsState,
    BYTE* fsType);
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] L'ID del pulsante della barra degli strumenti da impostare.  
  
 `fsState`  
 [in] I flag di stato del pulsante. Può essere uno o più delle operazioni seguenti:  
  
- `TBSTATE_CHECKED`Il pulsante ha il **TBSTYLE_CHECKED** stile e viene premuto.  
  
- `TBSTATE_ENABLED`Pulsante accetta l'input dell'utente. Un pulsante che non ha questo stato non accetta l'input dell'utente e diventa inattivo.  
  
- `TBSTATE_HIDDEN`Il pulsante non è visibile e non può ricevere input dell'utente.  
  
- `TBSTATE_INDETERMINATE`Il pulsante diventa inattivo.  
  
- `TBSTATE_PRESSED`Il pulsante è premuto.  
  
- `TBSTATE_WRAP`Un'interruzione di riga segue il pulsante. Il pulsante deve inoltre disporre di `TBSTATE_ENABLED`.  
  
 *fsType*  
 [in] I flag di stato del pulsante. Può essere uno o più delle operazioni seguenti:  
  
- `TBSTYLE_BUTTON`Crea un pulsante di comando standard.  
  
- `TBSTYLE_CHECK`Crea un pulsante che alterna tra gli stati premuti e premuto non ogni volta che l'utente fa clic. Il pulsante ha un colore di sfondo diversi quando è nello stato premuto.  
  
- `TBSTYLE_CHECKGROUP`Crea un pulsante di controllo che viene premuto fino a quando non viene premuto un pulsante un altro gruppo.  
  
- `TBSTYLE_GROUP`Crea un pulsante che viene premuto fino a quando non viene premuto un pulsante un altro gruppo.  
  
- `TBSTYLE_SEP`Crea un separatore, fornire un breve intervallo tra i gruppi di pulsanti. Un pulsante con questo stile non riceve l'input dell'utente.  
  
##  <a name="updatemenustate"></a>CSnapInItemImpl::UpdateMenuState  
 Chiamare questa funzione per modificare una voce di menu prima di essere inserito nel menu di scelta rapida dell'oggetto snap-in.  
  
```
void UpdateMenuState(  
    UINT id,
    LPTSTR pBuf,
    UINT* flags);
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] L'ID della voce di menu da impostare.  
  
 `pBuf`  
 [in] Puntatore alla stringa della voce di menu da aggiornare.  
  
 `flags`  
 [in] Specifica i flag di stato nuovo. Può trattarsi di una combinazione dei flag seguenti:  
  
- **MF_POPUP** specifica che si tratta di un sottomenu in menu di scelta rapida. Voci di menu, i punti di inserimento e i sottomenu ulteriormente possono essere aggiunti a questo sottomenu mediante il relativo **lCommandID** come loro **IInsertionPointID**.  
  
- **MF_BITMAP** e `MF_OWNERDRAW` questi flag non consentiti e comporterà un valore restituito di `E_INVALIDARG`.  
  
- **MF_SEPARATOR** Disegna una linea di divisione orizzontale. Solo **IContextMenuProvider** è consentito aggiungere voci di menu con **MF_SEPARATOR** impostato.  
  
- **MF_CHECKED** inserito un segno di spunta accanto alla voce di menu.  
  
- **MF_DISABLED** disabilita la voce di menu, pertanto non può essere selezionato, ma non di grigio, il flag.  
  
- `MF_ENABLED`Consente la voce di menu in modo che può essere selezionato, eseguire il ripristino dallo stato inattivo.  
  
- **MF_GRAYED** disabilita la voce di menu, viene fornito in modo che non possono essere selezionata.  
  
- **MF_MENUBARBREAK** funziona nello stesso modo di **MF_MENUBREAK** flag per una barra dei menu. Per un menu a discesa, un sottomenu o un menu di scelta rapida, la nuova colonna è separata dalla precedente da una linea verticale.  
  
- **MF_MENUBREAK** posiziona l'elemento in una nuova riga (per una barra dei menu) o in una nuova colonna (per un menu a discesa, un sottomenu o un menu di scelta rapida) senza la separazione di colonne.  
  
- **MF_UNCHECKED** non inserire un segno di spunta accanto all'elemento (impostazione predefinita).  
  
 Impossibile utilizzare insieme i gruppi di flag seguenti:  
  
- **MF_DISABLED**, `MF_ENABLED`, e **MF_GRAYED**.  
  
- **MF_MENUBARBREAK** e **MF_MENUBREAK**.  
  
- **MF_CHECKED** e **MF_UNCHECKED**.  
  
##  <a name="updatetoolbarbutton"></a>CSnapInItemImpl::UpdateToolbarButton  
 Chiamare questa funzione per modificare un pulsante della barra degli strumenti, dell'oggetto snap-in, prima che venga visualizzato.  
  
```
BOOL UpdateToolbarButton(UINT id, BYTE fsState);
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 Specifica l'ID del pulsante del pulsante della barra degli strumenti da aggiornare.  
  
 `fsState`  
 Specifica uno stato del pulsante della barra degli strumenti. Se è necessario impostare questo stato, restituire **TRUE**. Può trattarsi di una combinazione dei flag seguenti:  
  
- **ABILITATO** pulsante accetta l'input dell'utente. Un pulsante che non ha questo stato non accetta l'input dell'utente e diventa inattivo.  
  
- **SELEZIONATA** il pulsante ha il **selezionata** stile e viene premuto.  
  
- **HIDDEN** pulsante non è visibile e non può ricevere input dell'utente.  
  
- **INDETERMINATO** il pulsante diventa inattivo.  
  
- **BUTTONPRESSED** viene premuto il pulsante.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
