---
title: Mappe di invio
ms.date: 06/20/2018
helpviewer_keywords:
- dispatch maps [MFC], macros
- dispatch maps [MFC]
- dispatch map macros [MFC]
ms.assetid: bef9d08b-ad35-4c3a-99d8-04150c7c04e2
ms.openlocfilehash: 24921f2da404a2e5103d9a3cd2abba03109f0681
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222810"
---
# <a name="dispatch-maps"></a>Mappe di invio

L'automazione OLE fornisce modi per chiamare i metodi e per accedere alle proprietà tra le applicazioni. Il meccanismo fornito dal libreria Microsoft Foundation Class per inviare queste richieste è la "mappa di invio", che designa i nomi interni ed esterni delle funzioni e delle proprietà dell'oggetto, nonché i tipi di dati delle proprietà stesse e degli argomenti della funzione.

|Macro della mappa di invio|Descrizione|
|-|-|
|[DECLARE_DISPATCH_MAP](#declare_dispatch_map)|Dichiara che una mappa di invio verrà utilizzata per esporre i metodi e le proprietà di una classe (è necessario utilizzare nella dichiarazione di classe).|
|[BEGIN_DISPATCH_MAP](#begin_dispatch_map)|Avvia la definizione di una mappa di invio.|
|[END_DISPATCH_MAP](#end_dispatch_map)|Termina la definizione di una mappa di invio.|
|[DISP_FUNCTION](#disp_function)|Utilizzato in una mappa di invio per definire una funzione di automazione OLE.|
|[DISP_PROPERTY](#disp_property)|Definisce una proprietà di automazione OLE.|
|[DISP_PROPERTY_EX](#disp_property_ex)|Definisce una proprietà di automazione OLE e denomina le funzioni Get e set.|
|[DISP_PROPERTY_NOTIFY](#disp_property_notify)|Definisce una proprietà di automazione OLE con notifica.|
|[DISP_PROPERTY_PARAM](#disp_property_param)|Definisce una proprietà di automazione OLE che accetta parametri e denomina le funzioni Get e set.|
|[DISP_DEFVALUE](#disp_defvalue)|Imposta una proprietà esistente come il valore predefinito di un oggetto.|

## <a name="declare_dispatch_map"></a><a name="declare_dispatch_map"></a>DECLARE_DISPATCH_MAP

Se una `CCmdTarget` classe derivata da nel programma supporta l'automazione OLE, tale classe deve fornire una mappa di invio per esporre i metodi e le proprietà.

```cpp
DECLARE_DISPATCH_MAP()
```

### <a name="remarks"></a>Osservazioni

Usare la macro DECLARE_DISPATCH_MAP alla fine della dichiarazione di classe. Quindi, in. File CPP che definisce le funzioni membro per la classe, usare la macro BEGIN_DISPATCH_MAP. Includere quindi le voci della macro per ogni proprietà e metodi esposti della classe (DISP_FUNCTION, DISP_PROPERTY e così via). Usare infine la macro END_DISPATCH_MAP.

> [!NOTE]
> Se si dichiara un membro dopo DECLARE_DISPATCH_MAP, è necessario specificare un nuovo tipo di accesso ( **`public`** , **`private`** o **`protected`** ).

La creazione guidata applicazione e le creazioni guidate codice facilitano la creazione di classi di automazione e la gestione delle mappe di invio. Per ulteriori informazioni sulle mappe di invio, vedere [server di automazione](../../mfc/automation-servers.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#10](../../mfc/codesnippet/cpp/dispatch-maps_1.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="begin_dispatch_map"></a><a name="begin_dispatch_map"></a>BEGIN_DISPATCH_MAP

Dichiara la definizione della mappa di invio.

```cpp
BEGIN_DISPATCH_MAP(theClass, baseClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe a cui appartiene questa mappa di invio.

*baseClass*<br/>
Specifica il nome della classe di base di *theClass*.

### <a name="remarks"></a>Osservazioni

Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa di invio con la macro BEGIN_DISPATCH_MAP, aggiungere voci di macro per ciascuna delle funzioni e delle proprietà di invio e completare la mappa di invio con la macro END_DISPATCH_MAP.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="end_dispatch_map"></a><a name="end_dispatch_map"></a>END_DISPATCH_MAP

Termina la definizione della mappa di invio.

```cpp
END_DISPATCH_MAP()
```

### <a name="remarks"></a>Osservazioni

Deve essere usato insieme a BEGIN_DISPATCH_MAP.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_function"></a><a name="disp_function"></a>DISP_FUNCTION

Definisce una funzione di automazione OLE in una mappa di invio.

```cpp
DISP_FUNCTION(
    theClass,
    pszName,
    pfnMember,
    vtRetVal,
    vtsParams)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*pszName*<br/>
Nome esterno della funzione.

*pfnMember*<br/>
Nome della funzione membro.

*vtRetVal*<br/>
Valore che specifica il tipo restituito della funzione.

*vtsParams*<br/>
Elenco separato da spazi di una o più costanti che specificano l'elenco di parametri della funzione.

### <a name="remarks"></a>Osservazioni

L'argomento *vtRetVal* è di tipo VARTYPE. I valori possibili seguenti per questo argomento sono ricavati dall' `VARENUM` enumerazione:

|Simbolo|Tipo restituito|
|------------|-----------------|
|VT_EMPTY|**`void`**|
|VT_I2|**`short`**|
|VT_I4|**`long`**|
|VT_R4|**`float`**|
|VT_R8|**`double`**|
|VT_CY|CY|
|VT_DATE|DATE|
|VT_BSTR|BSTR|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|BOOL|
|VT_VARIANT|VARIANT|
|VT_UNKNOWN|LPUNKNOWN|

L'argomento *vtsParams* è un elenco di valori separati da spazi delle `VTS_*` costanti. Uno o più valori separati da spazi (non virgole) specificano l'elenco di parametri della funzione. ad esempio:

[!code-cpp[NVC_MFCAutomation#14](../../mfc/codesnippet/cpp/dispatch-maps_2.cpp)]

Specifica un elenco contenente un valore short integer seguito da un puntatore a un valore short integer.

Le `VTS_` costanti e i relativi significati sono i seguenti:

|Simbolo|Tipo di parametro|
|------------|--------------------|
|VTS_I2|**`short`**|
|VTS_I4|**`long`**|
|VTS_R4|**`float`**|
|VTS_R8|**`double`**|
|VTS_CY|`const CY` o `CY*`|
|VTS_DATE|DATE|
|VTS_BSTR|LPCSTR|
|VTS_DISPATCH|LPDISPATCH|
|VTS_SCODE|SCODE|
|VTS_BOOL|BOOL|
|VTS_VARIANT|`const VARIANT*` o `VARIANT&`|
|VTS_UNKNOWN|LPUNKNOWN|
|VTS_PI2|__short\*__|
|VTS_PI4|__long\*__|
|VTS_PR4|__float\*__|
|VTS_PR8|__doppio\*__|
|VTS_PCY|`CY*`|
|VTS_PDATE|`DATE*`|
|VTS_PBSTR|`BSTR*`|
|VTS_PDISPATCH|`LPDISPATCH*`|
|VTS_PSCODE|`SCODE*`|
|VTS_PBOOL|`BOOL*`|
|VTS_PVARIANT|`VARIANT*`|
|VTS_PUNKNOWN|`LPUNKNOWN*`|
|VTS_NONE|Nessun parametro|

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_property"></a><a name="disp_property"></a>DISP_PROPERTY

Definisce una proprietà di automazione OLE in una mappa di invio.

```cpp
DISP_PROPERTY(
    theClass,
    pszName,
    memberName,
    vtPropType)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*pszName*<br/>
Nome esterno della proprietà.

*memberName*<br/>
Nome della variabile membro in cui è archiviata la proprietà.

*vtPropType*<br/>
Valore che specifica il tipo della proprietà.

### <a name="remarks"></a>Osservazioni

L'argomento *vtPropType* è di tipo **VarType**. I valori possibili per questo argomento sono tratti dall'enumerazione VARENUM:

|Simbolo|Tipo di proprietà|
|------------|-----------------------|
|VT_I2|**`short`**|
|VT_I4|**`long`**|
|VT_R4|**`float`**|
|VT_R8|**`double`**|
|VT_CY|CY|
|VT_DATE|DATE|
|VT_BSTR|`CString`|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|BOOL|
|VT_VARIANT|VARIANT|
|VT_UNKNOWN|LPUNKNOWN|

Quando un client esterno modifica la proprietà, il valore della variabile membro specificata da *memberName* cambia; non viene notificata la modifica.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_property_ex"></a><a name="disp_property_ex"></a>DISP_PROPERTY_EX

Definisce una proprietà di automazione OLE e denominare le funzioni utilizzate per ottenere e impostare il valore della proprietà in una mappa di invio.

```cpp
DISP_PROPERTY_EX(
    theClass,
    pszName,
    memberGet,
    memberSet,
    vtPropType)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*pszName*<br/>
Nome esterno della proprietà.

*memberGet*<br/>
Nome della funzione membro utilizzata per ottenere la proprietà.

*memberSet*<br/>
Nome della funzione membro utilizzata per impostare la proprietà.

*vtPropType*<br/>
Valore che specifica il tipo della proprietà.

### <a name="remarks"></a>Osservazioni

Le funzioni *memberGet* e *membert* hanno le firme determinate dall'argomento *vtPropType* . La funzione *memberGet* non accetta argomenti e restituisce un valore del tipo specificato da *vtPropType*. La funzione *membert* accetta un argomento del tipo specificato da *vtPropType* e non restituisce alcun valore.

L'argomento *vtPropType* è di tipo VARTYPE. I valori possibili per questo argomento sono tratti dall'enumerazione VARENUM. Per un elenco di questi valori, vedere la sezione Osservazioni per il parametro *vtRetVal* in [DISP_FUNCTION](#disp_function). Si noti che VT_EMPTY, elencato nella DISP_FUNCTION osservazioni, non è consentito come tipo di dati della proprietà.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_property_notify"></a><a name="disp_property_notify"></a>DISP_PROPERTY_NOTIFY

Definisce una proprietà di automazione OLE con notifica in una mappa di invio.

```cpp
DISP_PROPERTY_NOTIFY(
    theClass,
    szExternalName,
    memberName,
    pfnAfterSet,
    vtPropType)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*szExternalName*<br/>
Nome esterno della proprietà.

*memberName*<br/>
Nome della variabile membro in cui è archiviata la proprietà.

*pfnAfterSet*<br/>
Nome della funzione di notifica per *szExternalName*.

*vtPropType*<br/>
Valore che specifica il tipo della proprietà.

### <a name="remarks"></a>Osservazioni

Diversamente dalle proprietà definite con DISP_PROPERTY, una proprietà definita con DISP_PROPERTY_NOTIFY chiamerà automaticamente la funzione specificata da *pfnAfterSet* quando la proprietà viene modificata.

L'argomento *vtPropType* è di tipo VARTYPE. I valori possibili per questo argomento sono tratti dall'enumerazione VARENUM:

|Simbolo|Tipo di proprietà|
|------------|-----------------------|
|VT_I2|**`short`**|
|VT_I4|**`long`**|
|VT_R4|**`float`**|
|VT_R8|**`double`**|
|VT_CY|CY|
|VT_DATE|DATE|
|VT_BSTR|`CString`|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|BOOL|
|VT_VARIANT|VARIANT|
|VT_UNKNOWN|LPUNKNOWN|

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_property_param"></a><a name="disp_property_param"></a>DISP_PROPERTY_PARAM

Definisce una proprietà a cui si accede con `Get` `Set` funzioni membro e separate.

```cpp
DISP_PROPERTY_PARAM(
    theClass,
    pszExternalName,
    pfnGet,
    pfnSet,
    vtPropType,
    vtsParams)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*pszExternalName*<br/>
Nome esterno della proprietà.

*pfnGet*<br/>
Nome della funzione membro utilizzata per ottenere la proprietà.

*pfnSet*<br/>
Nome della funzione membro utilizzata per impostare la proprietà.

*vtPropType*<br/>
Valore che specifica il tipo della proprietà.

*vtsParams*<br/>
Stringa di `VTS_*` tipi di parametro VARIANT separati da spazi, uno per ogni parametro.

### <a name="remarks"></a>Osservazioni

A differenza della macro DISP_PROPERTY_EX, questa macro consente di specificare un elenco di parametri per la proprietà. Questa operazione è utile per l'implementazione di proprietà indicizzate o con parametri.

### <a name="example"></a>Esempio

Si consideri la seguente dichiarazione di funzioni membro get e set che consentono all'utente di richiedere una riga e una colonna specifiche durante l'accesso alla proprietà:

[!code-cpp[NVC_MFCActiveXControl#9](../../mfc/codesnippet/cpp/dispatch-maps_3.h)]

Questi corrispondono alla seguente DISP_PROPERTY_PARAM macro nella mappa di invio del controllo:

[!code-cpp[NVC_MFCActiveXControl#10](../../mfc/codesnippet/cpp/dispatch-maps_4.cpp)]

Come altro esempio, prendere in considerazione le funzioni membro get e set seguenti:

[!code-cpp[NVC_MFCActiveXControl#11](../../mfc/codesnippet/cpp/dispatch-maps_5.h)]

Questi corrispondono alla seguente DISP_PROPERTY_PARAM macro nella mappa di invio del controllo:

[!code-cpp[NVC_MFCActiveXControl#12](../../mfc/codesnippet/cpp/dispatch-maps_6.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_defvalue"></a><a name="disp_defvalue"></a>DISP_DEFVALUE

Imposta una proprietà esistente come il valore predefinito di un oggetto.

```cpp
DISP_DEFVALUE(theClass, pszName)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*pszName*<br/>
Nome esterno della proprietà che rappresentata il "valore" dell'oggetto.

### <a name="remarks"></a>Osservazioni

L'utilizzo di un valore predefinito può rendere più facile la programmazione dell'oggetto di automazione per le applicazioni Visual Basic.

Il "valore predefinito" dell'oggetto è la proprietà che viene recuperata o impostata quando un riferimento a un oggetto non specifica una proprietà o una funzione membro.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
