---
title: Classe COleDocObjectItem
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
ms.openlocfilehash: 454be491fe5875b1b1ac9b2b85fdebe2f1663ebc
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916969"
---
# <a name="coledocobjectitem-class"></a>Classe COleDocObjectItem

Implementa Active Document Containment.

## <a name="syntax"></a>Sintassi

```
class COleDocObjectItem : public COleClientItem
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDocObjectItem::COleDocObjectItem](#coledocobjectitem)|Costruisce un `COleDocObject` elemento.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDocObjectItem::D oDefaultPrinting](#dodefaultprinting)|Stampa il documento dell'applicazione contenitore usando le impostazioni predefinite della stampante.|
|[COleDocObjectItem:: ExecCommand](#execcommand)|Esegue il comando specificato dall'utente.|
|[COleDocObjectItem:: GetActiveView](#getactiveview)|Recupera la visualizzazione attiva del documento.|
|[COleDocObjectItem::GetPageCount](#getpagecount)|Recupera il numero di pagine nel documento dell'applicazione contenitore.|
|[COleDocObjectItem:: OnPreparePrinting](#onprepareprinting)|Prepara il documento dell'applicazione contenitore per la stampa.|
|[COleDocObjectItem:: OnPrint](#onprint)|Stampa il documento dell'applicazione contenitore.|
|[COleDocObjectItem::QueryCommand](#querycommand)|Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.|
|[COleDocObjectItem:: Release](#release)|Rilascia la connessione a un elemento collegato OLE e la chiude se è stata aperta. Non elimina definitivamente l'elemento client.|

## <a name="remarks"></a>Note

In MFC un documento attivo viene gestito in modo analogo a un semplice incorporamento modificabile sul posto, con le differenze seguenti:

- La `COleDocument`classe derivata da gestisce ancora un elenco degli elementi attualmente incorporati; tuttavia, questi elementi potrebbero essere `COleDocObjectItem`elementi derivati da.

- Quando un documento attivo è attivo, occupa l'intera area client della visualizzazione quando è attivo sul posto.

- Un contenitore di documenti attivo dispone del controllo completo del menu della **Guida** .

- Il menu? contiene voci di menu per il contenitore e il server di documenti attivi.

Poiché il contenitore dei documenti attivi è proprietario del menu della **Guida** , il contenitore è responsabile dell'invio dei messaggi di menu della **Guida** al server. Questa integrazione viene gestita da `COleDocObjectItem`.

Per ulteriori informazioni sull'Unione di menu e sull'attivazione di documenti attivi, vedere Panoramica del contenimento dei [documenti attivi](../../mfc/active-document-containment.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleClientItem](../../mfc/reference/coleclientitem-class.md)

`COleDocObjectItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="coledocobjectitem"></a>COleDocObjectItem:: COleDocObjectItem

Chiamare questa funzione membro per inizializzare `COleDocObjectItem` l'oggetto.

```
COleDocObjectItem(COleDocument* pContainerDoc = NULL);
```

### <a name="parameters"></a>Parametri

*pContainerDoc*<br/>
Puntatore all' `COleDocument` oggetto che funge da contenitore di documenti attivi. Questo parametro deve essere NULL per abilitare IMPLEMENT_SERIALIZE. In genere gli elementi OLE vengono costruiti con un puntatore a un documento non NULL.

##  <a name="dodefaultprinting"></a>COleDocObjectItem::D oDefaultPrinting

Chiamato dal Framework per un documento utilizzando le impostazioni predefinite.

```
static HRESULT DoDefaultPrinting(
    CView* pCaller,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pCaller*<br/>
Puntatore a un oggetto [CView](../../mfc/reference/cview-class.md) che sta inviando il comando stampa.

*pInfo*<br/>
Puntatore a un oggetto [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo da stampare.

##  <a name="execcommand"></a>COleDocObjectItem:: ExecCommand

Chiamare questa funzione membro per eseguire il comando specificato dall'utente.

```
HRESULT ExecCommand(
    DWORD nCmdID,
    DWORD nCmdExecOpt = OLECMDEXECOPT_DONTPROMPTUSER,
    const GUID* pguidCmdGroup = NULL);
```

### <a name="parameters"></a>Parametri

*nCmdID*<br/>
Identificatore del comando da eseguire. Deve trovarsi nel gruppo identificato da *pguidCmdGroup*.

*nCmdExecOpt*<br/>
Specifica le opzioni di esecuzione del comando. Per impostazione predefinita, impostare per eseguire il comando senza richiedere conferma all'utente. Per un elenco di valori, vedere [OLECMDEXECOPT](/windows/desktop/api/docobj/ne-docobj-olecmdexecopt) .

*pguidCmdGroup*<br/>
Identificatore univoco del gruppo di comandi. Per impostazione predefinita, NULL, che specifica il gruppo standard. Il comando passato in *nCmdID* deve appartenere al gruppo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se ha esito positivo; in caso contrario, restituisce uno dei codici di errore seguenti.

|Value|Descrizione|
|-----------|-----------------|
|E_UNEXPECTED|Si è verificato un errore imprevisto.|
|E_FAIL|Si è verificato un errore.|
|E_NOTIMPL|Indica che MFC deve tentare di tradurre e inviare il comando.|
|OLECMDERR_E_UNKNOWNGROUP|*pguidCmdGroup* è diverso da null, ma non specifica un gruppo di comandi riconosciuto.|
|OLECMDERR_E_NOTSUPPORTED|*nCmdID* non è riconosciuto come comando valido nel gruppo pGroup.|
|OLECMDERR_DISABLED|Il comando identificato da *nCmdID* è disabilitato e non può essere eseguito.|
|OLECMDERR_NOHELP|Il chiamante ha richiesto assistenza sul comando identificato da *nCmdID* , ma non è disponibile alcuna guida.|
|OLECMDERR_CANCELLED|L'utente ha annullato l'esecuzione.|

### <a name="remarks"></a>Note

I parametri *pguidCmdGroup* e *nCmdID* identificano insieme in modo univoco il comando da richiamare. Il parametro *nCmdexecopt* specifica l'azione esatta da eseguire.

##  <a name="getactiveview"></a>COleDocObjectItem:: GetActiveView

Chiamare questa funzione membro per ottenere un puntatore all' `IOleDocumentView` interfaccia della visualizzazione attualmente attiva.

```
LPOLEDOCUMENTVIEW GetActiveView() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia [IOleDocumentView](/windows/desktop/api/docobj/nn-docobj-ioledocumentview) della visualizzazione attualmente attiva. Se non è presente alcuna visualizzazione corrente, viene restituito NULL.

