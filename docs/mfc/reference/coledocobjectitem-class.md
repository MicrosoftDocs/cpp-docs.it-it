---
title: COleDocObjectItem (classe)
ms.date: 11/04/2016
f1_keywords:
- COleDocObjectItem
- AFXOLE/COleDocObjectItem
- AFXOLE/COleDocObjectItem::COleDocObjectItem
- AFXOLE/COleDocObjectItem::DoDefaultPrinting
- AFXOLE/COleDocObjectItem::ExecCommand
- AFXOLE/COleDocObjectItem::GetActiveView
- AFXOLE/COleDocObjectItem::GetPageCount
- AFXOLE/COleDocObjectItem::OnPreparePrinting
- AFXOLE/COleDocObjectItem::OnPrint
- AFXOLE/COleDocObjectItem::QueryCommand
- AFXOLE/COleDocObjectItem::Release
helpviewer_keywords:
- COleDocObjectItem [MFC], COleDocObjectItem
- COleDocObjectItem [MFC], DoDefaultPrinting
- COleDocObjectItem [MFC], ExecCommand
- COleDocObjectItem [MFC], GetActiveView
- COleDocObjectItem [MFC], GetPageCount
- COleDocObjectItem [MFC], OnPreparePrinting
- COleDocObjectItem [MFC], OnPrint
- COleDocObjectItem [MFC], QueryCommand
- COleDocObjectItem [MFC], Release
ms.assetid: d150d306-8fd3-4831-b06d-afbe71d8fc9b
ms.openlocfilehash: a696226185dd99b9e277e74d92cbe15c95cc900a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375043"
---
# <a name="coledocobjectitem-class"></a>COleDocObjectItem (classe)

Implementa Active Document Containment.

## <a name="syntax"></a>Sintassi

```
class COleDocObjectItem : public COleClientItem
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDocObjectItem::COleDocObjectItem](#coledocobjectitem)|Costruisce un `COleDocObject` elemento.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDocObjectItem::DoDefaultPrinting](#dodefaultprinting)|Stampa il documento dell'applicazione contenitore utilizzando le impostazioni predefinite della stampante.|
|[COleDocObjectItem::ExecCommand](#execcommand)|Esegue il comando specificato dall'utente.|
|[COleDocObjectItem::GetActiveView](#getactiveview)|Recupera la visualizzazione attiva del documento.|
|[COleDocObjectItem::GetPageCount](#getpagecount)|Recupera il numero di pagine nel documento dell'applicazione contenitore.|
|[COleDocObjectItem::OnPreparePrinting (Stampa di COleDocObjectItem::OnPreparePrinting)](#onprepareprinting)|Prepara il documento dell'applicazione contenitore per la stampa.|
|[COleDocObjectItem::OnPrint](#onprint)|Stampa il documento dell'applicazione contenitore.|
|[COleDocObjectItem::QueryCommand](#querycommand)|Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.|
|[COleDocObjectItem::Release](#release)|Rilascia la connessione a un elemento collegato OLE e la chiude se è stata aperta. Non elimina l'elemento client.|

## <a name="remarks"></a>Osservazioni

In MFC, un documento attivo viene gestito in modo simile a un normale incorporamento modificabile sul posto, con le seguenti differenze:

- La `COleDocument`classe derivata mantiene ancora un elenco degli elementi attualmente incorporati; tuttavia, questi `COleDocObjectItem`elementi possono essere elementi derivati.

- Quando un documento attivo è attivo, occupa l'intera area client della visualizzazione quando è attivo sul posto.

- Un contenitore di documenti attivi ha il controllo completo del menu **?.**

- Il menu **Guida** contiene voci di menu sia per il contenitore di documenti attivi che per il server.

Poiché il contenitore di documenti attivi è proprietario del menu **Guida,** il contenitore è responsabile dell'inoltro dei messaggi del menu **Guida** del server al server. Questa integrazione è `COleDocObjectItem`gestita da .

Per ulteriori informazioni sull'unione dei menu e sull'attivazione di documenti attivi, vedere Panoramica del [contenimento](../../mfc/active-document-containment.md)di documenti attivi .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleClientItem](../../mfc/reference/coleclientitem-class.md)

`COleDocObjectItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="coledocobjectitemcoledocobjectitem"></a><a name="coledocobjectitem"></a>COleDocObjectItem::COleDocObjectItem

Chiamare questa funzione membro `COleDocObjectItem` per inizializzare l'oggetto.

