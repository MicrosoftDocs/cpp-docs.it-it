---
title: Mappe eventi
ms.date: 06/20/2018
f1_keywords:
- vc.mfc.macros.maps
helpviewer_keywords:
- event maps [MFC]
ms.assetid: 1ed53aee-bc53-43cd-834a-6fb935c0d29b
ms.openlocfilehash: 512170d7eaa891b3616ca1ea56c29a8bb5cccda9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492238"
---
# <a name="event-maps"></a>Mappe eventi

Ogni volta che un controllo deve notificare al relativo contenitore che si è verificata un'azione (determinata dallo sviluppatore del controllo), quale ad esempio la pressione di un tasto, il clic del mouse o una modifica allo stato del controllo, il controllo chiama una funzione che genera eventi. Questa funzione notifica al contenitore del controllo che si è verificata un'azione importante tramite la generazione dell'evento correlato.

La libreria Microsoft Foundation Class offre un modello ottimizzato di programmazione per generare gli eventi. In questo modello, le "mappe eventi" vengono utilizzate per designare per un determinato controllo quali funzioni generano quali eventi. Le mappe eventi contengono una macro per ogni evento. Ad esempio, una mappa evento che genera un evento Click predefinito potrebbe presentarsi nel seguente modo:

[!code-cpp[NVC_MFCAxCtl#16](../../mfc/reference/codesnippet/cpp/event-maps_1.cpp)]

Il `EVENT_STOCK_CLICK` macro indica che il controllo genera un evento ogni volta che rileva un mouse fare clic su Click. Per un elenco più dettagliato di altri eventi predefiniti, vedere l'articolo [controlli ActiveX: eventi](../../mfc/mfc-activex-controls-events.md). Le macro sono inoltre disponibili per indicare eventi personalizzati.

Sebbene le macro di mapping degli eventi siano importanti, in genere non vengono inserite direttamente. Questo perché la finestra Proprietà crea automaticamente nei file sorgente le voci di mapping degli eventi quando la si utilizza per associare funzioni che generano eventi ad eventi. Ogni qualvolta si desidera modificare o aggiungere una voce di mapping degli eventi, è possibile utilizzare la finestra Proprietà.

Per supportare le mappe eventi, MFC fornisce le seguenti macro:

## <a name="event-map-macros"></a>Macro della mappa eventi

### <a name="event-map-declaration-and-demarcation"></a>Dichiarazione e delimitazione della mappa eventi

|||
|-|-|
|[DECLARE_EVENT_MAP](#declare_event_map)|Consente di dichiarare che una mappa eventi verrà utilizzata in una classe per eseguire il mapping degli eventi alle funzioni che generano eventi (deve essere utilizzata nella dichiarazione di classe).|
|[BEGIN_EVENT_MAP](#begin_event_map)|Consente di iniziare la definizione di una mappa eventi (che sarà utilizzata nell'implementazione della classe).|
|[END_EVENT_MAP](#end_event_map)|Consente di finire la definizione di una mappa eventi (che sarà utilizzata nell'implementazione della classe).|

### <a name="event-mapping-macros"></a>Macro per il mapping degli eventi

|||
|-|-|
|[EVENT_CUSTOM](#event_custom)|Indica quale funzione che genera eventi genererà l'evento specificato.|
|[EVENT_CUSTOM_ID](#event_custom_id)|Indica quale funzione che genera eventi genererà l'evento specificato, con un ID invio designato.|

### <a name="message-mapping-macros"></a>Macro per il mapping di messaggi

|||
|-|-|
|[ON_OLEVERB](#on_oleverb)|Indica un verbo personalizzato gestito dal controllo OLE.|
|[ON_STDOLEVERB](#on_stdoleverb)|Consente di eseguire l'override di un mapping dei verbi standard del controllo OLE.|

##  <a name="declare_event_map"></a>  DECLARE_EVENT_MAP

Ogni `COleControl`-classe derivata in un programma può fornire una mappa eventi per specificare gli eventi viene attivato il controllo.

```cpp
DECLARE_EVENT_MAP()
```

### <a name="remarks"></a>Note

Usare declare_event_map (macro) alla fine della dichiarazione di classe. Quindi, nel file con estensione cpp che definisce le funzioni membro della classe, usare il BEGIN_EVENT_MAP (macro), le voci di macro per ognuno degli eventi del controllo ed end_event_map (macro) per dichiarare la fine dell'elenco di eventi.

Per altre informazioni sulle mappe eventi, vedere l'articolo [controlli ActiveX: eventi](../../mfc/mfc-activex-controls-events.md).

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

## <a name="begin_event_map"></a>  BEGIN_EVENT_MAP

Inizia la definizione della mappa eventi.

```cpp
BEGIN_EVENT_MAP(theClass,  baseClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe del controllo cui evento eseguire il mapping.

*baseClass*<br/>
Specifica il nome della classe di base *theClass*.

### <a name="remarks"></a>Note

Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa di eventi con BEGIN_EVENT_MAP (macro), quindi aggiungere le voci di macro per ognuno degli eventi e completare la mappa di eventi con end_event_map (macro).

Per altre informazioni su mappe eventi e BEGIN_EVENT_MAP (macro), vedere l'articolo [controlli ActiveX: eventi](../../mfc/mfc-activex-controls-events.md).

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

##  <a name="end_event_map"></a>  END_EVENT_MAP

Consente di terminare la definizione della mappa eventi end_event_map (macro).

```cpp
END_EVENT_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

## <a name="event_custom"></a>  EVENT_CUSTOM

Definisce una voce di mapping degli eventi per un evento personalizzato.

```cpp
EVENT_CUSTOM(pszName, pfnFire,  vtsParams)
```

### <a name="parameters"></a>Parametri

*pszName*<br/>
Nome dell'evento.

*pfnFire*<br/>
Il nome della funzione la generazione di eventi.

*vtsParams*<br/>
Elenco delimitato da spazi di una o più costanti che specifica l'elenco di parametri funzione.

### <a name="remarks"></a>Note

Il *vtsParams* parametro è un elenco delimitato da spazi di valori dal `VTS_` costanti. Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco dei parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCActiveXControl#13](../../mfc/codesnippet/cpp/event-maps_2.cpp)]

Specifica valore, seguita da un puntatore a un elenco che contiene un intero a 32 bit che rappresenta un RGB dei colori di `IFontDisp` interfaccia dell'oggetto font OLE.

Il `VTS_` costanti e i relativi significati sono i seguenti:

|Simbolo|Tipo di parametro|
|------------|--------------------|
|VTS_I2|**short**|
|VTS_I4|**long**|
|VTS_R4|**float**|
|VTS_R8|**double**|
|VTS_COLOR|OLE_COLOR|
|VTS_CY|VALUTA|
|VTS_DATE|DATE|
|VTS_BSTR|**const** __char\*__|
|VTS_DISPATCH|LPDISPATCH|
|VTS_FONT|`IFontDispatch*`|
|VTS_HANDLE|HANDLE|
|VTS_SCODE|SCODE|
|VTS_BOOL|BOOL|
|VTS_VARIANT|`const VARIANT*`|
|VTS_PVARIANT|`VARIANT*`|
|VTS_UNKNOWN|LPUNKNOWN|
|VTS_OPTEXCLUSIVE|OLE_OPTEXCLUSIVE|
|VTS_PICTURE|`IPictureDisp*`|
|VTS_TRISTATE|OLE_TRISTATE|
|VTS_XPOS_PIXELS|OLE_XPOS_PIXELS|
|VTS_YPOS_PIXELS|OLE_YPOS_PIXELS|
|VTS_XSIZE_PIXELS|OLE_XSIZE_PIXELS|
|VTS_YSIZE_PIXELS|OLE_YSIZE_PIXELS|
|TS_XPOS_HIMETRIC|OLE_XPOS_HIMETRIC|
|VTS_YPOS_HIMETRIC|OLE_YPOS_HIMETRIC|
|VTS_XSIZE_HIMETRIC|OLE_XSIZE_HIMETRIC|
|VTS_YSIZE_HIMETRIC|OLE_YSIZE_HIMETRIC|

> [!NOTE]
> Costanti variante aggiuntive sono state definite per tutti i tipi varianti, fatta eccezione per VTS_FONT e VTS_PICTURE, che offrono un puntatore alla costante di dati variant. Queste costanti vengono denominate usando il `VTS_Pconstantname` convenzione. Ad esempio, VTS_PCOLOR è un puntatore a un VTS_COLOR (costante).

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

## <a name="event_custom_id"></a>  EVENT_CUSTOM_ID

Definisce un evento per un evento personalizzato che appartengono all'ID dispatch specificato dalla funzione di generazione *dispid*.

```cpp
EVENT_CUSTOM_ID(
  pszName,
  dispid,
  pfnFire,
  vtsParams)
```

### <a name="parameters"></a>Parametri

*pszName*<br/>
Nome dell'evento.

*DISPID*<br/>
ID dispatch utilizzato dal controllo quando viene attivato l'evento.

*pfnFire*<br/>
Il nome della funzione la generazione di eventi.

*vtsParams*<br/>
Un elenco di variabili dei parametri passati al contenitore del controllo quando viene generato l'evento.

### <a name="remarks"></a>Note

Il *vtsParams* argomento è un elenco delimitato da spazi di valori dal `VTS_` costanti. Uno o più di questi valori separati da spazi, virgole non, specifica l'elenco dei parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCActiveXControl#13](../../mfc/codesnippet/cpp/event-maps_2.cpp)]

Specifica valore, seguita da un puntatore a un elenco che contiene un intero a 32 bit che rappresenta un RGB dei colori di `IFontDisp` interfaccia dell'oggetto font OLE.

Per un elenco del `VTS_` costanti, vedere [EVENT_CUSTOM](#event_custom).

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

## <a name="on_oleverb"></a>  ON_OLEVERB

Questa macro definisce una voce della mappa messaggi che esegue il mapping di un verbo personalizzato a una funzione membro specifico del controllo.

```cpp
ON_OLEVERB(idsVerbName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*idsVerbName*<br/>
L'ID di risorsa di stringa del nome del verbo.

*memberFxn*<br/>
La funzione chiamata dal framework quando il verbo viene richiamato.

### <a name="remarks"></a>Note

L'editor di risorse utilizzabile per creare nomi di verbi personalizzati che vengono aggiunti alla tabella di stringhe.

Il prototipo di funzione *memberFxn* è:

```cpp
BOOL memberFxn(
   LPMSG    lpMsg,
   HWND     hWndParent,
   LPCRECT  lpRect);
```

I valori del *lpMsg*, *hWndParent*, e *lpRect* parametri provengono dai parametri corrispondenti del `IOleObject::DoVerb` funzione membro.

### <a name="requirements"></a>Requisiti

**Intestazione** AFXOLE. h

## <a name="on_stdoleverb"></a>  ON_STDOLEVERB

Usare questa macro per eseguire l'override del comportamento predefinito di un verbo standard.

```cpp
ON_STDOLEVERB(iVerb, memberFxn)
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
L'indice di un verbo standard per il verbo da sottoporre a override.

*memberFxn*<br/>
La funzione chiamata dal framework quando il verbo viene richiamato.

### <a name="remarks"></a>Note

L'indice del verbo standard è nel formato `OLEIVERB_`, seguita da un'azione. OLEIVERB_SHOW OLEIVERB_HIDE e OLEIVERB_UIACTIVATE sono riportati alcuni esempi di verbi standard.

Visualizzare [ON_OLEVERB](#on_oleverb) per una descrizione del prototipo di funzione da utilizzare come il *memberFxn* parametro.

### <a name="requirements"></a>Requisiti

**Intestazione** AFXOLE. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
