---
title: Routine di convalida dei dati della finestra di dialogo standard
ms.date: 11/04/2016
helpviewer_keywords:
- standard dialog, data validation routines
ms.assetid: 44dbc222-a897-4949-925e-7660e8964ccd
ms.openlocfilehash: 19d1858d67802a7c464a9be783e4c1fb96fe3fae
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88844483"
---
# <a name="standard-dialog-data-validation-routines"></a>Routine di convalida dei dati della finestra di dialogo standard

Questo argomento elenca le routine di convalida dei dati delle finestre di dialogo (DDV) standard usate per i controlli comuni della finestra di dialogo MFC.

> [!NOTE]
> Le routine di scambio di dati della finestra di dialogo standard vengono definite nel file di intestazione afxdd_. h. Tuttavia, le applicazioni devono includere AFXWIN. h.

### <a name="ddv-functions"></a>Funzioni DDV

|Nome|Descrizione|
|-|-|
|[DDV_MaxChars](#ddv_maxchars)|Verifica che il numero di caratteri in un valore di controllo specificato non superi un valore massimo specificato.|
|[DDV_MinMaxByte](#ddv_minmaxbyte)|Verifica che un valore di controllo specificato non superi un intervallo di **byte** specificato.|
|[DDV_MinMaxDateTime](#ddv_minmaxdatetime)|Verifica che un valore di controllo specificato non superi un intervallo di tempo specificato.|
|[DDV_MinMaxDouble](#ddv_minmaxdouble)|Verifica che un valore di controllo specificato non superi un **`double`** intervallo specificato.|
|[DDV_MinMaxDWord](#ddv_minmaxdword)|Verifica che un valore di controllo specificato non superi un intervallo **DWORD** specificato.|
|[DDV_MinMaxFloat](#ddv_minmaxfloat)|Verifica che un valore di controllo specificato non superi un **`float`** intervallo specificato.|
|[DDV_MinMaxInt](#ddv_minmaxint)|Verifica che un valore di controllo specificato non superi un **`int`** intervallo specificato.|
|[DDV_MinMaxLong](#ddv_minmaxlong)|Verifica che un valore di controllo specificato non superi un **`long`** intervallo specificato.|
|[DDV_MinMaxLongLong](#ddv_minmaxlonglong)|Verifica che un valore di controllo specificato non superi un intervallo di **LONGLONG** specificato.|
|[DDV_MinMaxMonth](#ddv_minmaxmonth)|Verifica che un valore di controllo specificato non superi un intervallo di date specificato.|
|[DDV_MinMaxShort](#ddv_minmaxshort)|Verifica che un valore di controllo specificato non superi un **`short`** intervallo specificato.|
|[DDV_MinMaxSlider](#ddv_minmaxslider)|Verifica che un determinato valore del controllo dispositivo di scorrimento rientri nell'intervallo specificato.|
|[DDV_MinMaxUInt](#ddv_minmaxuint)|Verifica che un valore di controllo specificato non superi un intervallo di **uint** specificato.|
|[DDV_MinMaxUnsigned](#ddv_minmaxuint)|Verifica che un determinato valore del controllo sia compreso tra due valori specificati.|
|[DDV_MinMaxULongLong](#ddv_minmaxulonglong)|Verifica che un valore di controllo specificato non superi un intervallo di **ULONGLONG** specificato.|

## <a name="ddv_maxchars"></a><a name="ddv_maxchars"></a> DDV_MaxChars

Chiamare `DDV_MaxChars` per verificare che la quantità di caratteri nel controllo associato al *valore* non superi *nchar*.

```cpp
void AFXAPI DDV_MaxChars(
    CDataExchange* pDX,
    CString const& value,
    int nChars);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*nChars*<br/>
Numero massimo di caratteri consentiti.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxbyte"></a><a name="ddv_minmaxbyte"></a> DDV_MinMaxByte

Chiamare `DDV_MinMaxByte` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxByte(
    CDataExchange* pDX,
    BYTE value,
    BYTE minVal,
    BYTE maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo BYTE) consentito.

*maxVal*<br/>
Consentito valore massimo (di tipo BYTE).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxdatetime"></a><a name="ddv_minmaxdatetime"></a> DDV_MinMaxDateTime

Chiamare `DDV_MinMaxDateTime` per verificare che il valore di data e ora nel controllo selezione data e ora ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) associato a *RefValue* sia compreso tra *refMinRange* e *refMaxRange*.

```cpp
void AFXAPI DDV_MinMaxDateTime(
    CDataExchange* pDX,
    CTime& refValue,
    const CTime* refMinRange,
    const CTime* refMaxRange);

void AFXAPI DDV_MinMaxDateTime(
    CDataExchange* pDX,
    COleDateTime& refValue,
    const COleDateTime* refMinRange,
    const COleDateTime* refMaxRange);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare questo oggetto.

*refValue*<br/>
Riferimento a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) o [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) associato a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo. Questo oggetto contiene i dati da convalidare.

*refMinRange*<br/>
Valore di data/ora minimo consentito.

*refMaxRange*<br/>
Valore di data/ora massimo consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxdouble"></a><a name="ddv_minmaxdouble"></a> DDV_MinMaxDouble

Chiamare `DDV_MinMaxDouble` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxDouble(
    CDataExchange* pDX,
    double const& value,
    double minVal,
    double maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **`double`** ) consentito.

*maxVal*<br/>
Valore massimo consentito (di tipo **`double`** ).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxdword"></a><a name="ddv_minmaxdword"></a> DDV_MinMaxDWord

Chiamare `DDV_MinMaxDWord` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxDWord(
    CDataExchange* pDX,
    DWORD const& value,
    DWORD minVal,
    DWORD maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo DWORD) consentito.

*maxVal*<br/>
Valore massimo consentito (di tipo DWORD).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxfloat"></a><a name="ddv_minmaxfloat"></a> DDV_MinMaxFloat

Chiamare `DDV_MinMaxFloat` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxFloat(
    CDataExchange* pDX,
    float value,
    float minVal,
    float maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **`float`** ) consentito.

*maxVal*<br/>
Valore massimo consentito (di tipo **`float`** ).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxint"></a><a name="ddv_minmaxint"></a> DDV_MinMaxInt

Chiamare `DDV_MinMaxInt` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxInt(
    CDataExchange* pDX,
    int value,
    int minVal,
    int maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **`int`** ) consentito.

*maxVal*<br/>
Valore massimo consentito (di tipo **`int`** ).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxlong"></a><a name="ddv_minmaxlong"></a> DDV_MinMaxLong

Chiamare `DDV_MinMaxLong` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxLong(
    CDataExchange* pDX,
    long value,
    long minVal,
    long maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **`long`** ) consentito.

*maxVal*<br/>
Valore massimo consentito (di tipo **`long`** ).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxlonglong"></a><a name="ddv_minmaxlonglong"></a> DDV_MinMaxLongLong

Chiamare `DDV_MinMaxLongLong` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxLongLong(
    CDataExchange* pDX,
    LONGLONG value,
    LONGLONG minVal,
    LONGLONG maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo LONGLONG) consentito.

*maxVal*<br/>
Valore massimo (di tipo LONGLONG) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxmonth"></a><a name="ddv_minmaxmonth"></a> DDV_MinMaxMonth

Chiamare `DDV_MinMaxMonth` per verificare che il valore di data/ora nel controllo calendario mensile ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) associato a *RefValue* sia compreso tra *refMinRange* e *refMaxRange*.

```cpp
void AFXAPI DDV_MinMaxMonth(
    CDataExchange* pDX,
    CTime& refValue,
    const CTime* refMinRange,
    const CTime* refMaxRange);

void AFXAPI DDV_MinMaxMonth(
    CDataExchange* pDX,
    COleDateTime& refValue,
    const COleDateTime* refMinRange,
    const COleDateTime* refMaxRange);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*refValue*<br/>
Riferimento a un oggetto di tipo `CTime` o `COleDateTime` associato a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo. Questo oggetto contiene i dati da convalidare. MFC passa questo riferimento quando `DDV_MinMaxMonth` viene chiamato il metodo.

*refMinRange*<br/>
Valore di data/ora minimo consentito.

*refMaxRange*<br/>
Valore di data/ora massimo consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxshort"></a><a name="ddv_minmaxshort"></a> DDV_MinMaxShort

Chiamare `DDV_MinMaxShort` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxShort(
    CDataExchange* pDX,
    short value,
    short minVal,
    short maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **`short`** ) consentito.

*maxVal*<br/>
Valore massimo consentito (di tipo **`short`** ).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxslider"></a><a name="ddv_minmaxslider"></a> DDV_MinMaxSlider

Chiamare `DDV_MinMaxSlider` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxSlider(
    CDataExchange* pDX,
    DWORD value,
    DWORD minVal,
    DWORD maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento al valore da convalidare. Questo parametro contiene o imposta la posizione del Thumb corrente del controllo dispositivo di scorrimento.

*minVal*<br/>
Valore minimo consentito.

*maxVal*<br/>
Valore massimo consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [uso di CSliderCtrl](../../mfc/using-csliderctrl.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxuint"></a><a name="ddv_minmaxuint"></a> DDV_MinMaxUInt

Chiamare `DDV_MinMaxUInt` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxUInt(
    CDataExchange* pDX,
    UINT value,
    UINT minVal,
    UINT maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo UINT) consentito.

*maxVal*<br/>
Valore massimo (di tipo UINT) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxulonglong"></a><a name="ddv_minmaxulonglong"></a> DDV_MinMaxULongLong

Chiamare `DDV_MinMaxULongLong` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxULongLong(
    CDataExchange* pDX,
    ULONGLONG value,
    ULONGLONG  minVal ,
    ULONGLONG  maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo ULONGLONG) consentito.

*maxVal*<br/>
Valore massimo (di tipo ULONGLONG) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_. h

## <a name="ddv_minmaxunsigned"></a>DDV_MinMaxUnsigned

Chiamare `DDV_MinMaxUnsigned` per verificare che il valore del controllo associato a *value* sia compreso tra *minVal* e *maxVal*.

### <a name="syntax"></a>Sintassi

```cpp
   void AFXAPI DDV_MinMaxUnsigned(
       CDataExchange* pDX,
       unsigned value,
       unsigned minVal,
       unsigned maxVal );
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*value*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **`unsigned`** ) consentito.

*maxVal*<br/>
Valore massimo consentito (di tipo **`unsigned`** ).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdd_. h

## <a name="see-also"></a>Vedere anche

[Routine di scambio di dati della finestra di dialogo standard](standard-dialog-data-exchange-routines.md)<br/>
[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[DDX_Slider](standard-dialog-data-exchange-routines.md#ddx_slider)<br/>
[DDX_FieldSlider](dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md#ddx_fieldslider)
