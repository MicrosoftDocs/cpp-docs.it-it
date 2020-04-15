---
title: Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView
ms.date: 09/17/2019
f1_keywords:
- AFXDAO/DDX_FieldCBIndex
- AFXDAO/DDX_FieldCBString
- AFXDAO/DDX_FieldCBStringExact
- AFXDAO/DDX_FieldCheck
- AFXDAO/DDX_FieldLBIndex
- AFXDAO/DDX_FieldLBString
- AFXDAO/DDX_FieldLBStringExact
- AFXDAO/DDX_FieldRadio
- AFXDAO/DDX_FieldScroll
- AFXDAO/DDX_FieldText
helpviewer_keywords:
- DDX_Field functions [MFC]
- ODBC [MFC], dialog data exchange (DDX) support
- DDX (dialog data exchange) [MFC], database support
- DDX (dialog data exchange) [MFC], functions
- databases [MFC], dialog data exchange (DDX) support
- DAO [MFC], dialog data exchange (DDX) support
ms.assetid: 0d8cde38-3a2c-4100-9589-ac80a7b1ce91
ms.openlocfilehash: 3128b1ba459cb017d1cdb2321bc55d865aa4f8b9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365785"
---
# <a name="dialog-data-exchange-functions-for-crecordview-and-cdaorecordview"></a>Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView

In questo argomento vengono elencate le funzioni DDX_Field utilizzate per lo scambio di dati tra un [CRecordset](../../mfc/reference/crecordset-class.md) e un modulo [CRecordView](../../mfc/reference/crecordview-class.md) o un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e un [modulo CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md) DAO viene utilizzato con i database di Access ed è supportato tramite Office 2013. DAO 3.6 è la versione finale ed è considerata obsoleta.

> [!NOTE]
> DDX_Field funzioni sono come le funzioni DDX in quanto si scambiano dati con i controlli in un form. A differenza di DDX, tuttavia, scambiano dati con i campi dell'oggetto recordset associato della visualizzazione anziché con i campi della visualizzazione di record stessa. Per ulteriori informazioni, `CRecordView` `CDaoRecordView`vedere classi e .

### <a name="ddx_field-functions"></a>Funzioni DDX_Field

