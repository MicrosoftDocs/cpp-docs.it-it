---
title: Classe COleClientItem | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleClientItem
dev_langs:
- C++
helpviewer_keywords:
- OLE containers, client items
- COleClientItem class
- OLE client item class
- container interface class
- OLE containers, interface class
- client items and OLE containers
ms.assetid: 7f571b7c-2758-4839-847a-0cf1ef643128
caps.latest.revision: 24
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: a200da03305c20eaf2d9c1de1ea585c82410c570
ms.lasthandoff: 02/24/2017

---
# <a name="coleclientitem-class"></a>Classe COleClientItem
Definisce l'interfaccia del contenitore per gli elementi OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleClientItem : public CDocItem  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleClientItem::COleClientItem](#coleclientitem)|Costruisce un oggetto `COleClientItem`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleClientItem::Activate](#activate)|Apre l'elemento OLE per un'operazione e quindi esegue il verbo specificato.|  
|[COleClientItem::ActivateAs](#activateas)|Attiva l'elemento come un altro tipo.|  
|[COleClientItem::AttachDataObject](#attachdataobject)|Accede ai dati nell'oggetto OLE.|  
|[COleClientItem::CanCreateFromData](#cancreatefromdata)|Indica se un'applicazione contenitore può creare un oggetto incorporato.|  
|[COleClientItem::CanCreateLinkFromData](#cancreatelinkfromdata)|Indica se un'applicazione contenitore può creare un oggetto collegato.|  
|[COleClientItem::CanPaste](#canpaste)|Indica se gli Appunti contengono un elemento OLE incorporabile o statico.|  
|[COleClientItem::CanPasteLink](#canpastelink)|Indica se gli Appunti contengono un collegamento elemento OLE.|  
|[COleClientItem::Close](#close)|Chiude un collegamento a un server ma non elimina l'elemento OLE.|  
|[COleClientItem::ConvertTo](#convertto)|Converte l'elemento in un altro tipo.|  
|[COleClientItem::CopyToClipboard](#copytoclipboard)|Copia l'elemento OLE negli Appunti.|  
|[COleClientItem::CreateCloneFrom](#createclonefrom)|Crea un duplicato di un elemento esistente.|  
|[COleClientItem::CreateFromClipboard](#createfromclipboard)|Crea un elemento incorporato dagli Appunti.|  
|[COleClientItem::CreateFromData](#createfromdata)|Crea un elemento incorporato da un oggetto dati.|  
|[CreateFromFile](#createfromfile)|Crea un elemento incorporato da un file.|  
|[COleClientItem::CreateLinkFromClipboard](#createlinkfromclipboard)|Crea un elemento collegato dagli Appunti.|  
|[COleClientItem::CreateLinkFromData](#createlinkfromdata)|Crea un elemento collegato da un oggetto dati.|  
|[COleClientItem::CreateLinkFromFile](#createlinkfromfile)|Crea un elemento collegato da un file.|  
|[COleClientItem::CreateNewItem](#createnewitem)|Crea un nuovo elemento incorporato avviando l'applicazione server.|  
|[COleClientItem::CreateStaticFromClipboard](#createstaticfromclipboard)|Crea un elemento statico dagli Appunti.|  
|[COleClientItem::CreateStaticFromData](#createstaticfromdata)|Crea un elemento statico da un oggetto dati.|  
|[COleClientItem::Deactivate](#deactivate)|Disattiva l'elemento.|  
|[COleClientItem::DeactivateUI](#deactivateui)|Ripristina lo stato originale dell'interfaccia utente dell'applicazione contenitore.|  
|[COleClientItem::Delete](#delete)|Elimina o si chiude l'elemento OLE, se si trattasse di un elemento collegato.|  
|[COleClientItem::DoDragDrop](#dodragdrop)|Esegue un'operazione di trascinamento e rilascio.|  
|[COleClientItem::DoVerb](#doverb)|Esegue il verbo specificato.|  
|[COleClientItem::Draw](#draw)|Disegna l'elemento OLE.|  
|[COleClientItem::GetActiveView](#getactiveview)|Ottiene la vista in cui l'elemento viene attivato sul posto.|  
|[COleClientItem::GetCachedExtent](#getcachedextent)|Restituisce i limiti del rettangolo dell'elemento OLE.|  
|[COleClientItem::GetClassID](#getclassid)|Ottiene l'ID di classe. dell'elemento presente|  
|[COleClientItem::GetClipboardData](#getclipboarddata)|Ottiene i dati che verranno inseriti negli Appunti mediante una chiamata di `CopyToClipboard` funzione membro.|  
|[COleClientItem::GetDocument](#getdocument)|Restituisce il `COleDocument` oggetto che contiene l'elemento presenta.|  
|[COleClientItem::GetDrawAspect](#getdrawaspect)|Ottiene la visualizzazione corrente dell'elemento per il rendering.|  
|[COleClientItem::GetExtent](#getextent)|Restituisce i limiti del rettangolo dell'elemento OLE.|  
|[COleClientItem::GetIconFromRegistry](#geticonfromregistry)|Recupera un handle per un'icona con il server di un particolare CLSID.|  
|[COleClientItem::GetIconicMetafile](#geticonicmetafile)|Ottiene il metafile utilizzato per disegnare l'icona dell'elemento.|  
|[COleClientItem::GetInPlaceWindow](#getinplacewindow)|Restituisce un puntatore alla finestra di modifica sul posto dell'elemento.|  
|[COleClientItem::GetItemState](#getitemstate)|Ottiene lo stato dell'elemento corrente.|  
|[COleClientItem::GetLastStatus](#getlaststatus)|Restituisce lo stato dell'ultima operazione OLE.|  
|[COleClientItem::GetLinkUpdateOptions](#getlinkupdateoptions)|Restituisce la modalità di aggiornamento per un elemento collegato (funzionalità avanzate).|  
|[COleClientItem::GetType](#gettype)|Restituisce il tipo dell'elemento OLE (incorporato, collegato o statico).|  
|[COleClientItem::GetUserType](#getusertype)|Ottiene una stringa che descrive il tipo dell'elemento.|  
|[COleClientItem::IsInPlaceActive](#isinplaceactive)|Restituisce `TRUE` se l'elemento è attivo sul posto.|  
|[COleClientItem::IsLinkUpToDate](#islinkuptodate)|Restituisce **TRUE** se un elemento collegato viene aggiornato con il documento di origine.|  
|[COleClientItem::IsModified](#ismodified)|Restituisce `TRUE` se l'elemento è stato modificato dopo l'ultimo salvataggio.|  
|[COleClientItem::IsOpen](#isopen)|Restituisce `TRUE` se l'elemento è attualmente aperta nell'applicazione server.|  
|[COleClientItem::IsRunning](#isrunning)|Restituisce `TRUE` se l'applicazione server dell'elemento è in esecuzione.|  
|[COleClientItem::OnActivate](#onactivate)|Chiamato dal framework per notificare l'elemento che è attivato.|  
|[COleClientItem::OnActivateUI](#onactivateui)|Chiamato dal framework per notificare l'elemento che viene attivato e devono visualizzare l'interfaccia utente.|  
|[COleClientItem:: OnChange](#onchange)|Chiamato quando il server modifica l'elemento OLE. Implementazione necessaria.|  
|[COleClientItem::OnDeactivate](#ondeactivate)|Chiamato dal framework quando un elemento viene disattivato.|  
|[COleClientItem::OnDeactivateUI](#ondeactivateui)|Chiamato dal framework quando il server ha rimosso la relativa interfaccia utente sul posto.|  
|[COleClientItem::OnGetClipboardData](#ongetclipboarddata)|Chiamato dal framework per ottenere i dati da copiare negli Appunti.|  
|[COleClientItem::OnInsertMenus](#oninsertmenus)|Chiamato dal framework per creare un menu composto.|  
|[COleClientItem::OnRemoveMenus](#onremovemenus)|Chiamato dal framework per rimuovere i menu del contenitore da un menu composto.|  
|[COleClientItem::OnSetMenu](#onsetmenu)|Chiamato dal framework per installare e rimuovere un menu composto.|  
|[COleClientItem::OnShowControlBars](#onshowcontrolbars)|Chiamato dal framework per mostrare e nascondere le barre di controllo.|  
|[COleClientItem::OnUpdateFrameTitle](#onupdateframetitle)|Chiamato dal framework per aggiornare barra del titolo della finestra cornice.|  
|[COleClientItem::ReactivateAndUndo](#reactivateandundo)|Riattiva l'elemento e Annulla l'ultima operazione di modifica sul posto.|  
|[COleClientItem::Release](#release)|Rilascia la connessione a un elemento collegato di OLE e lo chiude se è stato superato. Non elimina l'elemento client.|  
|[COleClientItem::Reload](#reload)|Ricarica l'elemento dopo una chiamata a `ActivateAs`.|  
|[COleClientItem::Run](#run)|Esegue l'applicazione associata all'elemento.|  
|[COleClientItem::SetDrawAspect](#setdrawaspect)|Imposta visualizzazione corrente dell'elemento per il rendering.|  
|[COleClientItem::SetExtent](#setextent)|Imposta il rettangolo di delimitazione dell'elemento OLE.|  
|[COleClientItem::SetHostNames](#sethostnames)|Imposta i nomi di server viene visualizzato quando si modifica l'elemento OLE.|  
|[COleClientItem::SetIconicMetafile](#seticonicmetafile)|Memorizza nella cache del metafile utilizzato per disegnare l'icona dell'elemento.|  
|[COleClientItem::SetItemRects](#setitemrects)|Imposta rettangolo di delimitazione dell'elemento.|  
|[COleClientItem::SetLinkUpdateOptions](#setlinkupdateoptions)|Imposta la modalità di aggiornamento per un elemento collegato (funzionalità avanzate).|  
|[COleClientItem::SetPrintDevice](#setprintdevice)|Imposta il dispositivo di destinazione di stampa per questo oggetto client.|  
|[COleClientItem::UpdateLink](#updatelink)|Aggiorna la cache di presentazione di un elemento.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleClientItem:: CanActivate](#canactivate)|Chiamato dal framework per determinare se è consentita l'attivazione sul posto.|  
|[COleClientItem:: OnChangeItemPosition](#onchangeitemposition)|Chiamato dal framework quando viene modificata la posizione di un elemento.|  
|[COleClientItem::OnDeactivateAndUndo](#ondeactivateandundo)|Chiamato dal framework di annullamento dopo l'attivazione.|  
|[COleClientItem::OnDiscardUndoState](#ondiscardundostate)|Chiamato dal framework per ignorare le informazioni sullo stato di annullamento dell'elemento.|  
|[COleClientItem::OnGetClipRect](#ongetcliprect)|Chiamato dal framework per ottenere coordinate del rettangolo di ridimensionamento dell'elemento.|  
|[OnGetItemPosition](#ongetitemposition)|Chiamato dal framework per ottenere la posizione dell'elemento rispetto alla vista.|  
|[COleClientItem::OnGetWindowContext](#ongetwindowcontext)|Chiamato dal framework quando un elemento viene attivato sul posto.|  
|[COleClientItem::OnScrollBy](#onscrollby)|Chiamato dal framework per scorrere l'elemento all'interno della visualizzazione.|  
|[COleClientItem::OnShowItem](#onshowitem)|Chiamato dal framework per visualizzare l'elemento OLE.|  
  
## <a name="remarks"></a>Note  
 Un elemento OLE rappresenta i dati, creati e gestiti da un'applicazione server, che può essere incorporata "senza problemi" in un documento in modo che venga visualizzato all'utente a un singolo documento. Il risultato è un "documento composito" costituito da un documento che lo contiene e l'elemento OLE.  
  
 Un elemento OLE può essere incorporato o collegato. Se è incorporato, i relativi dati vengono archiviati come parte del documento composito. Se è collegato, i dati sono archiviati come parte di un file separato creato dall'applicazione server, e solo un collegamento al file verrà archiviato nel documento composito. Tutti gli elementi OLE contengono informazioni che specificano l'applicazione server che deve essere chiamato per modificarli.  
  
 `COleClientItem`definisce diverse funzioni sottoponibili a override che vengono chiamate in risposta alle richieste dall'applicazione server. Questi sottoponibili a override generalmente fungono da notifiche. In questo modo l'applicazione server per informare il contenitore dell'utente apportate quando si modifica l'elemento OLE, o per recuperare le informazioni necessarie durante la modifica.  
  
 `COleClientItem`può essere utilizzato con il [COleDocument](../../mfc/reference/coledocument-class.md), [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md), o [COleServerDoc](../../mfc/reference/coleserverdoc-class.md) (classe). Utilizzare `COleClientItem`, derivare una classe e implementare il [OnChange](#onchange) funzione membro, che definisce una modalità di risposta alle modifiche apportate all'elemento contenitore. Per supportare l'attivazione sul posto, eseguire l'override di [OnGetItemPosition](#ongetitemposition) funzione membro. Questa funzione fornisce informazioni sulla posizione dell'elemento OLE visualizzata.  
  
 Per ulteriori informazioni sull'utilizzo dell'interfaccia del contenitore, vedere gli articoli [contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md) e [attivazione](../../mfc/activation-cpp.md).  
  
> [!NOTE]
>  Il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] fa riferimento agli elementi collegati e incorporati come "oggetti" e fa riferimento ai tipi di elementi come "classi". Questo riferimento viene utilizzato il termine "item" per distinguere l'entità OLE da oggetto C++ corrispondente e il termine "type" per distinguere la categoria OLE dalla classe C++.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 `COleClientItem`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="a-nameactivatea--coleclientitemactivate"></a><a name="activate"></a>COleClientItem::Activate  
 Chiamare questa funzione per eseguire il verbo specificato invece di [DoVerb](#doverb) in modo da poter eseguire il proprio l'elaborazione quando viene generata un'eccezione.  
  
```  
void Activate(
    LONG nVerb,  
    CView* pView,  
    LPMSG lpMsg = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nVerb`  
 Specifica il verbo da eseguire. Può essere uno dei seguenti:  
  
|Valore|Significato|Simbolo|  
|-----------|-------------|------------|  
|– 0|verbo primario|`OLEIVERB_PRIMARY`|  
|– 1|Verbo secondario|(Nessuno)|  
|– 1|Elemento di visualizzazione per la modifica|`OLEIVERB_SHOW`|  
|– 2|Modifica elemento in una finestra separata|`OLEIVERB_OPEN`|  
|– 3|Nascondere elementi|`OLEIVERB_HIDE`|  
  
 Il valore-1 è in genere un alias per un altro verbo. Se non è supportata la modifica aperta, –&2; ha lo stesso effetto di –&1;. Per i valori aggiuntivi, vedere [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pView`  
 Puntatore alla finestra di visualizzazione contenitore che contiene l'elemento OLE. viene utilizzato dall'applicazione server per l'attivazione sul posto. Questo parametro deve essere **NULL** se il contenitore non supporta l'attivazione sul posto.  
  
 `lpMsg`  
 Puntatore al messaggio che ha causato l'elemento da attivare.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione server è stata scritta utilizzando la libreria Microsoft Foundation Class, questa funzione provoca la [OnDoVerb](../../mfc/reference/coleserveritem-class.md#ondoverb) funzione membro del corrispondente `COleServerItem` oggetto da eseguire.  
  
 Se il verbo primario è Edit e viene specificato zero nel `nVerb` parametro, l'applicazione server viene avviato per consentire l'elemento OLE da modificare. Se l'applicazione contenitore supporta l'attivazione sul posto, la modifica può essere eseguita sul posto. Se il contenitore non supporta l'attivazione sul posto (o se viene specificato il verbo Open), il server viene avviato in una finestra separata e la modifica può essere eseguita non esiste. In genere, quando l'utente dell'applicazione contenitore fa doppio clic l'elemento OLE, il valore per il verbo primario nel `nVerb` parametro determina quale azione può richiedere all'utente. Tuttavia, se il server supporta solo un'azione, è necessario tale azione, indipendentemente dalla specificata nel valore di `nVerb` parametro.  
  
 Per ulteriori informazioni, vedere [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameactivateasa--coleclientitemactivateas"></a><a name="activateas"></a>COleClientItem::ActivateAs  
 Utilizza le funzionalità di conversione di oggetti OLE per attivare l'elemento come se fosse un elemento del tipo specificato da `clsidNew`.  
  
```  
virtual BOOL ActivateAs(
    LPCTSTR lpszUserType,  
    REFCLSID clsidOld,  
    REFCLSID clsidNew);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszUserType*  
 Puntatore a una stringa che rappresenta il tipo di utente di destinazione, ad esempio "Documenti di Word".  
  
 *clsidOld*  
 ID di un riferimento alla classe dell'elemento. L'ID di classe deve rappresentare il tipo dell'oggetto effettivo, come archiviato, a meno che non si tratta di un collegamento. In tal caso, sarebbe il CLSID dell'elemento a cui fa riferimento il collegamento. Il [classe COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md) fornisce automaticamente l'ID di classe corretto per l'elemento.  
  
 `clsidNew`  
 Un riferimento all'ID di classe di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo viene chiamato automaticamente da [COleConvertDialog::DoConvert](../../mfc/reference/coleconvertdialog-class.md#doconvert). Non viene in genere chiamato direttamente.  
  
##  <a name="a-nameattachdataobjecta--coleclientitemattachdataobject"></a><a name="attachdataobject"></a>COleClientItem::AttachDataObject  
 Chiamare questa funzione per inizializzare un [COleDataObject](../../mfc/reference/coledataobject-class.md) per l'accesso ai dati dell'elemento OLE.  
  
```  
void AttachDataObject(COleDataObject& rDataObject) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *rDataObject*  
 Fare riferimento a un `COleDataObject` oggetto che verrà inizializzata per consentire l'accesso ai dati dell'elemento OLE.  
  
##  <a name="a-namecanactivatea--coleclientitemcanactivate"></a><a name="canactivate"></a>COleClientItem:: CanActivate  
 Chiamato dal framework quando l'utente richiede l'attivazione sul posto dell'elemento OLE; valore restituito della funzione determina se è consentita l'attivazione sul posto.  
  
```  
virtual BOOL CanActivate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è consentita l'attivazione sul posto. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita consente l'attivazione sul posto se il contenitore dispone di una finestra valida. Eseguire l'override di questa funzione per implementare la logica speciale per accettare o rifiutare la richiesta di attivazione. Ad esempio, una richiesta di attivazione può essere rifiutata se l'elemento OLE è troppo piccolo o non è attualmente visibile.  
  
 Per ulteriori informazioni, vedere [IOleInPlaceSite::CanInPlaceActivate](http://msdn.microsoft.com/library/windows/desktop/ms691236) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecancreatefromdataa--coleclientitemcancreatefromdata"></a><a name="cancreatefromdata"></a>COleClientItem::CanCreateFromData  
 Controlla se un'applicazione contenitore può creare un oggetto incorporato di determinato `COleDataObject` oggetto.  
  
```  
static BOOL PASCAL CanCreateFromData(const COleDataObject* pDataObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Puntatore al [COleDataObject](../../mfc/reference/coledataobject-class.md) oggetto da cui viene creato l'elemento OLE.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il contenitore può creare un oggetto incorporato di `COleDataObject` oggetto; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La `COleDataObject` classe viene utilizzata nei trasferimenti di dati per il recupero dei dati in diversi formati dagli Appunti, mediante il trascinamento della selezione o da un elemento OLE incorporato.  
  
 Contenitori questa funzione consente di decidere se abilitare o disabilitare i comandi di modifica Incolla e modificare Incolla speciale.  
  
 Per ulteriori informazioni, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md).  
  
##  <a name="a-namecancreatelinkfromdataa--coleclientitemcancreatelinkfromdata"></a><a name="cancreatelinkfromdata"></a>COleClientItem::CanCreateLinkFromData  
 Controlla se un'applicazione contenitore può creare un oggetto collegato il determinato `COleDataObject` oggetto.  
  
```  
static BOOL PASCAL CanCreateLinkFromData(const COleDataObject* pDataObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Puntatore al [COleDataObject](../../mfc/reference/coledataobject-class.md) oggetto da cui viene creato l'elemento OLE.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il contenitore può creare un oggetto collegato il `COleDataObject` oggetto.  
  
### <a name="remarks"></a>Note  
 La `COleDataObject` classe viene utilizzata nei trasferimenti di dati per il recupero dei dati in diversi formati dagli Appunti, mediante il trascinamento della selezione o da un elemento OLE incorporato.  
  
 Contenitori questa funzione consente di decidere se abilitare o disabilitare i comandi di modifica Incolla speciale e modificare Incolla collegamento.  
  
 Per ulteriori informazioni, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md).  
  
##  <a name="a-namecanpastea--coleclientitemcanpaste"></a><a name="canpaste"></a>COleClientItem::CanPaste  
 Chiamare questa funzione per vedere se un elemento OLE incorporato può essere incollato dagli Appunti.  
  
```  
static BOOL PASCAL CanPaste();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un elemento OLE incorporato può essere incollato dagli Appunti. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [OleGetClipboard](http://msdn.microsoft.com/library/windows/desktop/ms692778) e [OleQueryCreateFromData](http://msdn.microsoft.com/library/windows/desktop/ms683739) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecanpastelinka--coleclientitemcanpastelink"></a><a name="canpastelink"></a>COleClientItem::CanPasteLink  
 Chiamare questa funzione per vedere se un elemento OLE collegato può essere incollato dagli Appunti.  
  
```  
static BOOL PASCAL CanPasteLink();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un elemento OLE collegato può essere incollato dagli Appunti. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [OleGetClipboard](http://msdn.microsoft.com/library/windows/desktop/ms692778) e [OleQueryLinkFromData](http://msdn.microsoft.com/library/windows/desktop/ms690244) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameclosea--coleclientitemclose"></a><a name="close"></a>COleClientItem::Close  
 Chiamare questa funzione per modificare lo stato di un elemento OLE dallo stato di esecuzione allo stato caricato, vale a dire caricato con il relativo gestore in memoria, ma con il server non è in esecuzione.  
  
```  
void Close(OLECLOSE dwCloseOption = OLECLOSE_SAVEIFDIRTY);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCloseOption`  
 Flag che specifica le condizioni dell'elemento OLE viene salvato quando torna allo stato caricato. Può avere uno dei valori seguenti:  
  
- `OLECLOSE_SAVEIFDIRTY`Salvare l'elemento OLE.  
  
- `OLECLOSE_NOSAVE`Non salvare l'elemento OLE.  
  
- `OLECLOSE_PROMPTSAVE`Richiedere all'utente se salvare l'elemento OLE.  
  
### <a name="remarks"></a>Note  
 Questa funzione non ha alcun effetto quando l'elemento OLE non è in esecuzione.  
  
 Per ulteriori informazioni, vedere [IOleObject::Close](http://msdn.microsoft.com/library/windows/desktop/ms683922) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecoleclientitema--coleclientitemcoleclientitem"></a><a name="coleclientitem"></a>COleClientItem::COleClientItem  
 Costruisce un `COleClientItem` e lo aggiunge all'insieme del documento contenitore di elementi del documento, che costruisce solo l'oggetto C++ e non esegue le operazioni di inizializzazione OLE.  
  
```  
COleClientItem(COleDocument* pContainerDoc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pContainerDoc`  
 Puntatore al documento contenitore che conterrà questo elemento. Può trattarsi di qualsiasi [COleDocument](../../mfc/reference/coledocument-class.md) derivato.  
  
### <a name="remarks"></a>Note  
 Se si passa un **NULL** puntatore, non viene effettuata alcuna aggiunta al documento contenitore. È necessario chiamare esplicitamente [COleDocument::AddItem](../../mfc/reference/coledocument-class.md#additem).  
  
 Prima di utilizzare l'elemento OLE, è necessario chiamare una delle seguenti funzioni membro creazione:  
  
- [CreateFromClipboard](#createfromclipboard)  
  
- [CreateFromData](#createfromdata)  
  
- [CreateFromFile](#createfromfile)  
  
- [CreateStaticFromClipboard](#createstaticfromclipboard)  
  
- [CreateStaticFromData](#createstaticfromdata)  
  
- [CreateLinkFromClipboard](#createlinkfromclipboard)  
  
- [CreateLinkFromData](#createlinkfromdata)  
  
- [CreateLinkFromFile](#createlinkfromfile)  
  
- [CreateNewItem](#createnewitem)  
  
- [CreateCloneFrom](#createclonefrom)  
  
##  <a name="a-nameconverttoa--coleclientitemconvertto"></a><a name="convertto"></a>COleClientItem::ConvertTo  
 Chiamare questa funzione membro per convertire l'elemento nel tipo specificato da `clsidNew`.  
  
```  
virtual BOOL ConvertTo(REFCLSID clsidNew);
```  
  
### <a name="parameters"></a>Parametri  
 `clsidNew`  
 L'ID di classe del tipo di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo viene chiamato automaticamente da [classe COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md). Non è necessario chiamarlo direttamente.  
  
##  <a name="a-namecopytoclipboarda--coleclientitemcopytoclipboard"></a><a name="copytoclipboard"></a>COleClientItem::CopyToClipboard  
 Chiamare questa funzione per copiare l'elemento OLE negli Appunti.  
  
```  
void CopyToClipboard(BOOL bIncludeLink = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `bIncludeLink`  
 **TRUE** se le informazioni sui collegamenti deve essere copiate negli Appunti, consentendo un elemento collegato deve essere incollato; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 In genere, si chiama questa funzione durante la scrittura di gestori di messaggi per il comando copia o Taglia dal menu Modifica. Se si desidera implementare il comando copia o Taglia, è necessario implementare la selezione di elementi nell'applicazione contenitore.  
  
 Per ulteriori informazioni, vedere [OleSetClipboard](http://msdn.microsoft.com/library/windows/desktop/ms686623) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreateclonefroma--coleclientitemcreateclonefrom"></a><a name="createclonefrom"></a>COleClientItem::CreateCloneFrom  
 Chiamare questa funzione per creare una copia dell'elemento OLE specificato.  
  
```  
BOOL CreateCloneFrom(const COleClientItem* pSrcItem);
```  
  
### <a name="parameters"></a>Parametri  
 *pSrcItem*  
 Puntatore all'elemento OLE da duplicare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La copia è identica all'elemento di origine. È possibile utilizzare questa funzione per supportare le operazioni di annullamento.  
  
##  <a name="a-namecreatefromclipboarda--coleclientitemcreatefromclipboard"></a><a name="createfromclipboard"></a>COleClientItem::CreateFromClipboard  
 Chiamare questa funzione per creare un elemento incorporato dal contenuto degli Appunti.  
  
```  
BOOL CreateFromClipboard(
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È in genere chiamare questa funzione dal gestore dei messaggi per il comando Incolla del menu Modifica. (Il comando Incolla viene abilitato per il framework se la [CanPaste](#canpaste) funzione membro restituisce diverso da zero.)  
  
 Per ulteriori informazioni, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatefromdataa--coleclientitemcreatefromdata"></a><a name="createfromdata"></a>COleClientItem::CreateFromData  
 Chiamare questa funzione per creare un elemento incorporato da un `COleDataObject` oggetto.  
  
```  
BOOL CreateFromData(
    COleDataObject* pDataObject,  
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Puntatore al [COleDataObject](../../mfc/reference/coledataobject-class.md) oggetto da cui viene creato l'elemento OLE.  
  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Operazioni di trasferimento di dati, ad esempio un'operazione Incolla dagli Appunti le operazioni di trascinamento e rilascio, forniscono `COleDataObject` gli oggetti che contiene le informazioni offerte da un'applicazione server. In genere viene utilizzato nell'override della [CView::OnDrop](../../mfc/reference/cview-class.md#ondrop).  
  
 Per ulteriori informazioni, vedere [OleCreateFromData](http://msdn.microsoft.com/library/windows/desktop/ms691211), [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507), e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatefromfilea--coleclientitemcreatefromfile"></a><a name="createfromfile"></a>CreateFromFile  
 Chiamare questa funzione per creare un elemento OLE incorporato da un file.  
  
```  
BOOL CreateFromFile(
    LPCTSTR lpszFileName,  
    REFCLSID clsid = CLSID_NULL,  
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFileName`  
 Puntatore al nome del file da cui viene creato l'elemento OLE.  
  
 `clsid`  
 Riservato per utilizzi futuri.  
  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione da [COleInsertDialog::CreateItem](../../mfc/reference/coleinsertdialog-class.md#createitem) se l'utente sceglie OK nella finestra di dialogo Inserisci oggetto quando si seleziona la creazione con il pulsante File.  
  
 Per ulteriori informazioni, vedere [OleCreateFromFile](http://msdn.microsoft.com/library/windows/desktop/ms690116), [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507), e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatelinkfromclipboarda--coleclientitemcreatelinkfromclipboard"></a><a name="createlinkfromclipboard"></a>COleClientItem::CreateLinkFromClipboard  
 Chiamare questa funzione per creare un elemento collegato dal contenuto degli Appunti.  
  
```  
BOOL CreateLinkFromClipboard(
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è in genere chiamare dal gestore dei messaggi per il comando Incolla collegamento dal menu Modifica. (Il comando Incolla collegamento è abilitato nell'implementazione predefinita di [COleDocument](../../mfc/reference/coledocument-class.md) se gli Appunti contengono un elemento OLE che può essere collegato a.)  
  
 Per ulteriori informazioni, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatelinkfromdataa--coleclientitemcreatelinkfromdata"></a><a name="createlinkfromdata"></a>COleClientItem::CreateLinkFromData  
 Chiamare questa funzione per creare un elemento collegato da un `COleDataObject` oggetto.  
  
```  
BOOL CreateLinkFromData(
    COleDataObject* pDataObject,  
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Puntatore al [COleDataObject](../../mfc/reference/coledataobject-class.md) oggetto da cui viene creato l'elemento OLE.  
  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo durante un'operazione di rilascio quando l'utente indicato che deve essere creato un collegamento. Può essere utilizzato anche per gestire il comando Incolla di modifica. Viene chiamato dal framework in `COleClientItem::CreateLinkFromClipboard` e [COlePasteSpecialDialog::CreateItem](../../mfc/reference/colepastespecialdialog-class.md#createitem) quando è stata selezionata l'opzione di collegamento.  
  
 Per ulteriori informazioni, vedere [OleCreateLinkFromData](http://msdn.microsoft.com/library/windows/desktop/ms680731), [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507), e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatelinkfromfilea--coleclientitemcreatelinkfromfile"></a><a name="createlinkfromfile"></a>COleClientItem::CreateLinkFromFile  
 Chiamare questa funzione per creare un elemento OLE collegato da un file.  
  
```  
BOOL CreateLinkFromFile(
    LPCTSTR lpszFileName,  
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFileName`  
 Puntatore al nome del file da cui viene creato l'elemento OLE.  
  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione se l'utente sceglie OK nella finestra di dialogo Inserisci oggetto quando si seleziona la creazione con il pulsante File ed è selezionata la casella di controllo di collegamento. Viene chiamato da [COleInsertDialog::CreateItem](../../mfc/reference/coleinsertdialog-class.md#createitem).  
  
 Per ulteriori informazioni, vedere [OleCreateLinkToFile](http://msdn.microsoft.com/library/windows/desktop/ms678434), [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507), e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatenewitema--coleclientitemcreatenewitem"></a><a name="createnewitem"></a>COleClientItem::CreateNewItem  
 Chiamare questa funzione per creare un elemento incorporato. Questa funzione avvia l'applicazione server che consente all'utente di creare l'elemento OLE.  
  
```  
BOOL CreateNewItem(
    REFCLSID clsid,  
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 ID che identifica il tipo di elemento OLE da creare.  
  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione se l'utente sceglie OK nella finestra di dialogo Inserisci oggetto quando viene selezionato il pulsante Crea nuovo.  
  
 Per ulteriori informazioni, vedere [OleCreate](http://msdn.microsoft.com/library/windows/desktop/ms678409), [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507), e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatestaticfromclipboarda--coleclientitemcreatestaticfromclipboard"></a><a name="createstaticfromclipboard"></a>COleClientItem::CreateStaticFromClipboard  
 Chiamare questa funzione per creare un elemento statico dal contenuto degli Appunti.  
  
```  
BOOL CreateStaticFromClipboard(
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un elemento statico contiene i dati della presentazione ma non i dati nativi. di conseguenza non può essere modificato. Chiamare questa funzione in genere se il [CreateFromClipboard](#createfromclipboard) membro funzione ha esito negativo.  
  
 Per ulteriori informazioni, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatestaticfromdataa--coleclientitemcreatestaticfromdata"></a><a name="createstaticfromdata"></a>COleClientItem::CreateStaticFromData  
 Chiamare questa funzione per creare un elemento statico da un `COleDataObject` oggetto.  
  
```  
BOOL CreateStaticFromData(
    COleDataObject* pDataObject,  
    OLERENDER render = OLERENDER_DRAW,  
    CLIPFORMAT cfFormat = 0,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Puntatore al [COleDataObject](../../mfc/reference/coledataobject-class.md) oggetto da cui viene creato l'elemento OLE.  
  
 *eseguire il rendering*  
 Flag che specifica come il server eseguirà il rendering dell'elemento OLE. Per i valori possibili, vedere [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `cfFormat`  
 Specifica il formato di dati negli Appunti da memorizzare nella cache durante la creazione dell'elemento OLE.  
  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura utilizzata se *rendering* è **OLERENDER_FORMAT** o **OLERENDER_DRAW**. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se si omette questo parametro, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un elemento statico contiene i dati della presentazione ma non i dati nativi. di conseguenza, non può essere modificato. Questo è essenzialmente identica [CreateStaticFromClipboard](#createstaticfromclipboard) ad eccezione del fatto che un elemento statico può essere creato da un oggetto arbitrario `COleDataObject`, non solo dagli Appunti.  
  
 Utilizzato [COlePasteSpecialDialog::CreateItem](../../mfc/reference/colepastespecialdialog-class.md#createitem) quando viene selezionato statico.  
  
 Per ulteriori informazioni, vedere [OleCreateStaticFromData](http://msdn.microsoft.com/library/windows/desktop/ms687290), [OLERENDER](http://msdn.microsoft.com/library/windows/desktop/ms691507), e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedeactivatea--coleclientitemdeactivate"></a><a name="deactivate"></a>COleClientItem::Deactivate  
 Chiamare questa funzione per disattivare l'elemento OLE e liberare qualsiasi risorsa associata.  
  
```  
void Deactivate();
```  
  
### <a name="remarks"></a>Note  
 Un elemento OLE attivo sul posto si disattiva, in genere, quando l'utente fa clic del mouse sull'area client all'esterno dei limiti dell'elemento. Si noti che la disattivazione dell'elemento OLE eliminerà lo stato di annullamento, rendendo impossibile chiamare il [ReactivateAndUndo](#reactivateandundo) funzione membro.  
  
 Se l'applicazione supporta l'annullamento, non chiamare `Deactivate`; in alternativa, chiamare [DeactivateUI](#deactivateui).  
  
 Per ulteriori informazioni, vedere [IOleInPlaceObject::InPlaceDeactivate](http://msdn.microsoft.com/library/windows/desktop/ms679700) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedeactivateuia--coleclientitemdeactivateui"></a><a name="deactivateui"></a>COleClientItem::DeactivateUI  
 Chiamare questa funzione quando l'utente disattiva un elemento che è stato attivato sul posto.  
  
```  
void DeactivateUI();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione consente di ripristinare lo stato originale, nascondere tutti i menu e altri controlli che sono stati creati per l'attivazione sul posto dell'interfaccia utente dell'applicazione contenitore.  
  
 Questa funzione non consente di scaricare le informazioni sullo stato di annullamento per l'elemento. Che le informazioni vengono conservate in modo che [ReactivateAndUndo](#reactivateandundo) in un secondo momento può essere utilizzato per eseguire un comando di annullamento nell'applicazione server, nel caso in cui viene scelto il comando di annullamento del contenitore immediatamente dopo aver disattivato l'elemento.  
  
 Per ulteriori informazioni, vedere [IOleInPlaceObject::InPlaceDeactivate](http://msdn.microsoft.com/library/windows/desktop/ms679700) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedeletea--coleclientitemdelete"></a><a name="delete"></a>COleClientItem::Delete  
 Chiamare questa funzione per eliminare l'elemento OLE dal documento contenitore.  
  
```  
void Delete(BOOL bAutoDelete = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bAutoDelete`  
 Specifica se l'elemento deve essere rimosso dal documento.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama la [versione](#release) funzione membro, che a sua volta consente di eliminare l'oggetto C++ per l'elemento, in modo permanente la rimozione dell'elemento OLE dal documento. Se l'elemento OLE è incorporato, i dati nativi per l'elemento viene eliminati. Chiude sempre un server in esecuzione. Pertanto, se l'elemento è un collegamento open, questa funzione chiude.  
  
##  <a name="a-namedodragdropa--coleclientitemdodragdrop"></a><a name="dodragdrop"></a>COleClientItem::DoDragDrop  
 Chiamare il `DoDragDrop` funzione membro per eseguire un'operazione di trascinamento e rilascio.  
  
```  
DROPEFFECT DoDragDrop(
    LPCRECT lpItemRect,  
    CPoint ptOffset,  
    BOOL bIncludeLink = FALSE,  
    DWORD dwEffects = DROPEFFECT_COPY | DROPEFFECT_MOVE,  
    LPCRECT lpRectStartDrag = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpItemRect`  
 Rettangolo dell'elemento sullo schermo nelle coordinate del client (in pixel).  
  
 `ptOffset`  
 L'offset dal `lpItemRect` al momento dell'operazione di trascinamento in cui era la posizione del mouse.  
  
 `bIncludeLink`  
 Impostare questa proprietà su **TRUE** se i dati di collegamento devono essere copiati negli Appunti. Impostarlo su **FALSE** se l'applicazione server non supporta i collegamenti.  
  
 `dwEffects`  
 Determina gli effetti che consentirà l'origine di trascinamento nell'operazione di trascinamento.  
  
 `lpRectStartDrag`  
 Puntatore al rettangolo che definisce dove viene avviato effettivamente l'operazione di trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.  
  
### <a name="return-value"></a>Valore restituito  
 Valore `DROPEFFECT`. In questo caso `DROPEFFECT_MOVE`, i dati originali devono essere rimossi.  
  
### <a name="remarks"></a>Note  
 L'operazione di trascinamento e rilascio non viene avviato immediatamente. È in attesa fino a quando il cursore del mouse lascia il rettangolo specificato da `lpRectStartDrag` o fino a quando un numero specificato di millisecondi trascorsi. Se `lpRectStartDrag` è **NULL**, le dimensioni del rettangolo sono&1; pixel.  
  
 L'intervallo di tempo viene specificato dall'impostazione della chiave del Registro di sistema. È possibile modificare l'intervallo di tempo chiamando [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) o [CWinApp:: Writeprofileint](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica l'intervallo di tempo, viene utilizzato un valore predefinito pari a 200 millisecondi. Trascinare ritardo dell'ora verrà archiviato come segue:  
  
-   Ritarda ora di Windows NT trascinare verrà archiviato in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.  
  
-   Ritarda ora di Windows 3. x trascinare verrà archiviato nel file WIN. File INI, la sezione [Windows}.  
  
-   Ritarda ora di Windows 95/98 trascinare viene archiviato in una versione memorizzata nella cache di WIN. INI.  
  
 Per ulteriori informazioni su come trascinare ritardato informazioni vengono archiviate nel Registro di sistema o. File INI, vedere [WriteProfileString](http://msdn.microsoft.com/library/windows/desktop/ms725504) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedoverba--coleclientitemdoverb"></a><a name="doverb"></a>COleClientItem::DoVerb  
 Chiamare `DoVerb` per eseguire il verbo specificato.  
  
```  
virtual BOOL DoVerb(
    LONG nVerb,  
    CView* pView,
    LPMSG lpMsg = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nVerb`  
 Specifica il verbo da eseguire. Può includere uno dei seguenti:  
  
|Valore|Significato|Simbolo|  
|-----------|-------------|------------|  
|– 0|verbo primario|`OLEIVERB_PRIMARY`|  
|– 1|Verbo secondario|(Nessuno)|  
|– 1|Elemento di visualizzazione per la modifica|`OLEIVERB_SHOW`|  
|– 2|Modifica elemento in una finestra separata|`OLEIVERB_OPEN`|  
|– 3|Nascondere elementi|`OLEIVERB_HIDE`|  
  
 Il valore-1 è in genere un alias per un altro verbo. Se non è supportata la modifica aperta, –&2; ha lo stesso effetto di –&1;. Per i valori aggiuntivi, vedere [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pView`  
 Puntatore alla finestra di visualizzazione. viene utilizzato dal server per l'attivazione sul posto. Questo parametro deve essere **NULL** se l'applicazione contenitore non consente l'attivazione sul posto.  
  
 `lpMsg`  
 Puntatore al messaggio che ha causato l'elemento da attivare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il verbo è stato eseguito correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama la [attiva](#activate) funzione membro per eseguire il verbo. Inoltre, intercetta le eccezioni e viene visualizzato un messaggio all'utente se genera un'eccezione.  
  
 Se il verbo primario è Edit e viene specificato zero nel `nVerb` parametro, l'applicazione server viene avviato per consentire l'elemento OLE da modificare. Se l'applicazione contenitore supporta l'attivazione sul posto, la modifica può essere eseguita sul posto. Se il contenitore non supporta l'attivazione sul posto (o se viene specificato il verbo Open), il server viene avviato in una finestra separata e la modifica può essere eseguita non esiste. In genere, quando l'utente dell'applicazione contenitore fa doppio clic l'elemento OLE, il valore per il verbo primario nel `nVerb` parametro determina quale azione può richiedere all'utente. Tuttavia, se il server supporta solo un'azione, è necessario tale azione, indipendentemente dalla specificata nel valore di `nVerb` parametro.  
  
##  <a name="a-namedrawa--coleclientitemdraw"></a><a name="draw"></a>COleClientItem::Draw  
 Chiamare questa funzione per disegnare l'elemento OLE nel rettangolo di delimitazione specificato utilizzando il contesto di dispositivo specificato.  
  
```  
BOOL Draw(
    CDC* pDC,  
    LPCRECT lpBounds,  
    DVASPECT nDrawAspect = (DVASPECT)-1);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore a un [CDC](../../mfc/reference/cdc-class.md) oggetto utilizzato per disegnare l'elemento OLE.  
  
 `lpBounds`  
 Puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o `RECT` struttura che definisce il rettangolo di delimitazione in cui disegnare l'elemento OLE (in unità logiche determinata dal contesto di dispositivo).  
  
 `nDrawAspect`  
 Specifica l'aspetto di OLE elemento, vale a dire, modalità di visualizzazione. Se `nDrawAspect` -1, l'ultimo aspetto impostata utilizzando [SetDrawAspect](#setdrawaspect) viene utilizzato. Per ulteriori informazioni sui possibili valori per questo flag, vedere [SetDrawAspect](#setdrawaspect).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La funzione può utilizzare la rappresentazione del metafile dell'elemento OLE creato il [OnDraw](../../mfc/reference/coleserveritem-class.md#ondraw) funzione membro `COleServerItem`.  
  
 In genere si utilizza **disegnare** per la visualizzazione su schermo, passando il contesto di dispositivo dello schermo come `pDC`. In questo caso, è necessario specificare solo i primi due parametri.  
  
 Il `lpBounds` parametro identifica il rettangolo nel contesto di dispositivo di destinazione (relativo alla modalità di mapping di corrente). Il rendering potrebbe comportare il ridimensionamento dell'immagine e può essere utilizzato dalle applicazioni contenitore per imporre una vista che viene ridimensionata tra la visualizzazione e l'immagine stampata finale.  
  
 Per ulteriori informazioni, vedere [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms688655) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetactiveviewa--coleclientitemgetactiveview"></a><a name="getactiveview"></a>COleClientItem::GetActiveView  
 Restituisce la vista in cui l'elemento è attivato sul posto.  
  
```  
CView* GetActiveView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla visualizzazione. in caso contrario **NULL** se l'elemento non è attivato sul posto.  
  
##  <a name="a-namegetcachedextenta--coleclientitemgetcachedextent"></a><a name="getcachedextent"></a>COleClientItem::GetCachedExtent  
 Chiamare questa funzione per recuperare la dimensione dell'elemento OLE.  
  
```  
BOOL GetCachedExtent(
    LPSIZE lpSize,  
    DVASPECT nDrawAspect = (DVASPECT)-1);
```  
  
### <a name="parameters"></a>Parametri  
 `lpSize`  
 Puntatore a un **dimensioni** struttura o un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che riceverà le informazioni sulle dimensioni.  
  
 `nDrawAspect`  
 Specifica l'aspetto dell'elemento OLE cui limiti devono essere recuperate. Per i valori possibili, vedere [SetDrawAspect](#setdrawaspect).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 se l'elemento OLE è vuoto.  
  
### <a name="remarks"></a>Note  
 Questa funzione fornisce le stesse informazioni [GetExtent](#getextent). Tuttavia, è possibile chiamare `GetCachedExtent` per ottenere informazioni di extent durante l'elaborazione di altri gestori OLE, ad esempio [OnChange](#onchange). Le dimensioni sono `MM_HIMETRIC` unità.  
  
 Ciò è possibile perché `GetCachedExtent` utilizza il [IViewObject2](http://msdn.microsoft.com/library/windows/desktop/ms691318) interfaccia piuttosto che utilizzare il [IOleObject](http://msdn.microsoft.com/library/windows/desktop/dd542709) interfaccia per ottenere l'ambito di questo elemento. Il **IViewObject2** oggetto COM memorizza nella cache le informazioni di misura utilizzate nella chiamata precedente a [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms688655).  
  
 Per ulteriori informazioni, vedere [IViewObject2::GetExtent](http://msdn.microsoft.com/library/windows/desktop/ms684032) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetclassida--coleclientitemgetclassid"></a><a name="getclassid"></a>COleClientItem::GetClassID  
 Restituisce l'ID di classe dell'elemento nella memoria puntata da `pClassID`.  
  
```  
void GetClassID(CLSID* pClassID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pClassID`  
 Puntatore a un identificatore di tipo [CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) per recuperare l'ID di classe. Per informazioni su **CLSID**, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 L'ID di classe è un numero a 128 bit che identifica in modo univoco l'applicazione che modifica l'elemento.  
  
 Per ulteriori informazioni, vedere [IPersist:: GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetclipboarddataa--coleclientitemgetclipboarddata"></a><a name="getclipboarddata"></a>COleClientItem::GetClipboardData  
 Chiamare questa funzione per ottenere un `COleDataSource` oggetto contenente tutti i dati che potrebbero essere inseriti negli Appunti da una chiamata al [CopyToClipboard](#copytoclipboard) funzione membro.  
  
```  
void GetClipboardData(
    COleDataSource* pDataSource,  
    BOOL bIncludeLink = FALSE,  
    LPPOINT lpOffset = NULL,  
    LPSIZE lpSize = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataSource`  
 Puntatore a un [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto che riceverà i dati contenuti nell'elemento OLE.  
  
 `bIncludeLink`  
 **TRUE** se collegamento dati devono essere incluse; in caso contrario **FALSE**.  
  
 `lpOffset`  
 L'offset del cursore del mouse rispetto all'origine dell'oggetto in pixel.  
  
 `lpSize`  
 Le dimensioni dell'oggetto in pixel.  
  
### <a name="remarks"></a>Note  
 `GetClipboardData`viene chiamato come l'implementazione predefinita di [OnGetClipboardData](#ongetclipboarddata). Eseguire l'override `OnGetClipboardData` solo se si desidera offrire formati di dati oltre a quelli offerti da `CopyToClipboard`. Inserire tali formati nel `COleDataSource` oggetto prima o dopo la chiamata `CopyToClipboard`, quindi passare il `COleDataSource` dell'oggetto per il [SetClipboard](../../mfc/reference/coledatasource-class.md#setclipboard) (funzione). Ad esempio, se si desidera la posizione dell'elemento OLE nel documento relativo contenitore per allegarlo negli Appunti, si potrebbe definire un formato per il passaggio di informazioni e posizionarlo nel `COleDataSource` prima di chiamare `CopyToClipboard`.  
  
##  <a name="a-namegetdocumenta--coleclientitemgetdocument"></a><a name="getdocument"></a>COleClientItem::GetDocument  
 Chiamare questa funzione per ottenere un puntatore al documento che contiene l'elemento OLE.  
  
```  
COleDocument* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al documento che contiene l'elemento OLE. **NULL** se l'elemento non è parte di un documento.  
  
### <a name="remarks"></a>Note  
 Questo puntatore consente l'accesso alla `COleDocument` oggetto passato come argomento per il `COleClientItem` costruttore.  
  
##  <a name="a-namegetdrawaspecta--coleclientitemgetdrawaspect"></a><a name="getdrawaspect"></a>COleClientItem::GetDrawAspect  
 Chiamare il `GetDrawAspect` funzione membro per determinare la corrente "aspetto", o la vista dell'elemento.  
  
```  
DVASPECT GetDrawAspect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di `DVASPECT` enumerazione i cui valori sono elencati negli argomenti di riferimento per [SetDrawAspect](#setdrawaspect).  
  
### <a name="remarks"></a>Note  
 L'aspetto specifica come l'elemento da sottoporre a rendering.  
  
##  <a name="a-namegetextenta--coleclientitemgetextent"></a><a name="getextent"></a>COleClientItem::GetExtent  
 Chiamare questa funzione per recuperare la dimensione dell'elemento OLE.  
  
```  
BOOL GetExtent(
    LPSIZE lpSize,  
    DVASPECT nDrawAspect = (DVASPECT)- 1);
```  
  
### <a name="parameters"></a>Parametri  
 `lpSize`  
 Puntatore a un **dimensioni** struttura o un `CSize` oggetto che riceverà le informazioni sulle dimensioni.  
  
 `nDrawAspect`  
 Specifica l'aspetto dell'elemento OLE cui limiti devono essere recuperate. Per i valori possibili, vedere [SetDrawAspect](#setdrawaspect).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 se l'elemento OLE è vuoto.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione server è stata scritta utilizzando la libreria Microsoft Foundation Class, questa funzione provoca la [OnGetExtent](../../mfc/reference/coleserveritem-class.md#ongetextent) funzione membro del corrispondente `COleServerItem` oggetto da chiamare. Si noti che le dimensioni recuperata possono differire dalla dimensione dell'ultima impostazione di [SetExtent](#setextent) funzione membro; la dimensione specificata da `SetExtent` viene considerato come un suggerimento. Le dimensioni sono `MM_HIMETRIC` unità.  
  
> [!NOTE]
>  Non chiamare `GetExtent` durante l'elaborazione di un gestore OLE, ad esempio [OnChange](#onchange). Chiamare [GetCachedExtent](#getcachedextent) invece.  
  
 Per ulteriori informazioni, vedere [IOleObject::GetExtent](http://msdn.microsoft.com/library/windows/desktop/ms692325) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegeticonfromregistrya--coleclientitemgeticonfromregistry"></a><a name="geticonfromregistry"></a>COleClientItem::GetIconFromRegistry  
 Chiamare questa funzione membro per recuperare un handle per una risorsa icona associata al server di un particolare CLSID.  
  
```  
HICON GetIconFromRegistry() const;  
  
static HICON GetIconFromRegistry(CLSID& clsid);
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 Un riferimento al CLSID per il server associato all'icona.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle valido per la risorsa icona, o **NULL** se sull'icona del server o un'icona predefinita, non viene trovata.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro non verrà avviato il server o ottenere un'icona in modo dinamico, anche se il server è già in esecuzione. Invece, questa funzione membro apre l'immagine eseguibile del server e recupera l'icona statico associato al server in cui è stata registrata.  
  
##  <a name="a-namegeticonicmetafilea--coleclientitemgeticonicmetafile"></a><a name="geticonicmetafile"></a>COleClientItem::GetIconicMetafile  
 Recupera il metafile utilizzato per disegnare l'icona dell'elemento.  
  
```  
HGLOBAL GetIconicMetafile();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle del metafile se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se è presente alcuna icona corrente, un'icona predefinita. Questo viene chiamato automaticamente da finestre di dialogo MFC/OLE e in genere non viene chiamato direttamente.  
  
 Questa funzione chiama inoltre [SetIconicMetafile](#seticonicmetafile) per memorizzare nella cache del metafile per un utilizzo successivo.  
  
##  <a name="a-namegetinplacewindowa--coleclientitemgetinplacewindow"></a><a name="getinplacewindow"></a>COleClientItem::GetInPlaceWindow  
 Chiamare il `GetInPlaceWindow` funzione membro per ottenere un puntatore alla finestra in cui l'elemento è stato aperto per la modifica sul posto.  
  
```  
CWnd* GetInPlaceWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla finestra di modifica sul posto dell'elemento; **NULL** se l'elemento non è attivo o se il server non è disponibile.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata solo per gli elementi che sono attivi sul posto.  
  
##  <a name="a-namegetitemstatea--coleclientitemgetitemstate"></a><a name="getitemstate"></a>COleClientItem::GetItemState  
 Chiamare questa funzione per ottenere lo stato corrente dell'elemento OLE.  
  
```  
UINT GetItemState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **COleClientItem:: ItemState** enumerato valore, che può essere uno dei seguenti: `emptyState`, **loadedState**, `openState`, `activeState`, `activeUIState`. Per informazioni su questi stati, vedere l'articolo [contenitori: stati Client-Item](../../mfc/containers-client-item-states.md).  
  
### <a name="remarks"></a>Note  
 Per essere notificato quando viene modificato lo stato dell'elemento OLE, utilizzare il [OnChange](#onchange) funzione membro.  
  
 Per ulteriori informazioni, vedere l'articolo [contenitori: stati Client-Item](../../mfc/containers-client-item-states.md).  
  
##  <a name="a-namegetlaststatusa--coleclientitemgetlaststatus"></a><a name="getlaststatus"></a>COleClientItem::GetLastStatus  
 Restituisce il codice di stato dell'ultima operazione OLE.  
  
```  
SCODE GetLastStatus() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore `SCODE`.  
  
### <a name="remarks"></a>Note  
 Per membro funzioni che restituiscono un **BOOL** valore **FALSE**, o altre funzioni che restituiscono **NULL**, `GetLastStatus` restituisce ulteriori informazioni sull'errore. Tenere presente che la maggior parte delle funzioni di membro OLE generano eccezioni per gli errori più gravi. Le informazioni specifiche sull'interpretazione del `SCODE` varia a seconda della chiamata OLE sottostante che ultima restituito un `SCODE` valore.  
  
 Per ulteriori informazioni su `SCODE`, vedere [struttura di codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] documentazione.  
  
##  <a name="a-namegetlinkupdateoptionsa--coleclientitemgetlinkupdateoptions"></a><a name="getlinkupdateoptions"></a>COleClientItem::GetLinkUpdateOptions  
 Chiamare questa funzione per ottenere il valore corrente dell'opzione di aggiornamento di collegamento per l'elemento OLE.  
  
```  
OLEUPDATE GetLinkUpdateOptions();
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti:  
  
- `OLEUPDATE_ALWAYS`Aggiornare l'elemento collegato quando possibile. Questa opzione supporta il pulsante di opzione di collegamento automatico nella finestra di dialogo collegamenti.  
  
- `OLEUPDATE_ONCALL`Aggiornare l'elemento collegato solo su richiesta dall'applicazione contenitore (quando il [UpdateLink](#updatelink) viene chiamata la funzione membro). Questa opzione supporta il pulsante di opzione di collegamento-aggiornamento manuale nella finestra di dialogo collegamenti.  
  
### <a name="remarks"></a>Note  
 Si tratta di un'operazione avanzata.  
  
 Questa funzione viene chiamata automaticamente dal [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md) (classe).  
  
 Per ulteriori informazioni, vedere [IOleLink::GetUpdateOptions](http://msdn.microsoft.com/library/windows/desktop/ms680100) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettypea--coleclientitemgettype"></a><a name="gettype"></a>COleClientItem::GetType  
 Chiamare questa funzione per determinare se l'elemento OLE incorporato o collegato o static.  
  
```  
OLE_OBJTYPE GetType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Intero senza segno con uno dei valori seguenti:  
  
- `OT_LINK`L'elemento OLE è un collegamento.  
  
- `OT_EMBEDDED`L'elemento OLE è incorporato.  
  
- `OT_STATIC`L'elemento OLE è statico, ovvero, contiene solo dati di presentazione, dati non nativi e pertanto non può essere modificato.  
  
##  <a name="a-namegetusertypea--coleclientitemgetusertype"></a><a name="getusertype"></a>COleClientItem::GetUserType  
 Chiamare questa funzione per ottenere la stringa visibile all'utente che descrive il tipo dell'elemento OLE, ad esempio "Documenti di Word".  
  
```  
void GetUserType(
    USERCLASSTYPE nUserClassType,  
    CString& rString);
```  
  
### <a name="parameters"></a>Parametri  
 *nUserClassType*  
 Un valore che indica la variante desiderata della stringa che descrive il tipo dell'elemento OLE. Ciò può avere uno dei valori seguenti:  
  
- `USERCLASSTYPE_FULL`Il nome completo del tipo visualizzato all'utente.  
  
- `USERCLASSTYPE_SHORT`Nome breve (massimo&15; caratteri) per la finestra di dialogo Modifica collegamenti e i menu a comparsa.  
  
- `USERCLASSTYPE_APPNAME`Nome dell'applicazione per la manutenzione della classe.  
  
 `rString`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto a cui è necessario restituire la stringa che descrive il tipo dell'elemento OLE.  
  
### <a name="remarks"></a>Note  
 Si tratta spesso della voce nel database di registrazione di sistema.  
  
 Se il nome completo del tipo è richiesto ma non è disponibile, viene utilizzato il nome breve. Se viene trovata alcuna voce per il tipo di elemento OLE nel database di registrazione o se non sono disponibili tipi di utente registrati per il tipo di elemento OLE, quindi il tipo di utente attualmente archiviati viene utilizzato l'elemento OLE. Se il nome del tipo di utente è una stringa vuota, viene utilizzato "Oggetto sconosciuto".  
  
 Per ulteriori informazioni, vedere [IOleObject::GetUserType](http://msdn.microsoft.com/library/windows/desktop/ms688643) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameisinplaceactivea--coleclientitemisinplaceactive"></a><a name="isinplaceactive"></a>COleClientItem::IsInPlaceActive  
 Chiamare questa funzione per verificare se l'elemento OLE è attivo sul posto.  
  
```  
BOOL IsInPlaceActive() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento OLE è attivo sul posto; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È comune per eseguire una logica diversa a seconda se l'elemento viene modificato sul posto. La funzione verifica se lo stato dell'elemento corrente è uguale a uno di `activeState` o `activeUIState`.  
  
##  <a name="a-nameislinkuptodatea--coleclientitemislinkuptodate"></a><a name="islinkuptodate"></a>COleClientItem::IsLinkUpToDate  
 Chiamare questa funzione per verificare se l'elemento OLE è aggiornato.  
  
```  
BOOL IsLinkUpToDate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento OLE è aggiornato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un elemento collegato può essere aggiornato se il documento di origine è stato aggiornato. Un elemento incorporato che contiene i collegamenti all'interno di esso in modo analogo può diventano obsoleto. La funzione esegue un controllo ricorsivo dell'elemento OLE. Si noti che come stabilire se un elemento OLE è scaduto può essere più costosa effettivamente eseguire un aggiornamento.  
  
 Questo viene chiamato automaticamente dal [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md) implementazione.  
  
 Per ulteriori informazioni, vedere [IOleObject::IsUpToDate](http://msdn.microsoft.com/library/windows/desktop/ms686624) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameismodifieda--coleclientitemismodified"></a><a name="ismodified"></a>COleClientItem::IsModified  
 Chiamare questa funzione per verificare se l'elemento OLE è dirty (modificato dall'ultimo salvataggio).  
  
```  
BOOL IsModified() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento OLE è stato modificato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [IPersistStorage::IsDirty](http://msdn.microsoft.com/library/windows/desktop/ms683910) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameisopena--coleclientitemisopen"></a><a name="isopen"></a>COleClientItem::IsOpen  
 Chiamare questa funzione per verificare se l'elemento OLE è aperto; vale a dire aperto in un'istanza dell'applicazione del server in esecuzione in una finestra separata.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento OLE è aperto; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Viene utilizzato per determinare il momento disegnare l'oggetto con un motivo di tratteggio. Un oggetto aperto deve avere un motivo a tratteggio disegnato sopra l'oggetto. È possibile utilizzare un [CRectTracker](../../mfc/reference/crecttracker-class.md) oggetto per eseguire questa operazione.  
  
##  <a name="a-nameisrunninga--coleclientitemisrunning"></a><a name="isrunning"></a>COleClientItem::IsRunning  
 Chiamare questa funzione per verificare se l'elemento OLE è in esecuzione; ovvero, se l'elemento è caricato e in esecuzione nell'applicazione server.  
  
```  
BOOL IsRunning() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento OLE è in esecuzione. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [OleIsRunning](http://msdn.microsoft.com/library/windows/desktop/ms688705) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonactivatea--coleclientitemonactivate"></a><a name="onactivate"></a>COleClientItem::OnActivate  
 Chiamato dal framework per notificare l'elemento che è appena stato attivato sul posto.  
  
```  
virtual void OnActivate();
```  
  
### <a name="remarks"></a>Note  
 Si noti che questa funzione viene chiamata per indicare che il server sia in esecuzione, non per indicare che sia stata installata l'interfaccia utente dell'applicazione contenitore. A questo punto, l'oggetto non dispone di un'interfaccia utente attivo (non `activeUIState`). Non è installato il relativo menu o una barra degli strumenti. Il [OnActivateUI](#onactivateui) funzione membro viene chiamata quando si verifica questa situazione.  
  
 L'implementazione predefinita chiama la [OnChange](#onchange) funzione membro con **OLE_CHANGEDSTATE** come parametro. Eseguire l'override di questa funzione per eseguire elaborazioni personalizzate quando un elemento diventa attiva.  
  
##  <a name="a-nameonactivateuia--coleclientitemonactivateui"></a><a name="onactivateui"></a>COleClientItem::OnActivateUI  
 Il framework chiama `OnActivateUI` quando l'oggetto è stato attivato lo stato attivo dell'interfaccia utente.  
  
```  
virtual void OnActivateUI();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto è ora installato la barra degli strumenti e menu.  
  
 L'implementazione predefinita del server sono memorizzate `HWND` per un momento successivo **GetServerWindow** chiamate.  
  
##  <a name="a-nameonchangea--coleclientitemonchange"></a><a name="onchange"></a>COleClientItem:: OnChange  
 Chiamato dal framework quando l'utente modifica, Salva o chiude l'elemento OLE.  
  
```  
virtual void OnChange(
    OLE_NOTIFICATION nCode,  
    DWORD dwParam);
```  
  
### <a name="parameters"></a>Parametri  
 `nCode`  
 Il motivo per il server modificato questo elemento. Può avere uno dei valori seguenti:  
  
- `OLE_CHANGED`L'aspetto dell'elemento OLE è stato modificato.  
  
- `OLE_SAVED`L'elemento OLE è stato salvato.  
  
- `OLE_CLOSED`L'elemento OLE è stato chiuso.  
  
- `OLE_CHANGED_STATE`L'elemento OLE è cambiato da uno stato a un altro.  
  
 `dwParam`  
 Se `nCode` è `OLE_SAVED` o `OLE_CLOSED`, questo parametro non viene utilizzato. Se `nCode` è `OLE_CHANGED`, questo parametro specifica l'aspetto dell'elemento OLE è stato modificato. Per i valori possibili, vedere il `dwParam` parametro di [COleClientItem::Draw](#draw). Se `nCode` è `OLE_CHANGED_STATE`, questo parametro è un **COleClientItem:: ItemState** valore enumerato e viene descritto lo stato. Può avere uno dei seguenti valori: `emptyState`, **loadedState**, `openState`, `activeState`, o `activeUIState`.  
  
### <a name="remarks"></a>Note  
 (Se l'applicazione server viene scritta utilizzando la libreria Microsoft Foundation Class, questa funzione viene chiamata in risposta al `Notify` funzioni membro di `COleServerDoc` o `COleServerItem`.) L'implementazione predefinita Contrassegna il documento contenitore come modificati se `nCode` è `OLE_CHANGED` o `OLE_SAVED`.  
  
 Per `OLE_CHANGED_STATE`, lo stato corrente restituito da [GetItemState](#getitemstate) sarà ancora lo stato precedente, vale a dire lo stato corrente prima di questo cambiamento di stato.  
  
 Eseguire l'override di questa funzione per rispondere alle modifiche di stato dell'elemento OLE. In genere viene aggiornato l'aspetto dell'elemento invalida l'area in cui viene visualizzato l'elemento. Chiamare l'implementazione della classe base all'inizio della sostituzione.  
  
##  <a name="a-nameonchangeitempositiona--coleclientitemonchangeitemposition"></a><a name="onchangeitemposition"></a>COleClientItem:: OnChangeItemPosition  
 Chiamato dal framework per notificare al contenitore di entità dell'elemento OLE è stato modificato durante l'attivazione sul posto.  
  
```  
virtual BOOL OnChangeItemPosition(const CRect& rectPos);
```  
  
### <a name="parameters"></a>Parametri  
 *rectPos*  
 Indica la posizione dell'elemento rispetto all'area client dell'applicazione contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la posizione dell'elemento viene modificata; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita determina il nuovo rettangolo visibile dell'elemento OLE e le chiamate [SetItemRects](#setitemrects) con i nuovi valori. L'implementazione predefinita consente di calcolare il rettangolo visibile per l'elemento e passa le informazioni al server.  
  
 Eseguire l'override di questa funzione per applicare le regole speciali per l'operazione di ridimensionamento o spostamento. L'applicazione è scritta in MFC, questa chiamata viene generato perché il server denominato [COleServerDoc::RequestPositionChange](../../mfc/reference/coleserverdoc-class.md#requestpositionchange).  
  
##  <a name="a-nameondeactivatea--coleclientitemondeactivate"></a><a name="ondeactivate"></a>COleClientItem::OnDeactivate  
 Chiamato dal framework quando si esegue la transizione dallo stato attivo sul posto l'elemento OLE ( `activeState`) allo stato caricato, vale a dire che questo viene disattivato dopo l'attivazione sul posto.  
  
```  
virtual void OnDeactivate();
```  
  
### <a name="remarks"></a>Note  
 Si noti che questa funzione viene chiamata per indicare che l'elemento OLE è chiuso, non che la relativa interfaccia utente è stato rimosso dall'applicazione contenitore. In questo caso, il [OnDeactivateUI](#ondeactivateui) viene chiamata la funzione membro.  
  
 L'implementazione predefinita chiama la [OnChange](#onchange) funzione membro con **OLE_CHANGEDSTATE** come parametro. Eseguire l'override di questa funzione per eseguire elaborazioni personalizzate quando un elemento attivo sul posto è disattivato. Ad esempio, se si supporta il comando di annullamento nell'applicazione contenitore, è possibile ignorare questa funzione per eliminare lo stato di annullamento, che indica che l'ultima operazione eseguita sull'elemento OLE non può essere annullata dopo l'elemento è disattivato.  
  
##  <a name="a-nameondeactivateandundoa--coleclientitemondeactivateandundo"></a><a name="ondeactivateandundo"></a>COleClientItem::OnDeactivateAndUndo  
 Chiamato dal framework quando l'utente richiama il comando Annulla dopo aver attivato l'elemento OLE sul posto.  
  
```  
virtual void OnDeactivateAndUndo();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama [DeactivateUI](#deactivateui) per disattivare l'interfaccia utente del server. Eseguire l'override di questa funzione se si implementa il comando di annullamento nell'applicazione contenitore. Nell'override, chiamare la versione della classe base della funzione e quindi annullare l'ultimo comando eseguito nell'applicazione.  
  
 Per ulteriori informazioni, vedere [IOleInPlaceSite::DeactivateAndUndo](http://msdn.microsoft.com/library/windows/desktop/ms683743) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameondeactivateuia--coleclientitemondeactivateui"></a><a name="ondeactivateui"></a>COleClientItem::OnDeactivateUI  
 Chiamato quando l'utente disattiva un elemento che è stato attivato sul posto.  
  
```  
virtual void OnDeactivateUI(BOOL bUndoable);
```  
  
### <a name="parameters"></a>Parametri  
 `bUndoable`  
 Specifica se le modifiche annullabili.  
  
### <a name="remarks"></a>Note  
 Questa funzione consente di ripristinare lo stato originale, nascondere tutti i menu e altri controlli che sono stati creati per l'attivazione sul posto dell'interfaccia utente dell'applicazione contenitore.  
  
 Se `bUndoable` è **FALSE**, il contenitore deve disattivare il comando Annulla, eliminando in effetti lo stato di annullamento del contenitore, perché si indica che l'ultima operazione eseguita dal server non è annullabile.  
  
##  <a name="a-nameondiscardundostatea--coleclientitemondiscardundostate"></a><a name="ondiscardundostate"></a>COleClientItem::OnDiscardUndoState  
 Chiamato dal framework quando l'utente esegue un'azione che elimina lo stato di annullamento durante la modifica dell'elemento OLE.  
  
```  
virtual void OnDiscardUndoState();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione se si implementa il comando di annullamento nell'applicazione contenitore. Nell'override, eliminare lo stato di annullamento dell'applicazione contenitore.  
  
 Se il server è stato scritto con la libreria Microsoft Foundation Class, il server può causare questa funzione da chiamare chiamando [COleServerDoc::DiscardUndoState](../../mfc/reference/coleserverdoc-class.md#discardundostate).  
  
 Per ulteriori informazioni, vedere [IOleInPlaceSite::DiscardUndoState](http://msdn.microsoft.com/library/windows/desktop/ms688642) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameongetclipboarddataa--coleclientitemongetclipboarddata"></a><a name="ongetclipboarddata"></a>COleClientItem::OnGetClipboardData  
 Chiamato dal framework per ottenere un `COleDataSource` oggetto contenente tutti i dati che potrebbero essere inseriti negli Appunti da una chiamata a uno di [CopyToClipboard](#copytoclipboard) o [DoDragDrop](#dodragdrop) funzione membro.  
  
```  
virtual COleDataSource* OnGetClipboardData(
    BOOL bIncludeLink,  
    LPPOINT lpOffset,  
    LPSIZE lpSize);
```  
  
### <a name="parameters"></a>Parametri  
 `bIncludeLink`  
 Impostare questa proprietà su **TRUE** se i dati di collegamento devono essere copiati negli Appunti. Impostare questa proprietà su **FALSE** se l'applicazione server non supporta i collegamenti.  
  
 `lpOffset`  
 Puntatore all'offset del cursore del mouse rispetto all'origine dell'oggetto in pixel.  
  
 `lpSize`  
 Puntatore alla dimensione dell'oggetto in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto contenente i dati negli Appunti.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama [GetClipboardData](#getclipboarddata).  
  
##  <a name="a-nameongetcliprecta--coleclientitemongetcliprect"></a><a name="ongetcliprect"></a>COleClientItem::OnGetClipRect  
 Il framework chiama la `OnGetClipRect` funzione membro per ottenere le coordinate del rettangolo di ridimensionamento dell'elemento che viene modificato sul posto.  
  
```  
virtual void OnGetClipRect(CRect& rClipRect);
```  
  
### <a name="parameters"></a>Parametri  
 *rClipRect*  
 Puntatore a un oggetto della classe [CRect](../../atl-mfc-shared/reference/crect-class.md) che conterrà le coordinate del rettangolo di ridimensionamento dell'elemento.  
  
### <a name="remarks"></a>Note  
 Le coordinate sono espresse in pixel rispetto all'area client della finestra dell'applicazione contenitore.  
  
 L'implementazione predefinita restituisce semplicemente il rettangolo client della visualizzazione in cui l'elemento è attivo sul posto.  
  
##  <a name="a-nameongetitempositiona--coleclientitemongetitemposition"></a><a name="ongetitemposition"></a>OnGetItemPosition  
 Il framework chiama la `OnGetItemPosition` funzione membro per ottenere le coordinate dell'elemento che viene modificato sul posto.  
  
```  
virtual void OnGetItemPosition(CRect& rPosition);
```  
  
### <a name="parameters"></a>Parametri  
 `rPosition`  
 Riferimento per il [CRect](../../atl-mfc-shared/reference/crect-class.md) che conterrà le coordinate della posizione dell'elemento.  
  
### <a name="remarks"></a>Note  
 Le coordinate sono espresse in pixel rispetto all'area client della finestra dell'applicazione contenitore.  
  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Le applicazioni che supportano la modifica sul posto richiedono l'implementazione.  
  
##  <a name="a-nameongetwindowcontexta--coleclientitemongetwindowcontext"></a><a name="ongetwindowcontext"></a>COleClientItem::OnGetWindowContext  
 Chiamato dal framework quando un elemento viene attivato sul posto.  
  
```  
virtual BOOL OnGetWindowContext(
    CFrameWnd** ppMainFrame,  
    CFrameWnd** ppDocFrame,  
    LPOLEINPLACEFRAMEINFO lpFrameInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `ppMainFrame`  
 Puntatore a un puntatore alla finestra cornice principale.  
  
 `ppDocFrame`  
 Puntatore a un puntatore alla finestra cornice di documento.  
  
 `lpFrameInfo`  
 Puntatore a un [OLEINPLACEFRAMEINFO](http://msdn.microsoft.com/library/windows/desktop/ms693737) struttura che riceverà le informazioni della finestra cornice.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per recuperare informazioni sulla finestra padre dell'elemento OLE.  
  
 Se il contenitore è un'applicazione MDI, l'implementazione predefinita restituisce un puntatore al [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md) oggetto `ppMainFrame` e un puntatore a attivo [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) oggetto `ppDocFrame`. Se il contenitore è un'applicazione SDI, l'implementazione predefinita restituisce un puntatore per il [CFrameWnd](../../mfc/reference/cframewnd-class.md) oggetto `ppMainFrame` e restituisce **NULL** in `ppDocFrame`. L'implementazione predefinita riempie inoltre i membri di `lpFrameInfo`.  
  
 Eseguire l'override di questa funzione solo se l'implementazione predefinita non soddisfano l'applicazione. ad esempio, se l'applicazione dispone di un paradigma di interfaccia utente diversa da SDI o MDI. Questa è un' sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IOleInPlaceSite::GetWindowContext](http://msdn.microsoft.com/library/windows/desktop/ms694366) e [OLEINPLACEFRAMEINFO](http://msdn.microsoft.com/library/windows/desktop/ms693737) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameoninsertmenusa--coleclientitemoninsertmenus"></a><a name="oninsertmenus"></a>COleClientItem::OnInsertMenus  
 Chiamato dal framework durante l'attivazione sul posto per inserire i menu dell'applicazione contenitore in un menu vuoto.  
  
```  
virtual void OnInsertMenus(
    CMenu* pMenuShared,  
    LPOLEMENUGROUPWIDTHS lpMenuWidths);
```  
  
### <a name="parameters"></a>Parametri  
 `pMenuShared`  
 Punta a un menu vuoto.  
  
 `lpMenuWidths`  
 Punta a una matrice di sei **lungo** valori indica quanti menu si trovano in uno dei seguenti gruppi di menu: File, modifica, contenitore, oggetto, finestra della Guida in linea. L'applicazione contenitore è responsabile per i gruppi di menu File, il contenitore e finestra, corrispondenti agli elementi 0, 2 e 4 di questa matrice.  
  
### <a name="remarks"></a>Note  
 Questo menu viene quindi passato al server, che inserisce il proprio menu, creare un menu composto. Questa funzione può essere chiamata ripetutamente per creare vari menu compositi.  
  
 Inserisce l'implementazione predefinita `pMenuShared` i menu del contenitore sul posto, vale a dire i gruppi di menu File, il contenitore e finestra. [CDocTemplate:: SetContainerInfo](../../mfc/reference/cdoctemplate-class.md#setcontainerinfo) viene utilizzato per impostare questa risorsa di menu. L'implementazione predefinita assegna inoltre i valori appropriati per gli elementi 0, 2 e 4 in `lpMenuWidths`, a seconda della risorsa di menu. Eseguire l'override di questa funzione se l'implementazione predefinita non è appropriato per l'applicazione. ad esempio, se l'applicazione non utilizza i modelli di documento per l'associazione di risorse con tipi di documento. Se si esegue l'override di questa funzione, di eseguire l'override [OnSetMenu](#onsetmenu) e [OnRemoveMenus](#onremovemenus). Questa è un' sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IOleInPlaceFrame:: InsertMenus](http://msdn.microsoft.com/library/windows/desktop/ms683987) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonremovemenusa--coleclientitemonremovemenus"></a><a name="onremovemenus"></a>COleClientItem::OnRemoveMenus  
 Chiamato dal framework per rimuovere i menu del contenitore dal menu composito specificato al termine dell'attivazione sul posto.  
  
```  
virtual void OnRemoveMenus(CMenu* pMenuShared);
```  
  
### <a name="parameters"></a>Parametri  
 `pMenuShared`  
 Punta al menu composito costruito dalle chiamate al [OnInsertMenus](#oninsertmenus) funzione membro.  
  
### <a name="remarks"></a>Note  
 Rimuove l'implementazione predefinita `pMenuShared` i menu del contenitore sul posto, ovvero, i gruppi di menu File, il contenitore e finestra. Eseguire l'override di questa funzione se l'implementazione predefinita non è appropriato per l'applicazione. ad esempio, se l'applicazione non utilizza i modelli di documento per l'associazione di risorse con tipi di documento. Se si esegue l'override di questa funzione, eseguire l'override probabilmente [OnInsertMenus](#oninsertmenus) e [OnSetMenu](#onsetmenu) anche. Questa è un' sottoponibile a override.  
  
 I sottomenu in `pMenuShared` può essere condiviso da più di un menu composto se il server è chiamato ripetutamente `OnInsertMenus`. Pertanto non è necessario eliminare eventuali sottomenu nell'override della `OnRemoveMenus`; deve solo scollegarli.  
  
 Per ulteriori informazioni, vedere [IOleInPlaceFrame::RemoveMenus](http://msdn.microsoft.com/library/windows/desktop/ms688685) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonscrollbya--coleclientitemonscrollby"></a><a name="onscrollby"></a>COleClientItem::OnScrollBy  
 Chiamato dal framework per scorrere l'elemento OLE in risposta alle richieste dal server.  
  
```  
virtual BOOL OnScrollBy(CSize sizeExtent);
```  
  
### <a name="parameters"></a>Parametri  
 *sizeExtent*  
 Specifica la distanza in pixel, di scorrere le direzioni x e y.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è stato eseguito lo scorrimento; 0 se non è possibile scorrere l'elemento.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se l'elemento OLE è parzialmente visibile e l'utente si sposta all'esterno dell'area visibile durante la modifica sul posto, questa funzione viene chiamata per mantenere visibile il cursore. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per scorrere l'elemento, la quantità specificata. Si noti che la parte visibile dell'elemento OLE può essere modificato in seguito a scorrimento. Chiamare [SetItemRects](#setitemrects) aggiornare rettangolo visibile dell'elemento.  
  
 Per ulteriori informazioni, vedere [IOleInPlaceSite::Scroll](http://msdn.microsoft.com/library/windows/desktop/ms690291) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonsetmenua--coleclientitemonsetmenu"></a><a name="onsetmenu"></a>COleClientItem::OnSetMenu  
 Chiamato dal framework di due volte quando l'attivazione sul posto inizia e finisce; la prima volta per installare il menu composto e la seconda volta (con `holemenu` uguale a **NULL**) per rimuoverlo.  
  
```  
virtual void OnSetMenu(
    CMenu* pMenuShared,  
    HOLEMENU holemenu,  
    HWND hwndActiveObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pMenuShared`  
 Puntatore al menu composito costruito dalle chiamate al [OnInsertMenus](#oninsertmenus) funzione membro e `InsertMenu` (funzione).  
  
 `holemenu`  
 Handle per il descrittore di menu restituito dal **OleCreateMenuDescriptor** funzione, o **NULL** se il codice di invio deve essere rimosso.  
  
 *hwndActiveObject*  
 Handle per la finestra di modifica per l'elemento OLE. Si tratta della finestra che riceverà i comandi di modifica da OLE.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita installa o rimuove il menu composito e chiama quindi il [OleSetMenuDescriptor](http://msdn.microsoft.com/library/windows/desktop/ms692831) funzione per installare o rimuovere il codice di invio. Eseguire l'override di questa funzione se l'implementazione predefinita non è appropriato per l'applicazione. Se si esegue l'override di questa funzione, eseguire l'override probabilmente [OnInsertMenus](#oninsertmenus) e [OnRemoveMenus](#onremovemenus) anche. Questa è un' sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [OleCreateMenuDescriptor](http://msdn.microsoft.com/library/windows/desktop/ms691415), [OleSetMenuDescriptor](http://msdn.microsoft.com/library/windows/desktop/ms692831), e [SetMenu](http://msdn.microsoft.com/library/windows/desktop/ms693713) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonshowcontrolbarsa--coleclientitemonshowcontrolbars"></a><a name="onshowcontrolbars"></a>COleClientItem::OnShowControlBars  
 Chiamato dal framework per mostrare e nascondere le barre di controllo dell'applicazione contenitore.  
  
```  
virtual BOOL OnShowControlBars(
    CFrameWnd* pFrameWnd,  
    BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 `pFrameWnd`  
 Puntatore alla finestra cornice dell'applicazione contenitore. Può trattarsi di una finestra cornice principale o in una finestra figlio MDI.  
  
 `bShow`  
 Specifica se le barre di controllo devono essere mostrati o nascosti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la chiamata di funzione provoca una modifica nello stato le barre di controllo; 0 se la chiamata non comporta alcuna modifica o se `pFrameWnd` non fa riferimento a una finestra cornice del contenitore.  
  
### <a name="remarks"></a>Note  
 Questa funzione restituisce 0 se le barre di controllo si trovano già nello stato specificato da *bMostra.* Questa situazione si verifica, ad esempio, se le barre di controllo sono nascosti e `bShow` è **FALSE**.  
  
 L'implementazione predefinita rimuove la barra degli strumenti dalla finestra cornice principale.  
  
##  <a name="a-nameonshowitema--coleclientitemonshowitem"></a><a name="onshowitem"></a>COleClientItem::OnShowItem  
 Chiamato dal framework per visualizzare l'elemento OLE, renderlo completamente visibile durante la modifica.  
  
```  
virtual void OnShowItem();
```  
  
### <a name="remarks"></a>Note  
 Viene utilizzato quando l'applicazione contenitore supporta i collegamenti a elementi incorporati (ovvero, se è stata derivata la classe documento da [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)). Questa funzione viene chiamata durante l'attivazione sul posto o quando l'elemento OLE è un'origine di collegamento e l'utente desidera modificarlo. L'implementazione predefinita è attiva la vista prima del documento contenitore. Eseguire l'override di questa funzione per scorrere il documento in modo che l'elemento OLE è visibile.  
  
##  <a name="a-nameonupdateframetitlea--coleclientitemonupdateframetitle"></a><a name="onupdateframetitle"></a>COleClientItem::OnUpdateFrameTitle  
 Chiamato dal framework durante l'attivazione sul posto per aggiornare una barra del titolo della finestra cornice.  
  
```  
virtual BOOL OnUpdateFrameTitle();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se questa funzione è stato aggiornato il titolo del frame, in caso contrario zero.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non modifica il titolo della finestra cornice. Eseguire l'override di questa funzione se si desidera un titolo diverso frame per l'applicazione, ad esempio " *app server* - *elemento* in *NomeMedico*" (come "Microsoft Excel - foglio di calcolo nel REPORT. DOC"). Questa è un' sottoponibile a override.  
  
##  <a name="a-namereactivateandundoa--coleclientitemreactivateandundo"></a><a name="reactivateandundo"></a>COleClientItem::ReactivateAndUndo  
 Chiamare questa funzione per riattivare l'elemento OLE e annullare l'ultima operazione eseguita dall'utente durante la modifica sul posto.  
  
```  
BOOL ReactivateAndUndo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione contenitore supporta il comando di annullamento, chiamare questa funzione se l'utente sceglie il comando Annulla immediatamente dopo la disattivazione dell'elemento OLE.  
  
 Se l'applicazione server viene scritto con le librerie di classi Microsoft Foundation, questa funzione, il server di chiamare [COleServerDoc::OnReactivateAndUndo](../../mfc/reference/coleserverdoc-class.md#onreactivateandundo).  
  
 Per ulteriori informazioni, vedere [IOleInPlaceObject::ReactivateAndUndo](http://msdn.microsoft.com/library/windows/desktop/ms691372) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namereleasea--coleclientitemrelease"></a><a name="release"></a>COleClientItem::Release  
 Chiamare questa funzione per liberare le risorse utilizzate dall'elemento OLE.  
  
```  
virtual void Release(OLECLOSE dwCloseOption = OLECLOSE_NOSAVE);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCloseOption`  
 Flag che specifica le condizioni dell'elemento OLE viene salvato quando torna allo stato caricato. Per un elenco di valori possibili, vedere [COleClientItem::Close](#close).  
  
### <a name="remarks"></a>Note  
 **Versione** viene chiamato dal `COleClientItem` distruttore.  
  
 Per ulteriori informazioni, vedere [IUnknown:: Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namereloada--coleclientitemreload"></a><a name="reload"></a>COleClientItem::Reload  
 Chiude e ricarica l'elemento.  
  
```  
BOOL Reload();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare il `Reload` funzione dopo l'attivazione dell'elemento come un elemento di un altro tipo mediante una chiamata a [ActivateAs](#activateas).  
  
##  <a name="a-nameruna--coleclientitemrun"></a><a name="run"></a>COleClientItem::Run  
 Esegue l'applicazione associata a questo elemento.  
  
```  
void Run();
```  
  
### <a name="remarks"></a>Note  
 Chiamare il **eseguire** funzione membro per avviare l'applicazione server prima di attivare l'elemento. Questa operazione viene eseguita automaticamente da [attiva](#activate) e [DoVerb](#doverb), pertanto non è in genere necessario chiamare questa funzione. Chiamare questa funzione se è necessario eseguire il server per impostare un attributo dell'elemento, ad esempio [SetExtent](#setextent), prima di eseguire [DoVerb](#doverb).  
  
##  <a name="a-namesetdrawaspecta--coleclientitemsetdrawaspect"></a><a name="setdrawaspect"></a>COleClientItem::SetDrawAspect  
 Chiamare il `SetDrawAspect` funzione membro per impostare la "aspetto", o la vista dell'elemento.  
  
```  
virtual void SetDrawAspect(DVASPECT nDrawAspect);
```  
  
### <a name="parameters"></a>Parametri  
 `nDrawAspect`  
 Valore ricavato dall'enumerazione `DVASPECT`. Per il parametro è possibile specificare uno dei valori riportati di seguito:  
  
- `DVASPECT_CONTENT`Elemento è rappresentato in modo tale che può essere visualizzata come un oggetto incorporato all'interno del relativo contenitore.  
  
- `DVASPECT_THUMBNAIL`Elemento viene eseguito il rendering in una rappresentazione "anteprima" in modo che possa essere visualizzata in uno strumento di esplorazione.  
  
- `DVASPECT_ICON`Elemento è rappresentato da un'icona.  
  
- `DVASPECT_DOCPRINT`Elemento è rappresentato come se fosse stampato utilizzando il comando Stampa dal menu File.  
  
### <a name="remarks"></a>Note  
 L'aspetto specifica come l'elemento deve essere eseguito dal [disegnare](#draw) quando il valore predefinito per tale funzione `nDrawAspect` viene utilizzato l'argomento.  
  
 Questa funzione viene chiamata automaticamente l'icona di modifica (e altre finestre di dialogo che chiamano direttamente la finestra di dialogo di modifica dell'icona) per abilitare l'aspetto delle icone di visualizzazione quando richiesto dall'utente.  
  
##  <a name="a-namesetextenta--coleclientitemsetextent"></a><a name="setextent"></a>COleClientItem::SetExtent  
 Chiamare questa funzione per specificare la quantità di spazio è disponibile per l'elemento OLE.  
  
```  
void SetExtent(
    const CSize& size,  
    DVASPECT nDrawAspect = DVASPECT_CONTENT);
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene le informazioni sulle dimensioni.  
  
 `nDrawAspect`  
 Specifica l'aspetto dell'elemento OLE cui limiti devono essere impostate. Per i valori possibili, vedere [SetDrawAspect](#setdrawaspect).  
  
### <a name="remarks"></a>Note  
 Se l'applicazione server è stata scritta utilizzando la libreria Microsoft Foundation Class, in questo modo il [OnSetExtent](../../mfc/reference/coleserveritem-class.md#onsetextent) funzione membro del corrispondente `COleServerItem` oggetto da chiamare. L'elemento OLE può quindi regolare la visualizzazione. Le dimensioni devono essere `MM_HIMETRIC` unità. Chiamare questa funzione quando l'utente ridimensiona l'elemento OLE o se si supporta una forma di negoziazione di layout.  
  
 Per ulteriori informazioni, vedere [IOleObject::SetExtent](http://msdn.microsoft.com/library/windows/desktop/ms694330) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesethostnamesa--coleclientitemsethostnames"></a><a name="sethostnames"></a>COleClientItem::SetHostNames  
 Chiamare questa funzione per specificare il nome dell'applicazione contenitore e il nome del contenitore per un elemento OLE incorporato.  
  
```  
void SetHostNames(
    LPCTSTR lpszHost,  
    LPCTSTR lpszHostObj);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszHost`  
 Puntatore al nome visibile all'utente dell'applicazione contenitore.  
  
 `lpszHostObj`  
 Puntatore a una stringa di identificazione del contenitore che contiene l'elemento OLE.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione server è stata scritta utilizzando la libreria Microsoft Foundation Class, questa funzione chiama la [OnSetHostNames](../../mfc/reference/coleserverdoc-class.md#onsethostnames) funzione membro di `COleServerDoc` documento che contiene l'elemento OLE. Queste informazioni vengono utilizzate nei titoli finestra quando viene modificato l'elemento OLE. Ogni volta che viene caricato un documento contenitore, il framework chiama questa funzione per tutti gli elementi OLE nel documento. `SetHostNames`è applicabile solo agli elementi incorporati. Non è necessario chiamare questa funzione ogni volta che un elemento OLE incorporato viene attivato per la modifica.  
  
 Detta anche automaticamente con il nome di documento e il nome dell'applicazione quando viene caricato un oggetto o un file viene salvato con un nome diverso. Non è di conseguenza, in genere è necessario chiamare direttamente questa funzione.  
  
 Per ulteriori informazioni, vedere [IOleObject::SetHostNames](http://msdn.microsoft.com/library/windows/desktop/ms680642) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameseticonicmetafilea--coleclientitemseticonicmetafile"></a><a name="seticonicmetafile"></a>COleClientItem::SetIconicMetafile  
 Memorizza nella cache del metafile utilizzato per disegnare l'icona dell'elemento.  
  
```  
BOOL SetIconicMetafile(HGLOBAL hMetaPict);
```  
  
### <a name="parameters"></a>Parametri  
 `hMetaPict`  
 Handle di metafile utilizzato per disegnare l'icona dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare [GetIconicMetafile](#geticonicmetafile) per recuperare il metafile.  
  
 Il `hMetaPict` parametro verrà copiato l'elemento; pertanto, `hMetaPict` deve essere liberata dal chiamante.  
  
##  <a name="a-namesetitemrectsa--coleclientitemsetitemrects"></a><a name="setitemrects"></a>COleClientItem::SetItemRects  
 Chiamare questa funzione per impostare il rettangolo di delimitazione o il rettangolo visibile dell'elemento OLE.  
  
```  
BOOL SetItemRects(
    LPCRECT lpPosRect = NULL,  
    LPCRECT lpClipRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lprcPosRect*  
 Puntatore al rettangolo contenente i limiti dell'elemento OLE rispetto alla finestra padre, nelle coordinate client.  
  
 *lprcClipRect*  
 Puntatore al rettangolo contenente i limiti della parte visibile dell'elemento OLE rispetto alla finestra padre, nelle coordinate client.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata dall'implementazione predefinita di [OnChangeItemPosition](#onchangeitemposition) funzione membro. È necessario chiamare questa funzione ogni volta che la posizione o la parte visibile dell'OLE elemento le modifiche. In genere ciò significa chiamarlo della visualizzazione [OnSize](../../mfc/reference/cwnd-class.md#onsize) e [OnScrollBy](../../mfc/reference/cview-class.md#onscrollby) funzioni membro.  
  
 Per ulteriori informazioni, vedere [IOleInPlaceObject::SetObjectRects](http://msdn.microsoft.com/library/windows/desktop/ms683767) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetlinkupdateoptionsa--coleclientitemsetlinkupdateoptions"></a><a name="setlinkupdateoptions"></a>COleClientItem::SetLinkUpdateOptions  
 Chiamare questa funzione per impostare l'opzione di aggiornamento di collegamento per la presentazione dell'elemento collegato specificato.  
  
```  
void SetLinkUpdateOptions(OLEUPDATE dwUpdateOpt);
```  
  
### <a name="parameters"></a>Parametri  
 *dwUpdateOpt*  
 Il valore dell'opzione di aggiornamento di collegamento per questo elemento. Questo valore deve essere uno dei seguenti:  
  
- `OLEUPDATE_ALWAYS`Aggiornare l'elemento collegato quando possibile. Questa opzione supporta il pulsante di opzione di collegamento automatico nella finestra di dialogo collegamenti.  
  
- `OLEUPDATE_ONCALL`Aggiornare l'elemento collegato solo su richiesta dall'applicazione contenitore (quando il [UpdateLink](#updatelink) viene chiamata la funzione membro). Questa opzione supporta il pulsante di opzione di collegamento-aggiornamento manuale nella finestra di dialogo collegamenti.  
  
### <a name="remarks"></a>Note  
 In genere, non è necessario modificare le opzioni di aggiornamento scelte dall'utente nella finestra di dialogo collegamenti.  
  
 Per ulteriori informazioni, vedere [IOleLink::SetUpdateOptions](http://msdn.microsoft.com/library/windows/desktop/ms680120) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetprintdevicea--coleclientitemsetprintdevice"></a><a name="setprintdevice"></a>COleClientItem::SetPrintDevice  
 Chiamare questa funzione per modificare il dispositivo di destinazione di stampa per questo elemento.  
  
```  
BOOL SetPrintDevice(const DVTARGETDEVICE* ptd);  
BOOL SetPrintDevice(const PRINTDLG* ppd);
```  
  
### <a name="parameters"></a>Parametri  
 `ptd`  
 Puntatore a un [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) struttura dei dati, che contiene informazioni sul nuovo dispositivo di destinazione di stampa. Può essere **NULL**.  
  
 `ppd`  
 Puntatore a un [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646940) struttura dei dati, che contiene informazioni sul nuovo dispositivo di destinazione di stampa. Può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione Aggiorna il dispositivo di destinazione di stampa per l'elemento ma non aggiornare la cache di presentazione. Per aggiornare la cache di presentazione di un elemento, chiamare [UpdateLink](#updatelink).  
  
 Gli argomenti di questa funzione contengono informazioni che il sistema OLE viene utilizzato per identificare il dispositivo di destinazione. Il **PRINTDLG** struttura contiene informazioni che Windows utilizza per inizializzare la finestra di dialogo di stampa comune. Dopo che l'utente chiude la finestra di dialogo, Windows restituisce informazioni sulle selezioni dell'utente in questa struttura. Il `m_pd` membro di un [CPrintDialog](../../mfc/reference/cprintdialog-class.md) oggetto è un **PRINTDLG** struttura.  
  
 Per ulteriori informazioni su questa struttura, vedere [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646843) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni, vedere [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameupdatelinka--coleclientitemupdatelink"></a><a name="updatelink"></a>COleClientItem::UpdateLink  
 Chiamare questa funzione per aggiornare immediatamente i dati della presentazione dell'elemento OLE.  
  
```  
BOOL UpdateLink();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Per gli elementi collegati, la funzione consente di individuare l'origine di collegamento per ottenere una nuova presentazione per l'elemento OLE. Questo processo potrebbe richiedere l'esecuzione di uno o più applicazioni server, che potrebbero richiedere molto tempo. Per gli elementi incorporati, la funzione agisce in modo ricorsivo, verifica se l'elemento incorporato contiene i collegamenti che potrebbero non essere aggiornati e aggiornarli. L'utente può aggiornare manualmente i singoli collegamenti utilizzando la finestra di dialogo collegamenti.  
  
 Per ulteriori informazioni, vedere [IOleLink::Update](http://msdn.microsoft.com/library/windows/desktop/ms692660) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MFCBIND](../../visual-cpp-samples.md)   
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [Classe CDocItem](../../mfc/reference/cdocitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)

