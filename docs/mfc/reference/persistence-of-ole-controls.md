---
title: Persistenza di controlli OLE
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.macros.ole
helpviewer_keywords:
- OLE controls [MFC], persistence
- persistence, OLE controls
ms.assetid: 64f8dc80-f110-41af-b3ea-14948f6bfdf7
ms.openlocfilehash: e510cdb2ae64b5b3ed5f8b69bc8ad9c22800a167
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50609419"
---
# <a name="persistence-of-ole-controls"></a>Persistenza di controlli OLE

Una funzionalità di controlli OLE è persistenza proprietà (o serializzazione), che consente il controllo OLE leggere o scrivere i valori delle proprietà da e verso un file o flusso. Un'applicazione contenitore può utilizzare la serializzazione per archiviare i valori delle proprietà di un controllo anche dopo l'applicazione ha eliminato il controllo. I valori delle proprietà del controllo OLE possono essere letti dal file o flusso quando una nuova istanza del controllo viene creato in un secondo momento.

### <a name="persistence-of-ole-controls"></a>Persistenza di controlli OLE

|||
|-|-|
|[PX_Blob](#px_blob)|Scambia la proprietà di un controllo che archivia dati binary large object (BLOB).|
|[PX_Bool](#px_bool)|Scambia una proprietà del controllo di tipo **BOOL**.|
|[PX_Color](#px_color)|Scambia una proprietà di colore di un controllo.|
|[PX_Currency](#px_currency)|Scambia una proprietà del controllo di tipo **CY**.|
|[PX_DataPath](#px_datapath)|Scambia una proprietà del controllo del tipo `CDataPathProperty`.|
|[PX_Double](#px_double)|Scambia una proprietà del controllo di tipo **doppie**.|
|[PX_Font](#px_font)|Scambia una proprietà del tipo di carattere di un controllo.|
|[PX_Float](#px_float)|Scambia una proprietà del controllo di tipo **float**.|
|[PX_IUnknown](#px_iunknown)|Scambia una proprietà del controllo del tipo non definito.|
|[PX_Long](#px_long)|Scambia una proprietà del controllo di tipo **lungo**.|
|[PX_Picture](#px_picture)|Scambia una proprietà immagine di un controllo.|
|[PX_Short](#px_short)|Scambia una proprietà del controllo di tipo **breve**.|
|[PX_ULong](#px_ulong)|Scambia una proprietà del controllo di tipo **ULONG**.|
|[PX_UShort](#px_ushort)|Scambia una proprietà del controllo di tipo **USHORT**.|
|[PXstring](#px_string)|Scambia la proprietà di un controllo di stringa di caratteri.|
|[PX_VBXFontConvert](#px_vbxfontconvert)|Scambia le proprietà correlate al carattere di un controllo VBX in una proprietà di tipo di carattere del controllo OLE.|

Inoltre, il `AfxOleTypeMatchGuid` funzione globale viene fornito da testare per trovare una corrispondenza tra un oggetto TYPEDESC e un GUID specifico.

##  <a name="px_blob"></a>  PX_Blob

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per serializzare o inizializzare una proprietà che archivia dati binary large object (BLOB).

```
BOOL PX_Blob(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    HGLOBAL& hBlob,
    HGLOBAL hBlobDefault = NULL);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*hBlob*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*hBlobDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà sarà essere letto o scritto per la variabile fa riferimento *hBlob*, nel modo appropriato. Questa variabile deve essere inizializzata su NULL prima di chiamare inizialmente `PX_Blob` per la prima volta (in genere, questa operazione può essere eseguita nel costruttore del controllo). Se *hBlobDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di inizializzazione o serializzazione del controllo ha esito negativo.

Gli handle *hBlob* e *hBlobDefault* fare riferimento a un blocco di memoria che contiene gli elementi seguenti:

- Un valore DWORD che contiene la lunghezza, espressa in byte, dei dati binari che segue, seguita immediatamente da

- Un blocco di memoria che contiene i dati binari effettivi.

Si noti che `PX_Blob` dovrà allocare memoria, utilizzo di Windows [GlobalAlloc](/windows/desktop/api/winbase/nf-winbase-globalalloc) API, quando il caricamento delle proprietà di tipo BLOB. Si è responsabile della liberazione della memoria. Pertanto, è necessario chiamare il distruttore del controllo [GlobalFree](/windows/desktop/api/winbase/nf-winbase-globalfree) su qualsiasi proprietà di tipo BLOB gestisce per liberare backup quantità di memoria allocata al controllo.

##  <a name="px_bool"></a>  PX_Bool

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per serializzare o inizializzare una proprietà di tipo BOOL.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*bValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*bLivello predefinito*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà sarà essere letto o scritto per la variabile fa riferimento *bValue*, nel modo appropriato. Se *bLivello predefinito* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_color"></a>  PX_Color

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per serializzare o inizializzare una proprietà di tipo OLE_COLOR.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*clrValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*clrDefault*<br/>
Valore predefinito per la proprietà, come definito dallo sviluppatore del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà sarà essere letto o scritto per la variabile fa riferimento *clrValue*, nel modo appropriato. Se *clrDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_currency"></a>  PX_Currency

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà di tipo **valuta**.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*cyValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*cyDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà sarà essere letto o scritto per la variabile fa riferimento *cyValue*, nel modo appropriato. Se *cyDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_datapath"></a>  PX_DataPath

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà di percorso dei dati di tipo [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md).

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*dataPathProperty*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Le proprietà del percorso dati implementano proprietà di controllo asincrono. Il valore della proprietà sarà essere letto o scritto per la variabile fa riferimento *dataPathProperty*, nel modo appropriato.

##  <a name="px_double"></a>  PX_Double

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà di tipo **doppie**.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*doubleValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*doubleDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *doubleValue*, nel modo appropriato. Se *doubleDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_font"></a>  PX_Font

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per serializzare o inizializzare una proprietà del tipo di carattere TrueType.

```
BOOL PX_Font(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    CFontHolder& font,
    const FONTDESC FAR* pFontDesc = NULL,
    LPFONTDISP pFontDispAmbient = NULL);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*tipo di carattere*<br/>
Un riferimento a un `CFontHolder` oggetto che contiene la proprietà del tipo di carattere.

*pFontDesc*<br/>
Un puntatore a un `FONTDESC` struttura contenente i valori da utilizzare per l'inizializzazione di stato predefinito della proprietà del tipo di carattere, nel caso in cui *pFontDispAmbient* è NULL.

*pFontDispAmbient*<br/>
Un puntatore al `IFontDisp` interfaccia di un tipo di carattere da utilizzare per l'inizializzazione di stato predefinito della proprietà del tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà verrà letti da o scritte `font`, un `CFontHolder` fanno riferimento, quando appropriato. Se *pFontDesc* e *pFontDispAmbient* vengono specificati, vengono usati per inizializzare il valore della proprietà predefinita, quando necessario. Questi valori vengono usati se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo. In genere, si passa NULL *pFontDesc* e il valore di ambiente restituito da `COleControl::AmbientFont` per *pFontDispAmbient*. Si noti che l'oggetto del tipo di carattere restituito da `COleControl::AmbientFont` devono essere rilasciati da una chiamata al `IFontDisp::Release` funzione membro.

##  <a name="px_float"></a>  PX_Float

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà di tipo **float**.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*floatValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*floatDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *floatValue*, nel modo appropriato. Se *floatDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_iunknown"></a>  PX_IUnknown

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà rappresentata da un oggetto con un `IUnknown`-interfaccia derivata.

```
BOOL PX_IUnknown(
    CPropExchange* pPX,
    LPCTSTR pszPropName,
    LPUNKNOWN& pUnk,
    REFIID iid,
    LPUNKNOWN pUnkDefault = NULL);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*pUnk*<br/>
Riferimento a una variabile che contiene l'interfaccia dell'oggetto che rappresenta il valore della proprietà.

*IID*<br/>
L'ID di interfaccia che indica quale interfaccia dell'oggetto proprietà viene utilizzata dal controllo.

*pUnkDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *pUnk*, nel modo appropriato. Se *pUnkDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_long"></a>  PX_Long

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà di tipo **lungo**.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*lValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*lDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *lValue*, nel modo appropriato. Se *lDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_picture"></a>  PX_Picture

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per serializzare o inizializzare una proprietà immagine del controllo.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*PICT*<br/>
Fare riferimento a un [CPictureHolder](../../mfc/reference/cpictureholder-class.md) oggetto in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*pictDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *pict*, nel modo appropriato. Se *pictDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_short"></a>  PX_Short

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà di tipo **breve**.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*sValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*sDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *sValue*, nel modo appropriato. Se *sDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_ulong"></a>  PX_ULong

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà di tipo **ULONG**.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Nome della proprietà scambiate.

*ulValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*ulDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *ulValue*, nel modo appropriato. Se *ulDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_ushort"></a>  PX_UShort

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione di membro da serializzare o inizializzare una proprietà di tipo **short senza segno**.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Nome della proprietà scambiate.

*usValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*usDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *usValue*, nel modo appropriato. Se *usDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_string"></a>  PXstring

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per serializzare o inizializzare una proprietà di stringa di caratteri.

```
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
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*pszPropName*<br/>
Il nome della proprietà scambiati.

*strValue*<br/>
Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).

*strDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà viene letto o scritto per la variabile fa riferimento *strValue*, nel modo appropriato. Se *strDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.

##  <a name="px_vbxfontconvert"></a>  PX_VBXFontConvert

Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per inizializzare una proprietà del tipo di carattere convertendo le proprietà correlate al carattere di un controllo VBX.

```
BOOL PX_VBXFontConvert(
    CPropExchange* pPX,
    CFontHolder& font);
```

### <a name="parameters"></a>Parametri

*pPX*<br/>
Puntatore per il [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro al `DoPropExchange`).

*tipo di carattere*<br/>
La proprietà del tipo di carattere del controllo OLE che conterrà le proprietà correlate al carattere VBX convertite.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Questa funzione deve essere utilizzata solo da un controllo OLE che è stato progettato come una sostituzione diretta per un controllo VBX. Quando l'ambiente di sviluppo di Visual Basic consente di convertire un form contenente un controllo VBX per utilizzare la sostituzione corrispondente controllo OLE, chiama il controllo `IDataObject::SetData` funzione passando un set di proprietà che contiene i dati della proprietà del controllo VBX. Questa operazione, a sua volta, fa sì che il controllo `DoPropExchange` funzione da richiamare. `DoPropExchange` può chiamare `PX_VBXFontConvert` per convertire le proprietà correlate al carattere del controllo VBX (ad esempio, "FontName," "FontSize", e così via) nei componenti corrispondenti della proprietà del tipo di carattere del controllo OLE.

`PX_VBXFontConvert` deve essere chiamato solo quando il controllo viene effettivamente convertito da un'applicazione di form VBX. Ad esempio:

[!code-cpp[NVC_MFCActiveXControl#14](../../mfc/codesnippet/cpp/persistence-of-ole-controls_1.cpp)]
[!code-cpp[NVC_MFCActiveXControl#15](../../mfc/codesnippet/cpp/persistence-of-ole-controls_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
