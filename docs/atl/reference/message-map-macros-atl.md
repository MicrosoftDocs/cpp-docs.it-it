---
title: Macro della mappa (ATL) del messaggio | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: eefdd546-8934-4a30-b263-9c06a8addcbd
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 8097982d6574af2ce1ba592dbead8abf6f6433df
ms.lasthandoff: 02/24/2017

---
# <a name="message-map-macros-atl"></a>Macro della mappa messaggi (ATL)
Queste macro definiscono le mappe dei messaggi e le voci.  
  
|||  
|-|-|  
|[ALT_MSG_MAP](#alt_msg_map)|Contrassegna l'inizio di una mappa messaggi alternativa.|  
|[BEGIN_MSG_MAP](#begin_msg_map)|Contrassegna l'inizio della mappa messaggi predefinito.|  
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Eseguire il mapping sia concatenato a un messaggio alternativo nella classe di base.|  
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Concatena a una mappa messaggi alternativa in un membro dati della classe.|  
|[CHAIN_MSG_MAP](#chain_msg_map)|Eseguire il mapping delle catene per il messaggio predefinito nella classe di base.|  
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Catene alla mappa messaggi in un'altra classe in fase di esecuzione.|  
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Catene di messaggio predefinito esegue il mapping di un membro dati della classe.|  
|[COMMAND_CODE_HANDLER](#command_code_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[COMMAND_HANDLER](#command_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[COMMAND_ID_HANDLER](#command_id_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[DECLARE_EMPTY_MSG_MAP](#declare_empty_msg_map)|Implementa una mappa messaggi vuota.|  
|[DEFAULT_REFLECTION_HANDLER](#default_reflection_handler)|Fornisce un gestore predefinito per i messaggi riflessi non gestiti in caso contrario.|  
|[END_MSG_MAP](#end_msg_map)|Contrassegna la fine di una mappa messaggi.|  
|[FORWARD_NOTIFICATIONS](#forward_notifications)|Inoltra i messaggi di notifica alla finestra padre.|  
|[MESSAGE_HANDLER](#message_handler)|Un messaggio di Windows viene eseguito il mapping a una funzione del gestore.|  
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|Esegue il mapping di un intervallo contiguo di Windows per una funzione del gestore.|  
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[NOTIFY_HANDLER](#notify_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|  
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base all'identificatore di controllo.|  
|[NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[REFLECT_NOTIFICATIONS](#reflect_notifications)|Riflette i messaggi di notifica alla finestra che li ha inviati.|  
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|  
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base all'identificatore di controllo.|  
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="a-namealtmsgmapa--altmsgmap"></a><a name="alt_msg_map"></a>ALT_MSG_MAP  
 Contrassegna l'inizio di una mappa messaggi alternativa.  
  
```
ALT_MSG_MAP(msgMapID)
```  
  
### <a name="parameters"></a>Parametri  
 `msgMapID`  
 [in] Identificatore della mappa messaggi.  
  
### <a name="remarks"></a>Note  
 ATL identifica ogni mappa messaggi da un numero. La mappa messaggi predefinita (dichiarato con la `BEGIN_MSG_MAP` (macro)) è identificato da 0. Una mappa messaggi alternativa è identificata da `msgMapID`.  
  
 Mappe messaggi utilizzate per elaborare i messaggi inviati a una finestra. Ad esempio, [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) consente di specificare l'identificatore di una mappa dei messaggi nell'oggetto contenitore. [CContainedWindow:: WindowProc](ccontainedwindowt-class.md#windowproc) utilizza quindi la mappa messaggi per indirizzare i messaggi della finestra indipendente alla funzione del gestore appropriato o un'altra mappa messaggi. Per un elenco di macro che dichiarano funzioni di gestione, vedere [BEGIN_MSG_MAP](#begin_msg_map).  
  
 Iniziano sempre con una mappa di messaggi `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative.  
  
 Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Si noti che è sempre esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuno dei quali contiene una funzione del gestore:  
  
 [!code-cpp[&#98; NVC_ATL_Windowing](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]  
  
 L'esempio successivo mostra due mappe messaggi alternative. La mappa messaggi predefinita è vuota.  
  
 [!code-cpp[NVC_ATL_Windowing&#99;](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   

##  <a name="a-namebeginmsgmapa--beginmsgmap"></a><a name="begin_msg_map"></a>BEGIN_MSG_MAP  
 Contrassegna l'inizio della mappa messaggi predefinito.  
  
```
BEGIN_MSG_MAP(theClass)
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 [in] Il nome della classe contenente la mappa messaggi.  
  
### <a name="remarks"></a>Note  
 [CWindowImpl::](cwindowimpl-class.md#windowproc) utilizza la mappa messaggi predefinita per elaborare i messaggi inviati alla finestra. La mappa messaggi indirizza i messaggi alla funzione del gestore appropriato o un'altra mappa messaggi.  

  
 Le macro seguenti mapping di un messaggio a una funzione del gestore. Questa funzione deve essere definita in `theClass`.  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[MESSAGE_HANDLER](#message_handler)|Un messaggio di Windows viene eseguito il mapping a una funzione del gestore.|  
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|Esegue il mapping di un intervallo contiguo di Windows per una funzione del gestore.|  
|[COMMAND_HANDLER](#command_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[COMMAND_ID_HANDLER](#command_id_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[COMMAND_CODE_HANDLER](#command_handler)|Mappe un **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Esegue il mapping di un intervallo contiguo di **WM_COMMAND** messaggi a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[NOTIFY_HANDLER](#notify_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|  
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base all'identificatore di controllo.|  
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Mappe un **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Esegue il mapping di un intervallo contiguo di **WM_NOTIFY** messaggi a una funzione del gestore, in base all'identificatore di controllo.|  
  
 Le seguenti macro indirizzano i messaggi a un'altra mappa messaggi. Questo processo è denominato "concatenamento".  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[CHAIN_MSG_MAP](#chain_msg_map)|Eseguire il mapping delle catene per il messaggio predefinito nella classe di base.|  
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Catene di messaggio predefinito esegue il mapping di un membro dati della classe.|  
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Eseguire il mapping sia concatenato a un messaggio alternativo nella classe di base.|  
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Concatena a una mappa messaggi alternativa in un membro dati della classe.|  
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Eseguire il mapping delle catene per il messaggio predefinito in un'altra classe in fase di esecuzione.|  
  
 Le seguenti macro indirizzano messaggi "riprodotti" dalla finestra padre. Ad esempio, un controllo in genere invia i messaggi di notifica alla finestra padre per l'elaborazione, ma la finestra padre può riprodurre il messaggio al controllo.  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|  
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Esegue il mapping di un riflesso **WM_COMMAND** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|  
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base all'identificatore di controllo.|  
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica.|  
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base a un intervallo contiguo di identificatori di controllo.|  
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Esegue il mapping di un riflesso **WM_NOTIFY** messaggio a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#102; NVC_ATL_Windowing](../../atl/codesnippet/cpp/message-map-macros-atl_3.h)]  
  
 Quando un `CMyExtWindow` oggetto riceve un `WM_PAINT` messaggio, il messaggio viene indirizzato a `CMyExtWindow::OnPaint` per l'elaborazione effettiva. Se `OnPaint` indica il messaggio richiede un'ulteriore elaborazione, il messaggio viene quindi indirizzato alla mappa messaggi predefinita `CMyBaseWindow`.  
  
 Oltre alla mappa messaggi predefinito, è possibile definire una mappa messaggi alternativa con [ALT_MSG_MAP](#alt_msg_map). Iniziano sempre con una mappa di messaggi `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative. Nell'esempio seguente viene illustrato il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuno dei quali contiene una funzione del gestore:  
  
 [!code-cpp[&#98; NVC_ATL_Windowing](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]  
  
 L'esempio successivo mostra due mappe messaggi alternative. La mappa messaggi predefinita è vuota.  
  
 [!code-cpp[NVC_ATL_Windowing&#99;](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]  
  
 Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Si noti che è sempre esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namechainmsgmapalta--chainmsgmapalt"></a><a name="chain_msg_map_alt"></a>CHAIN_MSG_MAP_ALT  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP_ALT(theChainClass, msgMapID)
```  
  
### <a name="parameters"></a>Parametri  
 `theChainClass`  
 [in] Il nome della classe di base che contiene la mappa messaggi.  
  
 `msgMapID`  
 [in] Identificatore della mappa messaggi.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP_ALT`indirizza i messaggi a una mappa messaggi alternativa in una classe base. Deve essere dichiarate questa mappa messaggi alternativa con [ALT_MSG_MAP(msgMapID)](#alt_msg_map). Per indirizzare i messaggi alla mappa messaggi predefinita della classe di base (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)), utilizzare `CHAIN_MSG_MAP`. Per un esempio, vedere [CHAIN_MSG_MAP](#chain_msg_map).  
  
> [!NOTE]
>  Iniziano sempre con una mappa di messaggi `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve essere esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namechainmsgmapaltmembera--chainmsgmapaltmember"></a><a name="chain_msg_map_alt_member"></a>CHAIN_MSG_MAP_ALT_MEMBER  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP_ALT_MEMBER(theChainMember, msgMapID)
```  
  
### <a name="parameters"></a>Parametri  
 `theChainMember`  
 [in] Il nome del membro dati che contiene la mappa messaggi.  
  
 `msgMapID`  
 [in] Identificatore della mappa messaggi.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP_ALT_MEMBER`indirizza i messaggi a una mappa messaggi alternativa in un membro dati. Deve essere dichiarate questa mappa messaggi alternativa con [ALT_MSG_MAP(msgMapID)](#alt_msg_map). Per indirizzare i messaggi alla mappa messaggi predefinita di un membro dati (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)), utilizzare `CHAIN_MSG_MAP_MEMBER`. Per un esempio, vedere [CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member).  
  
> [!NOTE]
>  Iniziano sempre con una mappa di messaggi `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve essere esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namechainmsgmapa--chainmsgmap"></a><a name="chain_msg_map"></a>CHAIN_MSG_MAP  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP(theChainClass)
```  
  
### <a name="parameters"></a>Parametri  
 `theChainClass`  
 [in] Il nome della classe di base che contiene la mappa messaggi.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP`indirizza i messaggi alla mappa messaggi predefinita della classe di base (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)). Per indirizzare i messaggi alla mappa messaggi alternativa di una classe di base (dichiarato con [ALT_MSG_MAP](#alt_msg_map)), utilizzare [CHAIN_MSG_MAP_ALT](#chain_msg_map_alt).  
  
> [!NOTE]
>  Iniziano sempre con una mappa di messaggi `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve essere esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#107; NVC_ATL_Windowing](../../atl/codesnippet/cpp/message-map-macros-atl_4.h)]  
  
 In questo esempio viene illustrato quanto segue:  
  
-   Se si utilizza una routine della finestra `CMyClass`della mappa messaggi predefinita e `OnPaint` non handle di un messaggio, il messaggio viene indirizzato a `CMyBaseClass`della mappa messaggi predefinita per l'elaborazione.  
  
-   Se una routine della finestra utilizza la mappa messaggi alternativa prima in `CMyClass`, tutti i messaggi vengono indirizzati a `CMyBaseClass`della mappa messaggi predefinita.  
  
-   Se si utilizza una routine della finestra `CMyClass`del mapping secondo messaggio alternativo e `OnChar` non handle di un messaggio, il messaggio viene indirizzato alla mappa messaggi alternativa specificata in `CMyBaseClass`. `CMyBaseClass`devono essere dichiarate la mappa messaggi con `ALT_MSG_MAP(1)`.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namechainmsgmapdynamica--chainmsgmapdynamic"></a><a name="chain_msg_map_dynamic"></a>CHAIN_MSG_MAP_DYNAMIC  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP_DYNAMIC(dynaChainID)
```  
  
### <a name="parameters"></a>Parametri  
 *dynaChainID*  
 [in] Identificatore univoco per la mappa dei messaggi di un oggetto.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP_DYNAMIC`indirizza i messaggi, in fase di esecuzione per la mappa messaggi predefinita in un altro oggetto. L'oggetto e una mappa messaggi sono associati *dynaChainID*, che può essere definito tramite [CDynamicChain::](cdynamicchain-class.md#setchainentry). È necessario derivare la classe da `CDynamicChain` per poter utilizzare `CHAIN_MSG_MAP_DYNAMIC`. Per un esempio, vedere il [CDynamicChain](../../atl/reference/cdynamicchain-class.md) Panoramica.  

  
> [!NOTE]
>  Iniziano sempre con una mappa di messaggi [BEGIN_MSG_MAP](#begin_msg_map). È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve essere esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namechainmsgmapmembera--chainmsgmapmember"></a><a name="chain_msg_map_member"></a>CHAIN_MSG_MAP_MEMBER  
 Definisce una voce in una mappa messaggi.  
  
```
CHAIN_MSG_MAP_MEMBER(theChainMember)
```  
  
### <a name="parameters"></a>Parametri  
 `theChainMember`  
 [in] Il nome del membro dati che contiene la mappa messaggi.  
  
### <a name="remarks"></a>Note  
 `CHAIN_MSG_MAP_MEMBER`indirizza i messaggi alla mappa messaggi predefinita di un membro dati (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)). Per indirizzare i messaggi alla mappa messaggi alternativa di un membro dati (dichiarato con [ALT_MSG_MAP](#alt_msg_map)), utilizzare [CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member).  
  
> [!NOTE]
>  Iniziano sempre con una mappa di messaggi `BEGIN_MSG_MAP`. È possibile dichiarare successive mappe messaggi alternative con `ALT_MSG_MAP`. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve essere esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#108; NVC_ATL_Windowing](../../atl/codesnippet/cpp/message-map-macros-atl_5.h)]  
  
 In questo esempio viene illustrato quanto segue:  
  
-   Se si utilizza una routine della finestra `CMyClass`della mappa messaggi predefinita e `OnPaint` non handle di un messaggio, il messaggio viene indirizzato a `m_obj`della mappa messaggi predefinita per l'elaborazione.  
  
-   Se una routine della finestra utilizza la mappa messaggi alternativa prima in `CMyClass`, tutti i messaggi vengono indirizzati a `m_obj`della mappa messaggi predefinita.  
  
-   Se si utilizza una routine della finestra `CMyClass`del mapping secondo messaggio alternativo e `OnChar` non handle di un messaggio, il messaggio viene indirizzato alla mappa del messaggio alternativo specificato `m_obj`. Classe `CMyContainedClass` devono essere dichiarate la mappa messaggi con `ALT_MSG_MAP(1)`.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namecommandcodehandlera--commandcodehandler"></a><a name="command_code_handler"></a>COMMAND_CODE_HANDLER  
 Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di un [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio in base solo al codice di notifica.  
  
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
  
##  <a name="a-namecommandhandlera--commandhandler"></a><a name="command_handler"></a>COMMAND_HANDLER  
 Definisce una voce in una mappa messaggi.  
  
```
COMMAND_HANDLER(id, code, func)
```    
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o tasto di scelta rapida.  
  
 `code`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  
  
### <a name="remarks"></a>Note  
 `COMMAND_HANDLER`esegue il mapping di un [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio alla funzione del gestore specificato, in base al codice di notifica e l'identificatore del controllo. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing&#119;](../../atl/codesnippet/cpp/message-map-macros-atl_6.h)]  
  
 Qualsiasi funzione specificata un `COMMAND_HANDLER` macro deve essere definita come segue:  
  
 `LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);`  
  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima `CommandHandler` viene chiamato. Se `CommandHandler` non gestisce completamente il messaggio deve essere impostato `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
> [!NOTE]
>  Iniziano sempre con una mappa di messaggi [BEGIN_MSG_MAP](#begin_msg_map). È possibile dichiarare successive mappe messaggi alternative con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve essere esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Oltre a `COMMAND_HANDLER`, è possibile utilizzare [MESSAGE_HANDLER](#message_handler) per eseguire il mapping di un **WM_COMMAND** messaggio non tengono conto di un identificatore o codice. In questo caso, `MESSAGE_HANDLER(WM_COMMAND, OnHandlerFunction)` indirizzerà tutte **WM_COMMAND** messaggi `OnHandlerFunction`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namecommandidhandlera--commandidhandler"></a><a name="command_id_handler"></a>COMMAND_ID_HANDLER  
 Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di un [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggi solo in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.  
  
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
  
##  <a name="a-namecommandrangecodehandlera--commandrangecodehandler"></a><a name="command_range_code_handler"></a>COMMAND_RANGE_CODE_HANDLER  
 Simile a [COMMAND_RANGE_HANDLER](#command_range_handler), ma esegue il mapping di [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggi con un codice di notifica specifico da una gamma di controlli a una funzione di gestione singolo.  
  
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
  
##  <a name="a-namecommandrangehandlera--commandrangehandler"></a><a name="command_range_handler"></a>COMMAND_RANGE_HANDLER  
 Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) i messaggi da una gamma di controlli a una funzione di gestione singolo.  
  
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
  
##  <a name="a-namedeclareemptymsgmapa--declareemptymsgmap"></a><a name="declare_empty_msg_map"></a>DECLARE_EMPTY_MSG_MAP  
 Dichiara una mappa messaggi vuota.  
  
```
DECLARE_EMPTY_MSG_MAP()
```  
  
### <a name="remarks"></a>Note  
 `DECLARE_EMPTY_MSG_MAP`è una macro praticità che chiama le macro [BEGIN_MSG_MAP](#begin_msg_map) e [END_MSG_MAP](#end_msg_map) per creare una mappa messaggi vuota:  
  
 [!code-cpp[NVC_ATL_Windowing&#122;](../../atl/codesnippet/cpp/message-map-macros-atl_7.h)]  
  
##  <a name="a-namedefaultreflectionhandlera--defaultreflectionhandler"></a><a name="default_reflection_handler"></a>DEFAULT_REFLECTION_HANDLER  
 Fornisce un gestore predefinito per la finestra figlio (controllo) che riceverà riflette i messaggi. il gestore passerà correttamente messaggi non gestiti a `DefWindowProc`.  
  
```
DEFAULT_REFLECTION_HANDLER()
```  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-nameendmsgmapa--endmsgmap"></a><a name="end_msg_map"></a>END_MSG_MAP  
 Contrassegna la fine di una mappa messaggi.  
  
```
END_MSG_MAP()
```  
  
### <a name="remarks"></a>Note  
 Utilizzare sempre il [BEGIN_MSG_MAP](#begin_msg_map) macro per contrassegnare l'inizio di una mappa messaggi. Utilizzare [ALT_MSG_MAP](#alt_msg_map) dichiarare successive mappe messaggi alternative.  
  
 Si noti che è sempre esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuno dei quali contiene una funzione del gestore:  
  
 [!code-cpp[&#98; NVC_ATL_Windowing](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]  
  
 L'esempio successivo mostra due mappe messaggi alternative. La mappa messaggi predefinita è vuota.  
  
 [!code-cpp[NVC_ATL_Windowing&#99;](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-nameforwardnotificationsa--forwardnotifications"></a><a name="forward_notifications"></a>FORWARD_NOTIFICATIONS  
 Inoltra i messaggi di notifica alla finestra padre.  
  
```
FORWARD_NOTIFICATIONS()
```  
  
### <a name="remarks"></a>Note  
 Specificare questa macro come parte della mappa messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namemessagehandlera--messagehandler"></a><a name="message_handler"></a>MESSAGE_HANDLER  
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
 `MESSAGE_HANDLER`un messaggio di Windows viene eseguito il mapping alla funzione del gestore specificato.  
  
 Qualsiasi funzione specificata un `MESSAGE_HANDLER` macro deve essere definita come segue:  
  
 `LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);`  
  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima `MessageHandler` viene chiamato. Se `MessageHandler` non gestisce completamente il messaggio deve essere impostato `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
> [!NOTE]
>  Iniziano sempre con una mappa di messaggi [BEGIN_MSG_MAP](#begin_msg_map). È possibile dichiarare successive mappe messaggi alternative con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve essere esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Oltre a `MESSAGE_HANDLER`, è possibile utilizzare [COMMAND_HANDLER](#command_handler) e [NOTIFY_HANDLER](#notify_handler) per eseguire il mapping [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) e [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) i messaggi, rispettivamente.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#129;](../../atl/codesnippet/cpp/message-map-macros-atl_8.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namemessagerangehandlera--messagerangehandler"></a><a name="message_range_handler"></a>MESSAGE_RANGE_HANDLER  
 Simile a [MESSAGE_HANDLER](#message_handler), ma le mappe messaggi di un intervallo di Windows per una funzione di gestione singolo.  
  
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
  
##  <a name="a-namenotifycodehandlera--notifycodehandler"></a><a name="notify_code_handler"></a>NOTIFY_CODE_HANDLER  
 Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di un [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) messaggio in base solo al codice di notifica.  
  
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
  
##  <a name="a-namenotifyhandlera--notifyhandler"></a><a name="notify_handler"></a>NOTIFY_HANDLER  
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
  
 Qualsiasi funzione specificata un `NOTIFY_HANDLER` macro deve essere definita come segue:  
  
 `LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);`  
  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima `NotifyHandler` viene chiamato. Se `NotifyHandler` non gestisce completamente il messaggio deve essere impostato `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
> [!NOTE]
>  Iniziano sempre con una mappa di messaggi [BEGIN_MSG_MAP](#begin_msg_map). È possibile dichiarare successive mappe messaggi alternative con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve essere esattamente un'istanza di `BEGIN_MSG_MAP` e `END_MSG_MAP`.  
  
 Oltre a `NOTIFY_HANDLER`, è possibile utilizzare [MESSAGE_HANDLER](#message_handler) per eseguire il mapping di un **WM_NOTIFY** messaggio non tengono conto di un identificatore o codice. In questo caso, `MESSAGE_HANDLER(WM_NOTIFY, OnHandlerFunction)` indirizzerà tutte **WM_NOTIFY** messaggi `OnHandlerFunction`.  
  
 Per ulteriori informazioni sull'utilizzo di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#130;](../../atl/codesnippet/cpp/message-map-macros-atl_9.h)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namenotifyidhandlera--notifyidhandler"></a><a name="notify_id_handler"></a>NOTIFY_ID_HANDLER  
 Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di un [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) messaggio in base solo l'identificatore del controllo.  
  
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
  
##  <a name="a-namenotifyrangecodehandlera--notifyrangecodehandler"></a><a name="notify_range_code_handler"></a>NOTIFY_RANGE_CODE_HANDLER  
 Simile a [NOTIFY_RANGE_HANDLER](#notify_range_handler), ma esegue il mapping di [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) messaggi con un codice di notifica specifico da una gamma di controlli a una funzione di gestione singolo.  
  
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
  
##  <a name="a-namenotifyrangehandlera--notifyrangehandler"></a><a name="notify_range_handler"></a>NOTIFY_RANGE_HANDLER  
 Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) i messaggi da una gamma di controlli a una funzione di gestione singolo.  
  
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
  
##  <a name="a-namereflectnotificationsa--reflectnotifications"></a><a name="reflect_notifications"></a>REFLECT_NOTIFICATIONS  
 Riflette i messaggi di notifica alla finestra figlio (controllo) che li ha inviati.  
  
```
REFLECT_NOTIFICATIONS()
```  
  
### <a name="remarks"></a>Note  
 Specificare questa macro come parte della mappa messaggi della finestra padre.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h   
  
##  <a name="a-namereflectedcommandcodehandlera--reflectedcommandcodehandler"></a><a name="reflected_command_code_handler"></a>REFLECTED_COMMAND_CODE_HANDLER  
 Simile a [COMMAND_CODE_HANDLER](#command_code_handler), ma associa i comandi riflessi dalla finestra padre.  
  
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
   
##  <a name="a-namereflectedcommandhandlera--reflectedcommandhandler"></a><a name="reflected_command_handler"></a>REFLECTED_COMMAND_HANDLER  
 Simile a [COMMAND_HANDLER](#command_handler), ma associa i comandi riflessi dalla finestra padre.  
  
```
REFLECTED_COMMAND_HANDLER( id, code, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o tasto di scelta rapida.  
  
 `code`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="a-namereflectedcommandidhandlera--reflectedcommandidhandler"></a><a name="reflected_command_id_handler"></a>REFLECTED_COMMAND_ID_HANDLER  
 Simile a [COMMAND_ID_HANDLER](#command_id_handler), ma associa i comandi riflessi dalla finestra padre.  
  
```
REFLECTED_COMMAND_ID_HANDLER( id, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o tasto di scelta rapida.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="a-namereflectedcommandrangecodehandlera--reflectedcommandrangecodehandler"></a><a name="reflected_command_range_code_handler"></a>REFLECTED_COMMAND_RANGE_CODE_HANDLER  
 Simile a [COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler), ma associa i comandi riflessi dalla finestra padre.  
  
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

##  <a name="a-namereflectedcommandrangehandlera--reflectedcommandrangehandler"></a><a name="reflected_command_range_handler"></a>REFLECTED_COMMAND_RANGE_HANDLER  
 Simile a [COMMAND_RANGE_HANDLER](#command_range_handler), ma associa i comandi riflessi dalla finestra padre.  
  
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

##  <a name="a-namereflectednotifycodehandlera--reflectednotifycodehandler"></a><a name="reflected_notify_code_handler"></a>REFLECTED_NOTIFY_CODE_HANDLER  
 Simile a [NOTIFY_CODE_HANDLER](#notify_code_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.  
  
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

##  <a name="a-namereflectednotifyhandlera--reflectednotifyhandler"></a><a name="reflected_notify_handler"></a>REFLECTED_NOTIFY_HANDLER  
 Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.  
  
```
REFLECTED_NOTIFY_HANDLER( id, cd, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o tasto di scelta rapida.  
  
 `cd`  
 [in] Il codice di notifica.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="a-namereflectednotifyidhandlera--reflectednotifyidhandler"></a><a name="reflected_notify_id_handler"></a>REFLECTED_NOTIFY_ID_HANDLER  
 Simile a [NOTIFY_ID_HANDLER](#notify_id_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.  
  
```
REFLECTED_NOTIFY_ID_HANDLER( id, func )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identificatore della voce di menu, controllo o tasto di scelta rapida.  
  
 `func`  
 [in] Il nome della funzione del gestore di messaggi.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

##  <a name="a-namereflectednotifyrangecodehandlera--reflectednotifyrangecodehandler"></a><a name="reflected_notify_range_code_handler"></a>REFLECTED_NOTIFY_RANGE_CODE_HANDLER  
 Simile a [NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.  
  
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
  
##  <a name="a-namereflectednotifyrangehandlera--reflectednotifyrangehandler"></a><a name="reflected_notify_range_handler"></a>REFLECTED_NOTIFY_RANGE_HANDLER  
 Simile a [NOTIFY_RANGE_HANDLER](#notify_range_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.  
  
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