```
COleDocObjectItem(COleDocument* pContainerDoc = NULL);
```

### <a name="parameters"></a>Parametri

*pContainerDoc (Doc)*<br/>
Puntatore all'oggetto `COleDocument` che funge da contenitore del documento attivo. Questo parametro deve essere NULL per abilitare IMPLEMENT_SERIALIZE. In genere gli elementi OLE vengono costruiti con un puntatore a un documento non NULL.

## <a name="coledocobjectitemdodefaultprinting"></a><a name="dodefaultprinting"></a>COleDocObjectItem::DoDefaultPrinting

Chiamato dal framework a un documento utilizzando le impostazioni predefinite.

```
static HRESULT DoDefaultPrinting(
    CView* pCaller,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pChiamante*<br/>
Puntatore a un [CView](../../mfc/reference/cview-class.md) oggetto che invia il comando di stampa.

*pInfo (informazioni in stato inquesto*<br/>
Puntatore a un [oggetto CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo da stampare.

## <a name="coledocobjectitemexeccommand"></a><a name="execcommand"></a>COleDocObjectItem::ExecCommand

Chiamare questa funzione membro per eseguire il comando specificato dall'utente.

```
HRESULT ExecCommand(
    DWORD nCmdID,
    DWORD nCmdExecOpt = OLECMDEXECOPT_DONTPROMPTUSER,
    const GUID* pguidCmdGroup = NULL);
```

### <a name="parameters"></a>Parametri

*nCmdID (informazioni in stato in questo base comando*<br/>
Identificatore del comando da eseguire. Deve essere nel gruppo identificato da *pguidCmdGroup*.

*nCmdExecOptito*<br/>
Specifica le opzioni di esecuzione dei comandi. Per impostazione predefinita, impostare per eseguire il comando senza chiedere conferma all'utente. Per un elenco di valori, vedere [OLECMDEXECOPT.](/windows/win32/api/docobj/ne-docobj-olecmdexecopt)

*PguidCmdGroup (gruppo pguidCmdGroup)*<br/>
Identificatore univoco del gruppo di comando. Per impostazione predefinita, NULL, che specifica il gruppo standard. Il comando passato in *nCmdID* deve appartenere al gruppo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo; in caso contrario, restituisce uno dei seguenti codici di errore.

|valore|Descrizione|
|-----------|-----------------|
|E_UNEXPECTED|Si è verificato un errore imprevisto.|
|E_FAIL|Si è verificato un errore.|
|E_NOTIMPL|Indica che MFC stesso deve tentare di convertire e inviare il comando.|
|OLECMDERR_E_UNKNOWNGROUP|*pguidCmdGroup* non è NULL ma non specifica un gruppo di comandi riconosciuto.|
|OLECMDERR_E_NOTSUPPORTED|*nCmdID* non è riconosciuto come comando valido nel gruppo pGroup.|
|OLECMDERR_DISABLED|Il comando identificato da *nCmdID* è disabilitato e non può essere eseguito.|
|OLECMDERR_NOHELP|Il chiamante ha richiesto aiuto sul comando identificato da *nCmdID* ma non è disponibile alcuna Guida.|
|OLECMDERR_CANCELLED|L'utente ha annullato l'esecuzione.|

### <a name="remarks"></a>Osservazioni

Il *pguidCmdGroup* e i parametri *nCmdID* insieme identificano in modo univoco il comando da richiamare. Il parametro *nCmdExecOpt* consente di specificare l'azione esatta da eseguire.

## <a name="coledocobjectitemgetactiveview"></a><a name="getactiveview"></a>COleDocObjectItem::GetActiveView

Chiamare questa funzione membro per `IOleDocumentView` ottenere un puntatore all'interfaccia della visualizzazione attualmente attiva.

```
LPOLEDOCUMENTVIEW GetActiveView() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia [IOleDocumentView](/windows/win32/api/docobj/nn-docobj-ioledocumentview) della visualizzazione attualmente attiva. Se non è presente alcuna visualizzazione corrente, restituisce NULL.

### <a name="remarks"></a>Osservazioni

Il conteggio dei riferimenti `IOleDocumentView` nel puntatore restituito non viene incrementato prima di essere restituito da questa funzione.

## <a name="coledocobjectitemgetpagecount"></a><a name="getpagecount"></a>COleDocObjectItem::GetPageCount

Chiamare questa funzione membro per recuperare il numero di pagine nel documento.