|||
|-|-|
|[DDX_FieldCBIndex](#ddx_fieldcbindex)|Trasferisce dati integer tra un membro dati di campo del recordset e l'indice della selezione corrente in una casella combinata in un [cRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md).|
|[DDX_FieldCBString](#ddx_fieldcbstring)|Trasferisce i `CString` dati tra un membro dati di campo `CRecordView` `CDaoRecordView`del recordset e il controllo di modifica di una casella combinata in un oggetto o . Quando si spostano i dati dal recordset al controllo , questa funzione seleziona l'elemento nella casella combinata che inizia con i caratteri nella stringa specificata.|
|[DDX_FieldCBStringExact](#ddx_fieldcbstringexact)|Trasferisce i `CString` dati tra un membro dati di campo `CRecordView` `CDaoRecordView`del recordset e il controllo di modifica di una casella combinata in un oggetto o . Quando si spostano i dati dal recordset al controllo , questa funzione seleziona l'elemento nella casella combinata che corrisponde esattamente alla stringa specificata.|
|[DDX_FieldCheck](#ddx_fieldcheck)|Trasferisce i dati booleani tra un membro `CRecordView` `CDaoRecordView`dati di campo del recordset e una casella di controllo in un oggetto o .|
|[DDX_FieldLBIndex](#ddx_fieldlbindex)|Trasferisce i dati integer tra un membro dati del campo recordset `CRecordView` `CDaoRecordView`e l'indice della selezione corrente in una casella di riepilogo in un oggetto o .|
|[DDX_FieldLBString](#ddx_fieldlbstring)|Gestisce il trasferimento di dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) tra un controllo casella di riepilogo e i membri dati di campo di un recordset. Quando si spostano i dati dal recordset al controllo , questa funzione seleziona l'elemento nella casella di riepilogo che inizia con i caratteri nella stringa specificata.|
|[DDX_FieldLBStringExact](#ddx_fieldlbstringexact)|Gestisce il `CString` trasferimento di dati tra un controllo casella di riepilogo e i membri dati di campo di un recordset. Quando si spostano i dati dal recordset al controllo , questa funzione seleziona il primo elemento che corrisponde esattamente alla stringa specificata.|
|[DDX_FieldRadio](#ddx_fieldradio)|Trasferisce dati interi tra un membro dati di `CRecordView` `CDaoRecordView`campo del recordset e un gruppo di pulsanti di opzione in un oggetto o .|
|[DDX_FieldScroll](#ddx_fieldscroll)|Imposta o ottiene la posizione di scorrimento `CRecordView` `CDaoRecordView`di un controllo barra di scorrimento in un oggetto o . Chiamare dalla funzione [DoFieldExchange.](../../mfc/reference/cdaorecordset-class.md#dofieldexchange)|
|[DDX_FieldSlider](#ddx_fieldslider)|Sincronizza la posizione di scorrimento di un controllo `int` dispositivo di scorrimento in una visualizzazione di record e di un membro dati di campo di un recordset. |
|[DDX_FieldText](#ddx_fieldtext)|Le versioni di overload `int`sono disponibili per il `DWORD`trasferimento di dati , **UINT**, **long**, , [, CString](../../atl-mfc-shared/reference/cstringt-class.md), **float**, **double** `CRecordView` , `CDaoRecordView` **short**, [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)e [COleCurrency](../../mfc/reference/colecurrency-class.md) tra un membro dati del campo recordset e una casella di modifica in un oggetto o .|

## <a name="ddx_fieldcbindex"></a><a name="ddx_fieldcbindex"></a>DDX_FieldCBIndex

La `DDX_FieldCBIndex` funzione sincronizza l'indice dell'elemento selezionato nel controllo casella di riepilogo `int` di un controllo casella combinata in una visualizzazione di record e un membro dati di campo di un recordset associato alla visualizzazione di record.

```cpp
void AFXAPI DDX_FieldCBIndex(
    CDataExchange* pDX,
    int nIDC,
    int& index,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldCBIndex(
    CDataExchange* pDX,
    int nIDC,
    int& index,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md)

*Indice*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando si spostano i dati dal recordset al controllo , questa funzione imposta la selezione nel controllo in base al valore specificato in *index*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, MFC imposta il valore dell'indice su 0. In un trasferimento dal controllo al recordset, se il controllo è vuoto o se non è selezionato alcun elemento, il campo del recordset è impostato su 0.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field. L'esempio potrebbe `DDX_FieldCBIndex`essere simile per .

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="ddx_fieldcbstring"></a><a name="ddx_fieldcbstring"></a>DDX_FieldCBString

La `DDX_FieldCBString` funzione gestisce il trasferimento dei dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) tra il controllo di `CString` modifica di un controllo casella combinata in una visualizzazione di record e un membro dati di campo di un recordset associato alla visualizzazione di record.

```cpp
void AFXAPI DDX_FieldCBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldCBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md)

*Valore*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando si spostano i dati dal recordset al controllo , questa funzione imposta la selezione corrente nella casella combinata sulla prima riga che inizia con i caratteri della stringa specificata in *Value*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, qualsiasi selezione viene rimossa dalla casella combinata e il controllo di modifica della casella combinata è impostato su vuoto. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset è impostato su Null se il campo lo consente.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field. Nell'esempio è `DDX_FieldCBString`inclusa una chiamata a .

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="ddx_fieldcbstringexact"></a><a name="ddx_fieldcbstringexact"></a>DDX_FieldCBStringExact

La `DDX_FieldCBStringExact` funzione gestisce il trasferimento dei dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) tra il controllo di `CString` modifica di un controllo casella combinata in una visualizzazione di record e un membro dati di campo di un recordset associato alla visualizzazione di record.

```cpp
void AFXAPI DDX_FieldCBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldCBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md)

*Valore*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando si spostano i dati dal recordset al controllo , questa funzione imposta la selezione corrente nella casella combinata sulla prima riga che corrisponde esattamente alla stringa specificata in *value*. In un trasferimento dal recordset al controllo, se il campo del recordset è NULL, qualsiasi selezione viene rimossa dalla casella combinata e la casella di modifica della casella combinata è impostata su vuoto. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset è impostato su NULL.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field. Le `DDX_FieldCBStringExact` chiamate a sarebbero simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="ddx_fieldcheck"></a><a name="ddx_fieldcheck"></a>DDX_FieldCheck

La `DDX_FieldCheck` funzione gestisce il trasferimento di dati **int** tra un controllo casella di controllo in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli e un membro dati **int** della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_FieldCheck(
    CDataExchange* pDX,
    int nIDC,
    int& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldCheck(
    CDataExchange* pDX,
    int nIDC,
    int& value,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella di controllo associato alla proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono scambiati i dati.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando `DDX_FieldCheck` viene chiamato, *value* viene impostato sullo stato corrente del controllo casella di controllo oppure lo stato del controllo è impostato su *value*, a seconda della direzione di trasferimento.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="ddx_fieldlbindex"></a><a name="ddx_fieldlbindex"></a>DDX_FieldLBIndex

La `DDX_FieldLBIndex` funzione sincronizza l'indice dell'elemento selezionato in un controllo casella di riepilogo in una visualizzazione di record e un membro dati di campo **int** di un recordset associato alla visualizzazione di record.

```cpp
void AFXAPI DDX_FieldLBIndex(
    CDataExchange* pDX,
    int nIDC,
    int& index,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldLBIndex(
    CDataExchange* pDX,
    int nIDC,
    int& index,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md)

*Indice*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando si spostano i dati dal recordset al controllo , questa funzione imposta la selezione nel controllo in base al valore specificato in *index*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, MFC imposta il valore dell'indice su 0. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset è impostato su 0.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="ddx_fieldlbstring"></a><a name="ddx_fieldlbstring"></a>DDX_FieldLBString

`DDX_FieldLBString` consente di copiare la selezione corrente di un controllo casella di riepilogo in una visualizzazione di record in un membro dati del campo [CString](../../atl-mfc-shared/reference/cstringt-class.md) di un recordset associato alla visualizzazione dei record.

```cpp
void AFXAPI DDX_FieldLBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldLBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md)

*Valore*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Nella direzione inversa, questa funzione imposta la selezione corrente nella casella di riepilogo sulla prima riga che inizia con i caratteri nella stringa specificata da *value*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, qualsiasi selezione viene rimossa dalla casella di riepilogo. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset è impostato su Null.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field. Le `DDX_FieldLBString` chiamate a sarebbero simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="ddx_fieldlbstringexact"></a><a name="ddx_fieldlbstringexact"></a>DDX_FieldLBStringExact

La `DDX_FieldLBStringExact` funzione copia la selezione corrente di un controllo casella di riepilogo in una visualizzazione record in un membro dati di campo [CString](../../atl-mfc-shared/reference/cstringt-class.md) di un recordset associato alla visualizzazione di record.

```cpp
void AFXAPI DDX_FieldLBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldLBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md)

*Valore*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Nella direzione inversa, questa funzione imposta la selezione corrente nella casella di riepilogo sulla prima riga che corrisponde esattamente alla stringa specificata in *value*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, qualsiasi selezione viene rimossa dalla casella di riepilogo. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset è impostato su Null.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field. Le `DDX_FieldLBStringExact` chiamate a sarebbero simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="ddx_fieldradio"></a><a name="ddx_fieldradio"></a>DDX_FieldRadio

La `DDX_FieldRadio` funzione associa una variabile membro **int** in base zero del recordset di una visualizzazione di record al pulsante di opzione attualmente selezionato in un gruppo di pulsanti di opzione nella visualizzazione di record.

```cpp
void AFXAPI DDX_FieldRadio(
    CDataExchange* pDX,
    int nIDC,
    int& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldRadio(
    CDataExchange* pDX,
    int nIDC,
    int& value,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID del primo in un gruppo (con stile WS_GROUP) di controlli pulsante di opzione adiacenti nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.

*Valore*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Durante il trasferimento dal campo del recordset alla visualizzazione, questa funzione attiva *l'ennesimo* pulsante di opzione (in base zero) e disattiva gli altri pulsanti. Nella direzione inversa, questa funzione imposta il campo del recordset sul numero ordinale del pulsante di opzione attualmente attivato (selezionato). In un trasferimento dal recordset al controllo, se il campo del recordset è Null, non è selezionato alcun pulsante. In un trasferimento dal controllo al recordset, se non è selezionato alcun controllo, il campo del recordset è impostato su Null se il campo lo consente.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field. Le `DDX_FieldRadio` chiamate a sarebbero simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="ddx_fieldscroll"></a><a name="ddx_fieldscroll"></a>DDX_FieldScroll

La `DDX_FieldScroll` funzione sincronizza la posizione di scorrimento di un controllo barra di scorrimento in una visualizzazione di record e di un membro dati di campo **int** di un recordset associato alla visualizzazione di record (o con qualsiasi variabile integer a cui si sceglie di mapparlo).

```cpp
void AFXAPI DDX_FieldScroll(
    CDataExchange* pDX,
    int nIDC,
    int& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldScroll(
    CDataExchange* pDX,
    int nIDC,
    int& value,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID del primo in un gruppo (con stile WS_GROUP) di controlli pulsante di opzione adiacenti nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.

*Valore*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando si spostano i dati dal recordset al controllo , questa funzione imposta la posizione di scorrimento del controllo barra di scorrimento sul valore specificato in *value*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, il controllo barra di scorrimento è impostato su 0. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il valore del campo del recordset è 0.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field. Le `DDX_FieldScroll` chiamate a sarebbero simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="ddx_fieldslider"></a><a name="ddx_fieldslider"></a>DDX_FieldSlider

La `DDX_FieldSlider` funzione sincronizza la posizione di pollice di un controllo dispositivo di scorrimento in una visualizzazione di record e un membro dati di campo **int** di un recordset associato alla visualizzazione di record (o con qualsiasi variabile integer a cui si sceglie di mapparlo).

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI DDX_FieldSlider(
    CDataExchange* pDX,
    int nIDC,
    int& value,
    CRecordset* pRecordset );

void AFXAPI DDX_FieldSlider(
   CDataExchange* pDX,
   int nIDC,
   int& value,
   CDaoRecordset* pRecordset );
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di risorsa del controllo dispositivo di scorrimento.

*Valore*<br/>
Riferimento al valore da scambiare. Questo parametro contiene o verrà utilizzato per impostare la posizione corrente del cursore del dispositivo di scorrimento.

*pRecordset*<br/>
Puntatore `CRecordset` `CDaoRecordset` all'oggetto o all'associato con cui vengono scambiati i dati.

### <a name="remarks"></a>Osservazioni

Quando si spostano i dati dal recordset al dispositivo di scorrimento, questa funzione imposta la posizione del dispositivo di scorrimento sul valore specificato nel *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, la posizione del controllo dispositivo di scorrimento è impostata su 0. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il valore del campo del recordset è 0.

`DDX_FieldSlider`non scambia informazioni sull'intervallo con controlli dispositivo di scorrimento in grado di impostare un intervallo anziché semplicemente una posizione.

Utilizzare il primo override della funzione se si utilizzano le classi basate su ODBC. Utilizzare la seconda sostituzione con le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni `CRecordView` su `CDaoRecordView` DDX e sui campi, vedere [Visualizzazioni record](../../data/record-views-mfc-data-access.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [Utilizzo di CSliderCtrl](../using-csliderctrl.md).

### <a name="example"></a>Esempio

Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio generale di DDX_Field. Le `DDX_FieldSlider` chiamate a sarebbero simili.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="ddx_fieldtext"></a><a name="ddx_fieldtext"></a>DDX_FieldText

La `DDX_FieldText` funzione gestisce il trasferimento dei dati **int**, **short**, **long**, DWORD, [CString](../../atl-mfc-shared/reference/cstringt-class.md), **float**, **double**, **BOOL**o **BYTE** tra un controllo casella di modifica e i membri dati di campo di un recordset.

```cpp
void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    BYTE& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    int& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    UINT& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    long& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    DWORD& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    float& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    double& value,
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    short& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    BOOL& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    BYTE& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    long& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    DWORD& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    CString& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    float& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    double& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    COleDateTime& value,
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,
    int nIDC,
    COleCurrency& value,
    CDaoRecordset* pRecordset);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView.](../../mfc/reference/cdaorecordview-class.md)

*Valore*<br/>
Riferimento a un membro dati `CRecordset` di `CDaoRecordset` campo nell'oggetto o nell'oggetto associato. Il tipo di dati di value dipende `DDX_FieldText` da quale delle versioni di overload di un utilizzo.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati. Questo puntatore consente di `DDX_FieldText` rilevare e impostare valori Null.

### <a name="remarks"></a>Osservazioni

Per gli oggetti [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), `DDX_FieldText` gestisce anche il trasferimento dei valori [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) e [COleCurrency](../../mfc/reference/colecurrency-class.md). Un controllo casella di modifica vuoto indica un valore Null.An empty edit box control indicates a Null value. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, la casella di modifica è impostata su vuoto. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset è impostato su Null.

Utilizzare le versioni con [CRecordset](../../mfc/reference/crecordset-class.md) parametri se si utilizzano le classi basate su ODBC. Utilizzare le versioni con [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) parametri se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

La `DoDataExchange` funzione seguente per un [CRecordView](../../mfc/reference/crecordview-class.md) contiene `DDX_FieldText` `IDC_COURSELIST` chiamate di funzione per tre tipi di dati: è una casella combinata; gli altri due controlli sono caselle di modifica. Per la programmazione DAO, il *m_pSet* parametro è un puntatore a un [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

[!code-cpp[NVC_MFCDatabase#43](../../mfc/codesnippet/cpp/dialog-data-exchange-functions-for-crecordview-and-cdaorecordview_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)
