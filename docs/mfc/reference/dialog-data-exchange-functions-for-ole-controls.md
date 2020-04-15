---
title: Funzioni DDX (Dialog Data Exchange) per controlli OLE
ms.date: 11/04/2016
f1_keywords:
- AFXDISP/DDX_OCBool
- AFXDISP/DDX_OCBoolRO
- AFXDISP/DDX_OCColor
- AFXDISP/DDX_OCColorRO
- AFXDISP/DDX_OCFloat
- AFXDISP/DDX_OCFloatRO
- AFXDISP/DDX_OCInt
- AFXDISP/DDX_OCIntRO
- AFXDISP/DDX_OCShort
- AFXDISP/DDX_OCShortRO
- AFXDISP/DDX_OCText
- AFXDISP/DDX_OCTextRO
helpviewer_keywords:
- OLE controls [MFC], DDX functions
- DDX (dialog data exchange), OLE support
ms.assetid: 7ef1f288-ff65-40d4-aad2-5497bc00bb27
ms.openlocfilehash: 61a5983eec13902ed4b0e397e3befca4860977d4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365772"
---
# <a name="dialog-data-exchange-functions-for-ole-controls"></a>Funzioni DDX (Dialog Data Exchange) per controlli OLE

In questo argomento vengono elencate le DDX_OC funzioni utilizzate per lo scambio di dati tra una proprietà di un controllo OLE in una finestra di dialogo, una visualizzazione maschera o un oggetto visualizzazione controlli e un membro dati della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

### <a name="ddx_oc-functions"></a>Funzioni di DDX_OC