```
BOOL GetPageCount(
    LPLONG pnFirstPage,
    LPLONG pcPages);
```

### <a name="parameters"></a>Parametri

*PnFirstPage (pagina pnFirstPage)*<br/>
Puntatore al numero della prima pagina del documento. Può essere NULL, che indica che il chiamante non ha bisogno di questo numero.

*pcPagine*<br/>
Puntatore al numero totale di pagine nel documento. Può essere NULL, che indica che il chiamante non ha bisogno di questo numero.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="coledocobjectitemonprepareprinting"></a><a name="onprepareprinting"></a>COleDocObjectItem::OnPreparePrinting (Stampa di COleDocObjectItem::OnPreparePrinting)

Questa funzione membro viene chiamata dal framework per preparare un documento per la stampa.

```
static BOOL OnPreparePrinting(
    CView* pCaller,
    CPrintInfo* pInfo,
    BOOL bPrintAll = TRUE);
```

### <a name="parameters"></a>Parametri

*pChiamante*<br/>
Puntatore a un [CView](../../mfc/reference/cview-class.md) oggetto che invia il comando di stampa.

*pInfo (informazioni in stato inquesto*<br/>
Puntatore a un [oggetto CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo da stampare.

*bStampaTutto*<br/>
Specifica se l'intero documento deve essere stampato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="coledocobjectitemonprint"></a><a name="onprint"></a>COleDocObjectItem::OnPrint

Questa funzione membro viene chiamata dal framework per stampare un documento.

```
static void OnPrint(
    CView* pCaller,
    CPrintInfo* pInfo,
    BOOL bPrintAll = TRUE);
```

### <a name="parameters"></a>Parametri

*pChiamante*<br/>
Puntatore a un CView oggetto che invia il comando di stampa.

*pInfo (informazioni in stato inquesto*<br/>
Puntatore a un [oggetto CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo da stampare.

*bStampaTutto*<br/>
Specifica se l'intero documento deve essere stampato.

## <a name="coledocobjectitemquerycommand"></a><a name="querycommand"></a>COleDocObjectItem::QueryCommand

Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.

```
HRESULT QueryCommand(
    ULONG nCmdID,
    DWORD* pdwStatus,
    OLECMDTEXT* pCmdText =NULL,
    const GUID* pguidCmdGroup =NULL);
```

### <a name="parameters"></a>Parametri

*nCmdID (informazioni in stato in questo base comando*<br/>
l'identificatore del comando su cui viene eseguita la query.

*pdwStatus (stato pdwStatus)*<br/>
Puntatore ai flag restituiti come risultato della query. Per un elenco dei valori possibili, vedere [OLECMDF](/windows/win32/api/docobj/ne-docobj-olecmdf).

*pCmdText (testo di comando)*<br/>
Puntatore a una struttura [OLECMDTEXT](/windows/win32/api/docobj/ns-docobj-olecmdtext) in cui restituire informazioni sul nome e sullo stato per un singolo comando. Può essere NULL per indicare che il chiamante non necessita di queste informazioni.

*PguidCmdGroup (gruppo pguidCmdGroup)*<br/>
Identificatore univoco del gruppo di comandi; può essere NULL per specificare il gruppo standard.

### <a name="return-value"></a>Valore restituito

Per un elenco completo dei valori restituiti, vedere [IOleCommandTarget::QueryStatus](/windows/win32/api/docobj/nf-docobj-iolecommandtarget-querystatus) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del metodo [IOleCommandTarget::QueryStatus,](/windows/win32/api/docobj/nf-docobj-iolecommandtarget-querystatus) come descritto in Windows SDK.

## <a name="coledocobjectitemrelease"></a><a name="release"></a>COleDocObjectItem::Release

Rilascia la connessione a un elemento collegato OLE e la chiude se è stata aperta. Non elimina l'elemento client.

```
virtual void Release(OLECLOSE dwCloseOption = OLECLOSE_NOSAVE);
```

### <a name="parameters"></a>Parametri

*dwCloseOption (opzione dwCloseOption)*<br/>
Flag specificando in quali circostanze l'elemento OLE viene salvato quando torna allo stato caricato. Per un elenco dei valori possibili, vedere [COleClientItem::Close](../../mfc/reference/coleclientitem-class.md#close).

### <a name="remarks"></a>Osservazioni

Non elimina l'elemento client.

## <a name="see-also"></a>Vedere anche

[Esempio MFC MFCBIND](../../overview/visual-cpp-samples.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)
