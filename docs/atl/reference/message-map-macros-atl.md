---
title: Macro della mappa (ATL) dei messaggi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atlwin/ATL::ALT_MSG_MAP
- atlwin/ATL::BEGIN_MSG_MAP
- atlwin/ATL::CHAIN_MSG_MAP_ALT
- atlwin/ATL::CHAIN_MSG_MAP_ALT_MEMBER
- atlwin/ATL::CHAIN_MSG_MAP
- atlwin/ATL::CHAIN_MSG_MAP_DYNAMIC
- atlwin/ATL::CHAIN_MSG_MAP_MEMBER
- atlwin/ATL::COMMAND_CODE_HANDLER
- atlwin/ATL::COMMAND_HANDLER
- atlwin/ATL::COMMAND_ID_HANDLER
- atlwin/ATL::COMMAND_RANGE_CODE_HANDLER
- atlwin/ATL::COMMAND_RANGE_HANDLER
- atlwin/ATL::DECLARE_EMPTY_MSG_MAP
- atlwin/ATL::DEFAULT_REFLECTION_HANDLER
- atlwin/ATL::END_MSG_MAP
- atlwin/ATL::FORWARD_NOTIFICATIONS
- atlwin/ATL::MESSAGE_HANDLER
- atlwin/ATL::MESSAGE_RANGE_HANDLER
- atlwin/ATL::NOTIFY_CODE_HANDLER
- atlwin/ATL::NOTIFY_HANDLER
- atlwin/ATL::NOTIFY_ID_HANDLER
- atlwin/ATL::NOTIFY_RANGE_CODE_HANDLER
- atlwin/ATL::NOTIFY_RANGE_HANDLER
- atlwin/ATL::REFLECT_NOTIFICATIONS
- atlwin/ATL::REFLECTED_COMMAND_CODE_HANDLER
- atlwin/ATL::REFLECTED_COMMAND_HANDLER
- atlwin/ATL::REFLECTED_COMMAND_ID_HANDLER
- atlwin/ATL::REFLECTED_COMMAND_RANGE_CODE_HANDLER
- atlwin/ATL::REFLECTED_COMMAND_RANGE_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_CODE_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_ID_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_RANGE_CODE_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_RANGE_HANDLER
dev_langs:
- C++
ms.assetid: eefdd546-8934-4a30-b263-9c06a8addcbd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 200d82c9d9b2ca0456ae5de4d6c937be69e212bc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="message-map-macros-atl"></a>Macro della mappa messaggi (ATL)
Queste macro definiscono le voci e mappe messaggi.  
  
