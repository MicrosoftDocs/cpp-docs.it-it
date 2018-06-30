---
title: Mappe di invio | Documenti Microsoft
ms.custom: ''
ms.date: 06/20/2018
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros.maps
dev_langs:
- C++
helpviewer_keywords:
- dispatch maps [MFC], macros
- dispatch maps [MFC]
- dispatch map macros [MFC]
ms.assetid: bef9d08b-ad35-4c3a-99d8-04150c7c04e2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 107dba503c11d3810f75dcd4ee6e6f5af47008fc
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122980"
---
# <a name="dispatch-maps"></a>Mappe di invio

Automazione OLE fornisce metodi per chiamare i metodi e accedere alle proprietà tra le applicazioni. Il meccanismo fornito dalla libreria Microsoft Foundation Class per l'invio di tali richieste è "mappa di invio," che indica i nomi interni ed esterni di funzioni di oggetti e proprietà, nonché i tipi di dati delle proprietà se stessi e di argomenti della funzione.

|Macro della mappa di invio|Descrizione|
|-|-|
|[DECLARE_DISPATCH_MAP](#declare_dispatch_map)|Dichiara che una mappa di invio consentirà di espongono metodi e proprietà (deve essere utilizzato nella dichiarazione di classe) di una classe.|
|[BEGIN_DISPATCH_MAP](#begin_dispatch_map)|Inizia la definizione di una mappa di invio.|
|[END_DISPATCH_MAP](#end_dispatch_map)|Termina la definizione di una mappa di invio.|
|[DISP_FUNCTION](#disp_function)|Usato in una mappa di invio per definire una funzione di automazione OLE.|
|[DISP_PROPERTY](#disp_property)|Definisce una proprietà di automazione OLE.|
|[DISP_PROPERTY_EX](#disp_property_ex)|Definisce una proprietà di automazione OLE e le funzioni Get e Set di nomi.|
|[DISP_PROPERTY_NOTIFY](#disp_property_notify)|Definisce una proprietà di automazione OLE con la notifica.|
|[DISP_PROPERTY_PARAM](#disp_property_param)|Definisce una proprietà di automazione OLE che accetta parametri e i nomi di funzioni Get e Set.|
|[DISP_DEFVALUE](#disp_defvalue)|Imposta una proprietà esistente come il valore predefinito di un oggetto.|

## <a name="declare_dispatch_map"></a>  DECLARE_DISPATCH_MAP

Se un `CCmdTarget`-classe derivata nel programma supporta l'automazione OLE, che classe deve fornire una mappa di invio per esporre i relativi metodi e proprietà.

```cpp
DECLARE_DISPATCH_MAP()
```

### <a name="remarks"></a>Note

Usare la macro DECLARE_DISPATCH_MAP alla fine della dichiarazione di classe. Quindi, nel. I file CPP che definisce le funzioni membro per la classe, usare la macro BEGIN_DISPATCH_MAP. Quindi includere le voci di macro per ognuno dei metodi esposti della classe e proprietà (DISP_FUNCTION, DISP_PROPERTY e così via). Infine, utilizzare END_DISPATCH_MAP (macro).

> [!NOTE]
> Se si dichiara alcun membro dopo DECLARE_DISPATCH_MAP, è necessario specificare un nuovo tipo di accesso ( **pubblico**, **privato**, o **protetto**) per essi.

Le procedure guidate Creazione guidata applicazione e il codice assistere nella creazione di classi di automazione e gestione delle mappe di invio. Per ulteriori informazioni sulle mappe di invio, vedere [server di automazione](../../mfc/automation-servers.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#10](../../mfc/codesnippet/cpp/dispatch-maps_1.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="begin_dispatch_map"></a>  BEGIN_DISPATCH_MAP

Dichiara la definizione della mappa del recapito.

```cpp
BEGIN_DISPATCH_MAP(theClass, baseClass)
```

### <a name="parameters"></a>Parametri

*theClass*  
Specifica il nome della classe cui appartiene questa mappa di invio.

*baseClass*  
Specifica il nome della classe base *theClass*.

### <a name="remarks"></a>Note

Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa di invio con BEGIN_DISPATCH_MAP (macro), aggiungere le voci di macro per ciascuna delle funzioni di recapito e le proprietà e completare la mappa di invio con l'END_DISPATCH_ Macro della mappa.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="end_dispatch_map"></a>  END_DISPATCH_MAP

Termina la definizione della mappa del recapito.

```cpp
END_DISPATCH_MAP()
```

### <a name="remarks"></a>Note

Deve essere utilizzata in combinazione con BEGIN_DISPATCH_MAP.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_function"></a>  DISP_FUNCTION

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

*theClass*  
Nome della classe.

*pszName*  
Nome esterno della funzione.

*pfnMember*  
Nome della funzione membro.

*vtRetVal*  
Un valore che specifica il tipo restituito dalla funzione.

*vtsParams*  
Un elenco di uno o più costanti che specifica l'elenco di parametri funzione separati da spazi.

### <a name="remarks"></a>Note

Il *vtRetVal* argomento è di tipo VARTYPE. I valori possibili seguenti per questo argomento vengono prelevati i `VARENUM` enumerazione:

|Simbolo|Tipo restituito|
|------------|-----------------|
|VT_EMPTY|**void**|
|VT_I2|**short**|
|VT_I4|**long**|
|VT_R4|**float**|
|VT_R8|**double**|
|VT_CY|CY|
|VT_DATE|DATE|
|VT_BSTR|BSTR|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|BOOL|
|VT_VARIANT|VARIANT|
|VT_UNKNOWN|LPUNKNOWN|

Il *vtsParams* argomento è un elenco di valori separati da spazi di `VTS_*` costanti. Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco di parametri della funzione. Ad esempio,

[!code-cpp[NVC_MFCAutomation#14](../../mfc/codesnippet/cpp/dispatch-maps_2.cpp)]

Specifica un elenco contenente un valore short integer seguito da un puntatore a un valore short integer.

Il `VTS_` costanti e i relativi significati sono i seguenti:

|Simbolo|tipo di parametro|
|------------|--------------------|
|VTS_I2|**short**|
|VTS_I4|**long**|
|VTS_R4|**float**|
|VTS_R8|**double**|
|VTS_CY|`const CY` o `CY*`|
|VTS_DATE|DATE|
|VTS_BSTR|LPCSTR|
|VTS_DISPATCH|LPDISPATCH|
|VTS_SCODE|SCODE|
|VTS_BOOL|BOOL|
|VTS_VARIANT|`const VARIANT*` o `VARIANT&`|
|VTS_UNKNOWN|LPUNKNOWN|
|VTS_PI2|__short\*__|
|VTS_PI4|__Long\*__|
|VTS_PR4|__float\*__|
|VTS_PR8|__Double\*__|
|VTS_PCY|`CY*`|
|VTS_PDATE|`DATE*`|
|VTS_PBSTR|`BSTR*`|
|VTS_PDISPATCH|`LPDISPATCH*`|
|VTS_PSCODE|`SCODE*`|
|VTS_PBOOL|`BOOL*`|
|VTS_PVARIANT|`VARIANT*`|
|VTS_PUNKNOWN|`LPUNKNOWN*`|
|VTS_NONE|Senza parametri|

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_property"></a>  DISP_PROPERTY

Definisce una proprietà di automazione OLE in una mappa di invio.

```cpp
DISP_PROPERTY(
  theClass,
  pszName,
  memberName,
  vtPropType)
```

### <a name="parameters"></a>Parametri

*theClass*  
Nome della classe.

*pszName*  
Nome esterno della proprietà.

*nome membro*  
Nome della variabile membro in cui la proprietà viene archiviata.

*vtPropType*  
Un valore che specifica il tipo della proprietà.

### <a name="remarks"></a>Note

Il *vtPropType* argomento è di tipo **VARTYPE**. I valori possibili per questo argomento vengono estratti dall'enumerazione VARENUM:

|Simbolo|Tipo di proprietà|
|------------|-----------------------|
|VT_I2|**short**|
|VT_I4|**long**|
|VT_R4|**float**|
|VT_R8|**double**|
|VT_CY|CY|
|VT_DATE|DATE|
|VT_BSTR|`CString`|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|BOOL|
|VT_VARIANT|VARIANT|
|VT_UNKNOWN|LPUNKNOWN|

Quando un client esterno cambia la proprietà, il valore della variabile membro specificato da *memberName* cambia; è presente alcuna notifica della modifica.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_property_ex"></a>  DISP_PROPERTY_EX

Definisce le funzioni utilizzate per ottenere e impostare il valore della proprietà in una mappa di invio di una proprietà di automazione OLE e al nome.

```cpp
DISP_PROPERTY_EX(
  theClass,
  pszName,
  memberGet,
  memberSet,
  vtPropType)
```

### <a name="parameters"></a>Parametri

*theClass*  
Nome della classe.

*pszName*  
Nome esterno della proprietà.

*memberGet*  
Nome della funzione di membro utilizzata per ottenere la proprietà.

*set di membri*  
Nome della funzione membro utilizzata per impostare la proprietà.

*vtPropType*  
Un valore che specifica il tipo della proprietà.

### <a name="remarks"></a>Note

Il *memberGet* e *memberSet* funzioni hanno firme determinate dal *vtPropType* argomento. Il *memberGet* funzione non accetta argomenti e restituisce un valore del tipo specificato da *vtPropType*. Il *memberSet* funzione accetta un argomento di tipo specificato dal *vtPropType* e non restituisce nulla.

Il *vtPropType* argomento è di tipo VARTYPE. I valori possibili per questo argomento provengono dall'enumerazione VARENUM. Per un elenco di questi valori, vedere la sezione Osservazioni per il *vtRetVal* parametro [DISP_FUNCTION](#disp_function). Si noti che VT_EMPTY, elencati nella sezione Osservazioni DISP_FUNCTION non è consentito come tipo di dati di proprietà.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_property_notify"></a>  DISP_PROPERTY_NOTIFY

Definisce una proprietà di automazione OLE con la notifica in una mappa di invio.

```cpp
DISP_PROPERTY_NOTIFY(
  theClass,
  szExternalName,
  memberName,
  pfnAfterSet,
  vtPropType)
```

### <a name="parameters"></a>Parametri

*theClass*  
Nome della classe.

*szExternalName*  
Nome esterno della proprietà.

*nome membro*  
Nome della variabile membro in cui la proprietà viene archiviata.

*pfnAfterSet*  
Nome della funzione per la notifica *szExternalName*.

*vtPropType*  
Un valore che specifica il tipo della proprietà.

### <a name="remarks"></a>Note

A differenza delle proprietà definite con DISP_PROPERTY, una proprietà definita con DISP_PROPERTY_NOTIFY chiama automaticamente la funzione specificata da *pfnAfterSet* quando la proprietà viene modificata.

Il *vtPropType* argomento è di tipo VARTYPE. I valori possibili per questo argomento vengono estratti dall'enumerazione VARENUM:

|Simbolo|Tipo di proprietà|
|------------|-----------------------|
|VT_I2|**short**|
|VT_I4|**long**|
|VT_R4|**float**|
|VT_R8|**double**|
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

## <a name="disp_property_param"></a>  DISP_PROPERTY_PARAM

Definisce una proprietà accessibile con separato `Get` e `Set` funzioni membro.

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

*theClass*  
Nome della classe.

*pszExternalName*  
Nome esterno della proprietà.

*pfnGet*  
Nome della funzione di membro utilizzata per ottenere la proprietà.

*pfnSet*  
Nome della funzione membro utilizzata per impostare la proprietà.

*vtPropType*  
Un valore che specifica il tipo della proprietà.

*vtsParams*  
Una stringa di separati da spazi `VTS_*` i tipi di parametri varianti, uno per ogni parametro.

### <a name="remarks"></a>Note

A differenza di DISP_PROPERTY_EX (macro), questa macro consente di specificare un elenco di parametri per la proprietà. Ciò è utile per l'implementazione di proprietà indicizzate o con parametri.

### <a name="example"></a>Esempio

Si consideri la seguente dichiarazione di get e membro del set di funzioni che consentono all'utente richiedere una riga e colonna specifiche durante l'accesso alla proprietà:

[!code-cpp[NVC_MFCActiveXControl#9](../../mfc/codesnippet/cpp/dispatch-maps_3.h)]

Questi corrispondono per la macro DISP_PROPERTY_PARAM seguente nella mappa di invio del controllo:

[!code-cpp[NVC_MFCActiveXControl#10](../../mfc/codesnippet/cpp/dispatch-maps_4.cpp)]

Ad esempio, si consideri il seguente get e membro del set di funzioni:

[!code-cpp[NVC_MFCActiveXControl#11](../../mfc/codesnippet/cpp/dispatch-maps_5.h)]

Questi corrispondono per la macro DISP_PROPERTY_PARAM seguente nella mappa di invio del controllo:

[!code-cpp[NVC_MFCActiveXControl#12](../../mfc/codesnippet/cpp/dispatch-maps_6.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="disp_defvalue"></a>  DISP_DEFVALUE

Imposta una proprietà esistente come il valore predefinito di un oggetto.

```cpp
DISP_DEFVALUE(theClass, pszName)
```

### <a name="parameters"></a>Parametri

*theClass*  
Nome della classe.

*pszName*  
Nome esterno della proprietà che rappresentata il "valore" dell'oggetto.

### <a name="remarks"></a>Note

L'utilizzo di un valore predefinito può rendere più facile la programmazione dell'oggetto di automazione per le applicazioni Visual Basic.

Il "valore predefinito" dell'oggetto è la proprietà che viene recuperata o impostata quando un riferimento a un oggetto non specifica una proprietà o una funzione membro.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)  
