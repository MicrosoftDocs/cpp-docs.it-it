---
title: Macro di voci dell'interfaccia COM
ms.date: 03/28/2017
f1_keywords:
- atlcom/ATL::COM_INTERFACE_ENTRY
- atlcom/ATL::COM_INTERFACE_ENTRY_IID
- atlcom/ATL::COM_INTERFACE_ENTRY_AGGREGATE
- atlcom/ATL::COM_INTERFACE_ENTRY_AGGREGATE_BLIND
- atlcom/ATL::COM_INTERFACE_ENTRY_AUTOAGGREGATE
- atlcom/ATL::COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND
- atlcom/ATL::COM_INTERFACE_ENTRY_BREAK
- atlcom/ATL::COM_INTERFACE_ENTRY_CACHED_TEAR_OFF
- atlcom/ATL::COM_INTERFACE_ENTRY_TEAR_OFF
- atlcom/ATL::COM_INTERFACE_ENTRY_CHAIN
- atlcom/ATL::COM_INTERFACE_ENTRY_FUNC
- atlcom/ATL::COM_INTERFACE_ENTRY_FUNC_BLIND
- atlcom/ATL::COM_INTERFACE_ENTRY_NOINTERFACE
helpviewer_keywords:
- COM interfaces, COM interface entry macros
ms.assetid: 19dcb768-2e1f-4b8d-a618-453a01a4bd00
ms.openlocfilehash: f8439e973c935108d645076bb7e2bfae7207e65d
ms.sourcegitcommit: ecf274bcfe3a977c48745aaa243e5e731f1fdc5f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2019
ms.locfileid: "66503336"
---
# <a name="cominterfaceentry-macros"></a>COM_INTERFACE_ENTRY macro

Queste macro immettere le interfacce dell'oggetto nella propria mappa COM in modo che siano accessibili da `QueryInterface`. L'ordine delle voci nella mappa COM sia le interfacce di ordine disporrà di un IID corrispondente durante `QueryInterface`.