|||
|-|-|
|[DDX_OCBool](#ddx_ocbool)|Gestisce il trasferimento di dati **BOOL** tra una proprietà di un controllo OLE e un membro dati **BOOL.**|
|[DDX_OCBoolRO](#ddx_ocboolro)|Gestisce il trasferimento di dati **BOOL** tra una proprietà di sola lettura di un controllo OLE e un membro dati **BOOL.**|
|[DDX_OCColor](#ddx_occolor)|Gestisce il trasferimento di dati **OLE_COLOR** tra una proprietà di un controllo OLE e un membro dati **OLE_COLOR.**|
|[DDX_OCColorRO](#ddx_occolorro)|Gestisce il trasferimento di **dati OLE_COLOR** tra una proprietà di sola lettura di un controllo OLE e un membro dati **OLE_COLOR.**|
|[DDX_OCFloat](#ddx_ocfloat)|Gestisce il trasferimento di dati **float** (o **double)** tra una proprietà di un controllo OLE e un membro dati **float** (o **double).**|
|[DDX_OCFloatRO](#ddx_ocfloatro)|Gestisce il trasferimento di dati **float** (o **double)** tra una proprietà di sola lettura di un controllo OLE e un membro dati **float** (o **double).**|
|[DDX_OCInt](#ddx_ocint)|Gestisce il trasferimento di dati **int** (o **long)** tra una proprietà di un controllo OLE e un membro dati **int** (o **long).**|
|[DDX_OCIntRO](#ddx_ocintro)|Gestisce il trasferimento di dati **int** (o **long)** tra una proprietà di sola lettura di un controllo OLE e un membro dati **int** (o **long).**|
|[DDX_OCShort](#ddx_ocshort)|Gestisce il trasferimento di dati **brevi** tra una proprietà di un controllo OLE e un membro dati **breve.**|
|[DDX_OCShortRO](#ddx_ocshortro)|Gestisce il trasferimento di dati **brevi** tra una proprietà di sola lettura di un controllo OLE e un membro dati **breve.**|
|[DDX_OCText](#ddx_octext)|Gestisce il trasferimento di dati **CString** tra una proprietà di un controllo OLE e un membro dati **CString.**|
|[DDX_OCTextRO](#ddx_octextro)|Gestisce il trasferimento di dati **CString** tra una proprietà di sola lettura di un controllo OLE e un membro dati **CString.**|

## <a name="ddx_ocbool"></a><a name="ddx_ocbool"></a>DDX_OCBool

La `DDX_OCBool` funzione gestisce il trasferimento dei dati **BOOL** tra una proprietà di un controllo OLE in una finestra di dialogo, una visualizzazione maschera o un oggetto visualizzazione controlli e un membro dati **BOOL** della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCBool(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    BOOL& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione:** afxdisp.h

## <a name="ddx_ocboolro"></a><a name="ddx_ocboolro"></a>DDX_OCBoolRO

La `DDX_OCBoolRO` funzione gestisce il trasferimento di dati **BOOL** tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli e un membro dati **BOOL** della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCBoolRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    BOOL& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_occolor"></a><a name="ddx_occolor"></a>DDX_OCColor

La `DDX_OCColor` funzione gestisce il trasferimento di dati OLE_COLOR tra una proprietà di un controllo OLE in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli e un membro dati OLE_COLOR della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCColor(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    OLE_COLOR& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_occolorro"></a><a name="ddx_occolorro"></a>DDX_OCColorRO

La `DDX_OCColorRO` funzione gestisce il trasferimento di OLE_COLOR dati tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controllo e un OLE_COLOR membro dati della finestra di dialogo, della visualizzazione modulo o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCColorRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    OLE_COLOR& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_ocfloat"></a><a name="ddx_ocfloat"></a>DDX_OCFloat

La `DDX_OCFloat` funzione gestisce il trasferimento di dati **float** (o **double)** tra una proprietà di un controllo OLE in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controlli e un membro dati **float** (o **doppio)** della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCFloat(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    float& value);

void AFXAPI DDX_OCFloat(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    double& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_ocfloatro"></a><a name="ddx_ocfloatro"></a>DDX_OCFloatRO

La `DDX_OCFloatRO` funzione gestisce il trasferimento di dati **float** (o **double)** tra una proprietà di sola lettura di un controllo OLE in un oggetto finestra di dialogo, visualizzazione maschera o visualizzazione controlli e un membro dati **float** (o **doppio)** della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCFloatRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    float& value);

void AFXAPI DDX_OCFloatRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    double& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_ocint"></a><a name="ddx_ocint"></a>DDX_OCInt

La `DDX_OCInt` funzione gestisce il trasferimento di dati **int** (o **long)** tra una proprietà di un controllo OLE in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controlli e un membro dati **int** (o **lungo)** della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCInt(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    int& value);

void AFXAPI DDX_OCInt(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    long& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_ocintro"></a><a name="ddx_ocintro"></a>DDX_OCIntRO

La `DDX_OCIntRO` funzione gestisce il trasferimento di dati **int** (o **long)** tra una proprietà di sola lettura di un controllo OLE in un oggetto finestra di dialogo, visualizzazione maschera o visualizzazione controlli e un membro dati **int** (o **lungo)** della finestra di dialogo, della visualizzazione maschera o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCIntRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    int& value);

void AFXAPI DDX_OCIntRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    long& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_ocshort"></a><a name="ddx_ocshort"></a>DDX_OCShort

La `DDX_OCShort` funzione gestisce il trasferimento di dati brevi tra una proprietà di un controllo OLE in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controllo e un breve membro dati della finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCShort(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    short& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_ocshortro"></a><a name="ddx_ocshortro"></a>DDX_OCShortRO

La `DDX_OCShortRO` funzione gestisce il trasferimento di dati brevi tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo, visualizzazione maschera o oggetto visualizzazione controllo e un breve membro dati della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCShortRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    short& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_octext"></a><a name="ddx_octext"></a>DDX_OCText

La funzione **DDX_OCText** gestisce il trasferimento di dati **CString** tra una proprietà di un controllo OLE in una finestra di dialogo, visualizzazione form o oggetto visualizzazione controlli e un membro dati **CString** della finestra di dialogo, visualizzazione form o oggetto visualizzazione controlli.

```cpp
void AFXAPI DDX_OCText(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto **CDataExchange.** Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="ddx_octextro"></a><a name="ddx_octextro"></a>DDX_OCTextRO

La funzione `DDX_OCTextRO` gestisce il trasferimento dei dati `CString` tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un membro dati `CString` della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.

```cpp
void AFXAPI DDX_OCTextRO(
    CDataExchange* pDX,
    int nIDC,
    DISPID dispid,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*nIDC*<br/>
L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.

*Dispid*<br/>
L'ID di invio di una proprietà del controllo.

*Valore*<br/>
Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.

### <a name="remarks"></a>Osservazioni

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
