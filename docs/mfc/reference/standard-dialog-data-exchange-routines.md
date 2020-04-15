---
title: Routine DDX (Dialog Data Exchange) standard
ms.date: 11/04/2016
helpviewer_keywords:
- standard dialog, data exchange routines
ms.assetid: c6adb7f3-f9af-4cc5-a9ea-315c5b60ad1a
ms.openlocfilehash: 83d4a66cd3ec41008506b55f0b351fd9bcbc24b5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372926"
---
# <a name="standard-dialog-data-exchange-routines"></a>Routine DDX (Dialog Data Exchange) standard

In questo argomento vengono elencate le routine DDX (Standard Dialog Data Exchange) utilizzate per i controlli finestra di dialogo MFC comuni.

> [!NOTE]
> Le routine standard di scambio dei dati della finestra di dialogo sono definite nel file di intestazione afxdd_.h. Tuttavia, le applicazioni devono includere afxwin.h.However, applications should include afxwin.h.

### <a name="ddx-functions"></a>Funzioni DDX

|||
|-|-|
|[DDX_CBIndex](#ddx_cbindex)|Inizializza o recupera l'indice della selezione corrente di un controllo casella combinata.|
|[DDX_CBString](#ddx_cbstring)|Inizializza o recupera il contenuto corrente del campo di modifica di un controllo casella combinata.|
|[DDX_CBStringExact](#ddx_cbstringexact)|Inizializza o recupera il contenuto corrente del campo di modifica di un controllo casella combinata.|
|[DDX_Check](#ddx_check)|Inizializza o recupera lo stato corrente di un controllo casella di controllo.|
|[DDX_Control](#ddx_control)|Sottoclassi di un determinato controllo all'interno di una finestra di dialogo.|
|[DDX_DateTimeCtrl](#ddx_datetimectrl)|Inizializza o recupera i dati di data e/o ora di un controllo selezione data e ora.|
|[DDX_IPAddress](#ddx_ipaddress)|Inizializza o recupera il valore corrente di un controllo indirizzo IP.|
|[DDX_LBIndex](#ddx_lbindex)|Inizializza o recupera l'indice della selezione corrente di un controllo casella di riepilogo.|
|[DDX_LBString](#ddx_lbstring)|Inizializza o recupera la selezione corrente all'interno di un controllo casella di riepilogo.|
|[DDX_LBStringExact](#ddx_lbstringexact)|Inizializza o recupera la selezione corrente all'interno di un controllo casella di riepilogo.|
|[DDX_ManagedControl](#ddx_managedcontrol)|Crea un controllo .NET corrispondente all'ID di risorsa del controllo.|
|[DDX_MonthCalCtrl](#ddx_monthcalctrl)|Inizializza o recupera il valore corrente di un controllo calendario mensile.|
|[DDX_Radio](#ddx_radio)|Inizializza o recupera l'indice in base 0 del controllo radio attualmente controllato all'interno di un gruppo di controllo radio.|
|[DDX_Scroll](#ddx_scroll)|Inizializza o recupera la posizione corrente della casella di scorrimento di un controllo di scorrimento.|
|[DDX_Slider](#ddx_slider)|Inizializza o recupera la posizione corrente della casella di scorrimento di un controllo dispositivo di scorrimento.|
|[DDX_Text](#ddx_text)|Inizializza o recupera il valore corrente di un controllo di modifica.|

## <a name="ddx_cbindex"></a><a name="ddx_cbindex"></a>DDX_CBIndex

La `DDX_CBIndex` funzione gestisce il trasferimento di dati **int** tra un controllo casella combinata in una finestra di dialogo, una visualizzazione maschera o un oggetto visualizzazione controlli e un membro dati **int** della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_CBIndex(
    CDataExchange* pDX,
    int nIDC,
    int& index);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella combinata associato alla proprietà del controllo.

*Indice*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_CBIndex` viene chiamato, *index* viene impostato sull'indice della selezione della casella combinata corrente. Se non è selezionato alcun elemento, *index* è impostato su 0.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_cbstring"></a><a name="ddx_cbstring"></a>DDX_CBString

La `DDX_CBString` funzione gestisce `CString` il trasferimento di dati tra il controllo di modifica di un controllo `CString` casella combinata in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli e un membro dati della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_CBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella combinata associato alla proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_CBString` viene chiamato, *il valore* viene impostato sulla selezione della casella combinata corrente. Se non è selezionato alcun elemento, *value* viene impostato su una stringa di lunghezza zero.

> [!NOTE]
> Se la casella combinata è una casella di riepilogo a discesa, il valore scambiato è limitato a 255 caratteri.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_cbstringexact"></a><a name="ddx_cbstringexact"></a>DDX_CBStringExact

La `DDX_CBStringExact` funzione gestisce `CString` il trasferimento di dati tra il controllo di modifica di un controllo `CString` casella combinata in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli e un membro dati della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_CBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella combinata associato alla proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_CBStringExact` viene chiamato, *il valore* viene impostato sulla selezione della casella combinata corrente. Se non è selezionato alcun elemento, *value* viene impostato su una stringa di lunghezza zero.

> [!NOTE]
> Se la casella combinata è una casella di riepilogo a discesa, il valore scambiato è limitato a 255 caratteri.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_check"></a><a name="ddx_check"></a>DDX_Check

La `DDX_Check` funzione gestisce il trasferimento di dati **int** tra un controllo casella di controllo in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli e un membro dati **int** della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_Check(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella di controllo associato alla proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_Check` viene chiamato, *value* viene impostato sullo stato corrente del controllo casella di controllo. Per un elenco dei possibili valori di stato, vedere [BM_GETCHECK](/windows/win32/Controls/bm-getcheck) in Windows SDK.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_control"></a><a name="ddx_control"></a>DDX_Control

La `DDX_Control` funzione sottoclassi del controllo, specificato da *nIDC*, della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_Control(
    CDataExchange* pDX,
    int nIDC,
    CWnd& rControl);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md)

*nIDC*<br/>
ID di risorsa del controllo da sottoclassare.

*rControllo*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli correlato al controllo specificato.

### <a name="remarks"></a>Osservazioni

L'oggetto *pDX* viene fornito dal `DoDataExchange` framework quando viene chiamata la funzione. Pertanto, `DDX_Control` deve essere chiamato `DoDataExchange`solo all'interno dell'override di .

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_datetimectrl"></a><a name="ddx_datetimectrl"></a>DDX_DateTimeCtrl

La `DDX_DateTimeCtrl` funzione gestisce il trasferimento di dati di data e/o ora tra un controllo selezione data e ora ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) in una finestra di dialogo o un oggetto visualizzazione form e un [CTime](../../atl-mfc-shared/reference/ctime-class.md) o un membro dati [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) della finestra di dialogo o dell'oggetto visualizzazione form.

```cpp
void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,
    int nIDC,
    CTime& value);

void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,
    int nIDC,
    COleDateTime& value);

void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare questo oggetto.

*nIDC*<br/>
ID risorsa del controllo selezione data e ora associato alla variabile membro.

*Valore*<br/>
Nelle prime due versioni, riferimento `CTime` `COleDateTime` a una variabile membro o, a una finestra di dialogo, a una visualizzazione form o a un oggetto visualizzazione controlli con cui vengono scambiati i dati. Nella terza versione, un `CString` riferimento a un oggetto visualizzazione del controllo membro dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_DateTimeCtrl` viene chiamato, *value* viene impostato sullo stato corrente del controllo selezione data e ora oppure il controllo è impostato su *value*, a seconda della direzione dello scambio.

Nella terza versione `DDX_DateTimeCtrl` precedente, gestisce `CString` il trasferimento di dati tra un controllo data-ora e un membro dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) dell'oggetto visualizzazione controlli. La stringa viene formattata utilizzando le regole delle impostazioni locali correnti per la formattazione di date e ore.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_managedcontrol"></a><a name="ddx_managedcontrol"></a>DDX_ManagedControl

Crea un controllo .NET corrispondente all'ID di risorsa del controllo.

### <a name="syntax"></a>Sintassi

```cpp
template <typename T>
void DDX_ManagedControl(
   CDataExchange* pDX,
   int nIDC,
   CWinFormsControl<T>& control );
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange Class.](cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo associato alla proprietà del controllo.

*Controllo*<br/>
Un riferimento a un [CWinFormsControl classe](cwinformscontrol-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

`DDX_ManagedControl`chiama [CWinFormsControl::CreateManagedControl](cwinformscontrol-class.md#createmanagedcontrol) per creare un controllo corrispondente all'ID del controllo risorsa. Utilizzare `DDX_ManagedControl` per creare controlli da ID risorsa in [CDialog::OnInitDialog](cdialog-class.md#oninitdialog). Per lo scambio di dati, non è necessario utilizzare le funzioni DDX/DDV con i controlli Windows Form.

Per ulteriori informazioni, vedere [Procedura: eseguire l'associazione dati DDX/DDV con Windows Form](../../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h

## <a name="ddx_ipaddress"></a><a name="ddx_ipaddress"></a>DDX_IPAddress

La `DDX_IPAddress` funzione gestisce il trasferimento di dati tra un controllo indirizzo IP e un membro dati dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_IPAddress(
    CDataExchange* pDX,
    int nIDC,
    DWORD& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo Indirizzo IP associato alla proprietà del controllo.

*Valore*<br/>
Riferimento al DWORD contenente il valore a quattro campi del controllo indirizzo IP. I campi vengono compilati o letti come segue.

|Campo|Bit contenenti il valore del campo|
|-----------|-------------------------------------|
|3|Da 0 a 7|
|2|Da 8 a 15|
|1|Da 16 a 23|
|0|da 24 a 31|

Utilizzare il [IPM_GETADDRESS](/windows/win32/Controls/ipm-getaddress) Win32 per leggere il valore o [utilizzare IPM_SETADDRESS](/windows/win32/Controls/ipm-setaddress) per riempire il valore. Questi messaggi sono descritti in Windows SDK.

### <a name="remarks"></a>Osservazioni

Quando `DDX_IPAddress` viene chiamato, *value* viene letto dal controllo Indirizzo IP o *value* viene scritto nel controllo, a seconda della direzione dello scambio.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_lbindex"></a><a name="ddx_lbindex"></a>DDX_LBIndex

La `DDX_LBIndex` funzione gestisce il trasferimento di dati **int** tra un controllo casella di riepilogo in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli e un membro dati **int** della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_LBIndex(
    CDataExchange* pDX,
    int nIDC,
    int& index);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella di riepilogo associato alla proprietà del controllo.

*Indice*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_LBIndex` viene chiamato, *index* viene impostato sull'indice della selezione della casella di riepilogo corrente. Se non è selezionato alcun elemento, *index* è impostato su -1.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_lbstring"></a><a name="ddx_lbstring"></a>DDX_LBString

La `DDX_LBString` funzione gestisce `CString` il trasferimento dei dati tra un controllo casella di riepilogo `CString` in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controlli e un membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_LBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella di riepilogo associato alla proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_LBString` viene chiamato per trasferire dati in un controllo casella di riepilogo, viene selezionato il primo elemento nel controllo il cui *valore* di corrispondenza iniziale. (Per abbinare l'intero elemento anziché solo un prefisso, utilizzare [DDX_LBStringExact](#ddx_lbstringexact).) Se non sono presenti corrispondenze, non viene selezionato alcun elemento. La corrispondenza non fa distinzione tra maiuscole e minuscole.

Quando `DDX_LBString` viene chiamato per trasferire dati da un controllo casella di riepilogo, *value* viene impostato sulla selezione della casella di riepilogo corrente. Se non è selezionato alcun elemento, *value* viene impostato su una stringa di lunghezza zero.

> [!NOTE]
> Se la casella di riepilogo è una casella di riepilogo a discesa, il valore scambiato è limitato a 255 caratteri.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_lbstringexact"></a><a name="ddx_lbstringexact"></a>DDX_LBStringExact

La `DDX_CBStringExact` funzione gestisce `CString` il trasferimento di dati tra il controllo di modifica di un controllo `CString` casella di riepilogo in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli e un membro dati della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_LBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella di riepilogo associato alla proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_LBStringExact` viene chiamato per trasferire dati a un controllo casella di riepilogo, viene selezionato il primo elemento nel controllo che corrisponde al *valore.* (Per trovare una corrispondenza solo con un prefisso anziché l'intero elemento, utilizzare [DDX_LBString](#ddx_lbstring).) Se non sono presenti corrispondenze, non viene selezionato alcun elemento. La corrispondenza non fa distinzione tra maiuscole e minuscole.

Quando `DDX_CBStringExact` viene chiamato per trasferire dati da un controllo casella di riepilogo, *value* viene impostato sulla selezione della casella di riepilogo corrente. Se non è selezionato alcun elemento, *value* viene impostato su una stringa di lunghezza zero.

> [!NOTE]
> Se la casella di riepilogo è una casella di riepilogo a discesa, il valore scambiato è limitato a 255 caratteri.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_monthcalctrl"></a><a name="ddx_monthcalctrl"></a>DDX_MonthCalCtrl

La `DDX_MonthCalCtrl` funzione gestisce il trasferimento dei dati relativi alla data tra un controllo calendario mensile ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) in una finestra di dialogo, in una visualizzazione form o in un oggetto visualizzazione controlli e un [CTime](../../atl-mfc-shared/reference/ctime-class.md) o un membro dati [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_MonthCalCtrl(
    CDataExchange* pDX,
    int nIDC,
    CTime& value);

void AFXAPI DDX_MonthCalCtrl(
    CDataExchange* pDX,
    int nIDC,
    COleDateTime& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare questo oggetto.

*nIDC*<br/>
ID risorsa del controllo calendario mensile associato alla variabile membro.

*Valore*<br/>
Riferimento a `CTime` una `COleDateTime` o variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Il controllo gestisce solo un valore di data. I campi relativi all'ora nell'oggetto ora vengono impostati per riflettere l'ora di `CMonthCalCtrl::SetCurSel`creazione della finestra di controllo o qualsiasi ora impostata nel controllo con una chiamata a .

Quando `DDX_MonthCalCtrl` viene chiamato, *value* viene impostato sullo stato corrente del controllo calendario mensile.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_radio"></a><a name="ddx_radio"></a>DDX_Radio

La `DDX_Radio` funzione gestisce il trasferimento di dati **int** tra un gruppo di controlli radio in una finestra di dialogo, visualizzazione form o oggetto visualizzazione controlli e un membro dati **int** della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli. Il valore del membro dati **int** viene determinato in base al pulsante di opzione all'interno del gruppo selezionato.

```cpp
void AFXAPI DDX_Radio(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del primo controllo radio nel gruppo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_Radio` viene chiamato, *value* viene impostato sullo stato corrente del gruppo di controllo radio. Il valore viene impostato come indice in base 0 del controllo radio attualmente selezionato oppure -1 se non sono controllati controlli radio.

Ad esempio, nel caso in cui il primo pulsante di opzione nel gruppo sia selezionato (il pulsante con stile WS_GROUP) il valore del membro **int** è 0 e così via.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_scroll"></a><a name="ddx_scroll"></a>DDX_Scroll

La `DDX_Scroll` funzione gestisce il trasferimento di dati **int** tra un controllo barra di scorrimento in una finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo e un membro dati **int** della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_Scroll(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di risorsa del controllo barra di scorrimento associato alla proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_Scroll` viene chiamato, *value* viene impostato sulla posizione corrente del pollice del controllo. Per ulteriori informazioni sui valori associati alla posizione corrente del pollice del controllo, vedere [GetScrollPos](/windows/win32/api/winuser/nf-winuser-getscrollpos) in Windows SDK.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_slider"></a><a name="ddx_slider"></a>DDX_Slider

La `DDX_Slider` funzione gestisce il trasferimento di dati **int** tra un controllo dispositivo di scorrimento in una finestra di dialogo o in una visualizzazione form e un membro dati **int** della finestra di dialogo o dell'oggetto visualizzazione form.

```cpp
void AFXAPI DDX_Slider(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di risorsa del controllo dispositivo di scorrimento.

*Valore*<br/>
Riferimento al valore da scambiare. Questo parametro contiene o imposta la posizione corrente del dispositivo di scorrimento.

### <a name="remarks"></a>Osservazioni

Quando `DDX_Slider` viene chiamato, *value* viene impostato sulla posizione corrente del pollice del controllo o il valore riceve la posizione, a seconda della direzione dello scambio.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [Utilizzo di CSliderCtrl](../../mfc/using-csliderctrl.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddx_text"></a><a name="ddx_text"></a>DDX_Text

La `DDX_Text` funzione gestisce il trasferimento di dati **int**, `CString` **UINT**, **long**, DWORD , **float**o **double** tra un controllo di modifica in una finestra di dialogo, visualizzazione form o visualizzazione controlli e un membro dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    BYTE& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    short& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    int& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    UINT& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    long& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    DWORD& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    CString& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    float& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    double& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    COleCurrency& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    COleDateTime& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo di modifica nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controlli.

*Valore*<br/>
Riferimento a un membro dati nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controlli. Il tipo di dati di *value* dipende `DDX_Text` da quale delle versioni di overload di un utilizzo.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="see-also"></a>Vedere anche

[Routine di convalida dei dati della finestra di dialogo standard](standard-dialog-data-validation-routines.md)<br/>
[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[CWinFormsControl::CreateManagedControl](cwinformscontrol-class.md#createmanagedcontrol)<br/>
[CDialog::OnInitDialog](cdialog-class.md#oninitdialog)
