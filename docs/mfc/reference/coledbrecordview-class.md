---
description: 'Altre informazioni su: Classe COleDBRecordView'
title: Classe COleDBRecordView
ms.date: 11/04/2016
f1_keywords:
- COleDBRecordView
- AFXOLEDB/COleDBRecordView
- AFXOLEDB/COleDBRecordView::COleDBRecordView
- AFXOLEDB/COleDBRecordView::OnGetRowset
- AFXOLEDB/COleDBRecordView::OnMove
helpviewer_keywords:
- COleDBRecordView [MFC], COleDBRecordView
- COleDBRecordView [MFC], OnGetRowset
- COleDBRecordView [MFC], OnMove
ms.assetid: 98612427-c4c9-4760-b7e1-85b17448add9
ms.openlocfilehash: bce03a482aff558ed6d22c7720ff74f304a9214f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227312"
---
# <a name="coledbrecordview-class"></a>Classe COleDBRecordView

Visualizzazione che mostra i record del database nei controlli.

## <a name="syntax"></a>Sintassi

```
class COleDBRecordView : public CFormView
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[COleDBRecordView:: COleDBRecordView](#coledbrecordview)|Costruisce un oggetto `COleDBRecordView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleDBRecordView:: OnGetRowset](#ongetrowset)|Restituisce un valore HRESULT standard.|
|[COleDBRecordView:: OnMove](#onmove)|Aggiorna il record corrente (se modificato) nell'origine dati e quindi passa al record specificato (avanti, precedente, primo o ultimo).|

## <a name="remarks"></a>Commenti

La visualizzazione è una visualizzazione form connessa direttamente a un `CRowset` oggetto. La vista viene creata da una risorsa modello di finestra di dialogo e Visualizza i campi dell' `CRowset` oggetto nei controlli del modello di finestra di dialogo. L' `COleDBRecordView` oggetto utilizza il DDX (Dialog Data Exchange) e la funzionalità di spostamento incorporata in `CRowset` per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del set di righe. `COleDBRecordView` fornisce inoltre un'implementazione predefinita per il passaggio al primo, successivo, precedente o ultimo record e un'interfaccia per l'aggiornamento del record attualmente visualizzato.

È possibile utilizzare le funzioni DDX con `COleDbRecordView` per ottenere i dati direttamente dal recordset del database e visualizzarli in un controllo finestra di dialogo. È necessario utilizzare i `DDX_*` metodi (ad esempio `DDX_Text` ), non le `DDX_Field*` funzioni (ad esempio `DDX_FieldText` ) con `COleDbRecordView` . `DDX_FieldText` non funzionerà con `COleDbRecordView` perché `DDX_FieldText` accetta un argomento aggiuntivo di tipo `CRecordset*` (per `CRecordView` ) o `CDaoRecordset*` (per `CDaoRecordView` ).

> [!NOTE]
> Se si utilizzano le classi DAO (Data Access Objects) anziché le classi del modello di consumer di OLE DB, utilizzare invece la classe [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) . Per ulteriori informazioni, vedere l'articolo [Cenni preliminari sulla programmazione di database](../../data/data-access-programming-mfc-atl.md).

`COleDBRecordView` tiene traccia della posizione dell'utente nel set di righe in modo che la visualizzazione dei record possa aggiornare l'interfaccia utente. Quando l'utente passa a una delle estremità del set di righe, la visualizzazione di record disabilita gli oggetti dell'interfaccia utente, ad esempio le voci di menu o i pulsanti della barra degli strumenti, per spostarsi più nella stessa direzione.

Per ulteriori informazioni sulle classi del set di righe, vedere l'articolo relativo all' [utilizzo dei modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

[CFormView](../../mfc/reference/cformview-class.md)

`COleDBRecordView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxoledb. h

## <a name="coledbrecordviewcoledbrecordview"></a><a name="coledbrecordview"></a> COleDBRecordView:: COleDBRecordView

Costruisce un oggetto `COleDBRecordView`.

```
COleDBRecordView(LPCTSTR lpszTemplateName);
COleDBRecordView(UINT nIDTemplate);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName*<br/>
Contiene una stringa a terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.

*nIDTemplate*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

### <a name="remarks"></a>Commenti

Quando si crea un oggetto di un tipo derivato da `COleDBRecordView` , richiamare uno dei costruttori per creare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo su cui è basata la vista. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o in base al relativo ID (passare un Unsigned Integer come argomento).

> [!NOTE]
> La classe derivata *deve* fornire il proprio costruttore. Nel costruttore, richiamare il costruttore, `COleDBRecordView::COleDBRecordView` , con il nome o l'ID della risorsa come argomento.

## <a name="coledbrecordviewongetrowset"></a><a name="ongetrowset"></a> COleDBRecordView:: OnGetRowset

Restituisce un handle per l'oggetto **CRowset<>** associato alla visualizzazione di record.

```
virtual CRowset<>* OnGetRowset() = 0;
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

È necessario eseguire l'override di questa funzione membro per costruire o ottenere un oggetto set di righe e restituire un handle. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive automaticamente una sostituzione. L'implementazione predefinita di ClassWizard restituisce l'handle del set di righe archiviato nella visualizzazione del record, se disponibile. In caso contrario, costruisce un oggetto set di righe del tipo specificato con ClassWizard e chiama la relativa `Open` funzione membro per aprire la tabella o eseguire la query, quindi restituisce un handle per l'oggetto.

> [!NOTE]
> In precedenza a MFC 7,0, `OnGetRowset` restituiva un puntatore a `CRowset` . Se si dispone di codice che chiama `OnGetRowset` , è necessario modificare il tipo restituito nella classe creato un modello **CRowset<>**.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#38](../../mfc/codesnippet/cpp/coledbrecordview-class_1.cpp)]

Per altre informazioni ed esempi, vedere l'articolo [visualizzazioni di record: uso di una visualizzazione di record](../../data/using-a-record-view-mfc-data-access.md).

## <a name="coledbrecordviewonmove"></a><a name="onmove"></a> COleDBRecordView:: OnMove

Passa a un record diverso nel set di righe e Visualizza i relativi campi nei controlli della visualizzazione di record.

```
virtual BOOL OnMove(UINT nIDMoveCommand);
```

### <a name="parameters"></a>Parametri

*nIDMoveCommand*<br/>
Uno dei valori di ID di comando standard seguenti:

- ID_RECORD_FIRST: consente di passare al primo record del recordset.

- ID_RECORD_LAST: consente di passare all'ultimo record del recordset.

- ID_RECORD_NEXT: consente di passare al record successivo nel recordset.

- ID_RECORD_PREV: consente di passare al record precedente nel recordset.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo spostamento ha avuto esito positivo; in caso contrario, 0 se la richiesta di spostamento è stata negata.

### <a name="remarks"></a>Commenti

L'implementazione predefinita chiama la `Move` funzione membro appropriata dell' `CRowset` oggetto associato alla visualizzazione di record.

Per impostazione predefinita, `OnMove` Aggiorna il record corrente nell'origine dati se l'utente lo ha modificato nella visualizzazione dei record.

La creazione guidata applicazione crea una risorsa di menu con le voci di menu primo record, ultimo record, record successivo e record precedente. Se si seleziona l'opzione barra degli strumenti ancorabile, la creazione guidata applicazione crea anche una barra degli strumenti con i pulsanti corrispondenti a questi comandi.

Se si passa oltre l'ultimo record del recordset, la visualizzazione dei record continua a visualizzare l'ultimo record. Se si sposta indietro oltre il primo record, la visualizzazione dei record continuerà a visualizzare il primo record.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
