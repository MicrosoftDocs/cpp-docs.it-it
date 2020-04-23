---
title: Classe COleDocument
ms.date: 11/04/2016
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
ms.openlocfilehash: 1500035cb8be3036678090918154829aace48d2f
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753870"
---
# <a name="coledocument-class"></a>Classe COleDocument

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
|[COleDocument::ApplyPrintDevice](#applyprintdevice)|Imposta la periferica di destinazione di stampa per tutti gli elementi client nel documento.|
|[COleDocument::EnableCompoundFile](#enablecompoundfile)|Fa sì che i documenti vengano archiviati utilizzando il formato di file Di archiviazione strutturata OLE.|
|[COleDocument::GetInPlaceActiveItem](#getinplaceactiveitem)|Restituisce l'elemento OLE attualmente attivo sul posto.|
|[COleDocument::GetNextClientItem](#getnextclientitem)|Ottiene l'elemento client successivo per l'iterazione.|
|[COleDocument::GetNextItem](#getnextitem)|Ottiene l'elemento del documento successivo per l'iterazione.|
|[COleDocument::GetNextServerItem](#getnextserveritem)|Ottiene l'elemento server successivo per l'iterazione.|
|[COleDocument::GetPrimarySelectedItem](#getprimaryselecteditem)|Restituisce l'elemento OLE selezionato primario nel documento.|
|[COleDocument::GetStartPosition](#getstartposition)|Ottiene la posizione iniziale per iniziare l'iterazione.|
|[COleDocument::HasBlankItems](#hasblankitems)|Verifica la presenza di elementi vuoti nel documento.|
|[COleDocument::OnShowViews](#onshowviews)|Chiamato quando il documento diventa visibile o invisibile.|
|[COleDocument::RemoveItem](#removeitem)|Rimuove un elemento dall'elenco di elementi gestiti dal documento.|
|[COleDocument::UpdateModifiedFlag](#updatemodifiedflag)|Contrassegna il documento come modificato se uno degli elementi OLE contenuti è stato modificato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[COleDocument::OnEditChangeIcon](#oneditchangeicon)|Gestisce gli eventi nel comando di menu Cambia icona.|
|[COleDocument::OnEditConvert](#oneditconvert)|Gestisce la conversione di un oggetto incorporato o collegato da un tipo a un altro.|
|[COleDocument::OnEditLinks](#oneditlinks)|Gestisce gli eventi nel comando Collegamenti del menu Modifica.|
|[COleDocument::OnFileSendMail](#onfilesendmail)|Invia un messaggio di posta elettronica con il documento allegato.|
|[COleDocument::OnUpdateEditChangeIcon](#onupdateeditchangeicon)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Modifica/Modifica icona.|
|[COleDocument::OnUpdateEditLinksMenu](#onupdateeditlinksmenu)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Modifica/Collegamenti.|
|[COleDocument::OnUpdateObjectVerbMenu](#onupdateobjectverbmenu)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Modifica/ *NomeOggetto* e il sottomenu Verbo a cui si accede da Modifica/ *NomeOggetto*.|
|[COleDocument::OnUpdatePasteLinkMenu](#onupdatepastelinkmenu)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Incolla speciale.|
|[COleDocument::OnUpdatePasteMenu](#onupdatepastemenu)|Chiamato dal framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Incolla.|

## <a name="remarks"></a>Osservazioni

`COleDocument`è derivato da `CDocument`, che consente alle applicazioni OLE di utilizzare l'architettura documento/visualizzazione fornita dalla libreria Microsoft Foundation Class.

`COleDocument`considera un documento come una raccolta di [CDocItem](../../mfc/reference/cdocitem-class.md) oggetti per gestire gli elementi OLE. Sia le applicazioni contenitore che quella server richiedono un'architettura di questo tipo perché i relativi documenti devono essere in grado di contenere elementi OLE. Le classi [COleServerItem](../../mfc/reference/coleserveritem-class.md) e [COleClientItem,](../../mfc/reference/coleclientitem-class.md) entrambe derivate da `CDocItem`, gestiscono le interazioni tra applicazioni ed elementi OLE.

Se si sta scrivendo una semplice applicazione `COleDocument`contenitore, derivare la classe documento da . Se si scrive un'applicazione contenitore che supporta il collegamento agli elementi incorporati contenuti nei relativi documenti, derivare la classe documento da [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md). Se si sta scrivendo un'applicazione server o un contenitore/server combinato, derivare la classe documento da [COleServerDoc](../../mfc/reference/coleserverdoc-class.md). `COleLinkingDoc`e `COleServerDoc` derivano `COleDocument`da , quindi queste classi `COleDocument` `CDocument`ereditano tutti i servizi disponibili in e .

Per `COleDocument`utilizzare , derivare una classe da essa e aggiungere funzionalità per gestire i dati non OLE dell'applicazione, nonché gli elementi incorporati o collegati. Se si `CDocItem`definiscono classi derivate per archiviare i dati nativi `COleDocument` dell'applicazione, è possibile utilizzare l'implementazione predefinita definita da per archiviare i dati OLE e non OLE. È inoltre possibile progettare strutture di dati personalizzate per l'archiviazione dei dati non OLE separatamente dagli elementi OLE. Per altre informazioni, vedere l'articolo [Contenitori: file compositi](../../mfc/containers-compound-files.md)..

`CDocument`l'invio del documento tramite posta se è presente il supporto per la posta (MAPI). `COleDocument`[OnFileSendMail](#onfilesendmail) è stato aggiornato per gestire correttamente i documenti composti. Per ulteriori informazioni, vedere gli articoli [MAPI](../../mfc/mapi.md) e [supporto MAPI in MFC](../../mfc/mapi-support-in-mfc.md)..

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

`COleDocument`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="coledocumentadditem"></a><a name="additem"></a>COleDocument::AddItem

Chiamare questa funzione per aggiungere un elemento al documento.

```
virtual void AddItem(CDocItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Puntatore all'elemento del documento da aggiungere.

### <a name="remarks"></a>Osservazioni

Non è necessario chiamare questa funzione in modo `COleClientItem` `COleServerItem` esplicito quando viene chiamata dal costruttore o che accetta un puntatore a un documento.

## <a name="coledocumentapplyprintdevice"></a><a name="applyprintdevice"></a>COleDocument::ApplyPrintDevice

Chiamare questa funzione per modificare il dispositivo di destinazione della stampa per tutti gli elementi [COleClientItem](../../mfc/reference/coleclientitem-class.md) incorporati nel documento contenitore dell'applicazione.

```
BOOL ApplyPrintDevice(const DVTARGETDEVICE* ptd);
BOOL ApplyPrintDevice(const PRINTDLG* ppd);
```

### <a name="parameters"></a>Parametri

*Ptd*<br/>
Puntatore `DVTARGETDEVICE` a una struttura di dati, che contiene informazioni sulla nuova periferica di destinazione della stampa. Può essere NULL.

*Ppd*<br/>
Puntatore `PRINTDLG` a una struttura di dati, che contiene informazioni sulla nuova periferica di destinazione della stampa. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione aggiorna il dispositivo di destinazione della stampa per tutti gli elementi, ma non aggiorna la cache di presentazione per tali elementi. Per aggiornare la cache delle presentazioni per un elemento, chiamare [COleClientItem::UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink).

Gli argomenti di questa funzione contengono informazioni utilizzate da OLE per identificare il dispositivo di destinazione. La struttura [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) contiene informazioni utilizzate da Windows per inizializzare la finestra di dialogo Stampa comune. Dopo che l'utente chiude la finestra di dialogo, Windows restituisce informazioni sulle selezioni dell'utente in questa struttura. Il `m_pd` membro di un [CPrintDialog](../../mfc/reference/cprintdialog-class.md) oggetto è una `PRINTDLG` struttura.

Per ulteriori informazioni, vedere la struttura [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) in Windows SDK.

Per ulteriori informazioni, vedere la struttura [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) in Windows SDK.

## <a name="coledocumentcoledocument"></a><a name="coledocument"></a>COleDocument::COleDocument

Costruisce un oggetto `COleDocument`.

```
COleDocument();
```

## <a name="coledocumentenablecompoundfile"></a><a name="enablecompoundfile"></a>COleDocument::EnableCompoundFile

Chiamare questa funzione se si desidera archiviare il documento utilizzando il formato di file composto.

```cpp
void EnableCompoundFile(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se il supporto di file compositi è abilitato o disabilitato.

### <a name="remarks"></a>Osservazioni

Questo è anche chiamato archiviazione strutturata. Questa funzione viene in genere `COleDocument`chiamata dal costruttore della classe derivata. Per altre informazioni sui documenti composti, vedere l'articolo [Contenitori: file compositi](../../mfc/containers-compound-files.md)..

Se non si chiama questa funzione membro, i documenti verranno archiviati in un formato di file non strutturato ("flat").

Dopo che il supporto di file compositi è abilitato o disabilitato per un documento, l'impostazione non deve essere modificata durante il ciclo di vita del documento.

## <a name="coledocumentgetinplaceactiveitem"></a><a name="getinplaceactiveitem"></a>COleDocument::GetInPlaceActiveItem

Chiamare questa funzione per ottenere l'elemento OLE attualmente attivato sul posto nella finestra cornice contenente la visualizzazione identificata da *pWnd*.

```
virtual COleClientItem* GetInPlaceActiveItem(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra che visualizza il documento contenitore.

### <a name="return-value"></a>Valore restituito

Un puntatore al singolo elemento OLE attivo sul posto; NULL se non è presente alcun elemento OLE attualmente nello stato "attivo sul posto".

## <a name="coledocumentgetnextclientitem"></a><a name="getnextclientitem"></a>COleDocument::GetNextClientItem

Chiamare questa funzione ripetutamente per accedere a ciascuno degli elementi client nel documento.

```
COleClientItem* GetNextClientItem(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Riferimento a un valore POSITION impostato `GetNextClientItem`da una precedente chiamata a ; il valore iniziale viene `GetStartPosition` restituito dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento client successivo nel documento oppure NULL se non sono presenti più elementi client.

### <a name="remarks"></a>Osservazioni

Dopo ogni chiamata, il valore di *pos* viene impostato per l'elemento successivo nel documento, che potrebbe essere o meno un elemento client.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#1](../../mfc/codesnippet/cpp/coledocument-class_1.cpp)]

## <a name="coledocumentgetnextitem"></a><a name="getnextitem"></a>COleDocument::GetNextItem

Chiamare questa funzione ripetutamente per accedere a ciascuno degli elementi nel documento.

```
virtual CDocItem* GetNextItem(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Riferimento a un valore POSITION impostato `GetNextItem`da una precedente chiamata a ; il valore iniziale viene `GetStartPosition` restituito dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento del documento nella posizione specificata.

### <a name="remarks"></a>Osservazioni

Dopo ogni chiamata, il valore di *pos* viene impostato sul valore POSITION dell'elemento successivo nel documento. Se l'elemento recuperato è l'ultimo elemento nel documento, il nuovo valore di *pos* è NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#2](../../mfc/codesnippet/cpp/coledocument-class_2.cpp)]

## <a name="coledocumentgetnextserveritem"></a><a name="getnextserveritem"></a>COleDocument::GetNextServerItem

Chiamare questa funzione ripetutamente per accedere a ciascuno degli elementi del server nel documento.

```
COleServerItem* GetNextServerItem(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Riferimento a un valore POSITION impostato `GetNextServerItem`da una precedente chiamata a ; il valore iniziale viene `GetStartPosition` restituito dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento server successivo nel documento oppure NULL se non sono presenti altri elementi server.

### <a name="remarks"></a>Osservazioni

Dopo ogni chiamata, il valore di *pos* viene impostato per l'elemento successivo nel documento, che potrebbe o non potrebbe essere un elemento server.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleServer#2](../../mfc/codesnippet/cpp/coledocument-class_3.cpp)]

## <a name="coledocumentgetprimaryselecteditem"></a><a name="getprimaryselecteditem"></a>COleDocument::GetPrimarySelectedItem

Chiamato dal framework per recuperare l'elemento OLE attualmente selezionato nella visualizzazione specificata.

```
virtual COleClientItem* GetPrimarySelectedItem(CView* pView);
```

### <a name="parameters"></a>Parametri

*Pview*<br/>
Puntatore all'oggetto visualizzazione attivo che visualizza il documento.

### <a name="return-value"></a>Valore restituito

Un puntatore al singolo elemento OLE selezionato; NULL se non sono selezionati elementi OLE o se ne è selezionato più di uno.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita cerca un singolo elemento selezionato nell'elenco di elementi OLE. Se non è selezionato alcun elemento o se è selezionato più di un elemento, la funzione restituisce NULL. È necessario `CView::IsSelected` eseguire l'override della funzione membro nella classe di visualizzazione affinché questa funzione funzioni. Eseguire l'override di questa funzione se si dispone di un metodo personalizzato per l'archiviazione di elementi OLE contenuti.

## <a name="coledocumentgetstartposition"></a><a name="getstartposition"></a>COleDocument::GetStartPosition

Chiamare questa funzione per ottenere la posizione del primo elemento nel documento.

```
virtual POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per iniziare l'iterazione tra gli elementi del documento; NULL se il documento non contiene elementi.

### <a name="remarks"></a>Osservazioni

Passare il valore `GetNextItem`restituito `GetNextClientItem`a `GetNextServerItem`, , o .

## <a name="coledocumenthasblankitems"></a><a name="hasblankitems"></a>COleDocument::HasBlankItems

Chiamare questa funzione per determinare se il documento contiene elementi vuoti.

```
BOOL HasBlankItems() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento contiene elementi vuoti; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un elemento vuoto è uno il cui rettangolo è vuoto.

## <a name="coledocumentoneditchangeicon"></a><a name="oneditchangeicon"></a>COleDocument::OnEditChangeIcon

Visualizza la finestra di dialogo Modifica icona OLE e modifica l'icona che rappresenta l'elemento OLE attualmente selezionato con l'icona selezionata dall'utente nella finestra di dialogo.

```
afx_msg void OnEditChangeIcon();
```

### <a name="remarks"></a>Osservazioni

`OnEditChangeIcon`crea e avvia `COleChangeIconDialog` una finestra di dialogo Cambia icona.

## <a name="coledocumentoneditconvert"></a><a name="oneditconvert"></a>COleDocument::OnEditConvert

Visualizza la finestra di dialogo Converti OLE e converte o attiva l'elemento OLE attualmente selezionato in base alle selezioni dell'utente nella finestra di dialogo.

```
afx_msg void OnEditConvert();
```

### <a name="remarks"></a>Osservazioni

`OnEditConvert`crea e avvia `COleConvertDialog` una finestra di dialogo Converti.

Un esempio di conversione è la conversione di un documento di Microsoft Word in un documento di WordPad.

## <a name="coledocumentoneditlinks"></a><a name="oneditlinks"></a>COleDocument::OnEditLinks

Visualizza la finestra di dialogo Modifica/Collegamenti OLE.

```
afx_msg void OnEditLinks();
```

### <a name="remarks"></a>Osservazioni

`OnEditLinks`crea e avvia `COleLinksDialog` una finestra di dialogo Collegamenti che consente all'utente di modificare gli oggetti collegati.

## <a name="coledocumentonfilesendmail"></a><a name="onfilesendmail"></a>COleDocument::OnFileSendMail

Invia un messaggio tramite l'host di posta residente (se presente) con il documento come allegato.

```
afx_msg void OnFileSendMail();
```

### <a name="remarks"></a>Osservazioni

`OnFileSendMail`chiamate `OnSaveDocument` per serializzare (salvare) i documenti senza titolo e modificati in un file temporaneo, che viene quindi inviato tramite posta elettronica. Se il documento non è stato modificato, non è necessario un file temporaneo; l'originale viene inviato. `OnFileSendMail`carica MAPI32. DLL se non è già stato caricato.

A differenza `OnFileSendMail` dell'implementazione di for `CDocument`, questa funzione gestisce correttamente i file composti.

Per ulteriori informazioni, vedere gli [argomenti MAPI](../../mfc/mapi.md) e [supporto MAPI negli](../../mfc/mapi-support-in-mfc.md) articoli MFC.

## <a name="coledocumentonshowviews"></a><a name="onshowviews"></a>COleDocument::OnShowViews

Il framework chiama questa funzione dopo la modifica dello stato di visibilità del documento.

```
virtual void OnShowViews(BOOL bVisible);
```

### <a name="parameters"></a>Parametri

*bVisibile*<br/>
Indica se il documento è diventato visibile o invisibile.

### <a name="remarks"></a>Osservazioni

La versione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override se l'applicazione deve eseguire qualsiasi elaborazione speciale quando cambia la visibilità del documento.

## <a name="coledocumentonupdateeditchangeicon"></a><a name="onupdateeditchangeicon"></a>COleDocument::OnUpdateEditChangeIcon

Chiamato dal framework per aggiornare il comando Cambia icona nel menu Modifica.

```
afx_msg void OnUpdateEditChangeIcon(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore a `CCmdUI` una struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore `Enable` di aggiornamento `CCmdUI` chiama la funzione membro della struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Osservazioni

`OnUpdateEditChangeIcon`aggiorna l'interfaccia utente del comando a seconda che nel documento sia presente o meno un'icona valida. Eseguire l'override di questa funzione per modificare il comportamento.

## <a name="coledocumentonupdateeditlinksmenu"></a><a name="onupdateeditlinksmenu"></a>COleDocument::OnUpdateEditLinksMenu

Chiamato dal framework per aggiornare il comando Collegamenti nel menu Modifica.

```
afx_msg void OnUpdateEditLinksMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore a `CCmdUI` una struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore `Enable` di aggiornamento `CCmdUI` chiama la funzione membro della struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Osservazioni

A partire dal primo elemento OLE nel documento, `OnUpdateEditLinksMenu` accede a ogni elemento, verifica se l'elemento è un collegamento e, se si tratta di un collegamento, abilita il comando Collegamenti. Eseguire l'override di questa funzione per modificare il comportamento.

## <a name="coledocumentonupdateobjectverbmenu"></a><a name="onupdateobjectverbmenu"></a>COleDocument::OnUpdateObjectVerbMenu

Chiamato dal framework per aggiornare il comando *NomeOggetto* del menu Modifica e il sottomenu Verbo a cui si accede dal comando *NomeOggetto,* dove *NomeOggetto* è il nome dell'oggetto OLE incorporato nel documento.

```
afx_msg void OnUpdateObjectVerbMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore a `CCmdUI` una struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore `Enable` di aggiornamento `CCmdUI` chiama la funzione membro della struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Osservazioni

`OnUpdateObjectVerbMenu`aggiorna l'interfaccia utente del comando *NomeOggetto* a seconda che nel documento sia presente o meno un oggetto valido. Se esiste un oggetto, il comando *NomeOggetto* del menu Modifica è abilitato. Quando questo comando di menu è selezionato, viene visualizzato il sottomenu Verbo. Il sottomenu Verbo contiene tutti i comandi verbi disponibili per l'oggetto, ad esempio Modifica, Proprietà e così via. Eseguire l'override di questa funzione per modificare il comportamento.

## <a name="coledocumentonupdatepastelinkmenu"></a><a name="onupdatepastelinkmenu"></a>COleDocument::OnUpdatePasteLinkMenu

Chiamato dal framework per determinare se un elemento OLE collegato può essere incollato dagli Appunti.

```
afx_msg void OnUpdatePasteLinkMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore a `CCmdUI` una struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore `Enable` di aggiornamento `CCmdUI` chiama la funzione membro della struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Osservazioni

Il comando di menu Incolla speciale è abilitato o disabilitato a seconda che l'elemento possa essere incollato o meno nel documento.

## <a name="coledocumentonupdatepastemenu"></a><a name="onupdatepastemenu"></a>COleDocument::OnUpdatePasteMenu

Chiamato dal framework per determinare se un elemento OLE incorporato può essere incollato dagli Appunti.

```
afx_msg void OnUpdatePasteMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore a `CCmdUI` una struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore `Enable` di aggiornamento `CCmdUI` chiama la funzione membro della struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Osservazioni

Il comando e il pulsante del menu Incolla sono abilitati o disabilitati a seconda che l'elemento possa essere incollato o meno nel documento.

## <a name="coledocumentremoveitem"></a><a name="removeitem"></a>COleDocument::RemoveItem

Chiamare questa funzione per rimuovere un elemento dal documento.

```
virtual void RemoveItem(CDocItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Puntatore all'elemento del documento da rimuovere.

### <a name="remarks"></a>Osservazioni

In genere non è necessario chiamare questa funzione in modo esplicito; viene chiamato dai distruttori per `COleClientItem` `COleServerItem`e .

## <a name="coledocumentupdatemodifiedflag"></a><a name="updatemodifiedflag"></a>COleDocument::UpdateModifiedFlag

Chiamare questa funzione per contrassegnare il documento come modificato se uno degli elementi OLE contenuti sono stati modificati.

```
virtual void UpdateModifiedFlag();
```

### <a name="remarks"></a>Osservazioni

Ciò consente al framework di richiedere all'utente di salvare il documento prima della chiusura, anche se i dati nativi nel documento non sono stati modificati.

## <a name="see-also"></a>Vedere anche

[CONTENITORE DI ESEMPIO MFC](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC MFCBIND](../../overview/visual-cpp-samples.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
