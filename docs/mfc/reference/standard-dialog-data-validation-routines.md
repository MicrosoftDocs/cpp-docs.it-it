---
title: Routine di convalida dei dati della finestra di dialogo standard
ms.date: 11/04/2016
helpviewer_keywords:
- standard dialog, data validation routines
ms.assetid: 44dbc222-a897-4949-925e-7660e8964ccd
ms.openlocfilehash: 83e3e215ec8d66321bbac5a4a308b04ef69dc68c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372909"
---
# <a name="standard-dialog-data-validation-routines"></a>Routine di convalida dei dati della finestra di dialogo standard

In questo argomento vengono elencate le routine standard di convalida dei dati delle finestre di dialogo (DDV) utilizzate per i controlli finestra di dialogo MFC comuni.

> [!NOTE]
> Le routine standard di scambio dei dati della finestra di dialogo sono definite nel file di intestazione afxdd_.h. Tuttavia, le applicazioni devono includere afxwin.h.However, applications should include afxwin.h.

### <a name="ddv-functions"></a>Funzioni DDV

|||
|-|-|
|[DDV_MaxChars](#ddv_maxchars)|Verifica che il numero di caratteri in un determinato valore di controllo non superi un determinato valore massimo.|
|[DDV_MinMaxByte](#ddv_minmaxbyte)|Verifica che un determinato valore di controllo non superi un intervallo **BYTE** specificato.|
|[DDV_MinMaxDateTime](#ddv_minmaxdatetime)|Verifica che un determinato valore di controllo non superi un determinato intervallo di tempo.|
|[DDV_MinMaxDouble](#ddv_minmaxdouble)|Verifica che un determinato valore di controllo non superi un intervallo **double** specificato.|
|[DDV_MinMaxDWord](#ddv_minmaxdword)|Verifica che un determinato valore di controllo non superi un determinato intervallo **DWORD.**|
|[DDV_MinMaxFloat](#ddv_minmaxfloat)|Verifica che un determinato valore di controllo non superi un determinato intervallo **di valori float.**|
|[DDV_MinMaxInt](#ddv_minmaxint)|Verifica che un determinato valore di controllo non superi un determinato intervallo **int.**|
|[DDV_MinMaxLong](#ddv_minmaxlong)|Verifica che un determinato valore di controllo non superi un determinato intervallo **lungo.**|
|[DDV_MinMaxLongLong](#ddv_minmaxlonglong)|Verifica che un determinato valore di controllo non superi un determinato intervallo **LONGLONG.**|
|[DDV_MinMaxMonth](#ddv_minmaxmonth)|Verifica che un determinato valore di controllo non superi un determinato intervallo di date.|
|[DDV_MinMaxShort](#ddv_minmaxshort)|Verifica che un determinato valore di controllo non superi un intervallo **short** specificato.|
|[DDV_MinMaxSlider](#ddv_minmaxslider)|Verifica che un determinato valore di controllo del dispositivo di scorrimento rientri nell'intervallo specificato.|
|[DDV_MinMaxUInt](#ddv_minmaxuint)|Verifica che un determinato valore di controllo non superi un determinato intervallo **UINT.**|
|[DDV_MinMaxUnsigned](#ddv_minmaxuint)|Verifica che un determinato valore di controllo cada tra due valori specificati.|
|[DDV_MinMaxULongLong](#ddv_minmaxulonglong)|Verifica che un determinato valore di controllo non superi un determinato intervallo **ULONGLONG.**|

## <a name="ddv_maxchars"></a><a name="ddv_maxchars"></a>DDV_MaxChars

Chiamare `DDV_MaxChars` per verificare che la quantità di caratteri nel controllo associato a *value* non superi *nChars*.

```cpp
void AFXAPI DDV_MaxChars(
    CDataExchange* pDX,
    CString const& value,
    int nChars);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*nChars*<br/>
Numero massimo di caratteri consentiti.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxbyte"></a><a name="ddv_minmaxbyte"></a>DDV_MinMaxByte

Chiamata `DDV_MinMaxByte` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo BYTE) consentito.

*maxVal*<br/>
Valore massimo (di tipo BYTE) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxdatetime"></a><a name="ddv_minmaxdatetime"></a>DDV_MinMaxDateTime

Chiamata `DDV_MinMaxDateTime` per verificare che il valore di ora/data nel controllo selezione data e ora ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) associato *a refValue* sia compreso tra *refMinRange* e *refMaxRange*.

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
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare questo oggetto.

*refValue (valore di riferimento)*<br/>
Riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) o [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto associato a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controlli. Questo oggetto contiene i dati da convalidare.

*refMinRange (in modo di instato di riferimento)*<br/>
Valore minimo di data/ora consentito.

*refMaxRange (in grado di essere in formato r*<br/>
Valore massimo di data/ora consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxdouble"></a><a name="ddv_minmaxdouble"></a>DDV_MinMaxDouble

Chiamata `DDV_MinMaxDouble` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **double**) consentito.

*maxVal*<br/>
Valore massimo (di tipo **double**) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxdword"></a><a name="ddv_minmaxdword"></a>DDV_MinMaxDWord

Chiamata `DDV_MinMaxDWord` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo DWORD) consentito.

*maxVal*<br/>
Valore massimo (di tipo DWORD) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxfloat"></a><a name="ddv_minmaxfloat"></a>DDV_MinMaxFloat

Chiamata `DDV_MinMaxFloat` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **float**) consentito.

*maxVal*<br/>
Valore massimo (di tipo **float**) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxint"></a><a name="ddv_minmaxint"></a>DDV_MinMaxInt

Chiamata `DDV_MinMaxInt` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **int**) consentito.

*maxVal*<br/>
Valore massimo (di tipo **int**) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxlong"></a><a name="ddv_minmaxlong"></a>DDV_MinMaxLong

Chiamata `DDV_MinMaxLong` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **long**) consentito.

*maxVal*<br/>
Valore massimo (di tipo **long**) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxlonglong"></a><a name="ddv_minmaxlonglong"></a>DDV_MinMaxLongLong

Chiamata `DDV_MinMaxLongLong` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo LONGLONG) consentito.

*maxVal*<br/>
Valore massimo (di tipo LONGLONG) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxmonth"></a><a name="ddv_minmaxmonth"></a>DDV_MinMaxMonth

Chiamata `DDV_MinMaxMonth` per verificare che il valore di ora/data nel controllo calendario mensile ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) associato *a refValue* sia compreso tra *refMinRange* e *refMaxRange*.

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
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*refValue (valore di riferimento)*<br/>
Riferimento a un oggetto `CTime` `COleDateTime` di tipo o associato a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli. Questo oggetto contiene i dati da convalidare. MFC passa questo `DDV_MinMaxMonth` riferimento quando viene chiamato.

*refMinRange (in modo di instato di riferimento)*<br/>
Valore minimo di data/ora consentito.

*refMaxRange (in grado di essere in formato r*<br/>
Valore massimo di data/ora consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxshort"></a><a name="ddv_minmaxshort"></a>DDV_MinMaxShort

Chiamata `DDV_MinMaxShort` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **short**) consentito.

*maxVal*<br/>
Valore massimo (di tipo **short**) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxslider"></a><a name="ddv_minmaxslider"></a>DDV_MinMaxSlider

Chiamata `DDV_MinMaxSlider` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

```cpp
void AFXAPI DDV_MinMaxSlider(
    CDataExchange* pDX,
    DWORD value,
    DWORD minVal,
    DWORD maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange.](../../mfc/reference/cdataexchange-class.md) Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*Valore*<br/>
Riferimento al valore da convalidare. Questo parametro mantiene o imposta la posizione corrente del cursore del cursore.

*minVal*<br/>
Valore minimo consentito.

*maxVal*<br/>
Valore massimo consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [Utilizzo di CSliderCtrl](../../mfc/using-csliderctrl.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxuint"></a><a name="ddv_minmaxuint"></a>DDV_MinMaxUInt

Chiamata `DDV_MinMaxUInt` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo UINT) consentito.

*maxVal*<br/>
Valore massimo (di tipo UINT) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxulonglong"></a><a name="ddv_minmaxulonglong"></a>DDV_MinMaxULongLong

Chiamata `DDV_MinMaxULongLong` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo ULONGLONG) consentito.

*maxVal*<br/>
Valore massimo (di tipo ULONGLONG) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="ddv_minmaxunsigned"></a>DDV_MinMaxUnsigned

Chiamata `DDV_MinMaxUnsigned` per verificare che il valore nel controllo associato al *valore* sia compreso tra *minVal* e *maxVal*.

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

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli con cui vengono convalidati i dati.

*minVal*<br/>
Valore minimo (di tipo **unsigned** ) consentito.

*maxVal*<br/>
Valore massimo (di tipo **unsigned** ) consentito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su DDV, vedere [Dialog Data Exchange and Validation](../dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdd_.h

## <a name="see-also"></a>Vedere anche

[Routine DDX (Dialog Data Exchange) standard](standard-dialog-data-exchange-routines.md)<br/>
[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[DDX_Slider](standard-dialog-data-exchange-routines.md#ddx_slider)<br/>
[DDX_FieldSlider](dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md#ddx_fieldslider)
