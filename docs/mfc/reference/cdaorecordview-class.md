---
description: 'Altre informazioni su: classe CDaoRecordView'
title: Classe CDaoRecordView
ms.date: 11/04/2016
f1_keywords:
- CDaoRecordView
- AFXDAO/CDaoRecordView
- AFXDAO/CDaoRecordView::CDaoRecordView
- AFXDAO/CDaoRecordView::IsOnFirstRecord
- AFXDAO/CDaoRecordView::IsOnLastRecord
- AFXDAO/CDaoRecordView::OnGetRecordset
- AFXDAO/CDaoRecordView::OnMove
helpviewer_keywords:
- CDaoRecordView [MFC], CDaoRecordView
- CDaoRecordView [MFC], IsOnFirstRecord
- CDaoRecordView [MFC], IsOnLastRecord
- CDaoRecordView [MFC], OnGetRecordset
- CDaoRecordView [MFC], OnMove
ms.assetid: 5aa7d0e2-bd05-413e-b216-80c404ce18ac
ms.openlocfilehash: cb91f6d3890806ac357a1f662905845598df1680
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248177"
---
# <a name="cdaorecordview-class"></a>Classe CDaoRecordView

Visualizzazione che mostra i record del database nei controlli.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CDaoRecordView : public CFormView
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[CDaoRecordView:: CDaoRecordView](#cdaorecordview)|Costruisce un oggetto `CDaoRecordView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDaoRecordView:: IsOnFirstRecord](#isonfirstrecord)|Restituisce un valore diverso da zero se il record corrente è il primo record nel recordset associato.|
|[CDaoRecordView:: IsOnLastRecord](#isonlastrecord)|Restituisce un valore diverso da zero se il record corrente è l'ultimo record del recordset associato.|
|[CDaoRecordView:: OnGetRecordset della visualizzazione](#ongetrecordset)|Restituisce un puntatore a un oggetto di una classe derivata da `CDaoRecordset` . ClassWizard esegue l'override di questa funzione per l'utente e crea il recordset, se necessario.|
|[CDaoRecordView:: OnMove](#onmove)|Se il record corrente è stato modificato, lo aggiorna sull'origine dati, quindi passa al record specificato (avanti, precedente, primo o ultimo).|

## <a name="remarks"></a>Commenti

La visualizzazione è una visualizzazione form connessa direttamente a un `CDaoRecordset` oggetto. La vista viene creata da una risorsa modello di finestra di dialogo e Visualizza i campi dell' `CDaoRecordset` oggetto nei controlli del modello di finestra di dialogo. L' `CDaoRecordView` oggetto utilizza Dialog Data Exchange (DDX) e DAO Record Field Exchange (DFX) per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del recordset. `CDaoRecordView` fornisce inoltre un'implementazione predefinita per il passaggio al primo, successivo, precedente o ultimo record e un'interfaccia per l'aggiornamento del record attualmente visualizzato.

> [!NOTE]
> Le classi di database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. le classi DAO offrono in genere funzionalità superiori perché usano il motore di database di Microsoft Jet.

Il modo più comune per creare la visualizzazione di record è la creazione guidata applicazione. La creazione guidata applicazione crea sia la classe di visualizzazione di record che la classe recordset associata come parte dell'applicazione di base dello scheletro.

Se è sufficiente un solo modulo, l'approccio della creazione guidata applicazione è più semplice. ClassWizard consente di decidere di usare una visualizzazione di record in un secondo momento nel processo di sviluppo. Se non si crea la classe di visualizzazione di record con la creazione guidata applicazione, è possibile crearla in un secondo momento con ClassWizard. L'uso di ClassWizard per creare una visualizzazione di record e un recordset separatamente e quindi connetterli è l'approccio più flessibile, in quanto offre un maggiore controllo per la denominazione della classe recordset e del relativo. H/. File CPP. Questo approccio consente inoltre di avere più visualizzazioni di record nella stessa classe recordset.

Per semplificare agli utenti finali lo spostamento da record a record nella visualizzazione di record, la creazione guidata applicazione crea le risorse del menu (e facoltativamente della barra degli strumenti) per passare al record primo, successivo, precedente o ultimo. Se si crea una classe di visualizzazione di record con ClassWizard, è necessario creare queste risorse manualmente con gli editor di menu e bitmap.

Per informazioni sull'implementazione predefinita per lo sviluppo da record a record, vedere `IsOnFirstRecord` e `IsOnLastRecord` e l'articolo [uso di una visualizzazione di record](../../data/using-a-record-view-mfc-data-access.md), applicabile sia a che a `CRecordView` `CDaoRecordView` .

`CDaoRecordView` tiene traccia della posizione dell'utente nel recordset, in modo che la visualizzazione dei record possa aggiornare l'interfaccia utente. Quando l'utente passa a una delle estremità del recordset, la visualizzazione di record disabilita gli oggetti dell'interfaccia utente, ad esempio le voci di menu o i pulsanti della barra degli strumenti, per spostarsi più nella stessa direzione.

Per ulteriori informazioni sulla dichiarazione e sull'utilizzo delle classi recordset e di visualizzazione dei record, vedere la sezione relativa alla progettazione e alla creazione di una visualizzazione di record nell'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md). Per altre informazioni sul funzionamento delle visualizzazioni di record e su come usarle, vedere l'articolo [uso di una visualizzazione di record](../../data/using-a-record-view-mfc-data-access.md). Tutti gli articoli menzionati in precedenza si applicano sia a `CRecordView` che a `CDaoRecordView` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

[CFormView](../../mfc/reference/cformview-class.md)

`CDaoRecordView`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="cdaorecordviewcdaorecordview"></a><a name="cdaorecordview"></a> CDaoRecordView:: CDaoRecordView

Quando si crea un oggetto di un tipo derivato da `CDaoRecordView` , chiamare una delle due forme del costruttore per inizializzare l'oggetto visualizzazione e identificare la risorsa della finestra di dialogo su cui è basata la visualizzazione.

```
explicit CDaoRecordView(LPCTSTR lpszTemplateName);
explicit CDaoRecordView(UINT nIDTemplate);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName*<br/>
Contiene una stringa a terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.

*nIDTemplate*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

### <a name="remarks"></a>Commenti

È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o in base al relativo ID (passare un Unsigned Integer come argomento). È consigliabile usare un ID di risorsa.

> [!NOTE]
> La classe derivata deve fornire il proprio costruttore. Nel costruttore della classe derivata chiamare il costruttore `CDaoRecordView::CDaoRecordView` con il nome o l'ID della risorsa come argomento.

`CDaoRecordView::OnInitialUpdate` chiama `CWnd::UpdateData` , che chiama `CWnd::DoDataExchange` . Questa chiamata iniziale a `DoDataExchange` connette `CDaoRecordView` i controlli (indirettamente) ai `CDaoRecordset` membri dati del campo creati da ClassWizard. Questi membri dati non possono essere usati fino a quando non si chiama la funzione membro della classe base `CFormView::OnInitialUpdate` .

> [!NOTE]
> Se si usa ClassWizard, la procedura guidata definisce un **`enum`** valore `CDaoRecordView::IDD` nella dichiarazione di classe e lo usa nell'elenco di inizializzazione dei membri per il costruttore.

[!code-cpp[NVC_MFCDatabase#35](../../mfc/codesnippet/cpp/cdaorecordview-class_1.cpp)]

## <a name="cdaorecordviewisonfirstrecord"></a><a name="isonfirstrecord"></a> CDaoRecordView:: IsOnFirstRecord

Chiamare questa funzione membro per determinare se il record corrente è il primo record nell'oggetto recordset associato a questa visualizzazione di record.

```
BOOL IsOnFirstRecord();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il record corrente è il primo record nel recordset. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione è utile per la scrittura di implementazioni personalizzate dei gestori degli aggiornamenti dei comandi predefiniti scritti da ClassWizard.

Se l'utente passa al primo record, il Framework Disabilita gli oggetti dell'interfaccia utente (ad esempio, le voci di menu o i pulsanti della barra degli strumenti) per passare al record primo o precedente.

## <a name="cdaorecordviewisonlastrecord"></a><a name="isonlastrecord"></a> CDaoRecordView:: IsOnLastRecord

Chiamare questa funzione membro per determinare se il record corrente è l'ultimo record nell'oggetto recordset associato a questa visualizzazione di record.

```
BOOL IsOnLastRecord();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il record corrente è l'ultimo record nel recordset. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione è utile per la scrittura di implementazioni personalizzate dei gestori degli aggiornamenti dei comandi predefiniti che ClassWizard scrive per supportare un'interfaccia utente per lo sviluppo da record a record.

> [!CAUTION]
> Il risultato di questa funzione è affidabile ad eccezione del fatto che la vista potrebbe non essere in grado di rilevare la fine del recordset fino a quando l'utente non è stato spostato oltre. È possibile che l'utente debba superare l'ultimo record prima che la visualizzazione dei record possa indicare che è necessario disabilitare gli oggetti dell'interfaccia utente per passare al record successivo o ultimo. Se l'utente si sposta oltre l'ultimo record e quindi si sposta di nuovo sull'ultimo record (o prima di esso), la visualizzazione dei record può tenere traccia della posizione dell'utente nel recordset e disabilitare correttamente gli oggetti dell'interfaccia utente.

## <a name="cdaorecordviewongetrecordset"></a><a name="ongetrecordset"></a> CDaoRecordView:: OnGetRecordset della visualizzazione

Restituisce un puntatore all' `CDaoRecordset` oggetto derivato da associato alla visualizzazione di record.

```
virtual CDaoRecordset* OnGetRecordset() = 0;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un `CDaoRecordset` oggetto derivato da se l'oggetto è stato creato correttamente; in caso contrario, un puntatore null.

### <a name="remarks"></a>Commenti

È necessario eseguire l'override di questa funzione membro per costruire o ottenere un oggetto recordset e restituirvi un puntatore. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive automaticamente una sostituzione. L'implementazione predefinita di ClassWizard restituisce il puntatore del recordset archiviato nella visualizzazione del record, se disponibile. In caso contrario, costruisce un oggetto recordset del tipo specificato con ClassWizard e chiama la relativa `Open` funzione membro per aprire la tabella o eseguire la query, quindi restituisce un puntatore all'oggetto.

Per altre informazioni ed esempi, vedere l'articolo [visualizzazioni di record: uso di una visualizzazione di record](../../data/using-a-record-view-mfc-data-access.md).

## <a name="cdaorecordviewonmove"></a><a name="onmove"></a> CDaoRecordView:: OnMove

Chiamare questa funzione membro per spostarsi in un record diverso del recordset e visualizzare i relativi campi nei controlli della visualizzazione di record.

```
virtual BOOL OnMove(UINT nIDMoveCommand);
```

### <a name="parameters"></a>Parametri

*nIDMoveCommand*<br/>
Uno dei valori di ID di comando standard seguenti:

- ID_RECORD_FIRST spostarsi sul primo record del recordset.

- ID_RECORD_LAST passare all'ultimo record del recordset.

- ID_RECORD_NEXT passare al record successivo nel recordset.

- ID_RECORD_PREV passare al record precedente nel recordset.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo spostamento ha avuto esito positivo; in caso contrario, 0 se la richiesta di spostamento è stata negata.

### <a name="remarks"></a>Commenti

L'implementazione predefinita chiama la funzione membro di spostamento appropriata dell' `CDaoRecordset` oggetto associato alla visualizzazione di record.

Per impostazione predefinita, `OnMove` Aggiorna il record corrente nell'origine dati se l'utente lo ha modificato nella visualizzazione dei record.

La creazione guidata applicazione crea una risorsa di menu con le voci di menu primo record, ultimo record, record successivo e record precedente. Se si seleziona l'opzione iniziale della barra degli strumenti, la creazione guidata applicazione crea anche una barra degli strumenti con i pulsanti corrispondenti a questi comandi.

Se si passa oltre l'ultimo record del recordset, la visualizzazione dei record continua a visualizzare l'ultimo record. Se si sposta indietro oltre il primo record, la visualizzazione dei record continuerà a visualizzare il primo record.

> [!CAUTION]
> La chiamata a `OnMove` genera un'eccezione se il recordset non contiene record. Chiamare la funzione del gestore di aggiornamento dell'interfaccia utente appropriata, ovvero,, `OnUpdateRecordFirst` `OnUpdateRecordLast` o, `OnUpdateRecordNext` `OnUpdateRecordPrev` prima dell'operazione di spostamento corrispondente per determinare se il recordset dispone di record.

## <a name="see-also"></a>Vedi anche

[Classe CFormView](../../mfc/reference/cformview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)
