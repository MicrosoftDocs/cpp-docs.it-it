---
title: Persistenza di controlli OLE
ms.date: 11/04/2016
helpviewer_keywords:
- OLE controls [MFC], persistence
- persistence, OLE controls
ms.assetid: 64f8dc80-f110-41af-b3ea-14948f6bfdf7
ms.openlocfilehash: 88707da503b1d1cdc809827dc4d1bac0ccad9b5b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373004"
---
# <a name="persistence-of-ole-controls"></a>Persistenza di controlli OLE

Una funzionalità dei controlli OLE è la persistenza della proprietà (o la serializzazione), che consente al controllo OLE di leggere o scrivere i valori delle proprietà da e verso un file o un flusso. Un'applicazione contenitore può usare la serializzazione per archiviare i valori delle proprietà di un controllo anche dopo che l'applicazione ha eliminato definitivamente il controllo. I valori delle proprietà del controllo OLE possono quindi essere letti dal file o dal flusso quando viene creata una nuova istanza del controllo in un secondo momento.

### <a name="persistence-of-ole-controls"></a>Persistenza di controlli OLE

|||
|-|-|
|[PX_Blob](#px_blob)|Scambia una proprietà del controllo che archivia dati BLOB (Binary Large Object).|
|[PX_Bool](#px_bool)|Scambia una proprietà del controllo di tipo **bool**.|
|[PX_Color](#px_color)|Scambia una proprietà Color di un controllo.|
|[PX_Currency](#px_currency)|Scambia una proprietà del controllo di tipo **CY**.|
|[PX_DataPath](#px_datapath)|Scambia una proprietà del controllo di tipo `CDataPathProperty`.|
|[PX_Double](#px_double)|Scambia una proprietà del controllo di tipo **Double**.|
|[PX_Font](#px_font)|Scambia una proprietà del tipo di carattere di un controllo.|
|[PX_Float](#px_float)|Scambia una proprietà del controllo di tipo **float**.|
|[PX_IUnknown](#px_iunknown)|Scambia una proprietà del controllo di tipo non definito.|
|[PX_Long](#px_long)|Scambia una proprietà del controllo di tipo **Long**.|
|[PX_Picture](#px_picture)|Scambia una proprietà immagine di un controllo.|
|[PX_Short](#px_short)|Scambia una proprietà del controllo di tipo **short**.|
|[PX_ULong](#px_ulong)|Scambia una proprietà del controllo di tipo **ULONG**.|
|[PX_UShort](#px_ushort)|Scambia una proprietà del controllo di tipo **ushort**.|
|[PXstring](#px_string)|Scambia una proprietà del controllo stringa di caratteri.|
|[PX_VBXFontConvert](#px_vbxfontconvert)|Scambia le proprietà correlate al tipo di carattere di un controllo VBX in una proprietà del tipo di carattere del controllo OLE.|

Viene inoltre fornita la `AfxOleTypeMatchGuid` funzione Global per verificare la presenza di una corrispondenza tra un TYPEDESC e un GUID specificato.

## <a name="px_blob"></a><a name="px_blob"></a>PX_Blob

Chiamare questa funzione nella funzione membro del `DoPropExchange` controllo per serializzare o inizializzare una proprietà che archivia dati BLOB (Binary Large Object).

```cpp
BOOL PX_Blob(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    HGLOBAL& hBlob,
    HGLOBAL hBlobDefault = NULL);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*hBlob*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*hBlobDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà verrà letto o scritto nella variabile a cui fa riferimento *hBlob*, a seconda dei casi. Questa variabile deve essere inizializzata su NULL prima di `PX_Blob` chiamare inizialmente per la prima volta (in genere, è possibile eseguire questa operazione nel costruttore del controllo). Se *hBlobDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene utilizzato se, per qualsiasi motivo, il processo di inizializzazione o di serializzazione del controllo ha esito negativo.

Il gestisce *hBlob* e *hBlobDefault* si riferiscono a un blocco di memoria che contiene quanto segue:

- Valore DWORD che contiene la lunghezza, in byte, dei dati binari che seguono, seguita immediatamente da

- Un blocco di memoria contenente i dati binari effettivi.

Si noti `PX_Blob` che la memoria viene allocata tramite l'API di Windows [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) durante il caricamento delle proprietà del tipo di BLOB. L'utente è responsabile della liberazione della memoria. Pertanto, il distruttore del controllo deve chiamare [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree) su qualsiasi handle di proprietà di tipo BLOB per liberare la memoria allocata al controllo.

## <a name="px_bool"></a><a name="px_bool"></a>PX_Bool

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo bool.

```cpp
BOOL PX_Bool(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    BOOL& bValue);

BOOL PX_Bool(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    BOOL& bValue,
    BOOL bDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*bValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*bLivello predefinito*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà verrà letto o scritto nella variabile a cui fa riferimento *bValue*, a seconda dei casi. Se *bLivello predefinito* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_color"></a><a name="px_color"></a>PX_Color

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo OLE_COLOR.

```cpp
BOOL PX_Color(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    OLE_COLOR& clrValue);

BOOL PX_Color(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    OLE_COLOR& clrValue,
    OLE_COLOR clrDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*clrValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*clrDefault*<br/>
Valore predefinito per la proprietà, in base a quanto definito dallo sviluppatore del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà verrà letto o scritto nella variabile a cui fa riferimento *clrValue*, a seconda dei casi. Se *clrDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_currency"></a><a name="px_currency"></a>PX_Currency

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo **Currency**.

```cpp
BOOL PX_Currency(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CY& cyValue);

BOOL PX_Currency(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CY& cyValue,
    CY cyDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*cyValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*cyDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà verrà letto o scritto nella variabile a cui fa riferimento *cyValue*, a seconda dei casi. Se *cyDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_datapath"></a><a name="px_datapath"></a>PX_DataPath

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà del percorso dati di tipo [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md).

```cpp
BOOL PX_DataPath(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CDataPathProperty& dataPathProperty);

BOOL PX_DataPath(
    CPropExchange* pPX,
    CDataPathProperty& dataPathProperty);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*dataPathProperty*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Le proprietà del percorso dati implementano le proprietà del controllo asincrono. Il valore della proprietà verrà letto o scritto nella variabile a cui fa riferimento *dataPathProperty*, a seconda dei casi.

## <a name="px_double"></a><a name="px_double"></a>PX_Double

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo **Double**.

```cpp
BOOL PX_Double(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    double& doubleValue);

BOOL PX_Double(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    double& doubleValue,
    double doubleDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*doubleValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*doubleDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *doubleValue*, a seconda dei casi. Se *doubleDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_font"></a><a name="px_font"></a>PX_Font

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo font.

```cpp
BOOL PX_Font(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CFontHolder& font,
    const FONTDESC FAR* pFontDesc = NULL,
    LPFONTDISP pFontDispAmbient = NULL);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*carattere*<br/>
Riferimento a un `CFontHolder` oggetto che contiene la proprietà del tipo di carattere.

*pFontDesc*<br/>
Puntatore a una `FONTDESC` struttura contenente i valori da utilizzare per inizializzare lo stato predefinito della proprietà del tipo di carattere, nel caso in cui *pFontDispAmbient* è null.

*pFontDispAmbient*<br/>
Puntatore all' `IFontDisp` interfaccia di un tipo di carattere da utilizzare per inizializzare lo stato predefinito della proprietà del tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto in `font`un `CFontHolder` riferimento, quando appropriato. Se vengono specificati *pFontDesc* e *pFontDispAmbient* , vengono usati per inizializzare il valore predefinito della proprietà, quando necessario. Questi valori vengono utilizzati se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo. In genere, viene passato NULL per *pFontDesc* e il valore di ambiente `COleControl::AmbientFont` restituito da per *pFontDispAmbient*. Si noti che l'oggetto Font restituito `COleControl::AmbientFont` da deve essere rilasciato da una chiamata alla `IFontDisp::Release` funzione membro.

## <a name="px_float"></a><a name="px_float"></a>PX_Float

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo **float**.

```cpp
BOOL PX_Float(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    float& floatValue);

BOOL PX_Float(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    float& floatValue,
    float floatDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*floatValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*floatDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *floatValue*, a seconda dei casi. Se *floatDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_iunknown"></a><a name="px_iunknown"></a>PX_IUnknown

Chiamare questa funzione nella funzione membro del `DoPropExchange` controllo per serializzare o inizializzare una proprietà rappresentata da un oggetto `IUnknown`con un'interfaccia derivata da.

```cpp
BOOL PX_IUnknown(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    LPUNKNOWN& pUnk,
    REFIID iid,
    LPUNKNOWN pUnkDefault = NULL);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*pUnk*<br/>
Riferimento a una variabile che contiene l'interfaccia dell'oggetto che rappresenta il valore della proprietà.

*IID*<br/>
ID di interfaccia che indica quale interfaccia dell'oggetto Property viene utilizzata dal controllo.

*pUnkDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *punk*, a seconda dei casi. Se *pUnkDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_long"></a><a name="px_long"></a>PX_Long

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo **Long**.

```cpp
BOOL PX_Long(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    long& lValue);

BOOL PX_Long(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    long& lValue,
    long lDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*lValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*lDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *lvalue*, a seconda dei casi. Se *lDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_picture"></a><a name="px_picture"></a>PX_Picture

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà Picture del controllo.

```cpp
BOOL PX_Picture(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CPictureHolder& pict);

BOOL PX_Picture(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CPictureHolder& pict,
    CPictureHolder& pictDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*PICT*<br/>
Riferimento a un oggetto [CPictureHolder](../../mfc/reference/cpictureholder-class.md) in cui è archiviata la proprietà (in genere una variabile membro della classe).

*pictDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *PICT*, a seconda dei casi. Se *pictDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_short"></a><a name="px_short"></a>PX_Short

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo **short**.

```cpp
BOOL PX_Short(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    short& sValue);

BOOL PX_Short(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    short& sValue,
    short sDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*sValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*sDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *sValue*, a seconda dei casi. Se *sDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_ulong"></a><a name="px_ulong"></a>PX_ULong

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo **ULONG**.

```cpp
BOOL PX_ULong(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    ULONG& ulValue);

BOOL PX_ULong(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    ULONG& ulValue,
    long ulDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*ulValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*ulDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *ulValue*, a seconda dei casi. Se *ulDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_ushort"></a><a name="px_ushort"></a>PX_UShort

Chiamare questa funzione nella funzione `DoPropExchange` membro del controllo per serializzare o inizializzare una proprietà di tipo **unsigned short**.

```cpp
BOOL PX_UShort(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    USHORT& usValue);

BOOL PX_UShort(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    USHORT& usValue,
    USHORT usDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*usValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*usDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *usValue*, a seconda dei casi. Se *usDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="pxstring"></a><a name="px_string"></a>PXstring

Chiamare questa funzione nella funzione membro del `DoPropExchange` controllo per serializzare o inizializzare una proprietà della stringa di caratteri.

```cpp
BOOL PXstring(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CString& strValue);

BOOL PXstring(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CString& strValue,
    CString strDefault);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*pszPropName*<br/>
Nome della proprietà da scambiare.

*strValue*<br/>
Riferimento alla variabile in cui è archiviata la proprietà (in genere una variabile membro della classe).

*strDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto nella variabile a cui fa riferimento *strValue*, a seconda dei casi. Se *strDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

## <a name="px_vbxfontconvert"></a><a name="px_vbxfontconvert"></a>PX_VBXFontConvert

Chiamare questa funzione nella funzione membro del `DoPropExchange` controllo per inizializzare una proprietà del tipo di carattere convertendo le proprietà correlate al tipo di carattere di un controllo VBX.

```cpp
BOOL PX_VBXFontConvert(
    CPropExchange* pPX,
    CFontHolder& font);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore all'oggetto [CPropExchange](../../mfc/reference/cpropexchange-class.md) , in genere passato come parametro a `DoPropExchange`.

*carattere*<br/>
Proprietà del tipo di carattere del controllo OLE che conterrà le proprietà correlate al tipo di carattere VBX convertite.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere utilizzata solo da un controllo OLE progettato come sostituzione diretta per un controllo VBX. Quando l'ambiente di sviluppo Visual Basic converte un form contenente un controllo VBX per l'uso del controllo OLE sostitutivo corrispondente, chiamerà la `IDataObject::SetData` funzione del controllo, passando un set di proprietà che contiene i dati della proprietà del controllo VBX. Questa operazione, a sua volta, determina la chiamata `DoPropExchange` della funzione del controllo. `DoPropExchange`può chiamare `PX_VBXFontConvert` per convertire le proprietà correlate al tipo di carattere del controllo VBX, ad esempio "fontname", "FontSize" e così via, nei componenti corrispondenti della proprietà del tipo di carattere del controllo OLE.

`PX_VBXFontConvert`deve essere chiamato solo quando il controllo è in realtà convertito da un'applicazione VBX form. Ad esempio:

[!code-cpp[NVC_MFCActiveXControl#14](../../mfc/codesnippet/cpp/persistence-of-ole-controls_1.cpp)]
[!code-cpp[NVC_MFCActiveXControl#15](../../mfc/codesnippet/cpp/persistence-of-ole-controls_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
