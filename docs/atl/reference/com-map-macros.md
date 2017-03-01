---
title: Macro della mappa COM | Documenti di Microsoft
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
helpviewer_keywords:
- COM interfaces, COM map macros
ms.assetid: 0f33656d-321f-4996-90cc-9a7f21ab73c3
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
ms.openlocfilehash: 79658b6ac22719af7172c9d2848675faf2a23a0c
ms.lasthandoff: 02/24/2017

---
# <a name="com-map-macros"></a>Macro della mappa COM
Queste macro definiscono mappe dell'interfaccia COM.  
  
|||  
|-|-|  
|[BEGIN_COM_MAP](#begin_com_map)|Contrassegna l'inizio delle voci della mappa dell'interfaccia COM.|  
|[COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00)|Inserisce interfacce nella mappa dell'interfaccia COM.|  
|[COM_INTERFACE_ENTRY2](#com_interface_entry2)|Utilizzare questa macro per evitare ambiguità tra due rami di ereditarietà.|  
|[COM_INTERFACE_ENTRY_IID](#com_interface_entry_iid)|Utilizzare questa macro per accedere all'interfaccia nella mappa COM e specificare il relativo IID.|  
|[COM_INTERFACE_ENTRY2_IID](#com_interface_entry2_iid)|Uguale a [COM_INTERFACE_ENTRY2](#com_interface_entry2), ma è possibile specificare un IID diversi.|  
|[COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate)|Quando l'interfaccia identificato dal `iid` viene eseguita una query, `COM_INTERFACE_ENTRY_AGGREGATE` inoltra a `punk`.|  
|[COM_INTERFACE_ENTRY_AGGREGATE_BLIND](#com_interface_entry_aggregate_blind)|Uguale a [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query per l'inoltro `punk`.|  
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate)|Uguale a [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), tranne se `punk` è **NULL**, crea automaticamente la funzione di aggregazione descritto dal `clsid`.|  
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](#com_interface_entry_autoaggregate_blind)|Uguale a [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query per l'inoltro `punk`e se `punk` è **NULL**, vengono automaticamente la creazione dell'aggregazione descritto dal `clsid`.|  
|[COM_INTERFACE_ENTRY_BREAK](#com_interface_entry_break)|Fa sì che il programma può chiamare [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297) quando viene richiesto l'interfaccia specificata.|  
|[COM_INTERFACE_ENTRY_CACHED_TEAR_OFF](#com_interface_entry_cached_tear_off)|Salva i dati specifici dell'interfaccia per ogni istanza.|  
|[COM_INTERFACE_ENTRY_TEAR_OFF](#com_interface_entry_tear_off)|Espone le interfacce tear-off.|  
|[COM_INTERFACE_ENTRY_CHAIN](#com_interface_entry_chain)|Elabora la mappa COM della classe di base durante l'elaborazione raggiunge questa voce nella mappa COM.|  
|[COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func)|Un meccanismo generale per l'associazione in ATL `QueryInterface` logica.|  
|[COM_INTERFACE_ENTRY_FUNC_BLIND](#com_interface_entry_func_blind)|Uguale a [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta una chiamata a `func`.|  
|[COM_INTERFACE_ENTRY_NOINTERFACE](#com_interface_entry_nointerface)|Restituisce **E_NOINTERFACE** e termina l'elaborazione della mappa COM quando viene richiesto l'interfaccia specificata.|  
|[END_COM_MAP](#end_com_map)|Contrassegna la fine delle voci della mappa dell'interfaccia COM.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
   
##  <a name="a-namebegincommapa--begincommap"></a><a name="begin_com_map"></a>BEGIN_COM_MAP  
 La mappa COM è il meccanismo che espone le interfacce su un oggetto a un client tramite `QueryInterface`.  
  
```
BEGIN_COM_MAP(x)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome dell'oggetto della classe da esporre interfacce nel.  
  
### <a name="remarks"></a>Note  
 [CComObjectRootEx:: InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) restituisce solo i puntatori per le interfacce nella mappa COM. Avviare la mappa dell'interfaccia con il `BEGIN_COM_MAP` (macro), aggiungere le voci per ciascuna delle interfacce utilizzate con la [COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/c5363b8b-a1a2-471e-ad3a-d472f6c356c5) macro o una delle relative varianti e completare la mappa con la [END_COM_MAP](#end_com_map) (macro).  

  
### <a name="example"></a>Esempio  
 Da ATL [CERCAPERSONE](../../visual-cpp-samples.md) esempio:  
  
 [!code-cpp[NVC_ATL_COM N.&1;](../../atl/codesnippet/cpp/com-map-macros_1.h)]  
  
##  <a name="a-namecominterfaceentrymacrosa--cominterfaceentry-macros"></a><a name="com_interface_entry_macros"></a>Macro COM_INTERFACE_ENTRY  
 Queste macro immettere le interfacce di un oggetto nella relativa mappa COM in modo da renderli accessibili alle `QueryInterface`. L'ordine delle voci della mappa COM è le interfacce di ordine vengono contrassegnate per la corrispondente **IID** durante `QueryInterface`.  
  
##  <a name="a-namecominterfaceentry2x2a--cominterfaceentry2"></a><a name="com_interface_entry2_x2"></a>COM_INTERFACE_ENTRY2  
 Utilizzare questa macro per evitare ambiguità tra due rami di ereditarietà.  
  
```
COM_INTERFACE_ENTRY2(x, x2)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome di un'interfaccia a cui si desidera esporre dall'oggetto.  
  
 `x2`  
 [in] Il nome del ramo ereditarietà da cui *x* viene esposto.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se si deriva l'oggetto di classe da due interfacce duali, espongono `IDispatch` utilizzando `COM_INTERFACE_ENTRY2` poiché `IDispatch` può essere ottenuto da una delle interfacce.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#118; NVC_ATL_Windowing](../../atl/codesnippet/cpp/com-map-macros_2.h)]  
  
##  <a name="a-namecominterfaceentryiida--cominterfaceentryiid"></a><a name="com_interface_entry_iid"></a>COM_INTERFACE_ENTRY_IID  
 Utilizzare questa macro per accedere all'interfaccia nella mappa COM e specificare il relativo IID.  
  
```
COM_INTERFACE_ENTRY_IID(iid, x)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia esposta.  
  
 *x*  
 [in] Il nome della classe il cui vtable verrà esposti come l'interfaccia identificato da `iid`.  
  
### <a name="remarks"></a>Note  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#117;](../../atl/codesnippet/cpp/com-map-macros_3.h)]  
  
##  <a name="a-namecominterfaceentry2iida--cominterfaceentry2iid"></a><a name="com_interface_entry2_iid"></a>COM_INTERFACE_ENTRY2_IID  
 Uguale a [COM_INTERFACE_ENTRY2](#com_interface_entry2), ma è possibile specificare un IID diversi.  
  
```
COM_INTERFACE_ENTRY2_IID(iid, x, x2)
```   
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID si specifica per l'interfaccia.  
  
 *x*  
 [in] Il nome di oggetto di classe deriva direttamente da un'interfaccia.  
  
 `x2`  
 [in] Il nome di una seconda interfaccia che l'oggetto della classe deriva da direttamente.  
  
### <a name="remarks"></a>Note  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
##  <a name="a-namecominterfaceentry2a--cominterfaceentry2"></a><a name="com_interface_entry2"></a>COM_INTERFACE_ENTRY2  
 Utilizzare questa macro per evitare ambiguità tra due rami di ereditarietà.  
  
```
COM_INTERFACE_ENTRY2(x, x2)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome di un'interfaccia a cui si desidera esporre dall'oggetto.  
  
 `x2`  
 [in] Il nome del ramo ereditarietà da cui *x* viene esposto.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se si deriva l'oggetto di classe da due interfacce duali, espongono `IDispatch` utilizzando `COM_INTERFACE_ENTRY2` poiché `IDispatch` può essere ottenuto da una delle interfacce.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#118; NVC_ATL_Windowing](../../atl/codesnippet/cpp/com-map-macros_2.h)]  
  
##  <a name="a-namecominterfaceentryaggregate2a--cominterfaceentryaggregate"></a><a name="com_interface_entry_aggregate2"></a>COM_INTERFACE_ENTRY_AGGREGATE  
 Quando l'interfaccia identificato dal `iid` viene eseguita una query, `COM_INTERFACE_ENTRY_AGGREGATE` inoltra a `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore.  
  
### <a name="remarks"></a>Note  
 Il `punk` parametro viene considerato in modo che punti a sconosciuto interna di un'aggregazione o a **NULL**, nel qual caso la voce verrà ignorata. In genere, si farebbe **CoCreate** l'aggregazione in `FinalConstruct`.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#112;](../../atl/codesnippet/cpp/com-map-macros_4.h)]  
  
##  <a name="a-namecominterfaceentryaggregateblinda--cominterfaceentryaggregateblind"></a><a name="com_interface_entry_aggregate_blind"></a>COM_INTERFACE_ENTRY_AGGREGATE_BLIND  
 Uguale a [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query per l'inoltro `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE_BLIND(punk)
```  
  
### <a name="parameters"></a>Parametri  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore.  
  
### <a name="remarks"></a>Note  
 Se la query di interfaccia avrà esito negativo, l'elaborazione della mappa COM continua.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#113;](../../atl/codesnippet/cpp/com-map-macros_5.h)]  
  
##  <a name="a-namecominterfaceentryaggregate3a--cominterfaceentryaggregate"></a><a name="com_interface_entry_aggregate3"></a>COM_INTERFACE_ENTRY_AGGREGATE  
 Quando l'interfaccia identificato dal `iid` viene eseguita una query, `COM_INTERFACE_ENTRY_AGGREGATE` inoltra a `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore.  
  
### <a name="remarks"></a>Note  
 Il `punk` parametro viene considerato in modo che punti a sconosciuto interna di un'aggregazione o a **NULL**, nel qual caso la voce verrà ignorata. In genere, si farebbe **CoCreate** l'aggregazione in `FinalConstruct`.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#112;](../../atl/codesnippet/cpp/com-map-macros_4.h)]  
  
##  <a name="a-namecominterfaceentryautoaggregatea--cominterfaceentryautoaggregate"></a><a name="com_interface_entry_autoaggregate"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE  
 Uguale a [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), tranne se `punk` è **NULL**, crea automaticamente la funzione di aggregazione descritto dal `clsid`.  
  
```
COM_INTERFACE_ENTRY_AUTOAGGREGATE(iid, punk, clsid)
```   
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore. Deve essere un membro della classe che contiene la mappa COM.  
  
 `clsid`  
 [in] L'identificatore della funzione di aggregazione che verrà creato se `punk` è **NULL**.  
  
### <a name="remarks"></a>Note  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#114; NVC_ATL_Windowing](../../atl/codesnippet/cpp/com-map-macros_6.h)]  
  
##  <a name="a-namecominterfaceentryaggregatea--cominterfaceentryaggregate"></a><a name="com_interface_entry_aggregate"></a>COM_INTERFACE_ENTRY_AGGREGATE  
 Quando l'interfaccia identificato dal `iid` viene eseguita una query, `COM_INTERFACE_ENTRY_AGGREGATE` inoltra a `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore.  
  
### <a name="remarks"></a>Note  
 Il `punk` parametro viene considerato in modo che punti a sconosciuto interna di un'aggregazione o a **NULL**, nel qual caso la voce verrà ignorata. In genere, si farebbe **CoCreate** l'aggregazione in `FinalConstruct`.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#112;](../../atl/codesnippet/cpp/com-map-macros_4.h)]  
  
##  <a name="a-namecominterfaceentryautoaggregateblinda--cominterfaceentryautoaggregateblind"></a><a name="com_interface_entry_autoaggregate_blind"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND  
 Uguale a [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query per l'inoltro `punk`e se `punk` è **NULL**, vengono automaticamente la creazione dell'aggregazione descritto dal `clsid`.  
  
```
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(punk, clsid)
```  
  
### <a name="parameters"></a>Parametri  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore. Deve essere un membro della classe che contiene la mappa COM.  
  
 `clsid`  
 [in] L'identificatore della funzione di aggregazione che verrà creato se `punk` è **NULL**.  
  
### <a name="remarks"></a>Note  
 Se la query di interfaccia avrà esito negativo, l'elaborazione della mappa COM continua.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#115;](../../atl/codesnippet/cpp/com-map-macros_7.h)]  
  
##  <a name="a-namecominterfaceentryautoaggregate2a--cominterfaceentryautoaggregate"></a><a name="com_interface_entry_autoaggregate2"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE  
 Uguale a [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), tranne se `punk` è **NULL**, crea automaticamente la funzione di aggregazione descritto dal `clsid`.  
  
```
COM_INTERFACE_ENTRY_AUTOAGGREGATE(iid, punk, clsid)
```   
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore. Deve essere un membro della classe che contiene la mappa COM.  
  
 `clsid`  
 [in] L'identificatore della funzione di aggregazione che verrà creato se `punk` è **NULL**.  
  
### <a name="remarks"></a>Note  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#114; NVC_ATL_Windowing](../../atl/codesnippet/cpp/com-map-macros_6.h)]  
  
##  <a name="a-namecominterfaceentrybreaka--cominterfaceentrybreak"></a><a name="com_interface_entry_break"></a>COM_INTERFACE_ENTRY_BREAK  
 Fa sì che il programma può chiamare [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297) quando viene richiesto l'interfaccia specificata.  
  
```
COM_INTERFACE_ENTRY_BREAK(x)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Testo utilizzato per costruire l'identificatore di interfaccia.  
  
### <a name="remarks"></a>Note  
 L'interfaccia IID verrà costruita aggiungendo *x* a `IID_`. Ad esempio, se *x* è `IPersistStorage`, sarà l'IID `IID_IPersistStorage`.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
##  <a name="a-namecominterfaceentrycachedtearoffa--cominterfaceentrycachedtearoff"></a><a name="com_interface_entry_cached_tear_off"></a>COM_INTERFACE_ENTRY_CACHED_TEAR_OFF  
 Salva i dati specifici dell'interfaccia per ogni istanza.  
  
```
COM_INTERFACE_ENTRY_CACHED_TEAR_OFF(iid, x, punk)
```   
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia tear-off.  
  
 *x*  
 [in] Il nome della classe che implementa l'interfaccia.  
  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore. Deve essere un membro della classe che contiene la mappa COM. Deve essere inizializzato a **NULL** nel costruttore dell'oggetto classe.  
  
### <a name="remarks"></a>Note  
 Se l'interfaccia non viene utilizzato, ciò riduce la dimensione complessiva di istanza dell'oggetto.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM&#54;](../../atl/codesnippet/cpp/com-map-macros_8.h)]  
  
##  <a name="a-namecominterfaceentrytearoffa--cominterfaceentrytearoff"></a><a name="com_interface_entry_tear_off"></a>COM_INTERFACE_ENTRY_TEAR_OFF  
 Espone le interfacce tear-off.  
  
```
COM_INTERFACE_ENTRY_TEAR_OFF(iid, x)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia tear-off.  
  
 *x*  
 [in] Il nome della classe che implementa l'interfaccia.  
  
### <a name="remarks"></a>Note  
 Un'interfaccia tear-off viene implementata come un oggetto separato che viene creata ogni volta che l'interfaccia che rappresenta un'istanza viene richiesto. In genere, si compila l'interfaccia come tear-off se viene utilizzato raramente l'interfaccia, poiché si salva un puntatore vtable in ogni istanza dell'oggetto principale. La comparsa viene eliminato quando il conteggio dei riferimenti diventa zero. La classe che implementa la comparsa deve essere derivata da `CComTearOffObjectBase` e avere una propria mappa COM.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM N.&1;](../../atl/codesnippet/cpp/com-map-macros_1.h)]  
  
##  <a name="a-namecominterfaceentrychaina--cominterfaceentrychain"></a><a name="com_interface_entry_chain"></a>COM_INTERFACE_ENTRY_CHAIN  
 Elabora la mappa COM della classe di base durante l'elaborazione raggiunge questa voce nella mappa COM.  
  
```
COM_INTERFACE_ENTRY_CHAIN(classname)
```  
  
### <a name="parameters"></a>Parametri  
 *ClassName*  
 [in] Classe di base dell'oggetto corrente.  
  
### <a name="remarks"></a>Note  
 Ad esempio, nel codice seguente:  
  
 [!code-cpp[N.&116; NVC_ATL_Windowing](../../atl/codesnippet/cpp/com-map-macros_9.h)]  
  
 Si noti che la prima voce nella mappa COM deve essere un'interfaccia sull'oggetto che contiene la mappa COM. Pertanto, non è possibile avviare le voci della mappa COM con `COM_INTERFACE_ENTRY_CHAIN`, in modo che la mappa COM di un oggetto diverso da cercare nel punto in cui **COM_INTERFACE_ENTRY_CHAIN (**`COtherObject`**)** viene visualizzato nella mappa COM dell'oggetto. Se si desidera cercare innanzitutto la mappa COM di un altro oggetto, aggiungere una voce di interfaccia per **IUnknown** alla mappa COM, quindi catena della mappa COM dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing&#111;](../../atl/codesnippet/cpp/com-map-macros_10.h)]  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
##  <a name="a-namecominterfaceentryfunc2a--cominterfaceentryfunc"></a><a name="com_interface_entry_func2"></a>COM_INTERFACE_ENTRY_FUNC  
 Un meccanismo generale per l'associazione in ATL `QueryInterface` logica.  
  
```
COM_INTERFACE_ENTRY_FUNC(iid, dw, func)
```   
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia esposta.  
  
 `dw`  
 [in] Un parametro passato tramite la `func`.  
  
 `func`  
 [in] Puntatore a funzione che restituirà `iid`.  
  
### <a name="remarks"></a>Note  
 Se *iid* corrisponde l'IID di interfaccia richiesto, quindi la funzione specificata da `func` viene chiamato. La dichiarazione della funzione deve essere:  
  
 `HRESULT WINAPI func(void* pv, REFIID riid, LPVOID* ppv, DWORD_PTR dw);`  
  
 Quando viene chiamata la funzione `pv` punta all'oggetto di classe. Il `riid` parametro fa riferimento all'interfaccia sottoposta a query, `ppv` è il puntatore alla posizione in cui la funzione deve archiviare il puntatore all'interfaccia e `dw` è il parametro è specificato nella voce. La funzione deve impostare \* `ppv` a **NULL** e restituire **E_NOINTERFACE** o **S_FALSE** se sceglie di non restituire un'interfaccia. Con **E_NOINTERFACE**, termina l'elaborazione della mappa COM. Con **S_FALSE**, continua l'elaborazione della mappa COM, anche se è stato restituito alcun puntatore a interfaccia. Se la funzione restituisce un puntatore a interfaccia, deve restituire `S_OK`.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
##  <a name="a-namecominterfaceentryfuncblinda--cominterfaceentryfuncblind"></a><a name="com_interface_entry_func_blind"></a>COM_INTERFACE_ENTRY_FUNC_BLIND  
 Uguale a [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta una chiamata a `func`.  
  
```
COM_INTERFACE_ENTRY_FUNC_BLIND(dw, func)
```  
  
### <a name="parameters"></a>Parametri  
 `dw`  
 [in] Un parametro passato tramite la `func`.  
  
 `func`  
 [in] La funzione che viene chiamata durante l'elaborazione di questa voce nella mappa COM.  
  
### <a name="remarks"></a>Note  
 Qualsiasi errore causerà l'elaborazione di continuare sulla mappa COM. Se la funzione restituisce un puntatore a interfaccia, deve restituire `S_OK`.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
##  <a name="a-namecominterfaceentryfunca--cominterfaceentryfunc"></a><a name="com_interface_entry_func"></a>COM_INTERFACE_ENTRY_FUNC  
 Un meccanismo generale per l'associazione in ATL `QueryInterface` logica.  
  
```
COM_INTERFACE_ENTRY_FUNC(iid, dw, func)
```   
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia esposta.  
  
 `dw`  
 [in] Un parametro passato tramite la `func`.  
  
 `func`  
 [in] Puntatore a funzione che restituirà `iid`.  
  
### <a name="remarks"></a>Note  
 Se *iid* corrisponde l'IID di interfaccia richiesto, quindi la funzione specificata da `func` viene chiamato. La dichiarazione della funzione deve essere:  
  
 `HRESULT WINAPI func(void* pv, REFIID riid, LPVOID* ppv, DWORD_PTR dw);`  
  
 Quando viene chiamata la funzione `pv` punta all'oggetto di classe. Il `riid` parametro fa riferimento all'interfaccia sottoposta a query, `ppv` è il puntatore alla posizione in cui la funzione deve archiviare il puntatore all'interfaccia e `dw` è il parametro è specificato nella voce. La funzione deve impostare \* `ppv` a **NULL** e restituire **E_NOINTERFACE** o **S_FALSE** se sceglie di non restituire un'interfaccia. Con **E_NOINTERFACE**, termina l'elaborazione della mappa COM. Con **S_FALSE**, continua l'elaborazione della mappa COM, anche se è stato restituito alcun puntatore a interfaccia. Se la funzione restituisce un puntatore a interfaccia, deve restituire `S_OK`.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
##  <a name="a-namecominterfaceentrynointerfacea--cominterfaceentrynointerface"></a><a name="com_interface_entry_nointerface"></a>COM_INTERFACE_ENTRY_NOINTERFACE  
 Restituisce **E_NOINTERFACE** e termina l'elaborazione della mappa COM quando viene richiesto l'interfaccia specificata.  
  
```
COM_INTERFACE_ENTRY_NOINTERFACE(x)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Testo utilizzato per costruire l'identificatore di interfaccia.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare questa macro per impedire l'utilizzo di un'interfaccia in un caso particolare. Ad esempio, è possibile inserire questa macro di COM subito prima di eseguire il mapping `COM_INTERFACE_ENTRY_AGGREGATE_BLIND` per impedire che una query per l'interfaccia inoltrati Unknown interna dell'aggregazione.  
  
 L'interfaccia IID verrà costruita aggiungendo *x* a `IID_`. Ad esempio, se *x* è `IPersistStorage`, sarà l'IID `IID_IPersistStorage`.  
  
 Vedere [macro COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) per informazioni su COM voci della mappa.  
  
##  <a name="a-nameendcommapa--endcommap"></a><a name="end_com_map"></a>END_COM_MAP  
 Termina la definizione della mappa dell'interfaccia COM.  
  
```
END_COM_MAP()
```  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)   
 [Funzioni globali della mappa COM](../../atl/reference/com-map-global-functions.md)

