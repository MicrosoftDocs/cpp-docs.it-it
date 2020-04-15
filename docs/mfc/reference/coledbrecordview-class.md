---
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
ms.openlocfilehash: de9c602cb747ee3d4449df479530e55ce907cb8a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366110"
---
# <a name="coledbrecordview-class"></a>Classe COleDBRecordView

Visualizzazione che mostra i record del database nei controlli.

## <a name="syntax"></a>Sintassi

```
class COleDBRecordView : public CFormView
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[COleDBRecordView::COleDBRecordView](#coledbrecordview)|Costruisce un oggetto `COleDBRecordView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDBRecordView::OnGetRowset](#ongetrowset)|Restituisce un valore HRESULT standard.|
|[COleDBRecordView::OnMove (Visualizzazione COleDBRecordView::OnMove)](#onmove)|Aggiorna il record corrente (se dirty) nell'origine dati e quindi passa al record specificato (successivo, precedente, primo o ultimo).|

## <a name="remarks"></a>Osservazioni

La visualizzazione è una visualizzazione `CRowset` modulo collegata direttamente a un oggetto. La vista viene creata da una risorsa modello `CRowset` di finestra di dialogo e visualizza i campi dell'oggetto nei controlli del modello di finestra di dialogo. L'oggetto `COleDBRecordView` utilizza DDX (Dialog Data Exchange) `CRowset`e la funzionalità di navigazione incorporata in , per automatizzare lo spostamento dei dati tra i controlli del form e i campi del set di righe. `COleDBRecordView`fornisce inoltre un'implementazione predefinita per lo spostamento al primo, successivo, precedente o ultimo record e un'interfaccia per l'aggiornamento del record attualmente visualizzato.

È possibile utilizzare le `COleDbRecordView` funzioni DDX con per ottenere dati direttamente dal recordset del database e visualizzarli in un controllo finestra di dialogo. È necessario `DDX_*` utilizzare i `DDX_Text`metodi (ad esempio `DDX_FieldText`), `COleDbRecordView`non le `DDX_Field*` funzioni (ad esempio ) con . `DDX_FieldText``COleDbRecordView` perché `DDX_FieldText` accetta un argomento aggiuntivo di `CRecordset*` tipo `CRecordView`(per ) o `CDaoRecordset*` (per `CDaoRecordView`).

> [!NOTE]
> Se si utilizzano le classi DAO (Data Access Objects) anziché le classi del modello consumer OLE DB, utilizzare invece la classe [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md) Per ulteriori informazioni, vedere l'articolo [Panoramica: Programmazione di database](../../data/data-access-programming-mfc-atl.md).

`COleDBRecordView`tiene traccia della posizione dell'utente nel set di righe in modo che la visualizzazione dei record possa aggiornare l'interfaccia utente. Quando l'utente si sposta alla fine del set di righe, la visualizzazione di record disabilita gli oggetti dell'interfaccia utente, ad esempio voci di menu o pulsanti della barra degli strumenti, per spostarsi ulteriormente nella stessa direzione.

Per altre informazioni sulle classi di set di righe, vedere l'articolo [Utilizzo di modelli consumer OLE DB.](../../data/oledb/ole-db-consumer-templates-cpp.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

[CFormView](../../mfc/reference/cformview-class.md)

`COleDBRecordView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxoledb.h

## <a name="coledbrecordviewcoledbrecordview"></a><a name="coledbrecordview"></a>COleDBRecordView::COleDBRecordView

Costruisce un oggetto `COleDBRecordView`.

```
COleDBRecordView(LPCTSTR lpszTemplateName);
COleDBRecordView(UINT nIDTemplate);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName (nome di metodo)*<br/>
Contiene una stringa con terminazione null che è il nome di una risorsa modello di finestra di dialogo.

*NIDTemplate (modello)*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Quando si crea un oggetto `COleDBRecordView`di un tipo derivato da , richiamare uno dei costruttori per creare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo su cui si basa la visualizzazione. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o in base al relativo ID (passare un intero senza segno come argomento).

> [!NOTE]
> La classe derivata *deve* fornire il proprio costruttore. Nel costruttore richiamare `COleDBRecordView::COleDBRecordView`il costruttore , , con il nome della risorsa o l'ID come argomento.

## <a name="coledbrecordviewongetrowset"></a><a name="ongetrowset"></a>COleDBRecordView::OnGetRowset

Restituisce un handle per il **CRowset<>** oggetto associato alla visualizzazione di record.

```
virtual CRowset<>* OnGetRowset() = 0;
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

È necessario eseguire l'override di questa funzione membro per costruire o ottenere un oggetto set di righe e restituire un handle. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive un override predefinito per l'utente. L'implementazione predefinita di ClassWizard restituisce l'handle del set di righe archiviato nella visualizzazione di record, se presente. In caso contrario, costruisce un oggetto set di righe `Open` del tipo specificato con ClassWizard e chiama la relativa funzione membro per aprire la tabella o eseguire la query, quindi restituisce un handle all'oggetto.

> [!NOTE]
> Prima di MFC 7.0, `OnGetRowset` restituisce un puntatore a `CRowset`. Se si dispone `OnGetRowset`di codice che chiama , è necessario modificare il tipo restituito nella classe con templatized **CRowset<>**.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#38](../../mfc/codesnippet/cpp/coledbrecordview-class_1.cpp)]

Per ulteriori informazioni ed esempi, vedere l'articolo [Visualizzazioni di record: utilizzo di una visualizzazione Record](../../data/using-a-record-view-mfc-data-access.md).

## <a name="coledbrecordviewonmove"></a><a name="onmove"></a>COleDBRecordView::OnMove (Visualizzazione COleDBRecordView::OnMove)

Passa a un record diverso nel set di righe e visualizza i relativi campi nei controlli della visualizzazione di record.

```
virtual BOOL OnMove(UINT nIDMoveCommand);
```

### <a name="parameters"></a>Parametri

*nIDMoveCommand (comando ) :*<br/>
Uno dei seguenti valori standard dell'ID di comando:

- ID_RECORD_FIRST: consente di passare al primo record del recordset.

- ID_RECORD_LAST: consente di passare all'ultimo record del recordset.

- ID_RECORD_NEXT: consente di passare al record successivo del recordset.

- ID_RECORD_PREV: consente di passare al record precedente del recordset.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo spostamento ha esito positivo; in caso contrario 0 se la richiesta di spostamento è stata negata.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita `Move` chiama la `CRowset` funzione membro appropriata dell'oggetto associato alla visualizzazione di record.

Per impostazione predefinita, `OnMove` aggiorna il record corrente nell'origine dati se l'utente lo ha modificato nella visualizzazione del record.

La Creazione guidata applicazione crea una risorsa di menu con le voci di menu Primo record, Ultimo record, Record successivo e Record precedente. Se si seleziona l'opzione Barra degli strumenti ancorabile, la creazione guidata applicazione crea anche una barra degli strumenti con i pulsanti corrispondenti a questi comandi.

Se ci si sposta oltre l'ultimo record del recordset, la visualizzazione del record continua a visualizzare l'ultimo record. Se ci si sposta all'indietro oltre il primo record, la visualizzazione record continua a visualizzare il primo record.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
