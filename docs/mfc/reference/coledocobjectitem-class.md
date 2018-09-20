---
title: Classe COleDocObjectItem | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c0a1f126897dd6fd7cbd6c148087c34aa653ac2a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410455"
---
# <a name="coledocobjectitem-class"></a>Classe COleDocObjectItem

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
|[COleDocObjectItem:: DoDefaultPrinting](#dodefaultprinting)|Stampa il documento dell'applicazione contenitore usando le impostazioni della stampante predefinita.|
|[COleDocObjectItem::ExecCommand](#execcommand)|Esegue il comando specificato dall'utente.|
|[COleDocObjectItem::GetActiveView](#getactiveview)|Recupera visualizzazione attiva del documento.|
|[COleDocObjectItem::GetPageCount](#getpagecount)|Recupera il numero di pagine nel documento dell'applicazione contenitore.|
|[COleDocObjectItem](#onprepareprinting)|Prepara il documento dell'applicazione contenitore per la stampa.|
|[COleDocObjectItem](#onprint)|Stampa il documento dell'applicazione contenitore.|
|[COleDocObjectItem::QueryCommand](#querycommand)|Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.|
|[COleDocObjectItem::Release](#release)|Rilascia la connessione a un elemento collegato oggetto OLE e lo chiude se era aperta. Non elimina definitivamente l'elemento client.|

## <a name="remarks"></a>Note

In MFC, un documento attivo viene gestito in modo analogo a una normale, posto modificabile incorporamento, con le differenze seguenti:

- Il `COleDocument`-classe derivata comunque mantenuto un elenco di elementi incorporati; tuttavia, questi elementi possono essere `COleDocObjectItem`-elementi derivati.

- Quando un documento attivo è attivo, occupa l'intera area client della visualizzazione quando è attivo sul posto.

- Un contenitore di documenti attivi dispone di controllo completo di **aiutare** menu.

- Il **aiutare** menu contiene voci di menu per il contenitore di documenti attivi e il server.

Poiché il contenitore documento attivo possiede il **aiutare** menu, il contenitore è responsabile per il server di inoltro **Guida** i messaggi di menu al server. Questa integrazione è gestita da `COleDocObjectItem`.

Per altre informazioni su attivazione di documenti attivi e unione di menu, vedere Panoramica dei [Active Document Containment](../../mfc/active-document-containment.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleClientItem](../../mfc/reference/coleclientitem-class.md)

`COleDocObjectItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="coledocobjectitem"></a>  COleDocObjectItem::COleDocObjectItem

Chiamare questa funzione membro per inizializzare il `COleDocObjectItem` oggetto.

```
COleDocObjectItem(COleDocument* pContainerDoc = NULL);
```

### <a name="parameters"></a>Parametri

*pContainerDoc*<br/>
Un puntatore al `COleDocument` oggetto funge da contenitore documento attivo. Questo parametro deve essere NULL per abilitare IMPLEMENT_SERIALIZE. In genere gli elementi OLE sono costruiti con un puntatore di documento non NULL.

##  <a name="dodefaultprinting"></a>  COleDocObjectItem:: DoDefaultPrinting

Chiamato dal framework per un documento usando le impostazioni predefinite.

```
static HRESULT DoDefaultPrinting(
    CView* pCaller,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pCaller*<br/>
Un puntatore a un [CView](../../mfc/reference/cview-class.md) oggetto che invia il comando di stampa.

*pInfo*<br/>
Un puntatore a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) oggetto che descrive il processo di stampa.

##  <a name="execcommand"></a>  COleDocObjectItem::ExecCommand

Chiamare questa funzione membro per eseguire il comando specificato dall'utente.

```
HRESULT ExecCommand(
    DWORD nCmdID,
    DWORD nCmdExecOpt = OLECMDEXECOPT_DONTPROMPTUSER,
    const GUID* pguidCmdGroup = NULL);
```

### <a name="parameters"></a>Parametri

*nCmdID*<br/>
Identificatore del comando da eseguire. Deve appartenere al gruppo identificato da *pguidCmdGroup*.

*nCmdExecOpt*<br/>
Specifica le opzioni di esecuzione del comando. Per impostazione predefinita, impostato per eseguire il comando senza chiedere conferma all'utente. Visualizzare [OLECMDEXECOPT](/windows/desktop/api/docobj/ne-docobj-olecmdexecopt) per un elenco di valori.

*pguidCmdGroup*<br/>
Identificatore univoco del gruppo di comandi. Per impostazione predefinita, NULL, che specifica il gruppo standard. Il comando passato *nCmdID* deve appartenere al gruppo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'esito positivo. in caso contrario, restituisce uno dei seguenti codici di errore.

|Valore|Descrizione|
|-----------|-----------------|
|E_UNEXPECTED|Si è verificato un errore imprevisto.|
|E_FAIL|Si è verificato un errore.|
|E_NOTIMPL|Indica MFC stessa deve tentare di convertire e inviare il comando.|
|OLECMDERR_E_UNKNOWNGROUP|*pguidCmdGroup* è diverso da NULL, ma non specifica un gruppo di controlli riconosciuto.|
|OLECMDERR_E_NOTSUPPORTED|*nCmdID* non è riconosciuto come un comando valido in pGroup il gruppo.|
|OLECMDERR_DISABLED|Il comando identificato da *nCmdID* è disabilitato e non può essere eseguita.|
|OLECMDERR_NOHELP|Chiamante richiesto per la Guida sul comando identificato da *nCmdID* ma nessuna guida è disponibile.|
|OLECMDERR_CANCELLED|L'utente ha annullato l'esecuzione.|

### <a name="remarks"></a>Note

Il *pguidCmdGroup* e il *nCmdID* parametri insieme identificano in modo univoco il comando da richiamare. Il *nCmdExecOpt* parametro specifica l'azione esatto da eseguire.

##  <a name="getactiveview"></a>  COleDocObjectItem::GetActiveView

Chiamare questa funzione membro per ottenere un puntatore per il `IOleDocumentView` dell'interfaccia della visualizzazione attualmente attiva.

```
LPOLEDOCUMENTVIEW GetActiveView() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore per il [IOleDocumentView](/windows/desktop/api/docobj/nn-docobj-ioledocumentview) dell'interfaccia della visualizzazione attualmente attiva. Se non esiste alcuna visualizzazione corrente, restituisce NULL.

### <a name="remarks"></a>Note

Il conteggio dei riferimenti sull'oggetto restituito `IOleDocumentView` puntatore non viene incrementato prima che venga restituito da questa funzione.

##  <a name="getpagecount"></a>  COleDocObjectItem::GetPageCount

Chiamare questa funzione membro per recuperare il numero di pagine del documento.

```
BOOL GetPageCount(
    LPLONG pnFirstPage,
    LPLONG pcPages);
```

### <a name="parameters"></a>Parametri

*pnFirstPage*<br/>
Puntatore al numero di pagina prima del documento. Può essere NULL, che indica che il chiamante non necessita di questo numero.

*pcPages*<br/>
Puntatore al numero totale di pagine del documento. Può essere NULL, che indica che il chiamante non necessita di questo numero.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="onprepareprinting"></a>  COleDocObjectItem

Questa funzione membro viene chiamata dal framework per preparare un documento per la stampa.

```
static BOOL OnPreparePrinting(
    CView* pCaller,
    CPrintInfo* pInfo,
    BOOL bPrintAll = TRUE);
```

### <a name="parameters"></a>Parametri

*pCaller*<br/>
Un puntatore a un [CView](../../mfc/reference/cview-class.md) oggetto che invia il comando di stampa.

*pInfo*<br/>
Un puntatore a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) oggetto che descrive il processo di stampa.

*bPrintAll*<br/>
Specifica se l'intero documento da stampare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="onprint"></a>  COleDocObjectItem

Questa funzione membro viene chiamata dal framework per stampare un documento.

```
static void OnPrint(
    CView* pCaller,
    CPrintInfo* pInfo,
    BOOL bPrintAll = TRUE);
```

### <a name="parameters"></a>Parametri

*pCaller*<br/>
Un puntatore a un oggetto CView che invia il comando di stampa.

*pInfo*<br/>
Un puntatore a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) oggetto che descrive il processo di stampa.

*bPrintAll*<br/>
Specifica se l'intero documento da stampare.

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
Identificatore del comando sottoposta a query.

*pdwStatus*<br/>
Puntatore al flag restituiti come risultato della query. Per un elenco di valori possibili, vedere [OLECMDF](/windows/desktop/api/docobj/ne-docobj-olecmdf).

*pCmdText*<br/>
Puntatore a un [OLECMDTEXT](/windows/desktop/api/docobj/ns-docobj-_tagolecmdtext) struttura in cui si desidera restituire le informazioni di nome e lo stato per un singolo comando. Può essere NULL per indicare che il chiamante non necessita di queste informazioni.

*pguidCmdGroup*<br/>
Identificatore univoco del gruppo di comandi; può essere NULL per specificare il gruppo standard.

### <a name="return-value"></a>Valore restituito

Per un elenco completo dei valori restituiti, vedere [IOleCommandTarget::QueryStatus](/windows/desktop/api/docobj/nf-docobj-iolecommandtarget-querystatus) nel SDK di Windows.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità dei [IOleCommandTarget::QueryStatus](/windows/desktop/api/docobj/nf-docobj-iolecommandtarget-querystatus) metodo, come descritto nel SDK di Windows.

##  <a name="release"></a>  COleDocObjectItem::Release

Rilascia la connessione a un elemento collegato oggetto OLE e lo chiude se era aperta. Non elimina definitivamente l'elemento client.

```
virtual void Release(OLECLOSE dwCloseOption = OLECLOSE_NOSAVE);
```

### <a name="parameters"></a>Parametri

*dwCloseOption*<br/>
Flag che specifica le condizioni dell'elemento OLE viene salvato quando tornerà allo stato caricato. Per un elenco di valori possibili, vedere [COleClientItem::Close](../../mfc/reference/coleclientitem-class.md#close).

### <a name="remarks"></a>Note

Non elimina definitivamente l'elemento client.

## <a name="see-also"></a>Vedere anche

[Esempio MFC MFCBIND](../../visual-cpp-samples.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)
