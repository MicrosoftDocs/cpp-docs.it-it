---
description: 'Altre informazioni su: classe COleDocument'
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
ms.openlocfilehash: 804721c4055ecfdb64aab86b8ecc964d3bbbc42b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227182"
---
# <a name="coledocument-class"></a>Classe COleDocument

Classe di base per i documenti OLE che supportano la modifica visiva.

## <a name="syntax"></a>Sintassi

```
class COleDocument : public CDocument
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleDocument:: COleDocument](#coledocument)|Costruisce un oggetto `COleDocument`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleDocument:: AddItem](#additem)|Aggiunge un elemento all'elenco di elementi gestiti dal documento.|
|[COleDocument:: ApplyPrintDevice](#applyprintdevice)|Imposta il dispositivo di destinazione di stampa per tutti gli elementi client nel documento.|
|[COleDocument:: EnableCompoundFile](#enablecompoundfile)|Fa in modo che i documenti vengano archiviati utilizzando il formato di file di archiviazione strutturato OLE.|
|[COleDocument:: GetInPlaceActiveItem](#getinplaceactiveitem)|Restituisce l'elemento OLE attualmente attivo sul posto.|
|[COleDocument:: GetNextClientItem](#getnextclientitem)|Ottiene l'elemento client successivo per l'iterazione.|
|[COleDocument:: GetNextItem](#getnextitem)|Ottiene l'elemento successivo del documento per l'iterazione.|
|[COleDocument:: GetNextServerItem](#getnextserveritem)|Ottiene l'elemento server successivo per l'iterazione.|
|[COleDocument:: GetPrimarySelectedItem](#getprimaryselecteditem)|Restituisce l'elemento OLE primario selezionato nel documento.|
|[COleDocument:: GetStartPosition](#getstartposition)|Ottiene la posizione iniziale per iniziare l'iterazione.|
|[COleDocument:: HasBlankItems](#hasblankitems)|Verifica la presenza di elementi vuoti nel documento.|
|[COleDocument:: OnShowViews](#onshowviews)|Chiamato quando il documento diventa visibile o invisibile.|
|[COleDocument:: RemoveItem](#removeitem)|Rimuove un elemento dall'elenco di elementi gestiti dal documento.|
|[COleDocument:: UpdateModifiedFlag](#updatemodifiedflag)|Contrassegna il documento come modificato se uno degli elementi OLE contenuti è stato modificato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[COleDocument:: OnEditChangeIcon](#oneditchangeicon)|Gestisce gli eventi nel comando di menu Cambia icona.|
|[COleDocument:: OnEditConvert](#oneditconvert)|Gestisce la conversione di un oggetto incorporato o collegato da un tipo a un altro.|
|[COleDocument:: OnEditLinks](#oneditlinks)|Gestisce gli eventi nel comando collegamenti del menu Modifica.|
|[COleDocument:: OnFileSendMail](#onfilesendmail)|Invia un messaggio di posta elettronica con il documento allegato.|
|[COleDocument:: OnUpdateEditChangeIcon](#onupdateeditchangeicon)|Chiamata eseguita dal Framework per aggiornare l'interfaccia utente del comando per l'opzione di menu modifica/cambia icona.|
|[COleDocument:: OnUpdateEditLinksMenu](#onupdateeditlinksmenu)|Chiamata eseguita dal Framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Modifica/collegamenti.|
|[COleDocument:: OnUpdateObjectVerbMenu](#onupdateobjectverbmenu)|Chiamata eseguita dal Framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Modifica/ *nomeoggetto* e il sottomenu del verbo a cui si accede da modifica/ *nomeoggetto*.|
|[COleDocument:: OnUpdatePasteLinkMenu](#onupdatepastelinkmenu)|Chiamata eseguita dal Framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Incolla speciale.|
|[COleDocument:: OnUpdatePasteMenu](#onupdatepastemenu)|Chiamata eseguita dal Framework per aggiornare l'interfaccia utente del comando per l'opzione di menu Incolla.|

## <a name="remarks"></a>Commenti

`COleDocument` è derivato da `CDocument` , che consente alle applicazioni OLE di utilizzare l'architettura documento/visualizzazione fornita dal libreria Microsoft Foundation Class.

`COleDocument` considera un documento come una raccolta di oggetti [CDocItem](../../mfc/reference/cdocitem-class.md) per gestire gli elementi OLE. Per le applicazioni di contenitori e server è necessaria un'architettura di questo tipo, perché i documenti devono essere in grado di contenere elementi OLE. Le classi [COleServerItem](../../mfc/reference/coleserveritem-class.md) e [COleClientItem](../../mfc/reference/coleclientitem-class.md) , entrambe derivate da `CDocItem` , gestiscono le interazioni tra le applicazioni e gli elementi OLE.

Se si sta scrivendo una semplice applicazione contenitore, derivare la classe del documento da `COleDocument` . Se si sta scrivendo un'applicazione contenitore che supporta il collegamento agli elementi incorporati contenuti nei documenti, derivare la classe del documento da [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md). Se si sta scrivendo un'applicazione server o un contenitore/server combinato, derivare la classe del documento da [COleServerDoc](../../mfc/reference/coleserverdoc-class.md). `COleLinkingDoc` e `COleServerDoc` derivano da `COleDocument` , quindi queste classi ereditano tutti i servizi disponibili in `COleDocument` e `CDocument` .

Per utilizzare `COleDocument` , derivare una classe da essa e aggiungere funzionalità per gestire i dati non OLE dell'applicazione, nonché gli elementi incorporati o collegati. Se si definiscono `CDocItem` classi derivate da per archiviare i dati nativi dell'applicazione, è possibile utilizzare l'implementazione predefinita definita da `COleDocument` per archiviare i dati OLE e non OLE. È inoltre possibile progettare le proprie strutture di dati per archiviare separatamente i dati non OLE dagli elementi OLE. Per ulteriori informazioni, vedere l'articolo [contenitori: file composti](../../mfc/containers-compound-files.md).

`CDocument` supporta l'invio del documento tramite posta elettronica se è presente il supporto per la posta elettronica (MAPI). `COleDocument` ha aggiornato [OnFileSendMail](#onfilesendmail) per gestire correttamente i documenti composti. Per ulteriori informazioni, vedere [gli articoli supporto MAPI e](../../mfc/mapi.md) [MAPI in MFC](../../mfc/mapi-support-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

`COleDocument`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="coledocumentadditem"></a><a name="additem"></a> COleDocument:: AddItem

Chiamare questa funzione per aggiungere un elemento al documento.

```
virtual void AddItem(CDocItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore all'elemento del documento da aggiungere.

### <a name="remarks"></a>Commenti

Non è necessario chiamare questa funzione in modo esplicito quando viene chiamata dal `COleClientItem` `COleServerItem` costruttore o che accetta un puntatore a un documento.

## <a name="coledocumentapplyprintdevice"></a><a name="applyprintdevice"></a> COleDocument:: ApplyPrintDevice

Chiamare questa funzione per modificare il dispositivo di destinazione di stampa per tutti gli elementi [COleClientItem](../../mfc/reference/coleclientitem-class.md) incorporati nel documento contenitore dell'applicazione.

```
BOOL ApplyPrintDevice(const DVTARGETDEVICE* ptd);
BOOL ApplyPrintDevice(const PRINTDLG* ppd);
```

### <a name="parameters"></a>Parametri

*PTD*<br/>
Puntatore a una `DVTARGETDEVICE` struttura di dati che contiene informazioni sul nuovo dispositivo di destinazione di stampa. Può essere NULL.

*PPD*<br/>
Puntatore a una `PRINTDLG` struttura di dati che contiene informazioni sul nuovo dispositivo di destinazione di stampa. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione aggiorna il dispositivo di destinazione di stampa per tutti gli elementi, ma non aggiorna la cache di presentazione per tali elementi. Per aggiornare la cache di presentazione per un elemento, chiamare [COleClientItem:: UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink).

Gli argomenti di questa funzione contengono informazioni utilizzate da OLE per identificare il dispositivo di destinazione. La struttura [PrintDlg](/windows/win32/api/commdlg/ns-commdlg-printdlga) contiene informazioni utilizzate da Windows per inizializzare la finestra di dialogo Stampa comune. Dopo che l'utente ha chiuso la finestra di dialogo, Windows restituisce informazioni sulle selezioni dell'utente nella struttura. Il `m_pd` membro di un oggetto [CPrintDialog](../../mfc/reference/cprintdialog-class.md) è una `PRINTDLG` struttura.

Per ulteriori informazioni, vedere la struttura [PrintDlg](/windows/win32/api/commdlg/ns-commdlg-printdlga) nel Windows SDK.

Per ulteriori informazioni, vedere la struttura [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) nel Windows SDK.

## <a name="coledocumentcoledocument"></a><a name="coledocument"></a> COleDocument:: COleDocument

Costruisce un oggetto `COleDocument`.

```
COleDocument();
```

## <a name="coledocumentenablecompoundfile"></a><a name="enablecompoundfile"></a> COleDocument:: EnableCompoundFile

Chiamare questa funzione se si desidera archiviare il documento utilizzando il formato di file composto.

```cpp
void EnableCompoundFile(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se il supporto del file composto è abilitato o disabilitato.

### <a name="remarks"></a>Commenti

Questa operazione è detta anche archiviazione strutturata. Questa funzione viene in genere chiamata dal costruttore della `COleDocument` classe derivata da. Per ulteriori informazioni sui documenti composti, vedere l'articolo [contenitori: file composti](../../mfc/containers-compound-files.md).

Se non si chiama questa funzione membro, i documenti verranno archiviati in un formato di file non strutturato ("flat").

Dopo l'abilitazione o la disabilitazione del supporto dei file composti per un documento, l'impostazione non deve essere modificata durante la durata del documento.

## <a name="coledocumentgetinplaceactiveitem"></a><a name="getinplaceactiveitem"></a> COleDocument:: GetInPlaceActiveItem

Chiamare questa funzione per ottenere l'elemento OLE attualmente attivato sul posto nella finestra cornice contenente la visualizzazione identificata da *pWnd*.

```
virtual COleClientItem* GetInPlaceActiveItem(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra in cui viene visualizzato il documento contenitore.

### <a name="return-value"></a>Valore restituito

Puntatore al singolo elemento OLE attivo sul posto; NULL se non è presente alcun elemento OLE attualmente nello stato "attivo sul posto".

## <a name="coledocumentgetnextclientitem"></a><a name="getnextclientitem"></a> COleDocument:: GetNextClientItem

Chiamare questa funzione ripetutamente per accedere a ogni elemento client nel documento.

```
COleClientItem* GetNextClientItem(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Riferimento a un valore di posizione impostato da una chiamata precedente a. `GetNextClientItem` il valore iniziale viene restituito dalla `GetStartPosition` funzione membro.

### <a name="return-value"></a>Valore restituito

Puntatore al successivo elemento client nel documento oppure NULL se non sono presenti altri elementi client.

### <a name="remarks"></a>Commenti

Al termine di ogni chiamata, il valore di *pos* viene impostato per l'elemento successivo del documento, che può essere o meno un elemento client.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#1](../../mfc/codesnippet/cpp/coledocument-class_1.cpp)]

## <a name="coledocumentgetnextitem"></a><a name="getnextitem"></a> COleDocument:: GetNextItem

Chiamare questa funzione ripetutamente per accedere a ogni elemento del documento.

```
virtual CDocItem* GetNextItem(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Riferimento a un valore di posizione impostato da una chiamata precedente a. `GetNextItem` il valore iniziale viene restituito dalla `GetStartPosition` funzione membro.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento del documento in corrispondenza della posizione specificata.

### <a name="remarks"></a>Commenti

Al termine di ogni chiamata, il valore di *pos* viene impostato sul valore di posizione dell'elemento successivo nel documento. Se l'elemento recuperato è l'ultimo elemento del documento, il nuovo valore di *pos* è null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#2](../../mfc/codesnippet/cpp/coledocument-class_2.cpp)]

## <a name="coledocumentgetnextserveritem"></a><a name="getnextserveritem"></a> COleDocument:: GetNextServerItem

Chiamare questa funzione ripetutamente per accedere a ogni elemento del server nel documento.

```
COleServerItem* GetNextServerItem(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Riferimento a un valore di posizione impostato da una chiamata precedente a. `GetNextServerItem` il valore iniziale viene restituito dalla `GetStartPosition` funzione membro.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento del server successivo nel documento oppure NULL se non sono presenti altri elementi server.

### <a name="remarks"></a>Commenti

Al termine di ogni chiamata, il valore di *pos* viene impostato per l'elemento successivo del documento, che può essere o meno un elemento server.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleServer#2](../../mfc/codesnippet/cpp/coledocument-class_3.cpp)]

## <a name="coledocumentgetprimaryselecteditem"></a><a name="getprimaryselecteditem"></a> COleDocument:: GetPrimarySelectedItem

Chiamata eseguita dal Framework per recuperare l'elemento OLE attualmente selezionato nella visualizzazione specificata.

```
virtual COleClientItem* GetPrimarySelectedItem(CView* pView);
```

### <a name="parameters"></a>Parametri

*pView*<br/>
Puntatore all'oggetto visualizzazione attivo che Visualizza il documento.

### <a name="return-value"></a>Valore restituito

Puntatore al singolo elemento OLE selezionato; NULL se non è selezionato alcun elemento OLE o se ne è selezionato più di uno.

### <a name="remarks"></a>Commenti

L'implementazione predefinita cerca nell'elenco di elementi OLE contenuti un singolo elemento selezionato e ne restituisce un puntatore. Se non è selezionato alcun elemento o se è selezionato più di un elemento, la funzione restituisce NULL. Per il corretto funzionamento di questa funzione, è necessario eseguire l'override della `CView::IsSelected` funzione membro nella classe di visualizzazione. Eseguire l'override di questa funzione se si dispone di un metodo personalizzato per archiviare gli elementi OLE contenuti.

## <a name="coledocumentgetstartposition"></a><a name="getstartposition"></a> COleDocument:: GetStartPosition

Chiamare questa funzione per ottenere la posizione del primo elemento nel documento.

```
virtual POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore di posizione che può essere utilizzato per iniziare l'iterazione degli elementi del documento. NULL se il documento non contiene elementi.

### <a name="remarks"></a>Commenti

Passare il valore restituito a `GetNextItem` , `GetNextClientItem` o `GetNextServerItem` .

## <a name="coledocumenthasblankitems"></a><a name="hasblankitems"></a> COleDocument:: HasBlankItems

Chiamare questa funzione per determinare se il documento contiene elementi vuoti.

```
BOOL HasBlankItems() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento contiene elementi vuoti; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Un elemento vuoto è un elemento il cui rettangolo è vuoto.

## <a name="coledocumentoneditchangeicon"></a><a name="oneditchangeicon"></a> COleDocument:: OnEditChangeIcon

Visualizza la finestra di dialogo icona modifica OLE e modifica l'icona che rappresenta l'elemento OLE attualmente selezionato sull'icona selezionata dall'utente nella finestra di dialogo.

```
afx_msg void OnEditChangeIcon();
```

### <a name="remarks"></a>Commenti

`OnEditChangeIcon` Crea e avvia una finestra di `COleChangeIconDialog` dialogo di modifica dell'icona.

## <a name="coledocumentoneditconvert"></a><a name="oneditconvert"></a> COleDocument:: OnEditConvert

Consente di visualizzare la finestra di dialogo Converti OLE e di convertire o attivare l'elemento OLE attualmente selezionato in base alle selezioni utente nella finestra di dialogo.

```
afx_msg void OnEditConvert();
```

### <a name="remarks"></a>Commenti

`OnEditConvert` Crea e avvia una finestra di `COleConvertDialog` dialogo di conversione.

Un esempio di conversione consiste nella conversione di un documento di Microsoft Word in un documento WordPad.

## <a name="coledocumentoneditlinks"></a><a name="oneditlinks"></a> COleDocument:: OnEditLinks

Consente di visualizzare la finestra di dialogo Modifica/collegamenti OLE.

```
afx_msg void OnEditLinks();
```

### <a name="remarks"></a>Commenti

`OnEditLinks` Crea e avvia una finestra di `COleLinksDialog` dialogo dei collegamenti che consente all'utente di modificare gli oggetti collegati.

## <a name="coledocumentonfilesendmail"></a><a name="onfilesendmail"></a> COleDocument:: OnFileSendMail

Invia un messaggio tramite l'host di posta elettronica residente, se presente, con il documento come allegato.

```
afx_msg void OnFileSendMail();
```

### <a name="remarks"></a>Commenti

`OnFileSendMail` chiama `OnSaveDocument` per serializzare (salvare) i documenti senza titolo e modificati in un file temporaneo, che viene quindi inviato tramite posta elettronica. Se il documento non è stato modificato, non è necessario un file temporaneo. viene inviato l'oggetto originale. `OnFileSendMail` carica MAPI32.DLL se non è già stato caricato.

A differenza dell'implementazione di `OnFileSendMail` per `CDocument` , questa funzione gestisce correttamente i file composti.

Per ulteriori informazioni, vedere gli [Argomenti MAPI](../../mfc/mapi.md) e [supporto MAPI negli articoli MFC](../../mfc/mapi-support-in-mfc.md) .

## <a name="coledocumentonshowviews"></a><a name="onshowviews"></a> COleDocument:: OnShowViews

Il Framework chiama questa funzione dopo la modifica dello stato di visibilità del documento.

```
virtual void OnShowViews(BOOL bVisible);
```

### <a name="parameters"></a>Parametri

*bVisible*<br/>
Indica se il documento è diventato visibile o invisibile.

### <a name="remarks"></a>Commenti

La versione predefinita di questa funzione non esegue alcuna operazione. Eseguirne l'override se l'applicazione deve eseguire un'elaborazione speciale in caso di modifica della visibilità del documento.

## <a name="coledocumentonupdateeditchangeicon"></a><a name="onupdateeditchangeicon"></a> COleDocument:: OnUpdateEditChangeIcon

Chiamata eseguita dal Framework per aggiornare il comando Cambia icona nel menu Modifica.

```
afx_msg void OnUpdateEditChangeIcon(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a una `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore di aggiornamento chiama la `Enable` funzione membro della `CCmdUI` struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Commenti

`OnUpdateEditChangeIcon` Aggiorna l'interfaccia utente del comando a seconda che esista o meno un'icona valida nel documento. Eseguire l'override di questa funzione per modificare il comportamento.

## <a name="coledocumentonupdateeditlinksmenu"></a><a name="onupdateeditlinksmenu"></a> COleDocument:: OnUpdateEditLinksMenu

Chiamata eseguita dal Framework per aggiornare il comando collegamenti nel menu Modifica.

```
afx_msg void OnUpdateEditLinksMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a una `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore di aggiornamento chiama la `Enable` funzione membro della `CCmdUI` struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Commenti

A partire dal primo elemento OLE del documento, `OnUpdateEditLinksMenu` accede a ogni elemento, verifica se l'elemento è un collegamento e, se è un collegamento, Abilita il comando collegamenti. Eseguire l'override di questa funzione per modificare il comportamento.

## <a name="coledocumentonupdateobjectverbmenu"></a><a name="onupdateobjectverbmenu"></a> COleDocument:: OnUpdateObjectVerbMenu

Chiamata eseguita dal Framework per aggiornare il comando *ObjectName* dal menu modifica e il sottomenu del verbo a cui si accede dal comando *ObjectName* , dove *nomeoggetto* è il nome dell'oggetto OLE incorporato nel documento.

```
afx_msg void OnUpdateObjectVerbMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a una `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore di aggiornamento chiama la `Enable` funzione membro della `CCmdUI` struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Commenti

`OnUpdateObjectVerbMenu` Aggiorna l'interfaccia utente del comando *nomeoggetto* a seconda che esista o meno un oggetto valido nel documento. Se è presente un oggetto, viene abilitato il comando *nomeoggetto* nel menu Modifica. Quando si seleziona questo comando di menu, viene visualizzato il sottomenu del verbo. Il sottomenu verb contiene tutti i comandi verb disponibili per l'oggetto, ad esempio Edit, Properties e così via. Eseguire l'override di questa funzione per modificare il comportamento.

## <a name="coledocumentonupdatepastelinkmenu"></a><a name="onupdatepastelinkmenu"></a> COleDocument:: OnUpdatePasteLinkMenu

Chiamata eseguita dal Framework per determinare se un elemento OLE collegato può essere incollato dagli Appunti.

```
afx_msg void OnUpdatePasteLinkMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a una `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore di aggiornamento chiama la `Enable` funzione membro della `CCmdUI` struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Commenti

Il comando di menu Incolla speciale è abilitato o disabilitato a seconda che l'elemento possa essere incollato o meno nel documento.

## <a name="coledocumentonupdatepastemenu"></a><a name="onupdatepastemenu"></a> COleDocument:: OnUpdatePasteMenu

Chiamata eseguita dal Framework per determinare se un elemento OLE incorporato può essere incollato dagli Appunti.

```
afx_msg void OnUpdatePasteMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a una `CCmdUI` struttura che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore di aggiornamento chiama la `Enable` funzione membro della `CCmdUI` struttura tramite *pCmdUI* per aggiornare l'interfaccia utente.

### <a name="remarks"></a>Commenti

Il comando e il pulsante di menu Incolla sono abilitati o disabilitati a seconda che l'elemento possa essere incollato o meno nel documento.

## <a name="coledocumentremoveitem"></a><a name="removeitem"></a> COleDocument:: RemoveItem

Chiamare questa funzione per rimuovere un elemento dal documento.

```
virtual void RemoveItem(CDocItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore all'elemento del documento da rimuovere.

### <a name="remarks"></a>Commenti

In genere non è necessario chiamare questa funzione in modo esplicito; viene chiamato dai distruttori per `COleClientItem` e `COleServerItem` .

## <a name="coledocumentupdatemodifiedflag"></a><a name="updatemodifiedflag"></a> COleDocument:: UpdateModifiedFlag

Chiamare questa funzione per contrassegnare il documento come modificato se uno degli elementi OLE contenuti è stato modificato.

```
virtual void UpdateModifiedFlag();
```

### <a name="remarks"></a>Commenti

Ciò consente al Framework di richiedere all'utente di salvare il documento prima della chiusura, anche se i dati nativi del documento non sono stati modificati.

## <a name="see-also"></a>Vedi anche

[CONTENITORE di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[MFCBIND di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CDocument (classe)](../../mfc/reference/cdocument-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
