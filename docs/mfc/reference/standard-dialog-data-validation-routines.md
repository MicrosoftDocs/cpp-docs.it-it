---
title: Finestra di dialogo standard routine di convalida dei dati | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- standard dialog, data validation routines
ms.assetid: 44dbc222-a897-4949-925e-7660e8964ccd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 116cd9ee86ca29aac6da489916f78c3884ba8bdd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46446549"
---
# <a name="standard-dialog-data-validation-routines"></a>Routine di convalida dei dati della finestra di dialogo standard

Questo argomento elenca le routine di convalida (DDV) di dati di finestra di dialogo standard usate per i controlli di finestra di dialogo comuni MFC.

> [!NOTE]
>  Le routine di scambio di dati finestra di dialogo standard sono definite in afxdd_.h di file di intestazione. Tuttavia, le applicazioni devono includere AFXWIN. h.

### <a name="ddv-functions"></a>Funzioni DDV

|||
|-|-|
|[DDV_MaxChars](#ddv_maxchars)|Verifica che il numero di caratteri in un valore di controllo specificato non superi un determinato valore massimo.|
|[DDV_MinMaxByte](#ddv_minmaxbyte)|Verifica di un valore di controllo specificato non superi una determinata **BYTE** intervallo.|
|[DDV_MinMaxDateTime](#ddv_minmaxdatetime)|Verifica di che un valore di controllo specificato non superi un intervallo di tempo specificato.|
|[DDV_MinMaxDouble](#ddv_minmaxdouble)|Verifica di un valore di controllo specificato non superi una determinata **doppie** intervallo.|
|[DDV_MinMaxDWord](#ddv_minmaxdword)|Verifica di un valore di controllo specificato non superi una determinata **DWORD** intervallo.|
|[DDV_MinMaxFloat](#ddv_minmaxfloat)|Verifica di un valore di controllo specificato non superi una determinata **float** intervallo.|
|[DDV_MinMaxInt](#ddv_minmaxint)|Verifica di un valore di controllo specificato non superi una determinata **int** intervallo.|
|[DDV_MinMaxLong](#ddv_minmaxlong)|Verifica di un valore di controllo specificato non superi una determinata **lungo** intervallo.|
|[DDV_MinMaxLongLong](#ddv_minmaxlonglong)|Verifica di un valore di controllo specificato non superi una determinata **LongLong con** intervallo.|
|[DDV_MinMaxMonth](#ddv_minmaxmonth)|Verifica di che un valore di controllo specificato non superi un intervallo di date specificato.|
|[DDV_MinMaxShort](#ddv_minmaxshort)|Verifica di un valore di controllo specificato non superi una determinata **breve** intervallo.|
|[DDV_MinMaxSlider](#ddv_minmaxslider)|Verifica che il valore di un controllo dispositivo di scorrimento specificato rientra nell'intervallo specificato.|
|[DDV_MinMaxUInt](#ddv_minmaxuint)|Verifica di un valore di controllo specificato non superi una determinata **UINT** intervallo.|
|[DDV_MinMaxUnsigned](#ddv_minmaxuint)|Verifica di che un valore di controllo specificato è compreso tra due valori specificati.|
|[DDV_MinMaxULongLong](#ddv_minmaxulonglong)|Verifica di un valore di controllo specificato non superi una determinata **ULONGLONG** intervallo.|



##  <a name="ddv_maxchars"></a>  DDV_MaxChars

Chiamare `DDV_MaxChars` per verificare che la quantità di caratteri del controllo associato *valore* non superi *nChars*.

```
void AFXAPI DDV_MaxChars(
    CDataExchange* pDX,
    CString const& value,
    int nChars);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*nChars*<br/>
Numero massimo di caratteri consentiti.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxbyte"></a>  DDV_MinMaxByte

Chiamare `DDV_MinMaxByte` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxByte(
    CDataExchange* pDX,
    BYTE value,
    BYTE minVal,
    BYTE maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (di tipo BYTE) consentito.

*maxVal*<br/>
Valore massimo (di tipo BYTE) consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxdatetime"></a>  DDV_MinMaxDateTime

Chiamare `DDV_MinMaxDateTime` per verificare che il valore di data e ora nella casella di selezione data e ora controllare ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) associato *refValue* rientra tra *refMinRange*e *refMaxRange*.

```
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
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare questo oggetto.

*refValue*<br/>
Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oppure [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto associato a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo. Questo oggetto contiene i dati da convalidare.

*refMinRange*<br/>
Valore minimo consentito valore data/ora.

*refMaxRange*<br/>
Valore data/ora massimo consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxdouble"></a>  DDV_MinMaxDouble

Chiamare `DDV_MinMaxDouble` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxDouble(
    CDataExchange* pDX,
    double const& value,
    double minVal,
    double maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (typu **doppie**) è consentito.

*maxVal*<br/>
Valore massimo (typu **doppie**) è consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxdword"></a>  DDV_MinMaxDWord

Chiamare `DDV_MinMaxDWord` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxDWord(
    CDataExchange* pDX,
    DWORD const& value,
    DWORD minVal,
    DWORD maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (di tipo DWORD) consentito.

*maxVal*<br/>
Valore massimo (di tipo DWORD) consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxfloat"></a>  DDV_MinMaxFloat

Chiamare `DDV_MinMaxFloat` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxFloat(
    CDataExchange* pDX,
    float value,
    float minVal,
    float maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (typu **float**) è consentito.

*maxVal*<br/>
Valore massimo (typu **float**) è consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxint"></a>  DDV_MinMaxInt

Chiamare `DDV_MinMaxInt` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxInt(
    CDataExchange* pDX,
    int value,
    int minVal,
    int maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (typu **int**) è consentito.

*maxVal*<br/>
Valore massimo (typu **int**) è consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxlong"></a>  DDV_MinMaxLong

Chiamare `DDV_MinMaxLong` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxLong(
    CDataExchange* pDX,
    long value,
    long minVal,
    long maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (typu **lungo**) è consentito.

*maxVal*<br/>
Valore massimo (typu **lungo**) è consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxlonglong"></a>  DDV_MinMaxLongLong

Chiamare `DDV_MinMaxLongLong` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxLongLong(
    CDataExchange* pDX,
    LONGLONG value,
    LONGLONG minVal,
    LONGLONG maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (di tipo LongLong con) consentito.

*maxVal*<br/>
Valore massimo (di tipo LongLong con) consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxmonth"></a>  DDV_MinMaxMonth

Chiamare `DDV_MinMaxMonth` per verificare che il valore di data e ora nel calendario mensile di controllo ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) associato *refValue* rientra tra *refMinRange* e *refMaxRange*.

```
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
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*refValue*<br/>
Un riferimento a un oggetto di tipo `CTime` o `COleDateTime` associato a una variabile membro della finestra di dialogo, visualizzazione form o controllare l'oggetto visualizzazione. Questo oggetto contiene i dati da convalidare. Passa MFC di riferimento quando `DDV_MinMaxMonth` viene chiamato.

*refMinRange*<br/>
Valore minimo consentito valore data/ora.

*refMaxRange*<br/>
Valore data/ora massimo consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxshort"></a>  DDV_MinMaxShort

Chiamare `DDV_MinMaxShort` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxShort(
    CDataExchange* pDX,
    short value,
    short minVal,
    short maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (typu **breve**) è consentito.

*maxVal*<br/>
Valore massimo (typu **breve**) è consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxslider"></a>  DDV_MinMaxSlider

Chiamare `DDV_MinMaxSlider` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxSlider(
    CDataExchange* pDX,
    DWORD value,
    DWORD minVal,
    DWORD maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento al valore da convalidare. Questo parametro contiene oppure Imposta posizione di anteprima corrente del controllo dispositivo di scorrimento.

*minVal*<br/>
Valore minimo consentito.

*maxVal*<br/>
Valore massimo consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [utilizzo di CSliderCtrl](../../mfc/using-csliderctrl.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxuint"></a>  DDV_MinMaxUInt

Chiamare `DDV_MinMaxUInt` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxUInt(
    CDataExchange* pDX,
    UINT value,
    UINT minVal,
    UINT maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (di tipo UINT) consentito.

*maxVal*<br/>
Valore massimo (di tipo UINT) consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

##  <a name="ddv_minmaxulonglong"></a>  DDV_MinMaxULongLong

Chiamare `DDV_MinMaxULongLong` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

```
void AFXAPI DDV_MinMaxULongLong(
    CDataExchange* pDX,
    ULONGLONG value,
    ULONGLONG  minVal ,
    ULONGLONG  maxVal);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (di tipo ULONGLONG) consentito.

*maxVal*<br/>
Valore massimo (di tipo ULONGLONG) consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdd_.h

## <a name="see-also"></a>Vedere anche

[Routine DDX (Dialog Data Exchange) standard](../../mfc/reference/standard-dialog-data-exchange-routines.md)<br/>
[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

## <a name="ddvminmaxunsigned"></a>DDV_MinMaxUnsigned

Chiamare `DDV_MinMaxUnsigned` per verificare che il valore nel controllo associato *valore* è compreso tra *minVal* e *maxVal*.

### <a name="syntax"></a>Sintassi

```
   void AFXAPI DDV_MinMaxUnsigned(
       CDataExchange* pDX,
       unsigned value,
       unsigned minVal,
       unsigned maxVal );
```
### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*valore*<br/>
Un riferimento a una variabile membro della finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono convalidati.

*minVal*<br/>
Valore minimo (typu **unsigned** ) è consentito.

*maxVal*<br/>
Valore massimo (typu **unsigned** ) è consentito.

### <a name="remarks"></a>Note

Per altre informazioni sulle DDV, vedere [convalida e DDX](../dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdd_.h

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[DDX_Slider](#ddx_slider)<br/>
[DDX_FieldSlider](#ddx_fieldslider)



