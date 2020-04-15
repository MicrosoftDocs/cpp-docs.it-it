---
title: Classe CRecordView
ms.date: 11/04/2016
f1_keywords:
- CRecordView
- AFXDB/CRecordView
- AFXDB/CRecordView::CRecordView
- AFXDB/CRecordView::IsOnFirstRecord
- AFXDB/CRecordView::IsOnLastRecord
- AFXDB/CRecordView::OnGetRecordset
- AFXDB/CRecordView::OnMove
helpviewer_keywords:
- CRecordView [MFC], CRecordView
- CRecordView [MFC], IsOnFirstRecord
- CRecordView [MFC], IsOnLastRecord
- CRecordView [MFC], OnGetRecordset
- CRecordView [MFC], OnMove
- CRecordView [MFC], OnMove
ms.assetid: 9b4b0897-bd50-4d48-a0b4-f3323f5ccc55
ms.openlocfilehash: b706a80f91a3c952d80da13f453a807c775b9405
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368347"
---
# <a name="crecordview-class"></a>Classe CRecordView

Visualizzazione che mostra i record del database nei controlli.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CRecordView : public CFormView
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CRecordView::CRecordView](#crecordview)|Costruisce un oggetto `CRecordView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRecordView::IsOnFirstRecord](#isonfirstrecord)|Restituisce diverso da zero se il record corrente è il primo record nel recordset associato.|
|[CRecordView::IsOnLastRecord](#isonlastrecord)|Restituisce diverso da zero se il record corrente è l'ultimo record nel recordset associato.|
|[CRecordView::OnGetRecordset](#ongetrecordset)|Restituisce un puntatore a un `CRecordset`oggetto di una classe derivata da . ClassWizard esegue automaticamente l'override di questa funzione e crea il recordset, se necessario.|
|[CRecordView::OnMove](#onmove)||

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CRecordView::OnMove](#onmove)|Se il record corrente è stato modificato, lo aggiorna nell'origine dati, quindi passa al record specificato (successivo, precedente, primo o ultimo).|

## <a name="remarks"></a>Osservazioni

La visualizzazione è una visualizzazione `CRecordset` modulo collegata direttamente a un oggetto. La vista viene creata da una risorsa modello `CRecordset` di finestra di dialogo e visualizza i campi dell'oggetto nei controlli del modello di finestra di dialogo. L'oggetto `CRecordView` utilizza DDX (Dialog Data Exchange) e RFX (Record Field Exchange) per automatizzare lo spostamento dei dati tra i controlli del form e i campi del recordset. `CRecordView`fornisce inoltre un'implementazione predefinita per lo spostamento al primo, successivo, precedente o ultimo record e un'interfaccia per l'aggiornamento del record attualmente visualizzato.

> [!NOTE]
> Se si utilizzano le classi DAO (Data Access Objects) anziché le classi ODBC (Open Database Connectivity), utilizzare invece la classe [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md) Per ulteriori informazioni, vedere l'articolo [Panoramica: Programmazione di database](../../data/data-access-programming-mfc-atl.md).

Il modo più comune per creare la visualizzazione di record è con la creazione guidata applicazione. La creazione guidata applicazione crea sia la classe di visualizzazione record che la classe recordset associata come parte dell'applicazione di inizio dello scheletro. Se non si crea la classe di visualizzazione record con la creazione guidata applicazione, è possibile crearla in un secondo momento con ClassWizard.If you don't create the record view class with the Application Wizard, you can create it later with ClassWizard. Se è sufficiente un singolo form, l'approccio della creazione guidata applicazione è più semplice. ClassWizard consente di decidere di utilizzare una visualizzazione record più avanti nel processo di sviluppo. L'utilizzo di ClassWizard per creare separatamente una visualizzazione di record e un recordset e quindi connetterli è l'approccio più flessibile perché offre un maggiore controllo nella denominazione della classe recordset e della relativa estensione . H/. file CPP. Questo approccio consente inoltre di avere più visualizzazioni di record nella stessa classe recordset.

Per semplificare agli utenti finali lo spostamento da un record all'altro nella visualizzazione record, la creazione guidata applicazione crea risorse di menu (e facoltativamente della barra degli strumenti) per passare al primo, successivo, precedente o ultimo record. Se si crea una classe di visualizzazione record con ClassWizard, è necessario creare queste risorse manualmente con gli editor di menu e bitmap.

Per informazioni sull'implementazione predefinita per lo `IsOnFirstRecord` `IsOnLastRecord` spostamento da un record all'altro, vedere e l'articolo [Utilizzo di una visualizzazione Record](../../data/using-a-record-view-mfc-data-access.md).

`CRecordView`tiene traccia della posizione dell'utente nel recordset in modo che la visualizzazione dei record possa aggiornare l'interfaccia utente. Quando l'utente si sposta alla fine del recordset, la visualizzazione di record disabilita gli oggetti dell'interfaccia utente, ad esempio voci di menu o pulsanti della barra degli strumenti, per spostarsi ulteriormente nella stessa direzione.

Per ulteriori informazioni sulla dichiarazione e l'utilizzo della visualizzazione di record e delle classi recordset, vedere "Progettazione e creazione di una visualizzazione record" nell'articolo [Visualizzazioni di](../../data/record-views-mfc-data-access.md)record . Per ulteriori informazioni sul funzionamento delle visualizzazioni di record e sull'utilizzo, vedere l'articolo [Utilizzo di una visualizzazione Record](../../data/using-a-record-view-mfc-data-access.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

[CFormView](../../mfc/reference/cformview-class.md)

`CRecordView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="crecordviewcrecordview"></a><a name="crecordview"></a>CRecordView::CRecordView

Quando si crea un oggetto `CRecordView`di un tipo derivato da , chiamare uno dei form del costruttore per inizializzare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo su cui si basa la visualizzazione.

```
explicit CRecordView(LPCTSTR lpszTemplateName);
explicit CRecordView(UINT nIDTemplate);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName (nome di metodo)*<br/>
Contiene una stringa con terminazione null che è il nome di una risorsa modello di finestra di dialogo.

*NIDTemplate (modello)*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

### <a name="remarks"></a>Osservazioni

È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o in base al relativo ID (passare un intero senza segno come argomento). L'uso di un ID risorsa è consigliato.

> [!NOTE]
> La classe derivata *deve* fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CRecordView::CRecordView` con il nome della risorsa o l'ID come argomento, come illustrato nell'esempio seguente.

`CRecordView::OnInitialUpdate`chiamate `UpdateData`, `DoDataExchange`che chiama . Questa chiamata `DoDataExchange` iniziale `CRecordView` per connettere `CRecordset` i controlli (indirettamente) ai membri dati di campo creati da ClassWizard.This initial call to connects controls (indirectly) to field data members created by ClassWizard. Questi membri dati non possono essere utilizzati fino a dopo aver chiamato la funzione membro della classe `CFormView::OnInitialUpdate` base.

> [!NOTE]
> Se si utilizza ClassWizard, la procedura `CRecordView::IDD`guidata definisce un valore **di enumerazione** , lo specifica nella dichiarazione di classe e lo utilizza nell'elenco di inizializzazione dei membri per il costruttore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#32](../../mfc/codesnippet/cpp/crecordview-class_1.cpp)]

## <a name="crecordviewisonfirstrecord"></a><a name="isonfirstrecord"></a>CRecordView::IsOnFirstRecord

Chiamare questa funzione membro per determinare se il record corrente è il primo record nell'oggetto recordset associato a questa visualizzazione di record.

```
BOOL IsOnFirstRecord();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il record corrente è il primo record del recordset; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione è utile per scrivere le proprie implementazioni di gestori di aggiornamento dei comandi predefiniti scritti da ClassWizard.This function is useful for writing your own implementations of default command update handlers written by ClassWizard.

Se l'utente passa al primo record, il framework disabilita tutti gli oggetti dell'interfaccia utente disponibili per lo spostamento al primo o al record precedente.

## <a name="crecordviewisonlastrecord"></a><a name="isonlastrecord"></a>CRecordView::IsOnLastRecord

Chiamare questa funzione membro per determinare se il record corrente è l'ultimo record nell'oggetto recordset associato a questa visualizzazione di record.

```
BOOL IsOnLastRecord();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il record corrente è l'ultimo record del recordset; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione è utile per scrivere implementazioni personalizzate dei gestori di aggiornamento dei comandi predefiniti scritti da ClassWizard per supportare un'interfaccia utente per lo spostamento da un record all'altro.

> [!CAUTION]
> Il risultato di questa funzione è affidabile, ad eccezione del fatto che la visualizzazione non è in grado di rilevare la fine del recordset fino a quando l'utente non lo ha spostato oltre. L'utente deve spostarsi oltre l'ultimo record prima che la visualizzazione di record può indicare che deve disabilitare tutti gli oggetti dell'interfaccia utente per lo spostamento al record successivo o ultimo. Se l'utente si sposta oltre l'ultimo record e quindi torna all'ultimo record (o prima di esso), la visualizzazione di record può tenere traccia della posizione dell'utente nel recordset e disabilitare correttamente gli oggetti dell'interfaccia utente. `IsOnLastRecord`è inoltre inaffidabile dopo una `OnRecordLast`chiamata alla funzione di `CRecordset::MoveLast`implementazione , che gestisce il comando ID_RECORD_LAST, o .

## <a name="crecordviewongetrecordset"></a><a name="ongetrecordset"></a>CRecordView::OnGetRecordset

Restituisce un `CRecordset`puntatore all'oggetto derivato associato alla visualizzazione di record.

```
virtual CRecordset* OnGetRecordset() = 0;
```

### <a name="return-value"></a>Valore restituito

Puntatore a `CRecordset`un oggetto derivato se l'oggetto è stato creato correttamente; in caso contrario, un puntatore NULL.

### <a name="remarks"></a>Osservazioni

È necessario eseguire l'override di questa funzione membro per costruire o ottenere un oggetto recordset e restituire un puntatore a esso. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive un override predefinito per l'utente. L'implementazione predefinita di ClassWizard restituisce il puntatore del recordset memorizzato nella visualizzazione dei record, se presente. In caso contrario, costruisce un oggetto recordset del tipo `Open` specificato con ClassWizard e chiama la relativa funzione membro per aprire la tabella o eseguire la query, quindi restituisce un puntatore all'oggetto.

Per ulteriori informazioni ed esempi, vedere l'articolo [Visualizzazioni di record: utilizzo di una visualizzazione Record](../../data/using-a-record-view-mfc-data-access.md).

## <a name="crecordviewonmove"></a><a name="onmove"></a>CRecordView::OnMove

Chiamare questa funzione membro per spostarsi su un record diverso nel recordset e visualizzare i relativi campi nei controlli della visualizzazione di record.

```
virtual BOOL OnMove(UINT nIDMoveCommand);
```

### <a name="parameters"></a>Parametri

*nIDMoveCommand (comando ) :*<br/>
Uno dei seguenti valori standard dell'ID di comando:

- ID_RECORD_FIRST Passare al primo record del recordset.

- ID_RECORD_LAST Passare all'ultimo record del recordset.

- ID_RECORD_NEXT Passare al record successivo nel recordset.

- ID_RECORD_PREV Passare al record precedente del recordset.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo spostamento ha esito positivo; in caso contrario 0 se la richiesta di spostamento è stata negata.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita `Move` chiama la `CRecordset` funzione membro appropriata dell'oggetto associato alla visualizzazione di record.

Per impostazione predefinita, `OnMove` aggiorna il record corrente nell'origine dati se l'utente lo ha modificato nella visualizzazione del record.

La Creazione guidata applicazione crea una risorsa di menu con le voci di menu Primo record, Ultimo record, Record successivo e Record precedente. Se si seleziona l'opzione Barra degli strumenti ancorabile, la Creazione guidata applicazione crea anche una barra degli strumenti con i pulsanti corrispondenti a questi comandi.

Se ci si sposta oltre l'ultimo record del recordset, la visualizzazione del record continua a visualizzare l'ultimo record. Se ci si sposta all'indietro oltre il primo record, la visualizzazione record continua a visualizzare il primo record.

> [!CAUTION]
> La `OnMove` chiamata genera un'eccezione se il recordset non contiene record. Chiamare la funzione del gestore `OnUpdateRecordNext`di `OnUpdateRecordPrev` aggiornamento dell'interfaccia utente appropriata, `OnUpdateRecordFirst`ovvero , `OnUpdateRecordLast`, o , prima dell'operazione di spostamento corrispondente per determinare se il recordset contiene record.

## <a name="see-also"></a>Vedere anche

[Classe CFormView](../../mfc/reference/cformview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)
