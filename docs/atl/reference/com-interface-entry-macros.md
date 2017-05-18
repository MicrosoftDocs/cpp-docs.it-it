---
title: Macro di voci di interfaccia COM | Documenti Microsoft
ms.custom: 
ms.date: 03/28/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces, COM interface entry macros
ms.assetid: 19dcb768-2e1f-4b8d-a618-453a01a4bd00
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 7e9eb155d10a0a05916fc5f74cbe58fdf14b7475
ms.contentlocale: it-it
ms.lasthandoff: 03/31/2017

---

# <a name="cominterfaceentry-macros"></a>Macro COM_INTERFACE_ENTRY  
 Queste macro immettere le interfacce di un oggetto nella propria mappa COM in modo che siano accessibili da `QueryInterface`. L'ordine delle voci della mappa COM è verranno controllate le interfacce di ordine per un oggetto corrispondente **IID** durante `QueryInterface`.  

 |||
 |-|-|
 |[COM_INTERFACE_ENTRY](#com_interface_entry)|Immette interfacce la mappa dell'interfaccia COM.|  
|[COM_INTERFACE_ENTRY2](#com_interface_entry2)|Utilizzare questa macro per evitare ambiguità tra due rami di ereditarietà.|  
|[COM_INTERFACE_ENTRY_IID](#com_interface_entry_iid)|Utilizzare questa macro per accedere all'interfaccia nella mappa COM e specificare il relativo IID.|  
|[COM_INTERFACE_ENTRY2_IID](#com_interface_entry2_iid)|Uguale a [COM_INTERFACE_ENTRY2](#com_interface_entry2), ma è possibile specificare un IID diversi.|  
|[COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate)|Quando l'interfaccia identificato dal `iid` viene eseguita una query, `COM_INTERFACE_ENTRY_AGGREGATE` inoltra al `punk`.|  
|[COM_INTERFACE_ENTRY_AGGREGATE_BLIND](#com_interface_entry_aggregate_blind)|Uguale a [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query di inoltro `punk`.|  
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate)|Uguale a [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), tranne se `punk` è **NULL**, crea automaticamente la funzione di aggregazione descritto dal `clsid`.|  
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](#com_interface_entry_autoaggregate_blind)|Uguale a [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query di inoltro `punk`e se `punk` è **NULL**automaticamente la creazione dell'aggregazione descritto dal `clsid`.|  
|[COM_INTERFACE_ENTRY_BREAK](#com_interface_entry_break)|Fa sì che il programma di chiamare [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297) quando viene richiesto l'interfaccia specificata.|  
|[COM_INTERFACE_ENTRY_CACHED_TEAR_OFF](#com_interface_entry_cached_tear_off)|Salva i dati specifici dell'interfaccia per ogni istanza.|  
|[COM_INTERFACE_ENTRY_TEAR_OFF](#com_interface_entry_tear_off)|Espone le interfacce tear-off.|  
|[COM_INTERFACE_ENTRY_CHAIN](#com_interface_entry_chain)|Elabora la mappa COM della classe di base quando l'elaborazione raggiunge questa voce nella mappa COM.|  
|[COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func)|Un meccanismo generale per l'associazione in ATL `QueryInterface` logica.|  
|[COM_INTERFACE_ENTRY_FUNC_BLIND](#com_interface_entry_func_blind)|Uguale a [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta una chiamata a `func`.|  
|[COM_INTERFACE_ENTRY_NOINTERFACE](#com_interface_entry_nointerface)|Restituisce **E_NOINTERFACE** e termina l'elaborazione della mappa COM quando viene eseguita una query per l'interfaccia specificata.|  


## <a name="com_interface_entry"></a>COM_INTERFACE_ENTRY
Immette interfacce la mappa dell'interfaccia COM.

### <a name="syntax"></a>Sintassi

```
COM_INTERFACE_ENTRY( x )
```
### <a name="parameters"></a>Parametri

x [in] il nome di un'interfaccia l'oggetto della classe deriva direttamente.

### <a name="remarks"></a>Note
In genere, questo è il tipo di voce di frequente.

### <a name="example"></a>Esempio
```cpp
BEGIN_COM_MAP(CThisExample)
   COM_INTERFACE_ENTRY(IThisExample)
   COM_INTERFACE_ENTRY(IDispatch)
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
```
### <a name="requirements"></a>Requisiti
**Intestazione:** atlcom. h
  
##  <a name="com_interface_entry2"></a>COM_INTERFACE_ENTRY2  
 Utilizzare questa macro per evitare ambiguità tra due rami di ereditarietà.  
  
```
COM_INTERFACE_ENTRY2(x, x2)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome di un'interfaccia da esporre dall'oggetto.  
  
 `x2`  
 [in] Il nome del ramo da cui ereditarietà *x* viene esposta.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se si deriva l'oggetto di classe da due interfacce duali, Esponi `IDispatch` utilizzando `COM_INTERFACE_ENTRY2` poiché `IDispatch` può essere ottenuto da una delle interfacce.  
  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing #118](../../atl/codesnippet/cpp/com-map-macros_2.h)]  
  
##  <a name="com_interface_entry_iid"></a>COM_INTERFACE_ENTRY_IID  
 Utilizzare questa macro per accedere all'interfaccia nella mappa COM e specificare il relativo IID.  
  
```
COM_INTERFACE_ENTRY_IID(iid, x)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia esposta.  
  
 *x*  
 [in] Il nome della classe cui vtable verrà esposti come l'interfaccia identificata dal `iid`.  
  
 
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing #117](../../atl/codesnippet/cpp/com-map-macros_3.h)]  
  
##  <a name="com_interface_entry2_iid"></a>COM_INTERFACE_ENTRY2_IID  
 Uguale a [COM_INTERFACE_ENTRY2](#com_interface_entry2), ma è possibile specificare un IID diversi.  
  
```
COM_INTERFACE_ENTRY2_IID(iid, x, x2)
```   
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID specifica per l'interfaccia.  
  
 *x*  
 [in] Il nome di oggetto di classe deriva direttamente da un'interfaccia.  
  
 `x2`  
 [in] Il nome di una seconda interfaccia da cui l'oggetto della classe deriva direttamente.  
  
##  <a name="com_interface_entry_aggregate"></a>COM_INTERFACE_ENTRY_AGGREGATE  
 Quando l'interfaccia identificato dal `iid` viene eseguita una query, `COM_INTERFACE_ENTRY_AGGREGATE` inoltra al `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore.  
  
### <a name="remarks"></a>Note  
 Il `punk` parametro viene considerato in modo che punti a sconosciuto interna di un'aggregazione o a **NULL**, nel qual caso la voce verrà ignorata. In genere, si farebbe **CoCreate** l'aggregato in `FinalConstruct`.  
  
  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing #112](../../atl/codesnippet/cpp/com-map-macros_4.h)]  
  
##  <a name="com_interface_entry_aggregate_blind"></a>COM_INTERFACE_ENTRY_AGGREGATE_BLIND  
 Uguale a [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query di inoltro `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE_BLIND(punk)
```  
  
### <a name="parameters"></a>Parametri  
 `punk`  
 [in] Il nome di un **IUnknown** puntatore.  
  
### <a name="remarks"></a>Note  
 Se la query di interfaccia avrà esito negativo, l'elaborazione della mappa COM continua.  
  
  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing #113](../../atl/codesnippet/cpp/com-map-macros_5.h)]  
  

##  <a name="com_interface_entry_autoaggregate"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE  
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
  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing #114](../../atl/codesnippet/cpp/com-map-macros_6.h)]  
  
##  <a name="com_interface_entry_autoaggregate_blind"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND  
 Uguale a [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query di inoltro `punk`e se `punk` è **NULL**automaticamente la creazione dell'aggregazione descritto dal `clsid`.  
  
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
  
  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing #115](../../atl/codesnippet/cpp/com-map-macros_7.h)]  
  
##  <a name="com_interface_entry_break"></a>COM_INTERFACE_ENTRY_BREAK  
 Fa sì che il programma di chiamare [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297) quando viene richiesto l'interfaccia specificata.  
  
```
COM_INTERFACE_ENTRY_BREAK(x)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Testo utilizzato per costruire l'identificatore di interfaccia.  
  
### <a name="remarks"></a>Note  
 L'interfaccia con IID verrà costruita aggiungendo *x* a `IID_`. Ad esempio, se *x* è `IPersistStorage`, sarà l'IID `IID_IPersistStorage`.  
  
  
  
##  <a name="com_interface_entry_cached_tear_off"></a>COM_INTERFACE_ENTRY_CACHED_TEAR_OFF  
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
 [in] Il nome di un **IUnknown** puntatore. Deve essere un membro della classe che contiene la mappa COM. Deve essere inizializzata su **NULL** nel costruttore dell'oggetto di classe.  
  
### <a name="remarks"></a>Note  
 Se non viene utilizzata l'interfaccia, si riduce la dimensione complessiva di istanza dell'oggetto.  
  
  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM #54](../../atl/codesnippet/cpp/com-map-macros_8.h)]  
  
##  <a name="com_interface_entry_tear_off"></a>COM_INTERFACE_ENTRY_TEAR_OFF  
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
 Un'interfaccia tear-off viene implementata come un oggetto distinto che viene creata ogni volta che l'interfaccia che rappresenta un'istanza viene eseguita una query per. In genere, si compila un'interfaccia come un tear-off se viene usato raramente l'interfaccia, poiché si salva un puntatore vtable in ogni istanza dell'oggetto principale. Tear-off viene eliminata quando il conteggio dei riferimenti diventa zero. Derivare la classe che implementa il tear-off da `CComTearOffObjectBase` e ha il proprio mappa COM.  
  
  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM N. 1](../../atl/codesnippet/cpp/com-map-macros_1.h)]  
  
##  <a name="com_interface_entry_chain"></a>COM_INTERFACE_ENTRY_CHAIN  
 Elabora la mappa COM della classe di base quando l'elaborazione raggiunge questa voce nella mappa COM.  
  
```
COM_INTERFACE_ENTRY_CHAIN(classname)
```  
  
### <a name="parameters"></a>Parametri  
 *ClassName*  
 [in] Classe di base dell'oggetto corrente.  
  
### <a name="remarks"></a>Note  
 Ad esempio, nel codice seguente:  
  
 [!code-cpp[NVC_ATL_Windowing #116](../../atl/codesnippet/cpp/com-map-macros_9.h)]  
  
 Si noti che la prima voce nella mappa COM deve essere un'interfaccia per l'oggetto che contiene la mappa COM. Di conseguenza, non è possibile avviare le voci della mappa COM con `COM_INTERFACE_ENTRY_CHAIN`, che comporta la mappa COM di un oggetto diverso da cercare nel punto in cui **COM_INTERFACE_ENTRY_CHAIN (**`COtherObject`**)** viene visualizzato nella mappa COM dell'oggetto. Se si desidera eseguire la ricerca prima di tutto la mappa COM di un altro oggetto, aggiungere una voce di interfaccia per **IUnknown** alla mappa COM, quindi catena della mappa COM dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing #111](../../atl/codesnippet/cpp/com-map-macros_10.h)]  
  
  
  
##  <a name="com_interface_entry_func"></a>COM_INTERFACE_ENTRY_FUNC  
 Un meccanismo generale per l'associazione in ATL `QueryInterface` logica.  
  
```
COM_INTERFACE_ENTRY_FUNC(iid, dw, func)
```   
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia esposta.  
  
 `dw`  
 [in] Un parametro passato tramite il `func`.  
  
 `func`  
 [in] Puntatore a funzione che restituirà `iid`.  
  
### <a name="remarks"></a>Note  
 Se *iid* corrisponde l'IID dell'interfaccia di query per, quindi la funzione specificata da `func` viene chiamato. La dichiarazione della funzione deve essere:  
  
 `HRESULT WINAPI func(void* pv, REFIID riid, LPVOID* ppv, DWORD_PTR dw);`  
  
 Quando viene chiamata la funzione, `pv` punta all'oggetto di classe. Il `riid` parametro fa riferimento all'interfaccia sottoposto a query, `ppv` è il puntatore alla posizione in cui la funzione deve archiviare il puntatore all'interfaccia e `dw` è il parametro è specificato nella voce. La funzione è necessario impostare \* `ppv` a **NULL** e restituire **E_NOINTERFACE** o **S_FALSE** se sceglie di non restituiscono un'interfaccia. Con **E_NOINTERFACE**, interrompe l'elaborazione della mappa COM. Con **S_FALSE**, continua l'elaborazione della mappa COM, anche se è stato restituito alcun puntatore di interfaccia. Se la funzione restituisce un puntatore a interfaccia, deve restituire `S_OK`.  
  
  
  
##  <a name="com_interface_entry_func_blind"></a>COM_INTERFACE_ENTRY_FUNC_BLIND  
 Uguale a [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta una chiamata a `func`.  
  
```
COM_INTERFACE_ENTRY_FUNC_BLIND(dw, func)
```  
  
### <a name="parameters"></a>Parametri  
 `dw`  
 [in] Un parametro passato tramite il `func`.  
  
 `func`  
 [in] Funzione che viene chiamata durante l'elaborazione di questa voce nella mappa COM.  
  
### <a name="remarks"></a>Note  
 Qualsiasi errore causerà l'elaborazione continui sulla mappa COM. Se la funzione restituisce un puntatore a interfaccia, deve restituire `S_OK`.  
  
  
##  <a name="com_interface_entry_nointerface"></a>COM_INTERFACE_ENTRY_NOINTERFACE  
 Restituisce **E_NOINTERFACE** e termina l'elaborazione della mappa COM quando viene eseguita una query per l'interfaccia specificata.  
  
```
COM_INTERFACE_ENTRY_NOINTERFACE(x)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Testo utilizzato per costruire l'identificatore di interfaccia.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare questa macro per impedire l'utilizzo di un'interfaccia in un caso particolare. Ad esempio, è possibile inserire questa macro il computer prima di eseguire il mapping `COM_INTERFACE_ENTRY_AGGREGATE_BLIND` per impedire che una query per l'interfaccia inoltrati Unknown interna dell'aggregazione.  
  
 L'interfaccia con IID verrà costruita aggiungendo *x* a `IID_`. Ad esempio, se *x* è `IPersistStorage`, sarà l'IID `IID_IPersistStorage`.  
  
  
