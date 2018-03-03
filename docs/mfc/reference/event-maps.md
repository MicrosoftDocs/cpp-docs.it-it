---
title: Mappe eventi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.maps
dev_langs:
- C++
helpviewer_keywords:
- event maps [MFC]
ms.assetid: 1ed53aee-bc53-43cd-834a-6fb935c0d29b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 130e4ecf7534b16ecabf4c35665a4dabe9eee34e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="event-maps"></a>Mappe eventi
Ogni volta che un controllo deve notificare al relativo contenitore che si è verificata un'azione (determinata dallo sviluppatore del controllo), quale ad esempio la pressione di un tasto, il clic del mouse o una modifica allo stato del controllo, il controllo chiama una funzione che genera eventi. Questa funzione notifica al contenitore del controllo che si è verificata un'azione importante tramite la generazione dell'evento correlato.  
  
 La libreria Microsoft Foundation Class offre un modello ottimizzato di programmazione per generare gli eventi. In questo modello, le "mappe eventi" vengono utilizzate per designare per un determinato controllo quali funzioni generano quali eventi. Le mappe eventi contengono una macro per ogni evento. Ad esempio, una mappa evento che genera un evento Click predefinito potrebbe presentarsi nel seguente modo:  
  
 [!code-cpp[NVC_MFCAxCtl#16](../../mfc/reference/codesnippet/cpp/event-maps_1.cpp)]  
  
 Il **EVENT_STOCK_CLICK** (macro) indica che il controllo genera un evento ogni volta che rileva un mouse clic. Per un elenco più dettagliato di altri eventi predefiniti, vedere l'articolo [controlli ActiveX: eventi](../../mfc/mfc-activex-controls-events.md). Le macro sono inoltre disponibili per indicare eventi personalizzati.  
  
 Sebbene le macro di mapping degli eventi siano importanti, in genere non vengono inserite direttamente. Questo perché la finestra Proprietà crea automaticamente nei file sorgente le voci di mapping degli eventi quando la si utilizza per associare funzioni che generano eventi ad eventi. Ogni qualvolta si desidera modificare o aggiungere una voce di mapping degli eventi, è possibile utilizzare la finestra Proprietà.  
  
 Per supportare le mappe eventi, MFC fornisce le seguenti macro:  
  
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
  
##  <a name="declare_event_map"></a>DECLARE_EVENT_MAP  
 Ogni `COleControl`-classe derivata in un programma può fornire una mappa eventi per specificare gli eventi viene attivato il controllo.  
  
```   
DECLARE_EVENT_MAP()   
```  
  
### <a name="remarks"></a>Note  
 Utilizzare il `DECLARE_EVENT_MAP` (macro) alla fine della dichiarazione di classe. Quindi, nel file. cpp che definisce le funzioni membro per la classe, utilizzare il `BEGIN_EVENT_MAP` (macro), le voci di macro per ognuno degli eventi del controllo e `END_EVENT_MAP` macro per dichiarare la fine dell'elenco di eventi.  
  
 Per ulteriori informazioni sulle mappe eventi, vedere l'articolo [controlli ActiveX: eventi](../../mfc/mfc-activex-controls-events.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="begin_event_map"></a>BEGIN_EVENT_MAP  
 Inizia la definizione della mappa eventi.  
  
```   
BEGIN_EVENT_MAP(theClass,  baseClass)  
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Specifica il nome della classe del controllo mappa cui l'evento.  
  
 `baseClass`  
 Specifica il nome della classe base di `theClass`.  
  
### <a name="remarks"></a>Note  
 Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa eventi con il `BEGIN_EVENT_MAP` (macro), quindi aggiungere le voci di macro per ognuno degli eventi e completare la mappa eventi con il `END_EVENT_MAP` (macro).  
  
 Per ulteriori informazioni sull'evento esegue il mapping e `BEGIN_EVENT_MAP` (macro), vedere l'articolo [controlli ActiveX: eventi](../../mfc/mfc-activex-controls-events.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="end_event_map"></a>END_EVENT_MAP  
 Utilizzare il `END_EVENT_MAP` macro per terminare la definizione della mappa eventi.  
  
```   
END_EVENT_MAP()   
```  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="event_custom"></a>EVENT_CUSTOM  
 Definisce una voce di mapping degli eventi per un evento personalizzato.  
  
```   
EVENT_CUSTOM(pszName, pfnFire,  vtsParams) 
```  
  
### <a name="parameters"></a>Parametri  
 `pszName`  
 Nome dell'evento.  
  
 `pfnFire`  
 Il nome della funzione di generazione di eventi.  
  
 `vtsParams`  
 Un elenco separato da spazi di uno o più costanti specificando l'elenco di parametri della funzione.  
  
### <a name="remarks"></a>Note  
 Il `vtsParams` parametro è un elenco separato da spazi dei valori di **VTS _** costanti. Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco di parametri della funzione. Ad esempio:  
  
 [!code-cpp[NVC_MFCActiveXControl#13](../../mfc/codesnippet/cpp/event-maps_2.cpp)]  
  
 Specifica valore, seguita da un puntatore a un elenco contenente un intero a 32 bit che rappresenta un RGB dei colori di **IFontDisp** interfaccia di un oggetto di tipo di carattere OLE.  
  
 Il **VTS _** costanti e i relativi significati sono i seguenti:  
  
|Simbolo|Tipo di parametro|  
|------------|--------------------|  
|**VTS_I2**|**short**|  
|**VTS_I4**|**long**|  
|**VTS_R4**|**float**|  
|**VTS_R8**|**double**|  
|**VTS_COLOR**|**OLE_COLOR**|  
|**VTS_CY**|**VALUTA**|  
|**VTS_DATE**|**DATE**|  
|**VTS_BSTR**|**const char\***|  
|**VTS_DISPATCH**|`LPDISPATCH`|  
|**VTS_FONT**|**IFontDispatch\***|  
|**VTS_HANDLE**|`HANDLE`|  
|**VTS_SCODE**|`SCODE`|  
|**VTS_BOOL**|**BOOL**|  
|**VTS_VARIANT**|**VARIANTE const\***|  
|**VTS_PVARIANT**|**VARIANT\***|  
|**VTS_UNKNOWN**|`LPUNKNOWN`|  
|**VTS_OPTEXCLUSIVE**|**OLE_OPTEXCLUSIVE**|  
|**VTS_PICTURE**|**IPictureDisp\***|  
|**VTS_TRISTATE**|**OLE_TRISTATE**|  
|**VTS_XPOS_PIXELS**|**OLE_XPOS_PIXELS**|  
|**VTS_YPOS_PIXELS**|**OLE_YPOS_PIXELS**|  
|**VTS_XSIZE_PIXELS**|**OLE_XSIZE_PIXELS**|  
|**VTS_YSIZE_PIXELS**|**OLE_YSIZE_PIXELS**|  
|**VTS_XPOS_HIMETRIC**|**OLE_XPOS_HIMETRIC**|  
|**VTS_YPOS_HIMETRIC**|**OLE_YPOS_HIMETRIC**|  
|**VTS_XSIZE_HIMETRIC**|**OLE_XSIZE_HIMETRIC**|  
|**VTS_YSIZE_HIMETRIC**|**OLE_YSIZE_HIMETRIC**|  
  
> [!NOTE]
>  Costanti di tipo variant aggiuntive sono state definite per tutti i tipi variant, ad eccezione di **VTS_FONT** e **VTS_PICTURE**, che forniscono un puntatore con la costante di dati variant. Queste costanti vengono denominate usando il **VTS_P** `constantname` convenzione. Ad esempio, **VTS_PCOLOR** è un puntatore a un **VTS_COLOR** costante.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="event_custom_id"></a>EVENT_CUSTOM_ID  
 Definisce un funzione per un evento personalizzato appartenente all'ID di distribuzione specificato da la generazione di eventi `dispid`.  
  
```   
EVENT_CUSTOM_ID(
  pszName,   
  dispid,   
  pfnFire,
  vtsParams)  
 
```  
  
### <a name="parameters"></a>Parametri  
 `pszName`  
 Nome dell'evento.  
  
 `dispid`  
 L'ID di distribuzione utilizzato dal controllo quando viene attivato l'evento.  
  
 `pfnFire`  
 Il nome della funzione di generazione di eventi.  
  
 `vtsParams`  
 Un elenco di variabili dei parametri passati al contenitore del controllo quando viene generato l'evento.  
  
### <a name="remarks"></a>Note  
 Il `vtsParams` argomento è un elenco separato da spazi dei valori di **VTS _** costanti. Uno o più di questi valori separati da spazi, virgole non specifica l'elenco di parametri della funzione. Ad esempio:  
  
 [!code-cpp[NVC_MFCActiveXControl#13](../../mfc/codesnippet/cpp/event-maps_2.cpp)]  
  
 Specifica valore, seguita da un puntatore a un elenco contenente un intero a 32 bit che rappresenta un RGB dei colori di **IFontDisp** interfaccia di un oggetto di tipo di carattere OLE.  
  
 Per un elenco di **VTS _** costanti, vedere [EVENT_CUSTOM](#event_custom).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="on_oleverb"></a>ON_OLEVERB  
 Questa macro definisce una voce della mappa messaggi che esegue il mapping di un verbo personalizzato a una funzione membro specifico del controllo.  
  
```   
ON_OLEVERB(idsVerbName,  memberFxn)   
```  
  
### <a name="parameters"></a>Parametri  
 *idsVerbName*  
 L'ID di risorsa di stringa del nome del verbo.  
  
 `memberFxn`  
 La funzione chiamata dal framework quando viene richiamato il verbo.  
  
### <a name="remarks"></a>Note  
 Per creare nomi di verbi personalizzati che vengono aggiunti alla tabella di stringhe, è possibile utilizzare l'editor di risorse.  
  
 Il prototipo di funzione `memberFxn` è:  
  
 `BOOL memberFxn(`    
 `LPMSG` `lpMsg` `,`   
 `HWND` `hWndParent` `,`   
 `LPCRECT` `lpRect`   `);`  
  
 I valori del `lpMsg`, `hWndParent`, e `lpRect` i parametri vengono prelevati i parametri corrispondenti del **IOleObject:: DoVerb** funzione membro.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXOLE. h  
  
##  <a name="on_stdoleverb"></a>ON_STDOLEVERB  
 Utilizzare questa macro per eseguire l'override del comportamento predefinito di un verbo standard.  
  
```   
ON_STDOLEVERB(iVerb,   memberFxn)   
```  
  
### <a name="parameters"></a>Parametri  
 `iVerb`  
 L'indice di un verbo standard per il verbo da sottoporre a override.  
  
 `memberFxn`  
 La funzione chiamata dal framework quando viene richiamato il verbo.  
  
### <a name="remarks"></a>Note  
 L'indice di un verbo standard è nel formato **OLEIVERB_**, seguito da un'azione. `OLEIVERB_SHOW`, `OLEIVERB_HIDE`, e `OLEIVERB_UIACTIVATE` sono riportati alcuni esempi di verbi standard.  
  
 Vedere [ON_OLEVERB](#on_oleverb) per una descrizione del prototipo di funzione da utilizzare come il `memberFxn` parametro.  

  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXOLE. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
