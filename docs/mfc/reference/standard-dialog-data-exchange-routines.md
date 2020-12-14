---
description: 'Altre informazioni su: routine di scambio di dati della finestra di dialogo standard'
title: Routine DDX (Dialog Data Exchange) standard
ms.date: 11/04/2016
helpviewer_keywords:
- standard dialog, data exchange routines
ms.assetid: c6adb7f3-f9af-4cc5-a9ea-315c5b60ad1a
ms.openlocfilehash: f1d5cb0726168b90e0ba2a7891ce0ffa55b73f10
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218862"
---
# <a name="standard-dialog-data-exchange-routines"></a>Routine DDX (Dialog Data Exchange) standard

In questo argomento vengono elencate le routine DDX (Dialog Data Exchange) standard utilizzate per i controlli della finestra di dialogo MFC comuni.

> [!NOTE]
> Le routine di scambio di dati della finestra di dialogo standard vengono definite nel file di intestazione afxdd_. h. Tuttavia, le applicazioni devono includere AFXWIN. h.

### <a name="ddx-functions"></a>Funzioni DDX

|Nome|Description|
|-|-|
|[DDX_CBIndex](#ddx_cbindex)|Inizializza o recupera l'indice della selezione corrente di un controllo casella combinata.|
|[DDX_CBString](#ddx_cbstring)|Inizializza o Recupera il contenuto corrente del campo di modifica di un controllo casella combinata.|
|[DDX_CBStringExact](#ddx_cbstringexact)|Inizializza o Recupera il contenuto corrente del campo di modifica di un controllo casella combinata.|
|[DDX_Check](#ddx_check)|Inizializza o recupera lo stato corrente di un controllo casella di controllo.|
|[DDX_Control](#ddx_control)|Sottoclassi di un controllo specificato all'interno di una finestra di dialogo.|
|[DDX_DateTimeCtrl](#ddx_datetimectrl)|Inizializza o recupera i dati di data e/o ora di un controllo selezione data e ora.|
|[DDX_IPAddress](#ddx_ipaddress)|Inizializza o Recupera il valore corrente di un controllo dell'indirizzo IP.|
|[DDX_LBIndex](#ddx_lbindex)|Inizializza o recupera l'indice della selezione corrente di un controllo casella di riepilogo.|
|[DDX_LBString](#ddx_lbstring)|Inizializza o recupera la selezione corrente in un controllo casella di riepilogo.|
|[DDX_LBStringExact](#ddx_lbstringexact)|Inizializza o recupera la selezione corrente in un controllo casella di riepilogo.|
|[DDX_ManagedControl](#ddx_managedcontrol)|Crea un controllo .NET che corrisponde all'ID risorsa del controllo.|
|[DDX_MonthCalCtrl](#ddx_monthcalctrl)|Inizializza o Recupera il valore corrente di un controllo di calendario mensile.|
|[DDX_Radio](#ddx_radio)|Inizializza o recupera l'indice in base zero del controllo radio attualmente selezionato all'interno di un gruppo di controllo radio.|
|[DDX_Scroll](#ddx_scroll)|Inizializza o recupera la posizione corrente del cursore del controllo di scorrimento.|
|[DDX_Slider](#ddx_slider)|Inizializza o recupera la posizione corrente del cursore del controllo Slider.|
|[DDX_Text](#ddx_text)|Inizializza o Recupera il valore corrente di un controllo di modifica.|

## <a name="ddx_cbindex"></a><a name="ddx_cbindex"></a> DDX_CBIndex

La `DDX_CBIndex` funzione gestisce il trasferimento dei **`int`** dati tra un controllo casella combinata in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un **`int`** membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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

*index*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_CBIndex` viene chiamato il metodo, *index* viene impostato sull'indice della selezione della casella combinata corrente. Se non è selezionato alcun elemento, *index* viene impostato su 0.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_cbstring"></a><a name="ddx_cbstring"></a> DDX_CBString

La `DDX_CBString` funzione gestisce il trasferimento dei `CString` dati tra il controllo di modifica di un controllo casella combinata in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un `CString` membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_CBString` viene chiamato il metodo, il *valore* viene impostato sulla selezione della casella combinata corrente. Se non è selezionato alcun elemento, il *valore* viene impostato su una stringa di lunghezza zero.

> [!NOTE]
> Se la casella combinata è un elenco a discesa, il valore scambiato è limitato a 255 caratteri.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_cbstringexact"></a><a name="ddx_cbstringexact"></a> DDX_CBStringExact

La `DDX_CBStringExact` funzione gestisce il trasferimento dei `CString` dati tra il controllo di modifica di un controllo casella combinata in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un `CString` membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_CBStringExact` viene chiamato il metodo, il *valore* viene impostato sulla selezione della casella combinata corrente. Se non è selezionato alcun elemento, il *valore* viene impostato su una stringa di lunghezza zero.

> [!NOTE]
> Se la casella combinata è un elenco a discesa, il valore scambiato è limitato a 255 caratteri.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_check"></a><a name="ddx_check"></a> DDX_Check

La `DDX_Check` funzione gestisce il trasferimento dei **`int`** dati tra un controllo casella di controllo in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un **`int`** membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_Check` viene chiamato il metodo, il *valore* viene impostato sullo stato corrente del controllo casella di controllo. Per un elenco dei valori di stato possibili, vedere [BM_GETCHECK](/windows/win32/Controls/bm-getcheck) nel Windows SDK.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_control"></a><a name="ddx_control"></a> DDX_Control

La `DDX_Control` funzione crea una sottoclasse del controllo, specificato da *nIDC*, della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

```cpp
void AFXAPI DDX_Control(
    CDataExchange* pDX,
    int nIDC,
    CWnd& rControl);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*nIDC*<br/>
ID risorsa del controllo da sottoclassare.

*rControl*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo correlato al controllo specificato.

### <a name="remarks"></a>Commenti

L'oggetto *PDX* viene fornito dal framework quando `DoDataExchange` viene chiamata la funzione. Pertanto, `DDX_Control` deve essere chiamato solo all'interno dell'override di `DoDataExchange` .

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_datetimectrl"></a><a name="ddx_datetimectrl"></a> DDX_DateTimeCtrl

La `DDX_DateTimeCtrl` funzione gestisce il trasferimento dei dati di data e/o ora tra un controllo selezione data e ora ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) in una finestra di dialogo o un oggetto visualizzazione form e un membro dati [CTime](../../atl-mfc-shared/reference/ctime-class.md) o [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) della finestra di dialogo o dell'oggetto visualizzazione del form.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare questo oggetto.

*nIDC*<br/>
ID risorsa del controllo selezione data e ora associato alla variabile membro.

*value*<br/>
Nelle prime due versioni, un riferimento a una `CTime` variabile membro o, una finestra di `COleDateTime` dialogo, una visualizzazione form o un oggetto visualizzazione controllo con cui vengono scambiati i dati. Nella terza versione, un riferimento a un `CString` oggetto visualizzazione controllo del membro dati.

### <a name="remarks"></a>Commenti

Quando `DDX_DateTimeCtrl` viene chiamato il metodo, *value* viene impostato sullo stato corrente del controllo selezione data e ora oppure il controllo è impostato su *value*, a seconda della direzione dello scambio.

Nella terza versione precedente, `DDX_DateTimeCtrl` gestisce il trasferimento dei `CString` dati tra un controllo data e ora e un membro dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) dell'oggetto visualizzazione controlli. La stringa viene formattata usando le regole locali correnti per la formattazione di date e ore.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_managedcontrol"></a><a name="ddx_managedcontrol"></a> DDX_ManagedControl

Crea un controllo .NET che corrisponde all'ID risorsa del controllo.

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
Puntatore a un oggetto della [classe CDataExchange](cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo associato alla proprietà del controllo.

*control*<br/>
Riferimento a un oggetto della [classe CWinFormsControl](cwinformscontrol-class.md) .

### <a name="remarks"></a>Commenti

`DDX_ManagedControl` chiama [CWinFormsControl:: CreateManagedControl](cwinformscontrol-class.md#createmanagedcontrol) per creare un controllo che corrisponde all'ID di controllo della risorsa. Usare `DDX_ManagedControl` per creare controlli dagli ID risorsa in [CDialog:: OnInitDialog](cdialog-class.md#oninitdialog). Per lo scambio di dati, non è necessario utilizzare le funzioni DDX/DDV con controlli Windows Forms.

Per altre informazioni, vedere [procedura: eseguire il data binding DDX/DDV con Windows Forms](../../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h

## <a name="ddx_ipaddress"></a><a name="ddx_ipaddress"></a> DDX_IPAddress

La `DDX_IPAddress` funzione gestisce il trasferimento dei dati tra un controllo indirizzo IP e un membro dati dell'oggetto visualizzazione controlli.

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
ID risorsa del controllo indirizzo IP associato alla proprietà del controllo.

*value*<br/>
Riferimento a DWORD che contiene il valore a quattro campi del controllo dell'indirizzo IP. I campi vengono riempiti o letti come indicato di seguito.

|Campo|Bit contenente il valore del campo|
|-----------|-------------------------------------|
|3|da 0 a 7|
|2|da 8 a 15|
|1|da 16 a 23|
|0|da 24 a 31|

Utilizzare il [IPM_GETADDRESS](/windows/win32/Controls/ipm-getaddress) Win32 per leggere il valore oppure utilizzare [IPM_SETADDRESS](/windows/win32/Controls/ipm-setaddress) per inserire il valore. Questi messaggi vengono descritti nella Windows SDK.

### <a name="remarks"></a>Commenti

Quando `DDX_IPAddress` viene chiamato il metodo, il *valore* viene letto dal controllo degli indirizzi IP oppure il *valore* viene scritto nel controllo, a seconda della direzione dello scambio.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_lbindex"></a><a name="ddx_lbindex"></a> DDX_LBIndex

La `DDX_LBIndex` funzione gestisce il trasferimento dei **`int`** dati tra un controllo casella di riepilogo in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un **`int`** membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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

*index*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_LBIndex` viene chiamato il metodo, *index* viene impostato sull'indice della selezione della casella di riepilogo corrente. Se non è selezionato alcun elemento, *index* viene impostato su-1.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_lbstring"></a><a name="ddx_lbstring"></a> DDX_LBString

La `DDX_LBString` funzione gestisce il trasferimento dei `CString` dati tra un controllo casella di riepilogo in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un `CString` membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_LBString` viene chiamato per trasferire i dati a un controllo casella di riepilogo, viene selezionato il primo elemento del controllo il cui *valore* iniziale corrisponde a. (Per trovare la corrispondenza con l'intero elemento anziché con un solo prefisso, usare [DDX_LBStringExact](#ddx_lbstringexact)). Se non sono presenti corrispondenze, non è selezionato alcun elemento. La corrispondenza non fa distinzione tra maiuscole e minuscole.

Quando `DDX_LBString` viene chiamato per trasferire i dati da un controllo casella di riepilogo, il *valore* viene impostato sulla selezione della casella di riepilogo corrente. Se non è selezionato alcun elemento, il *valore* viene impostato su una stringa di lunghezza zero.

> [!NOTE]
> Se la casella di riepilogo è un elenco a discesa, il valore scambiato è limitato a 255 caratteri.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_lbstringexact"></a><a name="ddx_lbstringexact"></a> DDX_LBStringExact

La `DDX_CBStringExact` funzione gestisce il trasferimento dei `CString` dati tra il controllo di modifica di un controllo casella di riepilogo in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un `CString` membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_LBStringExact` viene chiamato per trasferire i dati a un controllo casella di riepilogo, viene selezionato il primo elemento nel controllo che corrisponde al *valore* . (Per trovare la corrispondenza con un solo prefisso anziché l'intero elemento, usare [DDX_LBString](#ddx_lbstring)). Se non sono presenti corrispondenze, non è selezionato alcun elemento. La corrispondenza non fa distinzione tra maiuscole e minuscole.

Quando `DDX_CBStringExact` viene chiamato per trasferire i dati da un controllo casella di riepilogo, il *valore* viene impostato sulla selezione della casella di riepilogo corrente. Se non è selezionato alcun elemento, il *valore* viene impostato su una stringa di lunghezza zero.

> [!NOTE]
> Se la casella di riepilogo è un elenco a discesa, il valore scambiato è limitato a 255 caratteri.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_monthcalctrl"></a><a name="ddx_monthcalctrl"></a> DDX_MonthCalCtrl

La `DDX_MonthCalCtrl` funzione gestisce il trasferimento dei dati relativi alla data tra un controllo calendario mensile ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un membro dati [CTime](../../atl-mfc-shared/reference/ctime-class.md) o [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare questo oggetto.

*nIDC*<br/>
ID risorsa del controllo calendario mensile associato alla variabile membro.

*value*<br/>
Riferimento a una `CTime` `COleDateTime` variabile membro o della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

> [!NOTE]
> Il controllo gestisce solo un valore di data. I campi di tempo nell'oggetto ora sono impostati in modo da riflettere l'ora di creazione della finestra del controllo o qualsiasi tempo impostato nel controllo con una chiamata a `CMonthCalCtrl::SetCurSel` .

Quando `DDX_MonthCalCtrl` viene chiamato il metodo, il *valore* viene impostato sullo stato corrente del controllo calendario mensile.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_radio"></a><a name="ddx_radio"></a> DDX_Radio

La `DDX_Radio` funzione gestisce il trasferimento dei **`int`** dati tra un gruppo di controlli radio in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un **`int`** membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo. Il valore del **`int`** membro dati viene determinato in base al pulsante di opzione all'interno del gruppo selezionato.

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

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_Radio` viene chiamato il metodo, il *valore* viene impostato sullo stato corrente del gruppo di controllo radio. Il valore viene impostato come un indice in base 0 del controllo radio che è attualmente selezionato oppure-1 se non è selezionato alcun controllo radio.

Se, ad esempio, il primo pulsante di opzione del gruppo è selezionato (il pulsante con stile WS_GROUP), il valore del **`int`** membro è 0 e così via.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_scroll"></a><a name="ddx_scroll"></a> DDX_Scroll

La `DDX_Scroll` funzione gestisce il trasferimento dei **`int`** dati tra un controllo barra di scorrimento in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un **`int`** membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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
ID risorsa del controllo barra di scorrimento associato alla proprietà del controllo.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Commenti

Quando `DDX_Scroll` viene chiamato il metodo, il *valore* viene impostato sulla posizione corrente del cursore del controllo. Per ulteriori informazioni sui valori associati alla posizione corrente del cursore del controllo, vedere [GetScrollPos](/windows/win32/api/winuser/nf-winuser-getscrollpos) nel Windows SDK.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_slider"></a><a name="ddx_slider"></a> DDX_Slider

La `DDX_Slider` funzione gestisce il trasferimento dei **`int`** dati tra un controllo dispositivo di scorrimento in una finestra di dialogo o in una visualizzazione form e un **`int`** membro dati della finestra di dialogo o dell'oggetto visualizzazione del form.

```cpp
void AFXAPI DDX_Slider(
    CDataExchange* pDX,
    int nIDC,
    int& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo dispositivo di scorrimento.

*value*<br/>
Riferimento al valore da scambiare. Questo parametro contiene o imposta la posizione corrente del controllo dispositivo di scorrimento.

### <a name="remarks"></a>Commenti

Quando `DDX_Slider` viene chiamato il metodo, il *valore* viene impostato sulla posizione corrente del cursore del controllo oppure il valore riceve la posizione, a seconda della direzione dello scambio.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [uso di CSliderCtrl](../../mfc/using-csliderctrl.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddx_text"></a><a name="ddx_text"></a> DDX_Text

La `DDX_Text` funzione gestisce il trasferimento dei **`int`** dati, **uint**,, **`long`** DWORD, `CString` , **`float`** o **`double`** tra un controllo di modifica in una finestra di dialogo, una visualizzazione form o una visualizzazione controllo e un membro dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo di modifica nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*value*<br/>
Riferimento a un membro dati nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo. Il tipo di dati del *valore* dipende da quale delle versioni di overload di `DDX_Text` si utilizza.

### <a name="remarks"></a>Commenti

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="see-also"></a>Vedi anche

[Routine di convalida dei dati della finestra di dialogo standard](standard-dialog-data-validation-routines.md)<br/>
[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[CWinFormsControl:: CreateManagedControl](cwinformscontrol-class.md#createmanagedcontrol)<br/>
[CDialog:: OnInitDialog](cdialog-class.md#oninitdialog)
