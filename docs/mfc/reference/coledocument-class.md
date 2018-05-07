---
title: Classe COleDocument | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleDocument
- AFXOLE/COleDocument
- AFXOLE/COleDocument::COleDocument
- AFXOLE/COleDocument::AddItem
- AFXOLE/COleDocument::ApplyPrintDevice
- AFXOLE/COleDocument::EnableCompoundFile
- AFXOLE/COleDocument::GetInPlaceActiveItem
- AFXOLE/COleDocument::GetNextClientItem
- AFXOLE/COleDocument::GetNextItem
- AFXOLE/COleDocument::GetNextServerItem
- AFXOLE/COleDocument::GetPrimarySelectedItem
- AFXOLE/COleDocument::GetStartPosition
- AFXOLE/COleDocument::HasBlankItems
- AFXOLE/COleDocument::OnShowViews
- AFXOLE/COleDocument::RemoveItem
- AFXOLE/COleDocument::UpdateModifiedFlag
- AFXOLE/COleDocument::OnEditChangeIcon
- AFXOLE/COleDocument::OnEditConvert
- AFXOLE/COleDocument::OnEditLinks
- AFXOLE/COleDocument::OnFileSendMail
- AFXOLE/COleDocument::OnUpdateEditChangeIcon
- AFXOLE/COleDocument::OnUpdateEditLinksMenu
- AFXOLE/COleDocument::OnUpdateObjectVerbMenu
- AFXOLE/COleDocument::OnUpdatePasteLinkMenu
- AFXOLE/COleDocument::OnUpdatePasteMenu
dev_langs:
- C++
helpviewer_keywords:
- COleDocument [MFC], COleDocument
- COleDocument [MFC], AddItem
- COleDocument [MFC], ApplyPrintDevice
- COleDocument [MFC], EnableCompoundFile
- COleDocument [MFC], GetInPlaceActiveItem
- COleDocument [MFC], GetNextClientItem
- COleDocument [MFC], GetNextItem
- COleDocument [MFC], GetNextServerItem
- COleDocument [MFC], GetPrimarySelectedItem
- COleDocument [MFC], GetStartPosition
- COleDocument [MFC], HasBlankItems
- COleDocument [MFC], OnShowViews
- COleDocument [MFC], RemoveItem
- COleDocument [MFC], UpdateModifiedFlag
- COleDocument [MFC], OnEditChangeIcon
- COleDocument [MFC], OnEditConvert
- COleDocument [MFC], OnEditLinks
- COleDocument [MFC], OnFileSendMail
- COleDocument [MFC], OnUpdateEditChangeIcon
- COleDocument [MFC], OnUpdateEditLinksMenu
- COleDocument [MFC], OnUpdateObjectVerbMenu
- COleDocument [MFC], OnUpdatePasteLinkMenu
- COleDocument [MFC], OnUpdatePasteMenu
ms.assetid: dc2ecb99-03e1-44c7-bb69-48056dd1b672
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6317d7c14f76355df908c9809df633533df3fb61
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
|[COleDocument::GetInPlaceActiveItem](#getinplaceactiveitem)|Restituisce l'elemento OLE che è attualmente attiva.|  
|[COleDocument::GetNextClientItem](#getnextclientitem)|Ottiene l'elemento client successivo per eseguire l'iterazione.|  
|[COleDocument::GetNextItem](#getnextitem)|Ottiene l'elemento del documento successiva per eseguire l'iterazione.|  
|[COleDocument::GetNextServerItem](#getnextserveritem)|Ottiene l'elemento successivo di server per eseguire l'iterazione.|  
|[COleDocument::GetPrimarySelectedItem](#getprimaryselecteditem)|Restituisce l'elemento OLE selezionato principale nel documento.|  
|[COleDocument::GetStartPosition](#getstartposition)|Ottiene la posizione iniziale per avviare l'iterazione.|  
|[COleDocument::HasBlankItems](#hasblankitems)|Controlla gli elementi vuoti nel documento.|  
|[COleDocument::OnShowViews](#onshowviews)|Chiamato quando il documento diventa visibile o invisibile.|  
|[COleDocument::RemoveItem](#removeitem)|Rimuove un elemento dall'elenco di elementi gestiti dal documento.|  
|[COleDocument::UpdateModifiedFlag](#updatemodifiedflag)|Contrassegna il documento come modificata se uno qualsiasi degli elementi OLE contenuti sono stato modificato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocument::OnEditChangeIcon](#oneditchangeicon)|Gestisce gli eventi nel comando di menu di modifica dell'icona.|  
|[COleDocument::OnEditConvert](#oneditconvert)|Gestisce la conversione di un oggetto incorporato o collegato da un tipo a un altro.|  
|[COleDocument::OnEditLinks](#oneditlinks)|Gestisce gli eventi nel comando collegamenti dal menu Modifica.|  
|[COleDocument::OnFileSendMail](#onfilesendmail)|Invia un messaggio di posta elettronica con il documento allegato.|  
|[COleDocument::OnUpdateEditChangeIcon](#onupdateeditchangeicon)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'opzione del menu Modifica/Modifica dell'icona.|  
|[COleDocument::OnUpdateEditLinksMenu](#onupdateeditlinksmenu)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'opzione di menu o i collegamenti di modifica.|  
|[COleDocument::OnUpdateObjectVerbMenu](#onupdateobjectverbmenu)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per la modifica / *ObjectName* opzione di menu e sottomenu verbo accessibile dalla modifica / *ObjectName*.|  
|[COleDocument::OnUpdatePasteLinkMenu](#onupdatepastelinkmenu)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'opzione di menu Incolla speciale.|  
|[COleDocument::OnUpdatePasteMenu](#onupdatepastemenu)|Chiamato dal framework per aggiornare il comando dell'interfaccia utente per l'opzione Incolla del menu.|  
  
## <a name="remarks"></a>Note  
 `COleDocument` derivato da **CDocument**, che consente alle applicazioni OLE di utilizzare l'architettura documento/visualizzazione fornita dalla libreria di classi Microsoft Foundation.  
  
 `COleDocument` un documento viene considerato come una raccolta di [CDocItem](../../mfc/reference/cdocitem-class.md) oggetti per gestire gli elementi OLE. Applicazioni contenitore sia del server richiedono una tale architettura perché i documenti devono essere in grado di contenere elementi OLE. Il [COleServerItem](../../mfc/reference/coleserveritem-class.md) e [COleClientItem](../../mfc/reference/coleclientitem-class.md) classi, entrambe derivate da `CDocItem`, gestire le interazioni tra le applicazioni e gli elementi OLE.  
  
 Se si scrive un'applicazione contenitore semplice, derivare la classe documento da `COleDocument`. Se si scrive un'applicazione contenitore che supporta il collegamento agli elementi incorporati contenuti dei documenti, derivare la classe documento da [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md). Se si sta scrivendo un server applicazioni o una combinazione contenitore/server, derivare la classe documento da [COleServerDoc](../../mfc/reference/coleserverdoc-class.md). `COleLinkingDoc` e `COleServerDoc` derivano dal `COleDocument`, pertanto queste classi ereditano tutti i servizi disponibili in `COleDocument` e **CDocument**.  
  
 Per utilizzare `COleDocument`, derivare una classe e aggiungere funzionalità per gestire l'applicazione non OLE dati, nonché elementi incorporati o collegati. Se si definisce `CDocItem`-dalle classi derivate per archiviare i dati dell'applicazione nativa, è possibile utilizzare l'implementazione predefinita definito da `COleDocument` per archiviare sia i dati non OLE e OLE. È inoltre possibile progettare la propria strutture di dati per l'archiviazione dei dati non OLE separatamente dagli elementi OLE. Per ulteriori informazioni, vedere l'articolo [contenitori: file compositi](../../mfc/containers-compound-files.md)...  
  
 **CDocument** supporta l'invio al documento tramite posta elettronica se è presente il supporto di posta elettronica (MAPI). `COleDocument` aggiornato [OnFileSendMail](#onfilesendmail) per gestire correttamente documenti compositi. Per ulteriori informazioni, vedere gli articoli [MAPI](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md)...  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 `COleDocument`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="additem"></a>  COleDocument::AddItem  
 Chiamare questa funzione per aggiungere un elemento al documento.  
  
```  
virtual void AddItem(CDocItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'elemento del documento da aggiungere.  
  
### <a name="remarks"></a>Note  
 Non è necessario chiamare questa funzione in modo esplicito quando viene chiamato `COleClientItem` o `COleServerItem` costruttore che accetta un puntatore a un documento.  
  
##  <a name="applyprintdevice"></a>  COleDocument::ApplyPrintDevice  
 Chiamare questa funzione per impostare il dispositivo di destinazione di stampa per tutti i incorporato [COleClientItem](../../mfc/reference/coleclientitem-class.md) gli elementi nel documento contenitore dell'applicazione.  
  
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
 Questa funzione Aggiorna il dispositivo di destinazione di stampa per tutti gli elementi, ma non aggiorna la cache di presentazione per tali elementi. Per aggiornare la cache di presentazione per un elemento, chiamare [COleClientItem::UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink).  
  
 Gli argomenti di questa funzione contengono informazioni che OLE viene utilizzato per identificare il dispositivo di destinazione. Il [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646843) struttura contiene informazioni utilizzate per inizializzare la finestra di dialogo comune di stampa Windows. Dopo che l'utente chiude la finestra di dialogo, Windows restituisce informazioni sulle selezioni dell'utente in questa struttura. Il `m_pd` membro di un [CPrintDialog](../../mfc/reference/cprintdialog-class.md) oggetto è un **PRINTDLG** struttura.  
  
 Per ulteriori informazioni, vedere il [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646843) struttura in Windows SDK.  
  
 Per ulteriori informazioni, vedere il [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) struttura in Windows SDK.  
  
##  <a name="coledocument"></a>  COleDocument::COleDocument  
 Costruisce un oggetto `COleDocument`.  
  
```  
COleDocument();
```  
  
##  <a name="enablecompoundfile"></a>  COleDocument::EnableCompoundFile  
 Chiamare questa funzione se si desidera archiviare il documento utilizzando il formato del file composto.  
  
```  
void EnableCompoundFile(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bEnable`  
 Specifica se il supporto di file composto è abilitato o disabilitato.  
  
### <a name="remarks"></a>Note  
 Si tratta inoltre di archiviazione strutturata. Chiamare questa funzione in genere dal costruttore del `COleDocument`-classe derivata. Per ulteriori informazioni sui documenti composti, vedere l'articolo [contenitori: file compositi](../../mfc/containers-compound-files.md)...  
  
 Se non si chiama questa funzione membro, i documenti verranno archiviati in un formato di file ("flat") non strutturato.  
  
 Dopo che il supporto di file composto è abilitato o disabilitato per un documento, l'impostazione non può essere modificata nel corso della durata del documento.  
  
##  <a name="getinplaceactiveitem"></a>  COleDocument::GetInPlaceActiveItem  
 Chiamata di questa funzione per ottenere OLE elemento che è attualmente attivato sul posto nella finestra cornice contenente la vista identificata da `pWnd`.  
  
```  
virtual COleClientItem* GetInPlaceActiveItem(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che visualizza il documento contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una singola, sul posto attivo elemento OLE; **NULL** se non è presente alcun elemento OLE attualmente in stato "attiva".  
  
##  <a name="getnextclientitem"></a>  COleDocument::GetNextClientItem  
 Chiamare questa funzione ripetutamente per accedere a tutti gli elementi client nel documento.  
  
```  
COleClientItem* GetNextClientItem(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un riferimento a un **posizione** valore impostato da una precedente chiamata a `GetNextClientItem`; viene restituito il valore iniziale per il `GetStartPosition` funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento client successivo nel documento, o **NULL** se non sono presenti più elementi client.  
  
### <a name="remarks"></a>Note  
 Dopo ogni chiamata, il valore di `pos` è impostato per l'elemento successivo nel documento, che potrebbe non essere o un elemento client.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#1](../../mfc/codesnippet/cpp/coledocument-class_1.cpp)]  
  
##  <a name="getnextitem"></a>  COleDocument::GetNextItem  
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
 [!code-cpp[NVC_MFCOleContainer#2](../../mfc/codesnippet/cpp/coledocument-class_2.cpp)]  
  
##  <a name="getnextserveritem"></a>  COleDocument::GetNextServerItem  
 Chiamare questa funzione ripetutamente per accedere a tutti gli elementi server nel documento.  
  
```  
COleServerItem* GetNextServerItem(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un riferimento a un **posizione** valore impostato da una precedente chiamata a `GetNextServerItem`; viene restituito il valore iniziale per il `GetStartPosition` funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento server successivo nel documento, o **NULL** se non sono presenti più elementi di server.  
  
### <a name="remarks"></a>Note  
 Dopo ogni chiamata, il valore di `pos` è impostato per l'elemento successivo nel documento, che potrebbe non essere o un elemento del server.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleServer#2](../../mfc/codesnippet/cpp/coledocument-class_3.cpp)]  
  
##  <a name="getprimaryselecteditem"></a>  COleDocument::GetPrimarySelectedItem  
 Chiamato dal framework per recuperare l'elemento OLE selezionato nella visualizzazione specificata.  
  
```  
virtual COleClientItem* GetPrimarySelectedItem(CView* pView);
```  
  
### <a name="parameters"></a>Parametri  
 `pView`  
 Puntatore all'oggetto visualizzazione attiva la visualizzazione del documento.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento OLE selezionato, singolo; **NULL** se è selezionato alcun elemento OLE o se più di uno è stato selezionato.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita esegue ricerche di elementi per un singolo elemento selezionato nell'elenco di OLE indipendente e restituisce un puntatore a esso. Se nessun elemento selezionato, o se è presente più di un elemento selezionato, la funzione restituisce **NULL**. È necessario eseguire l'override di `CView::IsSelected` funzione membro nella classe di visualizzazione per questa funzione da usare. Eseguire l'override di questa funzione se si dispone di un metodo personalizzato di archiviare gli elementi contenuti OLE.  
  
##  <a name="getstartposition"></a>  COleDocument::GetStartPosition  
 Chiamare questa funzione per ottenere la posizione del primo elemento nel documento.  
  
```  
virtual POSITION GetStartPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per avviare l'iterazione tra gli elementi del documento; **NULL** se il documento non contiene elementi.  
  
### <a name="remarks"></a>Note  
 Passare il valore restituito per `GetNextItem`, `GetNextClientItem`, o `GetNextServerItem`.  
  
##  <a name="hasblankitems"></a>  COleDocument::HasBlankItems  
 Chiamare questa funzione per determinare se il documento contiene gli elementi vuoti.  
  
```  
BOOL HasBlankItems() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento contiene tutti gli elementi vuoti; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un elemento vuoto è un rettangolo di cui è vuoto.  
  
##  <a name="oneditchangeicon"></a>  COleDocument::OnEditChangeIcon  
 Visualizza la finestra di dialogo Modifica dell'icona OLE e viene modificata l'icona che rappresenta l'elemento OLE selezionato per l'icona di cui che l'utente seleziona nella finestra di dialogo.  
  
```  
afx_msg void OnEditChangeIcon();
```  
  
### <a name="remarks"></a>Note  
 `OnEditChangeIcon` Crea e avvia un `COleChangeIconDialog` finestra di dialogo Modifica dell'icona.  
  
##  <a name="oneditconvert"></a>  COleDocument::OnEditConvert  
 Consente di visualizzare la finestra di dialogo Converti OLE e converte o attiva l'elemento OLE selezionato in base alle selezioni dell'utente nella finestra di dialogo.  
  
```  
afx_msg void OnEditConvert();
```  
  
### <a name="remarks"></a>Note  
 `OnEditConvert` Crea e avvia un `COleConvertDialog` finestra di dialogo Converti.  
  
 Un esempio di conversione converte un documento Microsoft Word in un documento WordPad.  
  
##  <a name="oneditlinks"></a>  COleDocument::OnEditLinks  
 Consente di visualizzare la finestra di dialogo Modifica/collegamenti OLE.  
  
```  
afx_msg void OnEditLinks();
```  
  
### <a name="remarks"></a>Note  
 `OnEditLinks` Crea e avvia un `COleLinksDialog` collegamenti finestra di dialogo che consente all'utente di modificare gli oggetti collegati.  
  
##  <a name="onfilesendmail"></a>  COleDocument::OnFileSendMail  
 Invia un messaggio tramite l'host della posta elettronica residenti (se presente) con il documento come allegato.  
  
```  
afx_msg void OnFileSendMail();
```  
  
### <a name="remarks"></a>Note  
 `OnFileSendMail` chiamate `OnSaveDocument` per serializzare (documenti senza nome e modificati in un file temporaneo, che viene quindi inviato tramite posta elettronica Salva). Se il documento non è stato modificato, un file temporaneo non è necessaria. viene inviato originale. `OnFileSendMail` Carica MAPI32. DLL se non è già stato caricato.  
  
 A differenza dell'implementazione di `OnFileSendMail` per **CDocument**, questa funzione gestisce correttamente i file compositi.  
  
 Per ulteriori informazioni, vedere il [MAPI argomenti](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md) articoli...  
  
##  <a name="onshowviews"></a>  COleDocument::OnShowViews  
 Il framework chiama questa funzione dopo la visibilità del documento cambiamenti di stato.  
  
```  
virtual void OnShowViews(BOOL bVisible);
```  
  
### <a name="parameters"></a>Parametri  
 `bVisible`  
 Indica se il documento è diventata visibile o invisibile.  
  
### <a name="remarks"></a>Note  
 La versione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override se l'applicazione deve eseguire qualsiasi elaborazione speciale quando viene modificata la visibilità del documento.  
  
##  <a name="onupdateeditchangeicon"></a>  COleDocument::OnUpdateEditChangeIcon  
 Chiamato dal framework per aggiornare il comando di modifica dell'icona del menu Modifica.  
  
```  
afx_msg void OnUpdateEditChangeIcon(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro del `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 `OnUpdateEditChangeIcon` Aggiorna l'interfaccia utente del comando a seconda del fatto nel documento è presente un'icona valida. Eseguire l'override di questa funzione per modificare il comportamento.  
  
##  <a name="onupdateeditlinksmenu"></a>  COleDocument::OnUpdateEditLinksMenu  
 Chiamato dal framework per aggiornare il comando collegamenti dal menu Modifica.  
  
```  
afx_msg void OnUpdateEditLinksMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro del `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 A partire dal primo elemento OLE nel documento, `OnUpdateEditLinksMenu` accede a ogni elemento, verifica se l'elemento è un collegamento e, se si tratta di un collegamento, abilita il comando di collegamenti. Eseguire l'override di questa funzione per modificare il comportamento.  
  
##  <a name="onupdateobjectverbmenu"></a>  COleDocument::OnUpdateObjectVerbMenu  
 Chiamato dal framework per aggiornare il *ObjectName* comando dal menu Modifica e il sottomenu verbo accessibile dal *ObjectName* comando, in cui *ObjectName* è il nome del l'oggetto OLE è incorporato nel documento.  
  
```  
afx_msg void OnUpdateObjectVerbMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro del `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 `OnUpdateObjectVerbMenu` gli aggiornamenti di *ObjectName* interfaccia utente del comando a seconda se un oggetto valido esiste nel documento. Se esiste un oggetto, il *ObjectName* comando dal menu Modifica è abilitato. Se il comando di menu è selezionato, viene visualizzato il sottomenu verbo. Il sottomenu verbo contiene tutti i comandi di verbo disponibili per l'oggetto, ad esempio modifica, proprietà e così via. Eseguire l'override di questa funzione per modificare il comportamento.  
  
##  <a name="onupdatepastelinkmenu"></a>  COleDocument::OnUpdatePasteLinkMenu  
 Chiamato dal framework per determinare se un elemento OLE collegato può essere incollato dagli Appunti.  
  
```  
afx_msg void OnUpdatePasteLinkMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro del `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 Il comando Incolla speciale è abilitato o disabilitato a seconda se l'elemento può essere incollato nel documento o No.  
  
##  <a name="onupdatepastemenu"></a>  COleDocument::OnUpdatePasteMenu  
 Chiamato dal framework per determinare se un elemento OLE incorporato può essere incollato dagli Appunti.  
  
```  
afx_msg void OnUpdatePasteMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di **abilitare** funzione membro del `CCmdUI` struttura tramite `pCmdUI` per aggiornare l'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 Il comando Incolla e il pulsante attivati o disattivati a seconda se l'elemento può essere incollato nel documento o No.  
  
##  <a name="removeitem"></a>  COleDocument::RemoveItem  
 Chiamare questa funzione per rimuovere un elemento dal documento.  
  
```  
virtual void RemoveItem(CDocItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'elemento del documento da rimuovere.  
  
### <a name="remarks"></a>Note  
 In genere non occorre chiamare questa funzione in modo esplicito. viene chiamato dai distruttori per `COleClientItem` e `COleServerItem`.  
  
##  <a name="updatemodifiedflag"></a>  COleDocument::UpdateModifiedFlag  
 Chiamare questa funzione per contrassegnare il documento come modificata se uno qualsiasi degli elementi OLE contenuti sono stato modificato.  
  
```  
virtual void UpdateModifiedFlag();
```  
  
### <a name="remarks"></a>Note  
 In questo modo il framework richiedere all'utente di salvare il documento prima della chiusura, anche se i dati nativi del documento non sono stati modificati.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC contenitore](../../visual-cpp-samples.md)   
 [Esempio MFC MFCBIND](../../visual-cpp-samples.md)   
 [CDocument (classe)](../../mfc/reference/cdocument-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