|||  
|-|-|  
|[ALT_MSG_MAP](#alt_msg_map)|Contrassegna l'inizio di una mappa messaggi alternativo.|  
|[BEGIN_MSG_MAP](#begin_msg_map)|Contrassegna l'inizio della mappa messaggi predefinito.|  
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Eseguire il mapping sia concatenato a un messaggio alternativo nella classe base.|  
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Sia concatenato a una mappa messaggi alternativa in un membro di dati della classe.|  
|[CHAIN_MSG_MAP](#chain_msg_map)|Catene per la mappa messaggi predefinita nella classe base.|  
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Catene per la mappa dei messaggi in un'altra classe in fase di esecuzione.|  
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Catene per la mappa dei messaggi predefinito in un membro di dati della classe.|  
|[COMMAND_CODE_HANDLER](#command_code_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[COMMAND_HANDLER](#command_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[COMMAND_ID_HANDLER](#command_id_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base all'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[DECLARE_EMPTY_MSG_MAP](#declare_empty_msg_map)|Implementa una mappa messaggi vuota.|  
|[DEFAULT_REFLECTION_HANDLER](#default_reflection_handler)|Fornisce un gestore predefinito per i messaggi riflessi che non sono gestiti in caso contrario.|  
|[END_MSG_MAP](#end_msg_map)|Contrassegna la fine di una mappa messaggi.|  
|[FORWARD_NOTIFICATIONS](#forward_notifications)|Inoltra i messaggi di notifica alla finestra padre.|  
|[MESSAGE_HANDLER](#message_handler)|Un messaggio di Windows viene eseguito il mapping a una funzione del gestore.|  
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|Esegue il mapping di un intervallo contiguo di Windows (messaggi) a una funzione del gestore.|  
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[NOTIFY_HANDLER](#notify_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|  
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base all'identificatore del controllo.|  
|[NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[REFLECT_NOTIFICATIONS](#reflect_notifications)|Riflette i messaggi di notifica alla finestra che li ha inviati.|  
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base all'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|  
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base all'identificatore del controllo.|  
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="alt_msg_map"></a>ALT_MSG_MAP  
 Contrassegna l'inizio di una mappa messaggi alternativo.  
  
```
ALT_MSG_MAP(msgMapID)
```  
  
### <a name="parameters"></a>Parametri  
 `msgMapID`  
 [in] Identificatore della mappa del messaggio.  
  
### <a name="remarks"></a>Note  
 ATL identifica ogni mappa messaggi da un numero. La mappa messaggi predefinita (dichiarato con il `BEGIN_MSG_MAP` (macro)) è identificato da 0. Una mappa messaggi alternativa è identificata da `msgMapID`.  
  
 Mappe messaggi utilizzate per elaborare i messaggi inviati a una finestra. Ad esempio, [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) consente di specificare l'identificatore di una mappa messaggi nell'oggetto contenitore. [CContainedWindow:: WindowProc](ccontainedwindowt-class.md#windowproc) utilizza quindi la mappa messaggi per indirizzare i messaggi della finestra contenuta la funzione del gestore appropriato o in un'altra mappa messaggi. Per un elenco di macro che dichiarano funzioni di gestione, vedere [BEGIN_MSG_MAP](#begin_msg_map).  
  
 Iniziano sempre una mappa messaggi con `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative.  
  
 Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Si noti che è sempre esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuna delle quali contiene una funzione del gestore:  
  
 [!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]  
  
 L'esempio successivo mostra due mappe messaggi alternative. La mappa messaggi predefinita è vuota.  
  
 [!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   

##  <a name="begin_msg_map"></a>BEGIN_MSG_MAP  
 Contrassegna l'inizio della mappa messaggi predefinito.  
  
```
BEGIN_MSG_MAP(theClass)
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 [in] Il nome della classe che contiene la mappa messaggi.  
  
### <a name="remarks"></a>Note  
 [CWindowImpl::](cwindowimpl-class.md#windowproc) utilizza la mappa messaggi predefinita per elaborare i messaggi inviati alla finestra. La mappa messaggi indirizza i messaggi per la funzione del gestore appropriato o da un'altra mappa messaggi.  

  
 Le macro seguenti mapping di un messaggio a una funzione del gestore. Questa funzione deve essere definita in `theClass`.  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[MESSAGE_HANDLER](#message_handler)|Un messaggio di Windows viene eseguito il mapping a una funzione del gestore.|  
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|Esegue il mapping di un intervallo contiguo di Windows (messaggi) a una funzione del gestore.|  
|[COMMAND_HANDLER](#command_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[COMMAND_ID_HANDLER](#command_id_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base all'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[COMMAND_CODE_HANDLER](#command_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Esegue il mapping di un intervallo contiguo di **WM_COMMAND** messaggi a una funzione del gestore, in base all'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[NOTIFY_HANDLER](#notify_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|  
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base all'identificatore del controllo.|  
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Esegue il mapping di un intervallo contiguo di **WM_NOTIFY** messaggi a una funzione del gestore, in base all'identificatore del controllo.|  
  
 Le macro seguenti indirizzare i messaggi a un'altra mappa messaggi. Questo processo è denominato "concatenamento".  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[CHAIN_MSG_MAP](#chain_msg_map)|Catene per la mappa messaggi predefinita nella classe base.|  
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Catene per la mappa dei messaggi predefinito in un membro di dati della classe.|  
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Eseguire il mapping sia concatenato a un messaggio alternativo nella classe base.|  
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Sia concatenato a una mappa messaggi alternativa in un membro di dati della classe.|  
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Catene per la mappa dei messaggi predefinito in un'altra classe in fase di esecuzione.|  
  
 Le macro seguenti indirizzare messaggi "riprodotti" dalla finestra padre. Ad esempio, un controllo in genere invia i messaggi di notifica alla finestra padre per l'elaborazione, ma la finestra padre può riflettere il messaggio al controllo.  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base all'identificatore della voce di menu, controllo o i tasti di scelta rapida.|  
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|  
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base all'identificatore del controllo.|  
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#102](../../atl/codesnippet/cpp/message-map-macros-atl_3.h)]  
  
 Quando un `CMyExtWindow` oggetto riceve un `WM_PAINT` messaggio, il messaggio viene indirizzato a `CMyExtWindow::OnPaint` per l'elaborazione effettiva. Se `OnPaint` indica il messaggio richiede un'ulteriore elaborazione, verrà eseguito il messaggio quindi indirizzata alla mappa messaggi predefinito `CMyBaseWindow`.  
  
 Oltre alla mappa messaggi predefinito, è possibile definire un mapping di messaggi alternativo con [ALT_MSG_MAP](#alt_msg_map). Iniziano sempre una mappa messaggi con `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative. Nell'esempio seguente viene illustrato il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuna delle quali contiene una funzione del gestore:  
  
 [!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]  
  
 L'esempio successivo mostra due mappe messaggi alternative. La mappa messaggi predefinita è vuota.  
  
 [!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]  
  
 Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Si noti che è sempre esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="chain_msg_map_alt"></a>CHAIN_MSG_MAP_ALT  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP_ALT(theChainClass, msgMapID)
```  
  
### <a name="parameters"></a>Parametri  
 `theChainClass`  
 [in] Il nome della classe di base che contiene la mappa messaggi.  
  
 `msgMapID`  
 [in] Identificatore della mappa del messaggio.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP_ALT`indirizza i messaggi a una mappa messaggi alternativo in una classe base. Deve essere dichiarato questa mappa di messaggi alternativo con [ALT_MSG_MAP(msgMapID)](#alt_msg_map). Per indirizzare i messaggi alla mappa messaggi predefinita di una classe di base (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)), utilizzare `CHAIN_MSG_MAP`. Per un esempio, vedere [CHAIN_MSG_MAP](#chain_msg_map).  
  
> [!NOTE]
>  Iniziano sempre una mappa messaggi con `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve disporre esattamente di un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="chain_msg_map_alt_member"></a>CHAIN_MSG_MAP_ALT_MEMBER  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP_ALT_MEMBER(theChainMember, msgMapID)
```  
  
### <a name="parameters"></a>Parametri  
 `theChainMember`  
 [in] Il nome del membro dati che contiene la mappa messaggi.  
  
 `msgMapID`  
 [in] Identificatore della mappa del messaggio.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP_ALT_MEMBER`indirizza i messaggi a una mappa messaggi alternativo è un membro dati. Deve essere dichiarato questa mappa di messaggi alternativo con [ALT_MSG_MAP(msgMapID)](#alt_msg_map). Per indirizzare i messaggi alla mappa messaggi predefinita di un membro dati (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)), utilizzare `CHAIN_MSG_MAP_MEMBER`. Per un esempio, vedere [CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member).  
  
> [!NOTE]
>  Iniziano sempre una mappa messaggi con `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve disporre esattamente di un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="chain_msg_map"></a>CHAIN_MSG_MAP  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP(theChainClass)
```  
  
### <a name="parameters"></a>Parametri  
 `theChainClass`  
 [in] Il nome della classe di base che contiene la mappa messaggi.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP`indirizza i messaggi alla mappa messaggi predefinito di una classe di base (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)). Per indirizzare i messaggi alla mappa messaggi alternativa di una classe di base (dichiarato con [ALT_MSG_MAP](#alt_msg_map)), utilizzare [CHAIN_MSG_MAP_ALT](#chain_msg_map_alt).  
  
> [!NOTE]
>  Iniziano sempre una mappa messaggi con `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve disporre esattamente di un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#107](../../atl/codesnippet/cpp/message-map-macros-atl_4.h)]  
  
 In questo esempio viene illustrato quanto segue:  
  
-   Se utilizza una routine della finestra `CMyClass`della mappa messaggi predefinita e `OnPaint` non handle di un messaggio, il messaggio viene indirizzato a `CMyBaseClass`della mappa messaggi predefinita per l'elaborazione.  
  
-   Se una routine della finestra sta utilizzando la mappa messaggi alternativa prima in `CMyClass`, tutti i messaggi vengono indirizzati a `CMyBaseClass`della mappa messaggi predefinita.  
  
-   Se si utilizza una routine della finestra `CMyClass`del mapping di messaggi alternativo secondo e `OnChar` non handle di un messaggio, il messaggio viene indirizzato alla mappa messaggi alternativo specificato `CMyBaseClass`. `CMyBaseClass`deve essere dichiarato questa mappa di messaggi con `ALT_MSG_MAP(1)`.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="chain_msg_map_dynamic"></a>CHAIN_MSG_MAP_DYNAMIC  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP_DYNAMIC(dynaChainID)
```  
  
### <a name="parameters"></a>Parametri  
 *dynaChainID*  
 [in] Identificatore univoco della mappa messaggi di un oggetto.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP_DYNAMIC`indirizza i messaggi, in fase di esecuzione per la mappa dei messaggi predefinito in un altro oggetto. L'oggetto e la mappa messaggi sono associati *dynaChainID*, che viene definita tramite [CDynamicChain::](cdynamicchain-class.md#setchainentry). È necessario derivare la classe da `CDynamicChain` per poter utilizzare `CHAIN_MSG_MAP_DYNAMIC`. Per un esempio, vedere il [CDynamicChain](../../atl/reference/cdynamicchain-class.md) Panoramica.  

  
> [!NOTE]
>  Iniziano sempre una mappa messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve disporre esattamente di un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="chain_msg_map_member"></a>CHAIN_MSG_MAP_MEMBER  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP_MEMBER(theChainMember)
```  
  
### <a name="parameters"></a>Parametri  
 `theChainMember`  
 [in] Il nome del membro dati che contiene la mappa messaggi.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP_MEMBER`indirizza i messaggi alla mappa messaggi predefinito di un membro dati (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)). Per indirizzare i messaggi alla mappa messaggi alternativo di un membro dati (dichiarato con [ALT_MSG_MAP](#alt_msg_map)), utilizzare [CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member).  
  
> [!NOTE]
>  Iniziano sempre una mappa messaggi con `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve disporre esattamente di un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#108](../../atl/codesnippet/cpp/message-map-macros-atl_5.h)]  
  
 In questo esempio viene illustrato quanto segue:  
  
-   Se utilizza una routine della finestra `CMyClass`della mappa messaggi predefinita e `OnPaint` non handle di un messaggio, il messaggio viene indirizzato a `m_obj`della mappa messaggi predefinita per l'elaborazione.  
  
-   Se una routine della finestra sta utilizzando la mappa messaggi alternativa prima in `CMyClass`, tutti i messaggi vengono indirizzati a `m_obj`della mappa messaggi predefinita.  
  
-   Se si utilizza una routine della finestra `CMyClass`del mapping di messaggi alternativo secondo e `OnChar` non handle di un messaggio, il messaggio viene indirizzato alla mappa messaggi alternativo specificato di `m_obj`. Classe `CMyContainedClass` deve essere dichiarato questa mappa di messaggi con `ALT_MSG_MAP(1)`.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="command_code_handler"></a>COMMAND_CODE_HANDLER  
 Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di un [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio basati solo sul codice di notifica.  
  
```
COMMAND_CODE_HANDLER(code, func)
```  
  
### <a name="parameters"></a>Parametri  
 `code`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="command_handler"></a>COMMAND_HANDLER  
 Definisce una voce in una mappa messaggi.  
  
```
COMMAND_HANDLER(id, code, func)
```    
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o i tasti di scelta rapida.  
  
 `code`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="remarks"></a>Note  
 `COMMAND_HANDLER`esegue il mapping di un [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio alla funzione del gestore specificato, in base al codice di notifica e l'identificatore del controllo. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing#119](../../atl/codesnippet/cpp/message-map-macros-atl_6.h)]  
  
 Qualsiasi funzione specificato in un `COMMAND_HANDLER` macro deve essere definita come segue:  
  
 `LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);`  
  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima `CommandHandler` viene chiamato. Se `CommandHandler` non gestire completamente il messaggio, è necessario impostare `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
> [!NOTE]
>  Iniziano sempre una mappa messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È possibile dichiarare successive mappe messaggi alternative con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve disporre esattamente di un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Oltre a `COMMAND_HANDLER`, è possibile utilizzare [MESSAGE_HANDLER](#message_handler) per mappare un **WM_COMMAND** messaggio senza tenere in considerazione un identificatore o il codice. In questo caso, `MESSAGE_HANDLER(WM_COMMAND, OnHandlerFunction)` indirizzerà tutti **WM_COMMAND** i messaggi inviati a `OnHandlerFunction`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="command_id_handler"></a>COMMAND_ID_HANDLER  
 Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di un [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggi solo in base all'identificatore della voce di menu, controllo o i tasti di scelta rapida.  
  
```
COMMAND_ID_HANDLER(id, func)
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o l'invio del messaggio di tasti di scelta rapida.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="command_range_code_handler"></a>COMMAND_RANGE_CODE_HANDLER  
 Simile a [COMMAND_RANGE_HANDLER](#command_range_handler), ma viene eseguito il mapping [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggi con un codice di notifica specifica da una gamma di controlli a una funzione del gestore singolo.  
  
```
COMMAND_RANGE_CODE_HANDLER(idFirst, idLast, code, func)
```    
  
### <a name="parameters"></a>Parametri  
 `idFirst`  
 [in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.  
  
 `idLast`  
 [in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.  
  
 `code`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="remarks"></a>Note  
 Questo intervallo è in base all'identificatore della voce di menu, controllo o l'invio del messaggio di tasti di scelta rapida.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="command_range_handler"></a>COMMAND_RANGE_HANDLER  
 Simile a [COMMAND_HANDLER](#command_handler), ma viene eseguito il mapping [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) i messaggi da una gamma di controlli a una funzione del gestore singolo.  
  
```
COMMAND_RANGE_HANDLER( idFirst, idLast, func)
```    
  
### <a name="parameters"></a>Parametri  
 `idFirst`  
 [in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.  
  
 `idLast`  
 [in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="remarks"></a>Note  
 Questo intervallo è in base all'identificatore della voce di menu, controllo o l'invio del messaggio di tasti di scelta rapida.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="declare_empty_msg_map"></a>DECLARE_EMPTY_MSG_MAP  
 Dichiara una mappa messaggi vuota.  
  
```
DECLARE_EMPTY_MSG_MAP()
```  
  
### <a name="remarks"></a>Note  
 `DECLARE_EMPTY_MSG_MAP`è una macro di praticità che chiama le macro [BEGIN_MSG_MAP](#begin_msg_map) e [END_MSG_MAP](#end_msg_map) per creare una mappa messaggi vuota:  
  
 [!code-cpp[NVC_ATL_Windowing#122](../../atl/codesnippet/cpp/message-map-macros-atl_7.h)]  
  
##  <a name="default_reflection_handler"></a>DEFAULT_REFLECTION_HANDLER  
 Fornisce un gestore predefinito per la finestra figlio (controllo) che riceverà messaggi; riflessi il gestore passerà correttamente i messaggi non gestiti per `DefWindowProc`.  
  
```
DEFAULT_REFLECTION_HANDLER()
```  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="end_msg_map"></a>END_MSG_MAP  
 Contrassegna la fine di una mappa messaggi.  
  
```
END_MSG_MAP()
```  
  
### <a name="remarks"></a>Note  
 Utilizzare sempre il [BEGIN_MSG_MAP](#begin_msg_map) macro per contrassegnare l'inizio di una mappa messaggi. Utilizzare [ALT_MSG_MAP](#alt_msg_map) per dichiarare successive mappe messaggi alternative.  
  
 Si noti che è sempre esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuna delle quali contiene una funzione del gestore:  
  
 [!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]  
  
 L'esempio successivo mostra due mappe messaggi alternative. La mappa messaggi predefinita è vuota.  
  
 [!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="forward_notifications"></a>FORWARD_NOTIFICATIONS  
 Inoltra i messaggi di notifica alla finestra padre.  
  
```
FORWARD_NOTIFICATIONS()
```  
  
### <a name="remarks"></a>Note  
 Specificare questa macro come parte della mappa messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="message_handler"></a>MESSAGE_HANDLER  
 Definisce una voce in una mappa messaggi.  
  
```
MESSAGE_HANDLER( msg, func )
```  
  
### <a name="parameters"></a>Parametri  
 `msg`  
 [in] Messaggio di Windows.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="remarks"></a>Note  
 `MESSAGE_HANDLER`esegue il mapping di un messaggio di Windows per la funzione del gestore specificato.  
  
 Qualsiasi funzione specificato in un `MESSAGE_HANDLER` macro deve essere definita come segue:  
  
 `LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);`  
  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima `MessageHandler` viene chiamato. Se `MessageHandler` non gestire completamente il messaggio, è necessario impostare `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
> [!NOTE]
>  Iniziano sempre una mappa messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È possibile dichiarare successive mappe messaggi alternative con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve disporre esattamente di un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Oltre a `MESSAGE_HANDLER`, è possibile utilizzare [COMMAND_HANDLER](#command_handler) e [NOTIFY_HANDLER](#notify_handler) per eseguire il mapping [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) e [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) i messaggi, rispettivamente.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#129](../../atl/codesnippet/cpp/message-map-macros-atl_8.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="message_range_handler"></a>MESSAGE_RANGE_HANDLER  
 Simile a [MESSAGE_HANDLER](#message_handler), ma esegue il mapping di un intervallo di Windows di messaggi a una funzione del gestore singolo.  
  
```
MESSAGE_RANGE_HANDLER( msgFirst, msgLast, func )
```  
  
### <a name="parameters"></a>Parametri  
 *msgFirst*  
 [in] Contrassegna l'inizio di un intervallo contiguo di messaggi.  
  
 *msgLast*  
 [in] Contrassegna la fine di un intervallo contiguo di messaggi.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="notify_code_handler"></a>NOTIFY_CODE_HANDLER  
 Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di un [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) messaggio basati solo sul codice di notifica.  
  
```
NOTIFY_CODE_HANDLER(cd, func)
```  
  
### <a name="parameters"></a>Parametri  
 `cd`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="notify_handler"></a>NOTIFY_HANDLER  
 Definisce una voce in una mappa messaggi.  
  
```
NOTIFY_HANDLER( id, cd, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] L'identificatore del controllo che invia il messaggio.  
  
 `cd`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="remarks"></a>Note  
 `NOTIFY_HANDLER`esegue il mapping di un [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) messaggio alla funzione del gestore specificato, in base al codice di notifica e l'identificatore del controllo.  
  
 Qualsiasi funzione specificato in un `NOTIFY_HANDLER` macro deve essere definita come segue:  
  
 `LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);`  
  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima `NotifyHandler` viene chiamato. Se `NotifyHandler` non gestire completamente il messaggio, è necessario impostare `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
> [!NOTE]
>  Iniziano sempre una mappa messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È possibile dichiarare successive mappe messaggi alternative con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve disporre esattamente di un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Oltre a `NOTIFY_HANDLER`, è possibile utilizzare [MESSAGE_HANDLER](#message_handler) per mappare un **WM_NOTIFY** messaggio senza tenere in considerazione un identificatore o il codice. In questo caso, `MESSAGE_HANDLER(WM_NOTIFY, OnHandlerFunction)` indirizzerà tutti **WM_NOTIFY** i messaggi inviati a `OnHandlerFunction`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#130](../../atl/codesnippet/cpp/message-map-macros-atl_9.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="notify_id_handler"></a>NOTIFY_ID_HANDLER  
 Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di un [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) messaggio basato solo sull'identificatore del controllo.  
  
```
NOTIFY_ID_HANDLER( id, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] L'identificatore del controllo che invia il messaggio.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="notify_range_code_handler"></a>NOTIFY_RANGE_CODE_HANDLER  
 Simile a [NOTIFY_RANGE_HANDLER](#notify_range_handler), ma viene eseguito il mapping [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) messaggi con un codice di notifica specifica da una gamma di controlli a una funzione del gestore singolo.  
  
```
NOTIFY_RANGE_CODE_HANDLER( idFirst, idLast, cd, func )
```  
  
### <a name="parameters"></a>Parametri  
 `idFirst`  
 [in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.  
  
 `idLast`  
 [in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.  
  
 `cd`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="remarks"></a>Note  
 Questo intervallo è in base all'identificatore del controllo che invia il messaggio.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="notify_range_handler"></a>NOTIFY_RANGE_HANDLER  
 Simile a [NOTIFY_HANDLER](#notify_handler), ma viene eseguito il mapping [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) i messaggi da una gamma di controlli a una funzione del gestore singolo.  
  
```
NOTIFY_RANGE_HANDLER( idFirst, idLast, func )
```  
  
### <a name="parameters"></a>Parametri  
 `idFirst`  
 [in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.  
  
 `idLast`  
 [in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="remarks"></a>Note  
 Questo intervallo è in base all'identificatore del controllo che invia il messaggio.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="reflect_notifications"></a>REFLECT_NOTIFICATIONS  
 Riflette i messaggi di notifica alla finestra figlio (controllo) che li ha inviati.  
  
```
REFLECT_NOTIFICATIONS()
```  
  
### <a name="remarks"></a>Note  
 Specificare questa macro come parte della mappa messaggi della finestra padre.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="reflected_command_code_handler"></a>REFLECTED_COMMAND_CODE_HANDLER  
 Simile a [COMMAND_CODE_HANDLER](#command_code_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.  
  
```
REFLECTED_COMMAND_CODE_HANDLER( code, func )
```  
  
### <a name="parameters"></a>Parametri  
 `code`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
   
##  <a name="reflected_command_handler"></a>REFLECTED_COMMAND_HANDLER  
 Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.  
  
```
REFLECTED_COMMAND_HANDLER( id, code, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o i tasti di scelta rapida.  
  
 `code`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="reflected_command_id_handler"></a>REFLECTED_COMMAND_ID_HANDLER  
 Simile a [COMMAND_ID_HANDLER](#command_id_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.  
  
```
REFLECTED_COMMAND_ID_HANDLER( id, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o i tasti di scelta rapida.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="reflected_command_range_code_handler"></a>REFLECTED_COMMAND_RANGE_CODE_HANDLER  
 Simile a [COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.  
  
```
REFLECTED_COMMAND_RANGE_CODE_HANDLER( idFirst, idLast, code, func )
```  
  
### <a name="parameters"></a>Parametri  
 `idFirst`  
 [in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.  
  
 `idLast`  
 [in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.  
  
 `code`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="reflected_command_range_handler"></a>REFLECTED_COMMAND_RANGE_HANDLER  
 Simile a [COMMAND_RANGE_HANDLER](#command_range_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.  
  
```
REFLECTED_COMMAND_RANGE_HANDLER( idFirst, idLast, func )
```  
  
### <a name="parameters"></a>Parametri  
 `idFirst`  
 [in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.  
  
 `idLast`  
 [in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="reflected_notify_code_handler"></a>REFLECTED_NOTIFY_CODE_HANDLER  
 Simile a [NOTIFY_CODE_HANDLER](#notify_code_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.  
  
```
REFLECTED_NOTIFY_CODE_HANDLER_EX( cd, func )
```  
  
### <a name="parameters"></a>Parametri  
 `cd`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="reflected_notify_handler"></a>REFLECTED_NOTIFY_HANDLER  
 Simile a [NOTIFY_HANDLER](#notify_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.  
  
```
REFLECTED_NOTIFY_HANDLER( id, cd, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o i tasti di scelta rapida.  
  
 `cd`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="reflected_notify_id_handler"></a>REFLECTED_NOTIFY_ID_HANDLER  
 Simile a [NOTIFY_ID_HANDLER](#notify_id_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.  
  
```
REFLECTED_NOTIFY_ID_HANDLER( id, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o i tasti di scelta rapida.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="reflected_notify_range_code_handler"></a>REFLECTED_NOTIFY_RANGE_CODE_HANDLER  
 Simile a [NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.  
  
```
REFLECTED_NOTIFY_RANGE_CODE_HANDLER( idFirst, idLast, cd, func )
```    
  
### <a name="parameters"></a>Parametri  
 `idFirst`  
 [in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.  
  
 `idLast`  
 [in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.  
  
 `cd`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="reflected_notify_range_handler"></a>REFLECTED_NOTIFY_RANGE_HANDLER  
 Simile a [NOTIFY_RANGE_HANDLER](#notify_range_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.  
  
```
REFLECTED_NOTIFY_RANGE_HANDLER( idFirst, idLast, func )
```  
  
### <a name="parameters"></a>Parametri  
 `idFirst`  
 [in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.  
  
 `idLast`  
 [in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
