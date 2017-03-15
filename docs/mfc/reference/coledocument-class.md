---
title: Classe COleDocument | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleDocument
dev_langs:
- C++
helpviewer_keywords:
- COleDocument class
- OLE documents, base class
- OLE containers, client items
- visual editing, OLE document base class
- OLE documents
- documents, OLE
ms.assetid: dc2ecb99-03e1-44c7-bb69-48056dd1b672
caps.latest.revision: 23
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
ms.openlocfilehash: 73bd1bc5c2c93e180b42a79cf23ab98360887c31
ms.lasthandoff: 02/24/2017

---
# <a name="coledocument-class"></a>COleDocument (classe)
Classe di base per i documenti OLE che supportano la modifica visiva.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDocument : public CDocument  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocument::COleDocument](#coledocument)|Costruisce un oggetto `COleDocument`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocument::AddItem](#additem)|Aggiunge un elemento all'elenco di elementi gestiti dal documento.|  
|[COleDocument::ApplyPrintDevice](#applyprintdevice)|Imposta il dispositivo di destinazione di stampa per tutti gli elementi client nel documento.|  
|[COleDocument::EnableCompoundFile](#enablecompoundfile)|Fa sì che i documenti da archiviare utilizzando il formato di file di archivio strutturato OLE.|  
|[COleDocument::GetInPlaceActiveItem](#getinplaceactiveitem)|Restituisce l'elemento OLE è attualmente attiva.|  
|[COleDocument::GetNextClientItem](#getnextclientitem)|Ottiene l'elemento client successivo per l'iterazione.|  
|[COleDocument::GetNextItem](#getnextitem)|Ottiene l'elemento documento successivo per l'iterazione.|  
|[COleDocument::GetNextServerItem](#getnextserveritem)|Ottiene l'elemento successivo di server per l'iterazione.|  
|[COleDocument::GetPrimarySelectedItem](#getprimaryselecteditem)|Restituisce l'elemento OLE selezionato primario nel documento.|  
|[COleDocument::GetStartPosition](#getstartposition)|Ottiene la posizione iniziale per avviare l'iterazione.|  
|[COleDocument::HasBlankItems](#hasblankitems)|Verifica che gli elementi vuoti nel documento.|  
|[COleDocument::OnShowViews](#onshowviews)|Chiamato quando il documento diventa visibile o invisibile.|  
|[COleDocument::RemoveItem](#removeitem)|Rimuove un elemento dall'elenco di elementi gestiti dal documento.|  
|[COleDocument::UpdateModifiedFlag](#updatemodifiedflag)|Contrassegna il documento come modificato se uno qualsiasi degli elementi OLE contenuti sono stato modificato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocument::OnEditChangeIcon](#oneditchangeicon)|Gestisce gli eventi nel comando di menu di modifica dell'icona.|  
|[COleDocument::OnEditConvert](#oneditconvert)|Gestisce la conversione di un oggetto incorporato o collegato da un tipo a altro.|  
|[COleDocument::OnEditLinks](#oneditlinks)|Gestisce gli eventi nel comando collegamenti del menu Modifica.|  
|[COleDocument::OnFileSendMail](#onfilesendmail)|Invia un messaggio di posta elettronica con il documento allegato.|  
|[COleDocument::OnUpdateEditChangeIcon](#onupdateeditchangeicon)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'opzione del menu Modifica/Modifica dell'icona.|  
|[COleDocument::OnUpdateEditLinksMenu](#onupdateeditlinksmenu)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'opzione del menu Modifica e collegamenti.|  
|[COleDocument::OnUpdateObjectVerbMenu](#onupdateobjectverbmenu)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'operazione di modifica / *ObjectName* opzione di menu e il sottomenu verbo accessibile dalla modifica / *ObjectName*.|  
|[COleDocument::OnUpdatePasteLinkMenu](#onupdatepastelinkmenu)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'opzione di menu Incolla speciale.|  
|[COleDocument::OnUpdatePasteMenu](#onupdatepastemenu)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'opzione di menu Incolla.|  
  
## <a name="remarks"></a>Note  
 `COleDocument`deriva da **CDocument**, che consente alle applicazioni OLE di utilizzare l'architettura documento/visualizzazione fornita dalla libreria Microsoft Foundation Class.  
  
 `COleDocument`un documento viene considerato come una raccolta di [CDocItem](../../mfc/reference/cdocitem-class.md) oggetti per gestire gli elementi OLE. Applicazioni contenitore sia server richiedono una tale architettura poiché i documenti devono essere in grado di contenere elementi OLE. Il [COleServerItem](../../mfc/reference/coleserveritem-class.md) e [COleClientItem](../../mfc/reference/coleclientitem-class.md) classi, entrambe derivate da `CDocItem`, gestire le interazioni tra applicazioni e gli elementi OLE.  
  
 Se si sta scrivendo un'applicazione contenitore semplice, derivare la classe documento da `COleDocument`. Se si scrive un'applicazione contenitore che supporta il collegamento agli elementi incorporati contenuti dei documenti, derivare la classe documento da [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md). Se si sta scrivendo un server di applicazione o una combinazione contenitore/server, derivare la classe documento da [COleServerDoc](../../mfc/reference/coleserverdoc-class.md). `COleLinkingDoc`e `COleServerDoc` derivano da `COleDocument`, pertanto queste classi ereditano tutti i servizi disponibili in `COleDocument` e **CDocument**.  
  
 Utilizzare `COleDocument`, derivare una classe e aggiungere funzionalità per la gestione dell'applicazione non OLE dati, nonché elementi incorporati o collegati. Se si definisce `CDocItem`-dalle classi derivate per archiviare i dati dell'applicazione nativa, è possibile utilizzare l'implementazione predefinita definita da `COleDocument` per archiviare sia i OLE e i dati non OLE. È inoltre possibile progettare il proprio strutture di dati per l'archiviazione dei dati non OLE separatamente dagli elementi OLE. Per ulteriori informazioni, vedere l'articolo [contenitori: file compositi](../../mfc/containers-compound-files.md)...  
  
 **CDocument** supporta l'invio del documento tramite posta elettronica se è presente il supporto di posta elettronica (MAPI). `COleDocument`ha aggiornato [OnFileSendMail](#onfilesendmail) per gestire correttamente i documenti composti. Per ulteriori informazioni, vedere gli articoli [MAPI](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md)...  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 `COleDocument`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="a-nameadditema--coledocumentadditem"></a><a name="additem"></a>COleDocument::AddItem  
 Chiamare questa funzione per aggiungere un elemento nel documento.  
  
```  
virtual void AddItem(CDocItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'elemento del documento da aggiungere.  
  
### <a name="remarks"></a>Note  
 Non è necessario chiamare questa funzione in modo esplicito quando viene chiamato di `COleClientItem` o `COleServerItem` costruttore che accetta un puntatore a un documento.  
  
##  <a name="a-nameapplyprintdevicea--coledocumentapplyprintdevice"></a><a name="applyprintdevice"></a>COleDocument::ApplyPrintDevice  
 Chiamare questa funzione per modificare il dispositivo di destinazione di stampa per tutti incorporato [COleClientItem](../../mfc/reference/coleclientitem-class.md) gli elementi nel documento contenitore dell'applicazione.  
  
```  
BOOL ApplyPrintDevice(const DVTARGETDEVICE* ptd);  
BOOL ApplyPrintDevice(const PRINTDLG* ppd);
```  
  
### <a name="parameters"></a>Parametri  
 `ptd`  
 Puntatore a un **DVTARGETDEVICE** struttura dei dati, che contiene informazioni sul nuovo dispositivo di destinazione di stampa. Può essere **NULL**.  
  
 `ppd`  
 Puntatore a un **PRINTDLG** struttura dei dati, che contiene informazioni sul nuovo dispositivo di destinazione di stampa. Può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione Aggiorna il dispositivo di destinazione di stampa per tutti gli elementi ma non aggiornare la cache di presentazione per tali elementi. Per aggiornare la cache di presentazione di un elemento, chiamare [COleClientItem::UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink).  
  
 Gli argomenti di questa funzione contengono informazioni che OLE viene utilizzato per identificare il dispositivo di destinazione. Il [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646843) struttura contiene informazioni che Windows utilizza per inizializzare la finestra di dialogo di stampa comune. Dopo che l'utente chiude la finestra di dialogo, Windows restituisce informazioni sulle selezioni dell'utente in questa struttura. Il `m_pd` membro di un [CPrintDialog](../../mfc/reference/cprintdialog-class.md) oggetto è un **PRINTDLG** struttura.  
  
 Per ulteriori informazioni, vedere il [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646843) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni, vedere il [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecoledocumenta--coledocumentcoledocument"></a><a name="coledocument"></a>COleDocument::COleDocument  
 Costruisce un oggetto `COleDocument`.  
  
```  
COleDocument();
```  
  
##  <a name="a-nameenablecompoundfilea--coledocumentenablecompoundfile"></a><a name="enablecompoundfile"></a>COleDocument::EnableCompoundFile  
 Chiamare questa funzione se si desidera archiviare il documento utilizzando il formato dei file compositi.  
  
```  
void EnableCompoundFile(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bEnable`  
 Specifica se il supporto di file composto è abilitato o disabilitato.  
  
### <a name="remarks"></a>Note  
 Si tratta inoltre di archiviazione strutturata. In genere si chiama questa funzione dal costruttore del `COleDocument`-classe derivata. Per ulteriori informazioni sui documenti composti, vedere l'articolo [contenitori: file compositi](../../mfc/containers-compound-files.md)...  
  
 Se non si chiama questa funzione membro, i documenti verranno archiviati in un formato di file ("flat") non strutturato.  
  
 Dopo che il supporto di file composto è abilitato o disabilitato per un documento, l'impostazione non può essere modificata nel corso della durata del documento.  
  
##  <a name="a-namegetinplaceactiveitema--coledocumentgetinplaceactiveitem"></a><a name="getinplaceactiveitem"></a>COleDocument::GetInPlaceActiveItem  
 Chiamata questa funzione per ottenere OLE elemento che è attivo sul posto nella finestra cornice contenente la vista identificata da `pWnd`.  
  
```  
virtual COleClientItem* GetInPlaceActiveItem(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che visualizza il documento contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a singola, sul posto active elemento OLE; **NULL** se non vi è alcun elemento OLE nello stato è "attivo sul posto".  
  
##  <a name="a-namegetnextclientitema--coledocumentgetnextclientitem"></a><a name="getnextclientitem"></a>COleDocument::GetNextClientItem  
 Chiamare questa funzione ripetutamente per accedere a tutti gli elementi client all'interno del documento.  
  
```  
COleClientItem* GetNextClientItem(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un riferimento a un **posizione** valore impostato da una precedente chiamata a `GetNextClientItem`; viene restituito il valore iniziale per il `GetStartPosition` funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento successivo client nel documento, o **NULL** se non sono presenti più voci di client.  
  
### <a name="remarks"></a>Note  
 Dopo ogni chiamata, il valore di `pos` è impostato per l'elemento successivo nel documento, che può essere o non essere un elemento client.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer n.&1;](../../mfc/codesnippet/cpp/coledocument-class_1.cpp)]  
  
##  <a name="a-namegetnextitema--coledocumentgetnextitem"></a><a name="getnextitem"></a>COleDocument::GetNextItem  
 Chiamare questa funzione ripetutamente per accedere a tutti gli elementi nel documento.  
  
```  
virtual CDocItem* GetNextItem(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un riferimento a un **posizione** valore impostato da una precedente chiamata a `GetNextItem`; viene restituito il valore iniziale per il `GetStartPosition` funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'elemento del documento nella posizione specificata.  
  
### <a name="remarks"></a>Note  
 Dopo ogni chiamata, il valore di `pos` è impostato sul **posizione** valore dell'elemento successivo nel documento. Se l'elemento recuperato è l'ultimo elemento nel documento, il nuovo valore di `pos` è **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer n.&2;](../../mfc/codesnippet/cpp/coledocument-class_2.cpp)]  
  
##  <a name="a-namegetnextserveritema--coledocumentgetnextserveritem"></a><a name="getnextserveritem"></a>COleDocument::GetNextServerItem  
 Chiamare questa funzione ripetutamente per accedere a tutti gli elementi server nel documento.  
  
```  
COleServerItem* GetNextServerItem(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un riferimento a un **posizione** valore impostato da una precedente chiamata a `GetNextServerItem`; viene restituito il valore iniziale per il `GetStartPosition` funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento successivo server nel documento, o **NULL** se non sono presenti più voci di server.  
  
### <a name="remarks"></a>Note  
 Dopo ogni chiamata, il valore di `pos` è impostato per l'elemento successivo nel documento, che potrebbe o non sia un elemento del server.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleServer n.&2;](../../mfc/codesnippet/cpp/coledocument-class_3.cpp)]  
  
##  <a name="a-namegetprimaryselecteditema--coledocumentgetprimaryselecteditem"></a><a name="getprimaryselecteditem"></a>COleDocument::GetPrimarySelectedItem  
 Chiamato dal framework per recuperare l'elemento OLE selezionato nella visualizzazione specificata.  
  
```  
virtual COleClientItem* GetPrimarySelectedItem(CView* pView);
```  
  
### <a name="parameters"></a>Parametri  
 `pView`  
 Puntatore all'oggetto visualizzazione attiva la visualizzazione del documento.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento OLE singolo, selezionato. **NULL** se nessun elemento OLE è selezionato o se è selezionata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita cerca elementi per un singolo elemento selezionato nell'elenco dell'OLE contenuto e restituisce un puntatore a esso. Se non esiste nessun elemento selezionato, o se è presente più di un elemento selezionato, la funzione restituisce **NULL**. È necessario eseguire l'override di `CView::IsSelected` funzione membro nella classe di visualizzazione per questa funzione lavorare. Eseguire l'override di questa funzione se si dispone di un metodo di archiviazione dei contenuti elementi OLE.  
  
##  <a name="a-namegetstartpositiona--coledocumentgetstartposition"></a><a name="getstartposition"></a>COleDocument::GetStartPosition  
 Chiamare questa funzione per ottenere la posizione del primo elemento nel documento.  
  
```  
virtual POSITION GetStartPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per avviare l'iterazione tra gli elementi del documento; **NULL** se il documento non ha elementi.  
  
### <a name="remarks"></a>Note  
 Passare il valore restituito per `GetNextItem`, `GetNextClientItem`, o `GetNextServerItem`.  
  
##  <a name="a-namehasblankitemsa--coledocumenthasblankitems"></a><a name="hasblankitems"></a>COleDocument::HasBlankItems  
 Chiamare questa funzione per determinare se il documento contiene elementi vuoti.  
  
```  
BOOL HasBlankItems() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento contiene tutti gli elementi vuoti; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un elemento vuoto è un rettangolo di cui è vuoto.  
  
##  <a name="a-nameoneditchangeicona--coledocumentoneditchangeicon"></a><a name="oneditchangeicon"></a>COleDocument::OnEditChangeIcon  
 Visualizza la finestra di dialogo Modifica dell'icona OLE e viene modificata l'icona che rappresenta l'elemento OLE selezionato per l'icona che l'utente seleziona nella finestra di dialogo.  
  
```  
afx_msg void OnEditChangeIcon();
```  
  
### <a name="remarks"></a>Note  
 `OnEditChangeIcon`Crea e avvia un `COleChangeIconDialog` la finestra di dialogo di modifica dell'icona.  
  
##  <a name="a-nameoneditconverta--coledocumentoneditconvert"></a><a name="oneditconvert"></a>COleDocument::OnEditConvert  
 Visualizza la finestra di dialogo OLE convertire e converte o attiva l'elemento OLE attualmente selezionato in base alle selezioni dell'utente nella finestra di dialogo.  
  
```  
afx_msg void OnEditConvert();
```  
  
### <a name="remarks"></a>Note  
 `OnEditConvert`Crea e avvia un `COleConvertDialog` la finestra di dialogo Converti.  
  
 Un esempio di conversione converte un documento Microsoft Word in un documento di WordPad.  
  
##  <a name="a-nameoneditlinksa--coledocumentoneditlinks"></a><a name="oneditlinks"></a>COleDocument::OnEditLinks  
 Visualizza la finestra di dialogo Modifica/collegamenti OLE.  
  
```  
afx_msg void OnEditLinks();
```  
  
### <a name="remarks"></a>Note  
 `OnEditLinks`Crea e avvia un `COleLinksDialog` la finestra di dialogo collegamenti che consente all'utente di modificare gli oggetti collegati.  
  
##  <a name="a-nameonfilesendmaila--coledocumentonfilesendmail"></a><a name="onfilesendmail"></a>COleDocument::OnFileSendMail  
 Invia un messaggio tramite l'host della posta elettronica residenti (se presente) con il documento come allegato.  
  
```  
afx_msg void OnFileSendMail();
```  
  
### <a name="remarks"></a>Note  
 `OnFileSendMail`chiamate `OnSaveDocument` per serializzare (documenti senza nome e modificati in un file temporaneo, che viene quindi inviato tramite posta elettronica salvataggio). Se il documento non è stato modificato, non è necessario un file temporaneo; viene inviato originale. `OnFileSendMail`Carica file MAPI32. DLL se non è già stato caricato.  
  
 A differenza dell'implementazione di `OnFileSendMail` per **CDocument**, questa funzione gestisce correttamente i file compositi.  
  
 Per ulteriori informazioni, vedere il [MAPI argomenti](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md) articoli...  
  
##  <a name="a-nameonshowviewsa--coledocumentonshowviews"></a><a name="onshowviews"></a>COleDocument::OnShowViews  
 Il framework chiama questa funzione dopo la visibilità del documento le modifiche di stato.  
  
```  
virtual void OnShowViews(BOOL bVisible);
```  
  
### <a name="parameters"></a>Parametri  
 `bVisible`  
 Indica se il documento è più visibile o invisibile.  
  
### <a name="remarks"></a>Note  
 La versione predefinita di questa funzione non esegue alcuna operazione. Eseguirne l'override se l'applicazione deve eseguire qualsiasi elaborazione speciale quando cambia la visibilità del documento.  
  
##  <a name="a-nameonupdateeditchangeicona--coledocumentonupdateeditchangeicon"></a><a name="onupdateeditchangeicon"></a>COleDocument::OnUpdateEditChangeIcon  
 Chiamato dal framework per aggiornare il comando di modifica dell'icona del menu Modifica.  
  
```  
afx_msg void OnUpdateEditChangeIcon(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro di `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 `OnUpdateEditChangeIcon`Aggiorna l'interfaccia utente del comando a seconda del fatto nel documento è presente un'icona valida. Eseguire l'override di questa funzione per modificare il comportamento.  
  
##  <a name="a-nameonupdateeditlinksmenua--coledocumentonupdateeditlinksmenu"></a><a name="onupdateeditlinksmenu"></a>COleDocument::OnUpdateEditLinksMenu  
 Chiamato dal framework per aggiornare il comando collegamenti del menu Modifica.  
  
```  
afx_msg void OnUpdateEditLinksMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro di `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 A partire dal primo elemento OLE nel documento, `OnUpdateEditLinksMenu` accede ogni elemento, verifica se l'elemento è un collegamento e, se si tratta di un collegamento, abilita il comando collegamenti. Eseguire l'override di questa funzione per modificare il comportamento.  
  
##  <a name="a-nameonupdateobjectverbmenua--coledocumentonupdateobjectverbmenu"></a><a name="onupdateobjectverbmenu"></a>COleDocument::OnUpdateObjectVerbMenu  
 Chiamato dal framework per aggiornare il *ObjectName* comando dal menu Modifica e il sottomenu verbo accessibili dal *ObjectName* comando, dove *ObjectName* è il nome dell'oggetto OLE incorporato nel documento.  
  
```  
afx_msg void OnUpdateObjectVerbMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro di `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 `OnUpdateObjectVerbMenu`gli aggiornamenti di *ObjectName* interfaccia utente del comando a seconda se un oggetto valido presente nel documento. Se è presente un oggetto, il *ObjectName* comando dal menu Modifica è abilitato. Se questo comando di menu è selezionato, viene visualizzato il sottomenu verbo. Il sottomenu verbo contiene tutti i comandi di verbi disponibili per l'oggetto, ad esempio modifica delle proprietà e così via. Eseguire l'override di questa funzione per modificare il comportamento.  
  
##  <a name="a-nameonupdatepastelinkmenua--coledocumentonupdatepastelinkmenu"></a><a name="onupdatepastelinkmenu"></a>COleDocument::OnUpdatePasteLinkMenu  
 Chiamato dal framework per determinare se un elemento OLE collegato può essere incollato dagli Appunti.  
  
```  
afx_msg void OnUpdatePasteLinkMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro di `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 Il comando Incolla speciale è abilitato o disabilitato a seconda se l'elemento può essere incollato nel documento o No.  
  
##  <a name="a-nameonupdatepastemenua--coledocumentonupdatepastemenu"></a><a name="onupdatepastemenu"></a>COleDocument::OnUpdatePasteMenu  
 Chiamato dal framework per determinare se un elemento OLE incorporato può essere incollato dagli Appunti.  
  
```  
afx_msg void OnUpdatePasteMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro di `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 Il comando Incolla e il pulsante vengono abilitate o disabilitate a seconda se l'elemento può essere incollato nel documento o No.  
  
##  <a name="a-nameremoveitema--coledocumentremoveitem"></a><a name="removeitem"></a>COleDocument::RemoveItem  
 Chiamare questa funzione per rimuovere un elemento dal documento.  
  
```  
virtual void RemoveItem(CDocItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'elemento del documento da rimuovere.  
  
### <a name="remarks"></a>Note  
 In genere non occorre chiamare questa funzione in modo esplicito. viene chiamato per i distruttori per `COleClientItem` e `COleServerItem`.  
  
##  <a name="a-nameupdatemodifiedflaga--coledocumentupdatemodifiedflag"></a><a name="updatemodifiedflag"></a>COleDocument::UpdateModifiedFlag  
 Chiamare questa funzione per contrassegnare il documento come modificato se uno qualsiasi degli elementi OLE contenuti sono stato modificato.  
  
```  
virtual void UpdateModifiedFlag();
```  
  
### <a name="remarks"></a>Note  
 In questo modo il framework richiedere all'utente di salvare il documento prima di chiuderla, anche se i dati nativi nel documento non sono stati modificati.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC contenitore](../../visual-cpp-samples.md)   
 [Esempio MFC MFCBIND](../../visual-cpp-samples.md)   
 [CDocument (classe)](../../mfc/reference/cdocument-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




