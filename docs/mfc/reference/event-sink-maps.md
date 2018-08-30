---
title: Mappe Sink di evento | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros.maps
dev_langs:
- C++
helpviewer_keywords:
- event sink maps [MFC]
ms.assetid: a9757eb2-5f4a-45ec-a2cd-ce5eec85b16f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 114ccb875c1551528eb77edb9c2fae0ecb27edd6
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43212043"
---
# <a name="event-sink-maps"></a>Mappe sink di evento
Quando un controllo OLE incorporato viene generato un evento, il contenitore del controllo riceve l'evento usando un meccanismo denominato una "evento sink della mappa," fornita da MFC. Questa mappa di sink di evento definisce funzioni del gestore per ogni evento specifico, nonché i parametri di tali eventi. Per altre informazioni su mappe sink di evento, vedere l'articolo [contenitori di controlli ActiveX](../../mfc/activex-control-containers.md).  
  
### <a name="event-sink-maps"></a>Mappe sink di evento  
  
|||  
|-|-|  
|[BEGIN_EVENTSINK_MAP](#begin_eventsink_map)|Inizia la definizione di una mappa di sink di eventi.|  
|[DECLARE_EVENTSINK_MAP](#declare_eventsink_map)|Dichiara una mappa di sink di eventi.|  
|[END_EVENTSINK_MAP](#end_eventsink_map)|Termina la definizione di una mappa di sink di eventi.|  
|[ON_EVENT](#on_event)|Definisce un gestore eventi per un evento specifico.|  
|[ON_EVENT_RANGE](#on_event_range)|Definisce un gestore eventi per un determinato evento generato da un set di controlli OLE.|  
|[ON_EVENT_REFLECT](#on_event_reflect)|Riceve gli eventi generati dal controllo prima che vengano gestiti dal contenitore del controllo.|  
|[ON_PROPNOTIFY](#on_propnotify)|Definisce un gestore per la gestione delle notifiche di proprietà da un controllo OLE.|  
|[ON_PROPNOTIFY_RANGE](#on_propnotify_range)|Definisce un gestore per la gestione delle notifiche di proprietà da un set di controlli OLE.|  
|[ON_PROPNOTIFY_REFLECT](#on_propnotify_reflect)|Riceve le notifiche di proprietà inviate dal controllo prima che vengano gestiti dal contenitore del controllo.|  
  
##  <a name="begin_eventsink_map"></a>  BEGIN_EVENTSINK_MAP  
 Inizia la definizione della mappa eventi sink.  
  
```   
BEGIN_EVENTSINK_MAP(theClass, baseClass)  
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 Specifica il nome della classe del controllo mappa la cui sink di evento.  
  
 *baseClass*  
 Specifica il nome della classe di base *theClass*.  
  
### <a name="remarks"></a>Note  
 Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa di sink di evento con begin_eventsink_map (macro), quindi aggiungere le voci di macro per ogni evento ricevere una notifica di e completare la mappa di sink di evento con END_EVENTSINK_MAP (macro).  
  
 Per altre informazioni su mappe sink di evento e i contenitori di controlli OLE, vedere l'articolo [contenitori di controlli ActiveX](../../mfc/activex-control-containers.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="declare_eventsink_map"></a>  DECLARE_EVENTSINK_MAP  
 Un contenitore OLE può fornire una mappa di sink di eventi per specificare gli eventi di che del contenitore verrà informato.  
  
```   
DECLARE_EVENTSINK_MAP()   
```  
  
### <a name="remarks"></a>Note  
 Usare declare_eventsink_map (macro) alla fine della dichiarazione di classe. Quindi, nel. File CPP che definisce le funzioni membro per la classe, utilizzare il begin_eventsink_map (macro), le voci di macro per ognuno degli eventi per ricevere una notifica di e l'END_EVENTSINK_MAP (macro) per dichiarare la fine dell'elenco di sink di evento.  
  
 Per altre informazioni su mappe sink di evento, vedere l'articolo [contenitori di controlli ActiveX](../../mfc/activex-control-containers.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="end_eventsink_map"></a>  END_EVENTSINK_MAP  
 Termina la definizione della mappa eventi sink.  
  
```   
END_EVENTSINK_MAP()   
```  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="on_event"></a>  ON_EVENT  
 Utilizzare l'ON_EVENT (macro) per definire una funzione del gestore eventi per un evento generato da un controllo OLE.  
  
```   
ON_EVENT(theClass, id, dispid, pfnHandler,  vtsParams) 
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 La classe a cui appartiene questa mappa di sink di evento.  
  
 *ID*  
 ID di controllo del controllo OLE.  
  
 *DISPID*  
 ID dispatch dell'evento generato dal controllo.  
  
 *pfnHandler*  
 Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un valore booleano il tipo restituito e tipi di parametri che corrispondono ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito; in caso contrario, FALSE.  
  
 *vtsParams*  
 Una sequenza di **VTS _** le costanti che specifica i tipi dei parametri per l'evento. Queste sono le costanti stesse che vengono usate nelle voci di mappa di invio, ad esempio DISP_FUNCTION.  
  
### <a name="remarks"></a>Note  
 Il *vtsParams* argomento è un elenco delimitato da spazi di valori dalle **VTS _** costanti. Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco dei parametri della funzione. Ad esempio:  
  
 [!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]  
  
 Specifica un elenco che contiene un valore short integer seguita da un valore booleano.  
  
 Per un elenco del **VTS _** costanti, vedere [EVENT_CUSTOM](event-maps.md#event_custom).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="on_event_range"></a>  ON_EVENT_RANGE  
 Utilizzare l'on_event_range (macro) per definire una funzione del gestore eventi per un evento attivato da qualsiasi controllo OLE con un ID di controllo all'interno di un intervallo contiguo di ID.  
  
```   
ON_EVENT_RANGE(theClass, idFirst, idLast, dispid, pfnHandler,  vtsParams)   
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 La classe a cui appartiene questa mappa di sink di evento.  
  
 *idFirst*  
 ID di controllo del primo controllo OLE nell'intervallo.  
  
 *idLast*  
 ID di controllo dell'ultimo controllo OLE nell'intervallo.  
  
 *DISPID*  
 ID dispatch dell'evento generato dal controllo.  
  
 *pfnHandler*  
 Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un valore booleano il tipo restituito, un primo parametro di tipo UINT (per l'ID di controllo) e i tipi di parametro aggiuntivi che corrispondono ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito; in caso contrario, FALSE.  
  
 *vtsParams*  
 Una sequenza di **VTS _** le costanti che specifica i tipi dei parametri per l'evento. La prima costante deve essere di tipo VTS_I4, per l'ID del controllo. Queste sono le costanti stesse che vengono usate nelle voci di mappa di invio, ad esempio DISP_FUNCTION.  
  
### <a name="remarks"></a>Note  
 Il *vtsParams* argomento è un elenco delimitato da spazi di valori dalle **VTS _** costanti. Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco dei parametri della funzione. Ad esempio:  
  
 [!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]  
  
 Specifica un elenco che contiene un valore short integer seguita da un valore booleano.  
  
 Per un elenco del **VTS _** costanti, vedere [EVENT_CUSTOM](event-maps.md#event_custom).  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra un gestore eventi, per l'evento MouseDown, implementato per tre controlli (IDC_MYCTRL1 tramite IDC_MYCTRL3). Funzione del gestore eventi `OnRangeMouseDown`, viene dichiarata nel file di intestazione della classe di finestra ( `CMyDlg`) come:  
  
 [!code-cpp[NVC_MFCAutomation#12](../../mfc/codesnippet/cpp/event-sink-maps_2.h)]  
  
 Il codice seguente viene definito nel file di implementazione della classe di finestra di dialogo.  
  
 [!code-cpp[NVC_MFCAutomation#13](../../mfc/codesnippet/cpp/event-sink-maps_3.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="on_event_reflect"></a>  ON_EVENT_REFLECT  
 L'on_event_reflect (macro), quando usato nell'evento mappa sink della classe wrapper di un controllo OLE, riceve gli eventi generati dal controllo prima che vengano gestiti dal contenitore del controllo.  
  
```   
ON_EVENT_REFLECT(theClass,  dispid, pfnHandler,  vtsParams) 
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 La classe a cui appartiene questa mappa di sink di evento.  
  
 DISPID  
 ID dispatch dell'evento generato dal controllo.  
  
 *pfnHandler*  
 Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un valore booleano il tipo restituito e i tipi di parametro che corrispondono ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito; in caso contrario, FALSE.  
  
 *vtsParams*  
 Una sequenza di **VTS _** le costanti che specifica i tipi dei parametri per l'evento. Queste sono le costanti stesse che vengono usate nelle voci di mappa di invio, ad esempio DISP_FUNCTION.  
  
### <a name="remarks"></a>Note  
 Il *vtsParams* argomento è un elenco delimitato da spazi di valori dalle **VTS _** costanti.  
  
 Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco dei parametri della funzione. Ad esempio:  
  
 [!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]  
  
 Specifica un elenco che contiene un valore short integer seguita da un valore booleano.  
  
 Per un elenco del **VTS _** costanti, vedere [EVENT_CUSTOM](event-maps.md#event_custom).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="on_propnotify"></a>  ON_PROPNOTIFY  
 Usare on_propnotify (macro) per definire una voce di mapping dei sink di evento per la gestione delle notifiche di proprietà da un controllo OLE.  
  
```   
ON_PROPNOTIFY(theClass, id, dispid, pfnRequest, pfnChanged)  
 
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 La classe a cui appartiene questa mappa di sink di evento.  
  
 *ID*  
 ID di controllo del controllo OLE.  
  
 *DISPID*  
 ID dispatch della proprietà coinvolti nella notifica.  
  
 *pfnRequest*  
 Puntatore a una funzione membro che gestisce il `OnRequestEdit` notifica per questa proprietà. Questa funzione deve avere un valore booleano il tipo restituito e un **BOOL** <strong>\*</strong> parametro. Questa funzione deve impostare il parametro su TRUE per consentire la proprietà da modificare e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.  
  
 *pfnChanged*  
 Puntatore a una funzione membro che gestisce il `OnChanged` notifica per questa proprietà. La funzione deve avere un valore booleano il tipo restituito e un parametro UINT. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Il *vtsParams* argomento è un elenco delimitato da spazi di valori dalle **VTS _** costanti. Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco dei parametri della funzione. Ad esempio:  
  
 [!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]  
  
 Specifica un elenco che contiene un valore short integer seguita da un valore booleano.  
  
 Per un elenco del **VTS _** costanti, vedere [EVENT_CUSTOM](event-maps.md#event_custom).  
  
##  <a name="on_propnotify_range"></a>  ON_PROPNOTIFY_RANGE  
 Usare on_propnotify_range (macro) per definire una voce della mappa di sink di evento per la gestione delle notifiche di proprietà da un controllo OLE con un ID di controllo all'interno di un intervallo contiguo di ID.  
  
```  
 
ON_PROPNOTIFY_RANGE(theClass, idFirst, idLast, dispid, pfnRequest, pfnChanged)  
 
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 La classe a cui appartiene questa mappa di sink di evento.  
  
 *idFirst*  
 ID di controllo del primo controllo OLE nell'intervallo.  
  
 *idLast*  
 ID di controllo dell'ultimo controllo OLE nell'intervallo.  
  
 *DISPID*  
 ID dispatch della proprietà coinvolti nella notifica.  
  
 *pfnRequest*  
 Puntatore a una funzione membro che gestisce il `OnRequestEdit` notifica per questa proprietà. Questa funzione deve avere una `BOOL` il tipo restituito e `UINT` e `BOOL*` parametri. La funzione deve impostare il parametro su TRUE per consentire la proprietà da modificare e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.  
  
 *pfnChanged*  
 Puntatore a una funzione membro che gestisce il `OnChanged` notifica per questa proprietà. La funzione deve avere una `BOOL` il tipo restituito e un `UINT` parametro. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="on_propnotify_reflect"></a>  ON_PROPNOTIFY_REFLECT  
 L'on_propnotify_reflect (macro), quando usato nell'evento mappa sink della classe wrapper di un controllo OLE, riceve le notifiche di proprietà inviate dal controllo prima che vengano gestiti dal contenitore del controllo.  
  
```  
 
ON_PROPNOTIFY_REFLECT(theClass, dispid, pfnRequest, pfnChanged)  
 
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 La classe a cui appartiene questa mappa di sink di evento.  
  
 *DISPID*  
 ID dispatch della proprietà coinvolti nella notifica.  
  
 *pfnRequest*  
 Puntatore a una funzione membro che gestisce il `OnRequestEdit` notifica per questa proprietà. Questa funzione deve avere un valore booleano il tipo restituito e un **BOOL** <strong>\*</strong> parametro. Questa funzione deve impostare il parametro su TRUE per consentire la proprietà da modificare e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.  
  
 *pfnChanged*  
 Puntatore a una funzione membro che gestisce il `OnChanged` notifica per questa proprietà. La funzione deve avere un valore booleano il tipo restituito e nessun parametro. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