|||
|-|-|
|[COM_INTERFACE_ENTRY](#com_interface_entry)|Immette interfacce la mappa dell'interfaccia COM.|
|[COM_INTERFACE_ENTRY2](#com_interface_entry2)|Usare questa macro per evitare ambiguità tra due rami di ereditarietà.|
|[COM_INTERFACE_ENTRY_IID](#com_interface_entry_iid)|Usare questa macro per accedere all'interfaccia nella mappa COM e specificare il IID.|
|[COM_INTERFACE_ENTRY2_IID](#com_interface_entry2_iid)|Uguale allo [COM_INTERFACE_ENTRY2](#com_interface_entry2), ma è possibile specificare un IID diversi.|
|[COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate)|Quando l'interfaccia identificata da *iid* viene eseguita una query, `COM_INTERFACE_ENTRY_AGGREGATE` inoltra a `punk`.|
|[COM_INTERFACE_ENTRY_AGGREGATE_BLIND](#com_interface_entry_aggregate_blind)|Uguale allo [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query di inoltro *punk*.|
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate)|Uguale allo [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), a meno che *punk* è NULL, viene creato automaticamente la funzione di aggregazione descritto dal *clsid*.|
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](#com_interface_entry_autoaggregate_blind)|Uguale allo [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query di inoltro *punk*e se *punk* è NULL, la creazione automatica la funzione di aggregazione descritto dal *clsid*.|
|[COM_INTERFACE_ENTRY_BREAK](#com_interface_entry_break)|Fa sì che il programma chiami [DebugBreak](/windows/desktop/api/debugapi/nf-debugapi-debugbreak) quando viene richiesto l'interfaccia specificata.|
|[COM_INTERFACE_ENTRY_CACHED_TEAR_OFF](#com_interface_entry_cached_tear_off)|Salva i dati specifici dell'interfaccia per ogni istanza.|
|[COM_INTERFACE_ENTRY_TEAR_OFF](#com_interface_entry_tear_off)|Espone le interfacce tear-off.|
|[COM_INTERFACE_ENTRY_CHAIN](#com_interface_entry_chain)|Elabora la mappa COM della classe di base durante l'elaborazione raggiunge questa voce nella mappa COM.|
|[COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func)|Un meccanismo generale per l'uso di hook nel ATL `QueryInterface` per la logica.|
|[COM_INTERFACE_ENTRY_FUNC_BLIND](#com_interface_entry_func_blind)|Uguale allo [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta una chiamata a *func*.|
|[COM_INTERFACE_ENTRY_NOINTERFACE](#com_interface_entry_nointerface)|Restituisce E_NOINTERFACE e termina l'elaborazione della mappa COM quando viene eseguita una query per l'interfaccia specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="com_interface_entry"></a> COM_INTERFACE_ENTRY

Immette interfacce la mappa dell'interfaccia COM.

### <a name="syntax"></a>Sintassi

```
COM_INTERFACE_ENTRY( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome di un'interfaccia che di oggetto della classe deriva da direttamente.

### <a name="remarks"></a>Note

In genere, questo è il tipo di voce che più utilizzati.

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

##  <a name="com_interface_entry2"></a>  COM_INTERFACE_ENTRY2

Usare questa macro per evitare ambiguità tra due rami di ereditarietà.

```
COM_INTERFACE_ENTRY2(x, x2)
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome di un'interfaccia da esporre l'oggetto.

*x2*<br/>
[in] Il nome del ramo di ereditarietà da cui *x* viene esposto.

### <a name="remarks"></a>Note

Ad esempio, se si deriva l'oggetto di classe da due interfacce duali, espongono `IDispatch` usando COM_INTERFACE_ENTRY2 poiché `IDispatch` può essere ottenuto da una delle interfacce.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#118](../../atl/codesnippet/cpp/com-map-macros_2.h)]

##  <a name="com_interface_entry_iid"></a>  COM_INTERFACE_ENTRY_IID

Usare questa macro per accedere all'interfaccia nella mappa COM e specificare il IID.

```
COM_INTERFACE_ENTRY_IID(iid, x)
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Il GUID dell'interfaccia esposta.

*x*<br/>
[in] Il nome della classe verrà esposto come l'interfaccia identificata da cui vtable *iid*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#117](../../atl/codesnippet/cpp/com-map-macros_3.h)]

##  <a name="com_interface_entry2_iid"></a>  COM_INTERFACE_ENTRY2_IID

Uguale allo [COM_INTERFACE_ENTRY2](#com_interface_entry2), ma è possibile specificare un IID diversi.

```
COM_INTERFACE_ENTRY2_IID(iid, x, x2)
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Il GUID specificato per l'interfaccia.

*x*<br/>
[in] Il nome di oggetto di classe deriva direttamente da un'interfaccia.

*x2*<br/>
[in] Il nome di una seconda interfaccia di oggetto della classe derivata da direttamente.

##  <a name="com_interface_entry_aggregate"></a>  COM_INTERFACE_ENTRY_AGGREGATE

Quando l'interfaccia identificata da *iid* viene eseguita una query per, inoltra COM_INTERFACE_ENTRY_AGGREGATE *punk*.

```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Il GUID dell'interfaccia richiesto.

*punk*<br/>
[in] Il nome di un `IUnknown` puntatore.

### <a name="remarks"></a>Note

Il *punk* parametro presuppone in modo che punti a sconosciuto di un'aggregazione interna o su NULL, nel qual caso la voce viene ignorato. In genere, si farebbe `CoCreate` l'aggregazione in `FinalConstruct`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#112](../../atl/codesnippet/cpp/com-map-macros_4.h)]

##  <a name="com_interface_entry_aggregate_blind"></a>  COM_INTERFACE_ENTRY_AGGREGATE_BLIND

Uguale allo [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query di inoltro *punk*.

```
COM_INTERFACE_ENTRY_AGGREGATE_BLIND(punk)
```

### <a name="parameters"></a>Parametri

*punk*<br/>
[in] Il nome di un `IUnknown` puntatore.

### <a name="remarks"></a>Note

Se la query di interfaccia non riesce, l'elaborazione della mappa COM continua.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#113](../../atl/codesnippet/cpp/com-map-macros_5.h)]

##  <a name="com_interface_entry_autoaggregate"></a>  COM_INTERFACE_ENTRY_AUTOAGGREGATE

Uguale allo [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), a meno che *punk* è NULL, viene creato automaticamente la funzione di aggregazione descritto dal *clsid*.

```
COM_INTERFACE_ENTRY_AUTOAGGREGATE(iid, punk, clsid)
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Il GUID dell'interfaccia richiesto.

*punk*<br/>
[in] Il nome di un `IUnknown` puntatore. Deve essere un membro della classe che contiene la mappa COM.

*clsid*<br/>
[in] L'identificatore della funzione di aggregazione che verrà creato se *punk* è NULL.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#114](../../atl/codesnippet/cpp/com-map-macros_6.h)]

##  <a name="com_interface_entry_autoaggregate_blind"></a>  COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND

Uguale allo [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta la query di inoltro *punk*e se *punk* è NULL, la creazione automatica la funzione di aggregazione descritto dal *clsid*.

```
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(punk, clsid)
```

### <a name="parameters"></a>Parametri

*punk*<br/>
[in] Il nome di un `IUnknown` puntatore. Deve essere un membro della classe che contiene la mappa COM.

*clsid*<br/>
[in] L'identificatore della funzione di aggregazione che verrà creato se *punk* è NULL.

### <a name="remarks"></a>Note

Se la query di interfaccia non riesce, l'elaborazione della mappa COM continua.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#115](../../atl/codesnippet/cpp/com-map-macros_7.h)]

##  <a name="com_interface_entry_break"></a>  COM_INTERFACE_ENTRY_BREAK

Fa sì che il programma chiami [DebugBreak](/windows/desktop/api/debugapi/nf-debugapi-debugbreak) quando viene richiesto l'interfaccia specificata.

```
COM_INTERFACE_ENTRY_BREAK(x)
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Testo utilizzato per costruire l'identificatore di interfaccia.

### <a name="remarks"></a>Note

L'interfaccia IID verrà costruita aggiungendo *x* a `IID_`. Ad esempio, se *x* viene `IPersistStorage`, sarà l'IID `IID_IPersistStorage`.

##  <a name="com_interface_entry_cached_tear_off"></a>  COM_INTERFACE_ENTRY_CACHED_TEAR_OFF

Salva i dati specifici dell'interfaccia per ogni istanza.

```
COM_INTERFACE_ENTRY_CACHED_TEAR_OFF(iid, x, punk)
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Il GUID dell'interfaccia tear-off.

*x*<br/>
[in] Il nome della classe che implementa l'interfaccia.

*punk*<br/>
[in] Il nome di un `IUnknown` puntatore. Deve essere un membro della classe che contiene la mappa COM. Nel costruttore dell'oggetto classe deve essere inizializzato su NULL.

### <a name="remarks"></a>Note

Se non viene usata l'interfaccia, ciò riduce le dimensioni complessive dell'istanza dell'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#54](../../atl/codesnippet/cpp/com-map-macros_8.h)]

##  <a name="com_interface_entry_tear_off"></a>  COM_INTERFACE_ENTRY_TEAR_OFF

Espone le interfacce tear-off.

```
COM_INTERFACE_ENTRY_TEAR_OFF(iid, x)
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Il GUID dell'interfaccia tear-off.

*x*<br/>
[in] Il nome della classe che implementa l'interfaccia.

### <a name="remarks"></a>Note

Un'interfaccia tear-off viene implementata come oggetto separato che viene creata ogni volta che l'interfaccia rappresenta un'istanza viene eseguita una query per. In genere, si compila l'interfaccia come un tear-off se viene usato raramente l'interfaccia, poiché ciò consente di risparmiare un puntatore vtable in ogni istanza dell'oggetto principale. Il tear-off viene eliminata quando il conteggio dei riferimenti diventa zero. La classe che implementa il tear-off deve essere derivata da `CComTearOffObjectBase` e ha la propria mappa COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]

##  <a name="com_interface_entry_chain"></a>  COM_INTERFACE_ENTRY_CHAIN

Elabora la mappa COM della classe di base durante l'elaborazione raggiunge questa voce nella mappa COM.

```
COM_INTERFACE_ENTRY_CHAIN(classname)
```

### <a name="parameters"></a>Parametri

*nomeclasse*<br/>
[in] Una classe di base dell'oggetto corrente.

### <a name="remarks"></a>Note

Ad esempio, nel codice seguente:

[!code-cpp[NVC_ATL_Windowing#116](../../atl/codesnippet/cpp/com-map-macros_9.h)]

Si noti che la prima voce nella mappa COM deve essere un'interfaccia sull'oggetto che contiene la mappa COM. Di conseguenza, non è possibile avviare le voci della mappa COM con COM_INTERFACE_ENTRY_CHAIN, provocando la mappa COM di un oggetto diverso da cercare nel punto in cui **COM_INTERFACE_ENTRY_CHAIN (** `COtherObject` **)** viene visualizzato nella mappa COM dell'oggetto. Se si desidera cercare prima di tutto la mappa COM di un altro oggetto, aggiungere una voce di interfaccia per `IUnknown` alla mappa COM, quindi concatenare mappa COM dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#111](../../atl/codesnippet/cpp/com-map-macros_10.h)]

##  <a name="com_interface_entry_func"></a>  COM_INTERFACE_ENTRY_FUNC

Un meccanismo generale per l'uso di hook nel ATL `QueryInterface` per la logica.

```
COM_INTERFACE_ENTRY_FUNC(iid, dw, func)
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Il GUID dell'interfaccia esposta.

*dw*<br/>
[in] Un parametro passato tramite la *func*.

*func*<br/>
[in] Il puntatore a funzione che restituirà *iid*.

### <a name="remarks"></a>Note

Se *iid* corrisponde l'IID dell'interfaccia di eseguire una query per, quindi la funzione specificata dal *func* viene chiamato. La dichiarazione della funzione deve essere:

`HRESULT WINAPI func(void* pv, REFIID riid, LPVOID* ppv, DWORD_PTR dw);`

Quando viene chiamata la funzione, `pv` punta all'oggetto di classe. Il *riid* parametro fa riferimento all'interfaccia sottoposta a query, `ppv` è il puntatore alla posizione in cui la funzione deve archiviare il puntatore all'interfaccia, e *dw* è il parametro è specificato nella voce. La funzione deve impostare \* `ppv` a NULL e restituire E_NOINTERFACE o S_FALSE se sceglie di non restituire un'interfaccia. Con E_NOINTERFACE, termina l'elaborazione di mappa COM. Con S_FALSE, l'elaborazione di mappa COM continua, anche se è stato restituito alcun puntatore a interfaccia. Se la funzione restituisce un puntatore di interfaccia, deve restituire S_OK.

##  <a name="com_interface_entry_func_blind"></a>  COM_INTERFACE_ENTRY_FUNC_BLIND

Uguale allo [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta una chiamata a *func*.

```
COM_INTERFACE_ENTRY_FUNC_BLIND(dw, func)
```

### <a name="parameters"></a>Parametri

*dw*<br/>
[in] Un parametro passato tramite la *func*.

*func*<br/>
[in] La funzione che viene chiamata durante l'elaborazione di questa voce nella mappa COM.

### <a name="remarks"></a>Note

Qualsiasi errore causerà continuazione sulla mappa COM dell'elaborazione. Se la funzione restituisce un puntatore di interfaccia, deve restituire S_OK.

##  <a name="com_interface_entry_nointerface"></a>  COM_INTERFACE_ENTRY_NOINTERFACE

Restituisce E_NOINTERFACE e termina l'elaborazione della mappa COM quando viene eseguita una query per l'interfaccia specificata.

```
COM_INTERFACE_ENTRY_NOINTERFACE(x)
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Testo utilizzato per costruire l'identificatore di interfaccia.

### <a name="remarks"></a>Note

È possibile utilizzare questa macro per impedire l'utilizzo in un caso particolare di un'interfaccia. Ad esempio, è possibile inserire questa macro mappa COM subito prima COM_INTERFACE_ENTRY_AGGREGATE_BLIND per impedire che una query per l'interfaccia venga inoltrata a unknown interna dell'aggregazione.

L'interfaccia IID verrà costruita aggiungendo *x* a `IID_`. Ad esempio, se *x* viene `IPersistStorage`, sarà l'IID `IID_IPersistStorage`.
