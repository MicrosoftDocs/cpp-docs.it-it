---
description: 'Altre informazioni su: funzioni di scambio di dati della finestra di dialogo per CRecordView e CDaoRecordView'
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
ms.openlocfilehash: 9b149c3cdc05bf63f69b94bbcaf084a84ec42a84
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220032"
---
# <a name="dialog-data-exchange-functions-for-crecordview-and-cdaorecordview"></a>Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView

In questo argomento vengono elencate le funzioni di DDX_Field utilizzate per scambiare dati tra un modulo [CRecordset](../../mfc/reference/crecordset-class.md) e un form [CRecordView](../../mfc/reference/crecordview-class.md) o un modulo [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) . DAO viene usato con i database di Access ed è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

> [!NOTE]
> DDX_Field funzioni sono analoghe alle funzioni DDX in quanto scambiano dati con controlli in un form. Tuttavia, a differenza di DDX, i dati vengono scambiati con i campi dell'oggetto recordset associato alla visualizzazione anziché con i campi della visualizzazione di record. Per ulteriori informazioni, vedere classi `CRecordView` e `CDaoRecordView` .

### <a name="ddx_field-functions"></a>Funzioni DDX_Field

|Nome|Description|
|-|-|
|[DDX_FieldCBIndex](#ddx_fieldcbindex)|Trasferisce dati di tipo integer tra un membro dati di un campo recordset e l'indice della selezione corrente in una casella combinata in un [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md).|
|[DDX_FieldCBString](#ddx_fieldcbstring)|Trasferisce i `CString` dati tra un membro dati del campo recordset e il controllo di modifica di una casella combinata in un oggetto `CRecordView` o `CDaoRecordView` . Quando si trasferiscono dati dal recordset al controllo, questa funzione seleziona l'elemento nella casella combinata che inizia con i caratteri nella stringa specificata.|
|[DDX_FieldCBStringExact](#ddx_fieldcbstringexact)|Trasferisce i `CString` dati tra un membro dati del campo recordset e il controllo di modifica di una casella combinata in un oggetto `CRecordView` o `CDaoRecordView` . Quando si trasferiscono dati dal recordset al controllo, questa funzione seleziona l'elemento nella casella combinata che corrisponde esattamente alla stringa specificata.|
|[DDX_FieldCheck](#ddx_fieldcheck)|Trasferisce i dati booleani tra un membro dati del campo recordset e una casella di controllo in un oggetto `CRecordView` o `CDaoRecordView` .|
|[DDX_FieldLBIndex](#ddx_fieldlbindex)|Trasferisce dati di tipo integer tra un membro dati di un campo recordset e l'indice della selezione corrente in una casella di riepilogo in un oggetto `CRecordView` o `CDaoRecordView` .|
|[DDX_FieldLBString](#ddx_fieldlbstring)|Gestisce il trasferimento dei dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) tra un controllo casella di riepilogo e i membri dati del campo di un recordset. Quando si trasferiscono dati dal recordset al controllo, questa funzione seleziona l'elemento nella casella di riepilogo che inizia con i caratteri nella stringa specificata.|
|[DDX_FieldLBStringExact](#ddx_fieldlbstringexact)|Gestisce il trasferimento dei `CString` dati tra un controllo casella di riepilogo e i membri dati del campo di un recordset. Quando si trasferiscono dati dal recordset al controllo, questa funzione seleziona il primo elemento che corrisponde esattamente alla stringa specificata.|
|[DDX_FieldRadio](#ddx_fieldradio)|Trasferisce dati integer tra un membro dati di un campo recordset e un gruppo di pulsanti di opzione in un oggetto `CRecordView` o `CDaoRecordView` .|
|[DDX_FieldScroll](#ddx_fieldscroll)|Imposta o ottiene la posizione di scorrimento di un controllo barra di scorrimento in un oggetto `CRecordView` o `CDaoRecordView` . Chiamata dalla funzione [DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) .|
|[DDX_FieldSlider](#ddx_fieldslider)|Sincronizza la posizione Thumb di un controllo dispositivo di scorrimento in una visualizzazione di record e un **`int`** membro dati del campo di un recordset. |
|[DDX_FieldText](#ddx_fieldtext)|Le versioni di overload sono disponibili per il trasferimento **`int`** dei dati, **uint**, **`long`** ,, `DWORD` [CString](../../atl-mfc-shared/reference/cstringt-class.md), **`float`** , **`double`** , **`short`** , [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)e [COleCurrency](../../mfc/reference/colecurrency-class.md) tra un membro dati di un campo recordset e una casella di modifica in un oggetto `CRecordView` o `CDaoRecordView` .|

## <a name="ddx_fieldcbindex"></a><a name="ddx_fieldcbindex"></a> DDX_FieldCBIndex

La `DDX_FieldCBIndex` funzione Sincronizza l'indice dell'elemento selezionato nel controllo casella di riepilogo di un controllo casella combinata in una visualizzazione di record e un **`int`** membro dati del campo di un recordset associato alla visualizzazione dei record.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*index*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` .

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando si trasferiscono dati dal recordset al controllo, questa funzione imposta la selezione nel controllo in base al valore specificato in *index*. In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, MFC imposta il valore dell'indice su 0. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto o se non è selezionato alcun elemento, il campo del recordset viene impostato su 0.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) . L'esempio è simile a `DDX_FieldCBIndex` .

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="ddx_fieldcbstring"></a><a name="ddx_fieldcbstring"></a> DDX_FieldCBString

La `DDX_FieldCBString` funzione gestisce il trasferimento dei dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) tra il controllo di modifica di un controllo casella combinata in una visualizzazione di record e un `CString` membro dati del campo di un recordset associato alla visualizzazione dei record.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*value*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` .

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando si trasferiscono dati dal recordset al controllo, questa funzione imposta la selezione corrente nella casella combinata sulla prima riga che inizia con i caratteri nella stringa specificata in *valore*. In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, qualsiasi selezione viene rimossa dalla casella combinata e il controllo di modifica della casella combinata viene impostato su vuoto. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto, il campo recordset viene impostato su null se il campo lo consente.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) . Nell'esempio è inclusa una chiamata a `DDX_FieldCBString` .

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="ddx_fieldcbstringexact"></a><a name="ddx_fieldcbstringexact"></a> DDX_FieldCBStringExact

La `DDX_FieldCBStringExact` funzione gestisce il trasferimento dei dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) tra il controllo di modifica di un controllo casella combinata in una visualizzazione di record e un `CString` membro dati del campo di un recordset associato alla visualizzazione dei record.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*value*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` .

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando si trasferiscono dati dal recordset al controllo, questa funzione imposta la selezione corrente nella casella combinata sulla prima riga che corrisponde esattamente alla stringa specificata in *valore*. In caso di trasferimento dal recordset al controllo, se il campo del recordset è NULL, qualsiasi selezione viene rimossa dalla casella combinata e la casella di modifica della casella combinata è impostata su Empty. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset viene impostato su NULL.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) . Le chiamate a `DDX_FieldCBStringExact` saranno simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="ddx_fieldcheck"></a><a name="ddx_fieldcheck"></a> DDX_FieldCheck

La `DDX_FieldCheck` funzione gestisce il trasferimento dei **`int`** dati tra un controllo casella di controllo in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un **`int`** membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo casella di controllo associato alla proprietà del controllo.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono scambiati i dati.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando `DDX_FieldCheck` viene chiamato il metodo, il *valore* viene impostato sullo stato corrente del controllo casella di controllo oppure lo stato del controllo viene impostato su *value*, a seconda della direzione del trasferimento.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="ddx_fieldlbindex"></a><a name="ddx_fieldlbindex"></a> DDX_FieldLBIndex

La `DDX_FieldLBIndex` funzione Sincronizza l'indice dell'elemento selezionato in un controllo casella di riepilogo in una visualizzazione di record e un **`int`** membro dati del campo di un recordset associato alla visualizzazione dei record.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*index*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` .

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando si trasferiscono dati dal recordset al controllo, questa funzione imposta la selezione nel controllo in base al valore specificato in *index*. In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, MFC imposta il valore dell'indice su 0. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset viene impostato su 0.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) .

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="ddx_fieldlbstring"></a><a name="ddx_fieldlbstring"></a> DDX_FieldLBString

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*value*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` .

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Nella direzione inversa questa funzione imposta la selezione corrente nella casella di riepilogo sulla prima riga che inizia con i caratteri nella stringa specificata per *valore*. In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, qualsiasi selezione viene rimossa dalla casella di riepilogo. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset viene impostato su null.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) . Le chiamate a `DDX_FieldLBString` saranno simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="ddx_fieldlbstringexact"></a><a name="ddx_fieldlbstringexact"></a> DDX_FieldLBStringExact

La `DDX_FieldLBStringExact` funzione copia la selezione corrente di un controllo casella di riepilogo in una visualizzazione di record in un membro dati del campo [CString](../../atl-mfc-shared/reference/cstringt-class.md) di un recordset associato alla visualizzazione dei record.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*value*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` .

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Nella direzione inversa questa funzione imposta la selezione corrente nella casella di riepilogo sulla prima riga che corrisponde esattamente alla stringa specificata in *valore*. In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, qualsiasi selezione viene rimossa dalla casella di riepilogo. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset viene impostato su null.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) . Le chiamate a `DDX_FieldLBStringExact` saranno simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="ddx_fieldradio"></a><a name="ddx_fieldradio"></a> DDX_FieldRadio

La `DDX_FieldRadio` funzione associa una **`int`** variabile membro in base zero al recordset di una visualizzazione di record con il pulsante di opzione attualmente selezionato in un gruppo di pulsanti di opzione nella visualizzazione di record.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID del primo in un gruppo (con lo stile WS_GROUP) dei controlli pulsante di opzione adiacenti nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*value*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` .

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando si esegue il trasferimento dal campo recordset alla visualizzazione, questa funzione attiva l' *ennesimo* pulsante di opzione (in base zero) e disattiva gli altri pulsanti. Nella direzione inversa questa funzione imposta il campo recordset sul numero ordinale del pulsante di opzione attualmente attivo (selezionato). In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, non è selezionato alcun pulsante. In caso di trasferimento dal controllo al recordset, se non è selezionato alcun controllo, il campo recordset viene impostato su null se il campo lo consente.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) . Le chiamate a `DDX_FieldRadio` saranno simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="ddx_fieldscroll"></a><a name="ddx_fieldscroll"></a> DDX_FieldScroll

La `DDX_FieldScroll` funzione Sincronizza la posizione di scorrimento di un controllo barra di scorrimento in una visualizzazione di record e un **`int`** membro dati del campo di un recordset associato alla visualizzazione dei record (o con qualsiasi variabile Integer a cui si sceglie di eseguire il mapping).

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID del primo in un gruppo (con lo stile WS_GROUP) dei controlli pulsante di opzione adiacenti nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*value*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` .

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando si spostano i dati dal recordset al controllo, questa funzione imposta la posizione di scorrimento del controllo barra di scorrimento sul valore specificato in *valore*. In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, il controllo barra di scorrimento viene impostato su 0. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto, il valore del campo recordset è 0.

Utilizzare la prima versione se si utilizzano le classi basate su ODBC. Utilizzare la seconda versione se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) . Le chiamate a `DDX_FieldScroll` saranno simili.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="ddx_fieldslider"></a><a name="ddx_fieldslider"></a> DDX_FieldSlider

La `DDX_FieldSlider` funzione Sincronizza la posizione Thumb di un controllo dispositivo di scorrimento in una visualizzazione di record e un **`int`** membro dati del campo di un recordset associato alla visualizzazione dei record (o con qualsiasi variabile di tipo Integer a cui si sceglie di eseguire il mapping).

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
Puntatore a un oggetto [CDataExchange](cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID risorsa del controllo dispositivo di scorrimento.

*value*<br/>
Riferimento al valore da scambiare. Questo parametro include o verrà usato per impostare la posizione del Thumb corrente del controllo dispositivo di scorrimento.

*pRecordset*<br/>
Puntatore all' `CRecordset` oggetto associato o `CDaoRecordset` con cui vengono scambiati i dati.

### <a name="remarks"></a>Commenti

Quando si spostano i dati dal recordset al dispositivo di scorrimento, questa funzione imposta la posizione del dispositivo di scorrimento sul valore specificato in *valore*. In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, la posizione del controllo dispositivo di scorrimento è impostata su 0. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto, il valore del campo recordset è 0.

`DDX_FieldSlider` non scambia le informazioni sull'intervallo con i controlli dispositivo di scorrimento in grado di impostare un intervallo anziché semplicemente una posizione.

Utilizzare il primo override della funzione se si utilizzano le classi basate su ODBC. Utilizzare il secondo override con le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per `CRecordView` i `CDaoRecordView` campi e, vedere [visualizzazioni di record](../../data/record-views-mfc-data-access.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [uso di CSliderCtrl](../using-csliderctrl.md).

### <a name="example"></a>Esempio

Per un esempio di DDX_Field generale, vedere [DDX_FieldText](#ddx_fieldtext) . Le chiamate a `DDX_FieldSlider` saranno simili.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="ddx_fieldtext"></a><a name="ddx_fieldtext"></a> DDX_FieldText

La `DDX_FieldText` funzione gestisce il trasferimento dei **`int`** **`short`** dati,, **`long`** , DWORD, [CString](../../atl-mfc-shared/reference/cstringt-class.md), **`float`** , **`double`** , **bool** o **byte** tra un controllo casella di modifica e i membri dati del campo di un recordset.

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
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
ID di un controllo nell'oggetto [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) .

*value*<br/>
Riferimento a un membro dati del campo nell' `CRecordset` oggetto o associato `CDaoRecordset` . Il tipo di dati del valore dipende da quale delle versioni di overload di `DDX_FieldText` si utilizza.

*pRecordset*<br/>
Puntatore all'oggetto [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) con cui vengono scambiati i dati. Questo puntatore consente `DDX_FieldText` a di rilevare e impostare i valori null.

### <a name="remarks"></a>Commenti

Per gli oggetti [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), `DDX_FieldText` gestisce anche il trasferimento dei valori [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) e [COleCurrency](../../mfc/reference/colecurrency-class.md). Un controllo casella di modifica vuoto indica un valore null. In caso di trasferimento dal recordset al controllo, se il campo del recordset è null, la casella di modifica è impostata su Empty. In caso di trasferimento dal controllo al recordset, se il controllo è vuoto, il campo del recordset viene impostato su null.

Utilizzare le versioni con i parametri [CRecordset](../../mfc/reference/crecordset-class.md) se si utilizzano le classi basate su ODBC. Utilizzare le versioni con i parametri [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) se si utilizzano le classi basate su DAO.

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per i campi [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) , vedere l'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).

### <a name="example"></a>Esempio

La `DoDataExchange` funzione seguente per un [CRecordView](../../mfc/reference/crecordview-class.md) contiene `DDX_FieldText` chiamate di funzione per tre tipi di dati: `IDC_COURSELIST` è una casella combinata. gli altri due controlli sono caselle di modifica. Per la programmazione DAO, il parametro *m_pSet* è un puntatore a [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

[!code-cpp[NVC_MFCDatabase#43](../../mfc/codesnippet/cpp/dialog-data-exchange-functions-for-crecordview-and-cdaorecordview_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](mfc-macros-and-globals.md)