### <a name="remarks"></a>Note

Il conteggio dei riferimenti sul puntatore `IOleDocumentView` restituito non viene incrementato prima che venga restituito da questa funzione.

##  <a name="getpagecount"></a>COleDocObjectItem:: GetPageCount

Chiamare questa funzione membro per recuperare il numero di pagine nel documento.

```
BOOL GetPageCount(
    LPLONG pnFirstPage,
    LPLONG pcPages);
```

### <a name="parameters"></a>Parametri

*pnFirstPage*<br/>
Puntatore al numero della prima pagina del documento. Può essere NULL, che indica che il chiamante non necessita di questo numero.

*pcPages*<br/>
Puntatore al numero totale di pagine nel documento. Può essere NULL, che indica che il chiamante non necessita di questo numero.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="onprepareprinting"></a>COleDocObjectItem:: OnPreparePrinting

Questa funzione membro viene chiamata dal Framework per preparare un documento per la stampa.

```
static BOOL OnPreparePrinting(
    CView* pCaller,
    CPrintInfo* pInfo,
    BOOL bPrintAll = TRUE);
```

### <a name="parameters"></a>Parametri

*pCaller*<br/>
Puntatore a un oggetto [CView](../../mfc/reference/cview-class.md) che sta inviando il comando stampa.

*pInfo*<br/>
Puntatore a un oggetto [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo da stampare.

*bPrintAll*<br/>
Specifica se l'intero documento deve essere stampato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="onprint"></a>COleDocObjectItem:: OnPrint

Questa funzione membro viene chiamata dal Framework per stampare un documento.

```
static void OnPrint(
    CView* pCaller,
    CPrintInfo* pInfo,
    BOOL bPrintAll = TRUE);
```

### <a name="parameters"></a>Parametri

*pCaller*<br/>
Puntatore a un oggetto CView che sta inviando il comando stampa.

*pInfo*<br/>
Puntatore a un oggetto [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo da stampare.

*bPrintAll*<br/>
Specifica se l'intero documento deve essere stampato.

##  <a name="querycommand"></a>  COleDocObjectItem::QueryCommand

Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.

```
HRESULT QueryCommand(
    ULONG nCmdID,
    DWORD* pdwStatus,
    OLECMDTEXT* pCmdText =NULL,
    const GUID* pguidCmdGroup =NULL);
```

### <a name="parameters"></a>Parametri

*nCmdID*<br/>
identificatore del comando sottoposto a query.

*pdwStatus*<br/>
Puntatore ai flag restituiti come risultato della query. Per un elenco di valori possibili, vedere [OLECMDF](/windows/desktop/api/docobj/ne-docobj-olecmdf).

*pCmdText*<br/>
Puntatore a una struttura [OLECMDTEXT](/windows/desktop/api/docobj/ns-docobj-olecmdtext) in cui restituire informazioni sul nome e sullo stato per un singolo comando. Può essere NULL per indicare che il chiamante non necessita di queste informazioni.

*pguidCmdGroup*<br/>
Identificatore univoco del gruppo di comandi. può essere NULL per specificare il gruppo standard.

### <a name="return-value"></a>Valore restituito

Per un elenco completo dei valori restituiti, vedere [IOleCommandTarget:: QueryStatus](/windows/desktop/api/docobj/nf-docobj-iolecommandtarget-querystatus) nel Windows SDK.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità del metodo [IOleCommandTarget:: QueryStatus](/windows/desktop/api/docobj/nf-docobj-iolecommandtarget-querystatus) , come descritto nel Windows SDK.

##  <a name="release"></a>COleDocObjectItem:: Release

Rilascia la connessione a un elemento collegato OLE e la chiude se è stata aperta. Non elimina definitivamente l'elemento client.

```
virtual void Release(OLECLOSE dwCloseOption = OLECLOSE_NOSAVE);
```

### <a name="parameters"></a>Parametri

*dwCloseOption*<br/>
Flag che specifica le circostanze in cui l'elemento OLE viene salvato quando torna allo stato Loaded. Per un elenco di valori possibili, vedere [COleClientItem:: Close](../../mfc/reference/coleclientitem-class.md#close).

### <a name="remarks"></a>Note

Non elimina definitivamente l'elemento client.

## <a name="see-also"></a>Vedere anche

[MFCBIND di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)
