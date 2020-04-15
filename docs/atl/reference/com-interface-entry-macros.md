---
title: Macro di immissione interfaccia COM
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
ms.openlocfilehash: bb7498f639f463290a4a6593ef7c0fbac09b539b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326683"
---
# <a name="com_interface_entry-macros"></a>COM_INTERFACE_ENTRY macro

Queste macro entrano nelle interfacce di un oggetto nella mappa `QueryInterface`COM in modo che sia possibile accedervi tramite . L'ordine delle voci nella mappa COM è l'ordine delle interfacce verrà controllato per un IID corrispondente durante `QueryInterface`.

|||
|-|-|
|[COM_INTERFACE_ENTRY](#com_interface_entry)|Inserisce le interfacce nella mappa dell'interfaccia COM.|
|[COM_INTERFACE_ENTRY2](#com_interface_entry2)|Utilizzare questa macro per evitare ambiguità tra due rami di ereditarietà.|
|[COM_INTERFACE_ENTRY_IID](#com_interface_entry_iid)|Utilizzare questa macro per immettere l'interfaccia nella mappa COM e specificarne l'IID.|
|[COM_INTERFACE_ENTRY2_IID](#com_interface_entry2_iid)|Uguale [a COM_INTERFACE_ENTRY2](#com_interface_entry2), ad eccezione del fatto che è possibile specificare un IID diverso.|
|[COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate)|Quando l'interfaccia identificata da *iid* viene `COM_INTERFACE_ENTRY_AGGREGATE` `punk`interrogata, inoltra a .|
|[COM_INTERFACE_ENTRY_AGGREGATE_BLIND](#com_interface_entry_aggregate_blind)|Uguale [a COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi risultato iDA nell'inoltro della query a *punk*.|
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate)|Uguale [a COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), tranne se *punk* è NULL, crea automaticamente l'aggregazione descritta da *clsid*.|
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](#com_interface_entry_autoaggregate_blind)|Uguale [a COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi risultato dell'IID nell'inoltro della query a *punk*e, se *punk* è NULL, crea automaticamente l'aggregazione descritta da *clsid*.|
|[COM_INTERFACE_ENTRY_BREAK](#com_interface_entry_break)|Determina la chiamata al programma [DebugBreak](/windows/win32/api/debugapi/nf-debugapi-debugbreak) quando viene eseguita una query sull'interfaccia specificata.|
|[COM_INTERFACE_ENTRY_CACHED_TEAR_OFF](#com_interface_entry_cached_tear_off)|Salva i dati specifici dell'interfaccia per ogni istanza.|
|[COM_INTERFACE_ENTRY_TEAR_OFF](#com_interface_entry_tear_off)|Espone le interfacce tear-off.|
|[COM_INTERFACE_ENTRY_CHAIN](#com_interface_entry_chain)|Elabora la mappa COM della classe base quando l'elaborazione raggiunge questa voce nella mappa COM.|
|[COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func)|Meccanismo generale per l'hook `QueryInterface` nella logica di ATL.|
|[COM_INTERFACE_ENTRY_FUNC_BLIND](#com_interface_entry_func_blind)|Uguale [a COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta una chiamata a *func*.|
|[COM_INTERFACE_ENTRY_NOINTERFACE](#com_interface_entry_nointerface)|Restituisce E_NOINTERFACE e termina l'elaborazione della mappa COM quando viene eseguita una query sull'interfaccia specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="com_interface_entry"></a><a name="com_interface_entry"></a>COM_INTERFACE_ENTRY

Inserisce le interfacce nella mappa dell'interfaccia COM.

### <a name="syntax"></a>Sintassi

```
COM_INTERFACE_ENTRY( x )
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Il nome di un'interfaccia da cui deriva direttamente l'oggetto classe.

### <a name="remarks"></a>Osservazioni

In genere, si tratta del tipo di voce utilizzato più di frequente.

### <a name="example"></a>Esempio

```cpp
BEGIN_COM_MAP(CThisExample)
   COM_INTERFACE_ENTRY(IThisExample)
   COM_INTERFACE_ENTRY(IDispatch)
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="com_interface_entry2"></a><a name="com_interface_entry2"></a>COM_INTERFACE_ENTRY2

Utilizzare questa macro per evitare ambiguità tra due rami di ereditarietà.

```
COM_INTERFACE_ENTRY2(x, x2)
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Nome di un'interfaccia che si desidera esporre dall'oggetto.

*x2 (in modo non in0*<br/>
[in] Nome del ramo di ereditarietà da cui è esposto *x.*

### <a name="remarks"></a>Osservazioni

Ad esempio, se si deriva l'oggetto classe `IDispatch` da due `IDispatch` interfacce duali, si espone utilizzando COM_INTERFACE_ENTRY2 poiché è possibile ottenere da una delle interfacce.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#118](../../atl/codesnippet/cpp/com-map-macros_2.h)]

## <a name="com_interface_entry_iid"></a><a name="com_interface_entry_iid"></a>COM_INTERFACE_ENTRY_IID

Utilizzare questa macro per immettere l'interfaccia nella mappa COM e specificarne l'IID.

```
COM_INTERFACE_ENTRY_IID(iid, x)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia esposta.

*X*<br/>
[in] Nome della classe la cui vtable verrà esposta come interfaccia identificata da *iid*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#117](../../atl/codesnippet/cpp/com-map-macros_3.h)]

## <a name="com_interface_entry2_iid"></a><a name="com_interface_entry2_iid"></a>COM_INTERFACE_ENTRY2_IID

Uguale [a COM_INTERFACE_ENTRY2](#com_interface_entry2), ad eccezione del fatto che è possibile specificare un IID diverso.

```
COM_INTERFACE_ENTRY2_IID(iid, x, x2)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID specificato per l'interfaccia.

*X*<br/>
[in] Nome di un'interfaccia da cui deriva direttamente l'oggetto classe.

*x2 (in modo non in0*<br/>
[in] Nome di una seconda interfaccia da cui deriva direttamente l'oggetto classe.

## <a name="com_interface_entry_aggregate"></a><a name="com_interface_entry_aggregate"></a>COM_INTERFACE_ENTRY_AGGREGATE

Quando l'interfaccia identificata da *iid* viene interrogata, COM_INTERFACE_ENTRY_AGGREGATE inoltra a *punk*.

```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia sottoposta a query.

*Punk*<br/>
[in] Nome di `IUnknown` un puntatore.

### <a name="remarks"></a>Osservazioni

Si presuppone che il parametro *punk* punti all'inner unknown di un'aggregazione o a NULL, nel qual caso la voce viene ignorata. In genere, `CoCreate` l'aggregazione in `FinalConstruct`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#112](../../atl/codesnippet/cpp/com-map-macros_4.h)]

## <a name="com_interface_entry_aggregate_blind"></a><a name="com_interface_entry_aggregate_blind"></a>COM_INTERFACE_ENTRY_AGGREGATE_BLIND

Uguale [a COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi risultato iDA nell'inoltro della query a *punk*.

```
COM_INTERFACE_ENTRY_AGGREGATE_BLIND(punk)
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Nome di `IUnknown` un puntatore.

### <a name="remarks"></a>Osservazioni

Se la query dell'interfaccia ha esito negativo, l'elaborazione della mappa COM continua.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#113](../../atl/codesnippet/cpp/com-map-macros_5.h)]

## <a name="com_interface_entry_autoaggregate"></a><a name="com_interface_entry_autoaggregate"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE

Uguale [a COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), tranne se *punk* è NULL, crea automaticamente l'aggregazione descritta da *clsid*.

```
COM_INTERFACE_ENTRY_AUTOAGGREGATE(iid, punk, clsid)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia sottoposta a query.

*Punk*<br/>
[in] Nome di `IUnknown` un puntatore. Deve essere un membro della classe contenente la mappa COM.

*clsid*<br/>
[in] Identificatore dell'aggregazione che verrà creata se *punk* è NULL.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#114](../../atl/codesnippet/cpp/com-map-macros_6.h)]

## <a name="com_interface_entry_autoaggregate_blind"></a><a name="com_interface_entry_autoaggregate_blind"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND

Uguale [a COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi risultato dell'IID nell'inoltro della query a *punk*e, se *punk* è NULL, crea automaticamente l'aggregazione descritta da *clsid*.

```
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(punk, clsid)
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Nome di `IUnknown` un puntatore. Deve essere un membro della classe contenente la mappa COM.

*clsid*<br/>
[in] Identificatore dell'aggregazione che verrà creata se *punk* è NULL.

### <a name="remarks"></a>Osservazioni

Se la query dell'interfaccia ha esito negativo, l'elaborazione della mappa COM continua.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#115](../../atl/codesnippet/cpp/com-map-macros_7.h)]

## <a name="com_interface_entry_break"></a><a name="com_interface_entry_break"></a>COM_INTERFACE_ENTRY_BREAK

Determina la chiamata al programma [DebugBreak](/windows/win32/api/debugapi/nf-debugapi-debugbreak) quando viene eseguita una query sull'interfaccia specificata.

```
COM_INTERFACE_ENTRY_BREAK(x)
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Testo utilizzato per costruire l'identificatore di interfaccia.

### <a name="remarks"></a>Osservazioni

L'interfaccia IID verrà costruita `IID_`aggiungendo *x* a . Ad esempio, *x* se `IPersistStorage`x è , `IID_IPersistStorage`l'IID sarà .

## <a name="com_interface_entry_cached_tear_off"></a><a name="com_interface_entry_cached_tear_off"></a>COM_INTERFACE_ENTRY_CACHED_TEAR_OFF

Salva i dati specifici dell'interfaccia per ogni istanza.

```
COM_INTERFACE_ENTRY_CACHED_TEAR_OFF(iid, x, punk)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia tear-off.

*X*<br/>
[in] Nome della classe che implementa l'interfaccia.

*Punk*<br/>
[in] Nome di `IUnknown` un puntatore. Deve essere un membro della classe contenente la mappa COM. Deve essere inizializzato su NULL nel costruttore dell'oggetto classe.

### <a name="remarks"></a>Osservazioni

Se l'interfaccia non viene utilizzata, si riduce la dimensione complessiva dell'istanza dell'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#54](../../atl/codesnippet/cpp/com-map-macros_8.h)]

## <a name="com_interface_entry_tear_off"></a><a name="com_interface_entry_tear_off"></a>COM_INTERFACE_ENTRY_TEAR_OFF

Espone le interfacce tear-off.

```
COM_INTERFACE_ENTRY_TEAR_OFF(iid, x)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia tear-off.

*X*<br/>
[in] Nome della classe che implementa l'interfaccia.

### <a name="remarks"></a>Osservazioni

Un'interfaccia tear-off viene implementata come un oggetto separato di cui viene creata un'istanza ogni volta che viene eseguita una query sull'interfaccia che rappresenta. In genere, si compila l'interfaccia come tear-off se l'interfaccia viene utilizzata raramente, poiché questo salva un puntatore vtable in ogni istanza dell'oggetto principale. Lo strappo viene eliminato quando il conteggio dei riferimenti diventa zero. La classe che implementa il tear-off deve essere derivata da `CComTearOffObjectBase` e avere una propria mappa COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]

## <a name="com_interface_entry_chain"></a><a name="com_interface_entry_chain"></a>COM_INTERFACE_ENTRY_CHAIN

Elabora la mappa COM della classe base quando l'elaborazione raggiunge questa voce nella mappa COM.

```
COM_INTERFACE_ENTRY_CHAIN(classname)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
[in] Classe base dell'oggetto corrente.

### <a name="remarks"></a>Osservazioni

Ad esempio, nel codice seguente:For example, in the following code:

[!code-cpp[NVC_ATL_Windowing#116](../../atl/codesnippet/cpp/com-map-macros_9.h)]

Si noti che la prima voce nella mappa COM deve essere un'interfaccia sull'oggetto contenente la mappa COM. Pertanto, non è possibile iniziare le voci del mapping COM con COM_INTERFACE_ENTRY_CHAIN, che determina la ricerca nella mappa COM di un oggetto diverso nel punto in cui **COM_INTERFACE_ENTRY_CHAIN(**`COtherObject`**)** viene visualizzato nella mappa COM dell'oggetto. Se si desidera eseguire prima la ricerca nella mappa `IUnknown` COM di un altro oggetto, aggiungere una voce di interfaccia per alla mappa COM, quindi concatenare la mappa COM dell'altro oggetto. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#111](../../atl/codesnippet/cpp/com-map-macros_10.h)]

## <a name="com_interface_entry_func"></a><a name="com_interface_entry_func"></a>COM_INTERFACE_ENTRY_FUNC

Meccanismo generale per l'hook `QueryInterface` nella logica di ATL.

```
COM_INTERFACE_ENTRY_FUNC(iid, dw, func)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia esposta.

*dw*<br/>
[in] Un parametro passato al *func*.

*func*<br/>
[in] Puntatore a funzione che restituirà *iid*.

### <a name="remarks"></a>Osservazioni

Se *iid* corrisponde all'IID dell'interfaccia sottoposta a query per, viene chiamata la funzione specificata da *func.* La dichiarazione per la funzione deve essere:

`HRESULT WINAPI func(void* pv, REFIID riid, LPVOID* ppv, DWORD_PTR dw);`

Quando la funzione `pv` viene chiamata, punta all'oggetto classe. Il *riid* parametro fa riferimento all'interfaccia sottoposta a query per, `ppv` è il puntatore alla posizione in cui la funzione deve archiviare il puntatore all'interfaccia e *dw* è il parametro specificato nella voce. La funzione \* `ppv` deve essere impostata su NULL e restituire E_NOINTERFACE o S_FALSE se sceglie di non restituire un'interfaccia. Con E_NOINTERFACE, l'elaborazione della mappa COM termina. Con S_FALSE, l'elaborazione della mappa COM continua, anche se non è stato restituito alcun puntatore a interfaccia. Se la funzione restituisce un puntatore a interfaccia, deve restituire S_OK.

## <a name="com_interface_entry_func_blind"></a><a name="com_interface_entry_func_blind"></a>COM_INTERFACE_ENTRY_FUNC_BLIND

Uguale [a COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta una chiamata a *func*.

```
COM_INTERFACE_ENTRY_FUNC_BLIND(dw, func)
```

### <a name="parameters"></a>Parametri

*dw*<br/>
[in] Un parametro passato al *func*.

*func*<br/>
[in] Funzione che viene chiamata quando viene elaborata questa voce nella mappa COM.

### <a name="remarks"></a>Osservazioni

Qualsiasi errore causerà l'elaborazione per continuare sulla mappa COM. Se la funzione restituisce un puntatore a interfaccia, deve restituire S_OK.

## <a name="com_interface_entry_nointerface"></a><a name="com_interface_entry_nointerface"></a>COM_INTERFACE_ENTRY_NOINTERFACE

Restituisce E_NOINTERFACE e termina l'elaborazione della mappa COM quando viene eseguita una query sull'interfaccia specificata.

```
COM_INTERFACE_ENTRY_NOINTERFACE(x)
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Testo utilizzato per costruire l'identificatore di interfaccia.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questa macro per impedire l'utilizzo di un'interfaccia in un caso particolare. Ad esempio, è possibile inserire questa macro nella mappa COM prima di COM_INTERFACE_ENTRY_AGGREGATE_BLIND per impedire che una query per l'interfaccia venga inoltrata all'incognito interno dell'aggregazione.

L'interfaccia IID verrà costruita `IID_`aggiungendo *x* a . Ad esempio, *x* se `IPersistStorage`x è , `IID_IPersistStorage`l'IID sarà .
