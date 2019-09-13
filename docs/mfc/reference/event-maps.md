---
title: Mappe eventi
ms.date: 09/07/2019
helpviewer_keywords:
- event maps [MFC]
ms.assetid: 1ed53aee-bc53-43cd-834a-6fb935c0d29b
ms.openlocfilehash: 34741dc05efe77c0932343739540370f54db6008
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907900"
---
# <a name="event-maps"></a>Mappe eventi

Ogni volta che un controllo deve notificare al relativo contenitore che si è verificata un'azione (determinata dallo sviluppatore del controllo), quale ad esempio la pressione di un tasto, il clic del mouse o una modifica allo stato del controllo, il controllo chiama una funzione che genera eventi. Questa funzione notifica al contenitore del controllo che si è verificata un'azione importante tramite la generazione dell'evento correlato.

La libreria Microsoft Foundation Class offre un modello ottimizzato di programmazione per generare gli eventi. In questo modello, le "mappe eventi" vengono utilizzate per designare per un determinato controllo quali funzioni generano quali eventi. Le mappe eventi contengono una macro per ogni evento. Ad esempio, una mappa evento che genera un evento Click predefinito potrebbe presentarsi nel seguente modo:

[!code-cpp[NVC_MFCAxCtl#16](../../mfc/reference/codesnippet/cpp/event-maps_1.cpp)]

La `EVENT_STOCK_CLICK` macro indica che il controllo genererà un evento Click di inventario ogni volta che viene rilevato un clic del mouse. Per un elenco più dettagliato di altri eventi azionari, vedere l'articolo [controlli ActiveX: Eventi](../../mfc/mfc-activex-controls-events.md). Le macro sono inoltre disponibili per indicare eventi personalizzati.

Sebbene le macro di mapping degli eventi siano importanti, in genere non vengono inserite direttamente. Ciò è dovuto al fatto che la finestra **Proprietà** (in **Visualizzazione classi**) crea automaticamente voci della mappa eventi nei file di origine quando viene usata per associare funzioni di generazione di eventi agli eventi. Ogni volta che si desidera modificare o aggiungere una voce della mappa eventi, è possibile utilizzare la finestra **Proprietà** .

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

Ogni `COleControl`classe derivata da nel programma può fornire una mappa eventi per specificare gli eventi che il controllo deve generare.

```cpp
DECLARE_EVENT_MAP()
```

### <a name="remarks"></a>Note

Usare la macro DECLARE_EVENT_MAP alla fine della dichiarazione di classe. Quindi, nel file con estensione cpp che definisce le funzioni membro per la classe, usare la macro BEGIN_EVENT_MAP, le voci della macro per ogni evento del controllo e la macro END_EVENT_MAP per dichiarare la fine dell'elenco di eventi.

Per ulteriori informazioni sulle mappe eventi, vedere l'articolo [controlli ActiveX: Eventi](../../mfc/mfc-activex-controls-events.md).

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

## <a name="begin_event_map"></a>  BEGIN_EVENT_MAP

Inizia la definizione della mappa eventi.

```cpp
BEGIN_EVENT_MAP(theClass,  baseClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe del controllo il cui mapping dell'evento è.

*baseClass*<br/>
Specifica il nome della classe di base di *theClass*.

### <a name="remarks"></a>Note

Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa eventi con la macro BEGIN_EVENT_MAP, quindi aggiungere le voci della macro per ogni evento e completare la mappa eventi con la macro END_EVENT_MAP.

Per ulteriori informazioni sulle mappe eventi e la macro BEGIN_EVENT_MAP, vedere l'articolo [controlli ActiveX: Eventi](../../mfc/mfc-activex-controls-events.md).

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

##  <a name="end_event_map"></a>  END_EVENT_MAP

Usare la macro END_EVENT_MAP per terminare la definizione della mappa eventi.

```cpp
END_EVENT_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

## <a name="event_custom"></a>  EVENT_CUSTOM

Definisce una voce della mappa eventi per un evento personalizzato.

```cpp
EVENT_CUSTOM(pszName, pfnFire,  vtsParams)
```

### <a name="parameters"></a>Parametri

*pszName*<br/>
Nome dell'evento.

*pfnFire*<br/>
Nome della funzione di generazione eventi.

*vtsParams*<br/>
Elenco separato da spazi di una o più costanti che specificano l'elenco di parametri della funzione.

### <a name="remarks"></a>Note

Il parametro *vtsParams* è un elenco di valori separati da `VTS_` spazi delle costanti. Uno o più valori separati da spazi (non virgole) specificano l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCActiveXControl#13](../../mfc/codesnippet/cpp/event-maps_2.cpp)]

Specifica un elenco contenente un intero a 32 bit che rappresenta un valore di colore RGB, seguito da un puntatore `IFontDisp` all'interfaccia di un oggetto del tipo di carattere OLE.

Le `VTS_` costanti e i relativi significati sono i seguenti:

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
> Sono state definite altre costanti Variant per tutti i tipi Variant, ad eccezione di VTS_FONT e VTS_PICTURE, che forniscono un puntatore alla costante di dati Variant. Queste costanti vengono denominate usando `VTS_Pconstantname` la convenzione. Ad esempio, VTS_PCOLOR è un puntatore a una costante VTS_COLOR.

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

## <a name="event_custom_id"></a>  EVENT_CUSTOM_ID

Definisce una funzione di generazione di eventi per un evento personalizzato appartenente all'ID di invio specificato da *DISPID*.

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

*dispid*<br/>
ID di invio utilizzato dal controllo per la generazione dell'evento.

*pfnFire*<br/>
Nome della funzione di generazione eventi.

*vtsParams*<br/>
Elenco variabile di parametri passati al contenitore di controlli quando viene generato l'evento.

### <a name="remarks"></a>Note

L'argomento *vtsParams* è un elenco di valori separati da `VTS_` spazi delle costanti. Uno o più valori separati da spazi, non virgole, specificano l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCActiveXControl#13](../../mfc/codesnippet/cpp/event-maps_2.cpp)]

Specifica un elenco contenente un intero a 32 bit che rappresenta un valore di colore RGB, seguito da un puntatore `IFontDisp` all'interfaccia di un oggetto del tipo di carattere OLE.

Per un elenco delle `VTS_` costanti, vedere [EVENT_CUSTOM](#event_custom).

### <a name="requirements"></a>Requisiti

**Intestazione** afxctl. h

## <a name="on_oleverb"></a>ON_OLEVERB

Questa macro definisce una voce della mappa messaggi che esegue il mapping di un verbo personalizzato a una funzione membro specifica del controllo.

```cpp
ON_OLEVERB(idsVerbName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*idsVerbName*<br/>
ID della risorsa di stringa del nome del verbo.

*memberFxn*<br/>
Funzione chiamata dal framework quando viene richiamato il verbo.

### <a name="remarks"></a>Note

L'editor di risorse può essere usato per creare nomi di verbi personalizzati aggiunti alla tabella delle stringhe.

Il prototipo di funzione per *memberFxn* è:

```cpp
BOOL memberFxn(
   LPMSG    lpMsg,
   HWND     hWndParent,
   LPCRECT  lpRect);
```

I valori dei parametri *lpMsg*, *hwndParent*e *lpRect* vengono ricavati dai parametri corrispondenti della `IOleObject::DoVerb` funzione membro.

### <a name="requirements"></a>Requisiti

**Intestazione** AFXOLE. h

## <a name="on_stdoleverb"></a>  ON_STDOLEVERB

Usare questa macro per eseguire l'override del comportamento predefinito di un verbo standard.

```cpp
ON_STDOLEVERB(iVerb, memberFxn)
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
Indice del verbo standard per il verbo sottoposto a override.

*memberFxn*<br/>
Funzione chiamata dal framework quando viene richiamato il verbo.

### <a name="remarks"></a>Note

L'indice del verbo standard è nel formato `OLEIVERB_`, seguito da un'azione. OLEIVERB_SHOW, OLEIVERB_HIDE e OLEIVERB_UIACTIVATE sono alcuni esempi di verbi standard.

Per una descrizione del prototipo di funzione da usare come parametro *memberFxn* , vedere [ON_OLEVERB](#on_oleverb) .

### <a name="requirements"></a>Requisiti

**Intestazione** AFXOLE. h

## <a name="see-also"></a>Vedere anche

[Macro e globali](../../mfc/reference/mfc-macros-and-globals.md)
