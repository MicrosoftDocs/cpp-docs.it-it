---
title: Macro di controllo composito
ms.date: 05/06/2019
f1_keywords:
- atlcom/ATL::BEGIN_SINK_MAP
- atlcom/ATL::END_SINK_MAP
- atlcom/ATL::SINK_ENTRY
helpviewer_keywords:
- composite controls, macros
ms.assetid: 17f2dd5e-07e6-4aa6-b965-7a361c78c45e
ms.openlocfilehash: 67ad18c07a92cfecca44667908a8488e8c2da234
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331521"
---
# <a name="composite-control-macros"></a>Macro di controllo composito

Queste macro definiscono le mappe e le voci del sink di evento.

|||
|-|-|
|[BEGIN_SINK_MAP](#begin_sink_map)|Contrassegna l'inizio della mappa del sink di evento per il controllo composito.|
|[END_SINK_MAP](#end_sink_map)|Contrassegna la fine della mappa del sink di evento per il controllo composito.|
|[SINK_ENTRY](#sink_entry)|Ingresso alla mappa del sink di evento.|
|[SINK_ENTRY_EX](#sink_entry_ex)|Passaggio alla mappa del sink di evento con un parametro aggiuntivo.|
|[SINK_ENTRY_EX_P](#sink_entry_ex)| (Visual Studio 2017) Simile a SINK_ENTRY_EX ad eccezione del fatto che accetta un puntatore a iid.|
|[SINK_ENTRY_INFO](#sink_entry_info)|Immissione alla mappa del sink di evento con informazioni sul tipo fornite manualmente da utilizzare con [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md).|
|[SINK_ENTRY_INFO_P](#sink_entry_info)| (Visual Studio 2017) Simile a SINK_ENTRY_INFO ad eccezione del fatto che accetta un puntatore a iid.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="begin_sink_map"></a><a name="begin_sink_map"></a>BEGIN_SINK_MAP

Dichiara l'inizio della mappa del sink di evento per il controllo composito.

```
BEGIN_SINK_MAP(_class)
```

### <a name="parameters"></a>Parametri

*_class*<br/>
[in] Specifica il controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Osservazioni

L'implementazione ATL CE dei sink di evento ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi. qualsiasi altro valore restituito non è supportato e il relativo comportamento non è definito.

## <a name="end_sink_map"></a><a name="end_sink_map"></a>END_SINK_MAP

Dichiara la fine della mappa del sink di evento per il controllo composito.

```
END_SINK_MAP()
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Osservazioni

L'implementazione ATL CE dei sink di evento ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi. qualsiasi altro valore restituito non è supportato e il relativo comportamento non è definito.

## <a name="sink_entry"></a><a name="sink_entry"></a>SINK_ENTRY

Dichiara la funzione del gestore (*fn*) per l'evento specificato (*dispid*), del controllo identificato da *id*.

```
SINK_ENTRY( id, dispid, fn )
```

### <a name="parameters"></a>Parametri

*id*<br/>
[in] Identifica il controllo.

*Dispid*<br/>
[in] Identifica l'evento specificato.

*Fn*<br/>
[in] Nome della funzione del gestore eventi. Questa funzione deve `_stdcall` utilizzare la convenzione di chiamata e disporre della firma di tipo interfaccia dispatch appropriata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Osservazioni

L'implementazione ATL CE dei sink di evento ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi. qualsiasi altro valore restituito non è supportato e il relativo comportamento non è definito.

## <a name="sink_entry_ex-and-sink_entry_ex_p"></a><a name="sink_entry_ex"></a>SINK_ENTRY_EX e SINK_ENTRY_EX_P

Dichiara la funzione del gestore (*fn*) per l'evento specificato (*dispid*), dell'interfaccia dispatch (*iid*), per il controllo identificato da *id*.

```
SINK_ENTRY_EX( id, iid, dispid, fn )
SINK_ENTRY_EX_P( id, piid, dispid, fn ) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*id*<br/>
[in] Identifica il controllo.

*Iid*<br/>
[in] Identifica l'interfaccia di invio.

*piid*<br/>
[in] Puntatore all'interfaccia dispatch.

*Dispid*<br/>
[in] Identifica l'evento specificato.

*Fn*<br/>
[in] Nome della funzione del gestore eventi. Questa funzione deve `_stdcall` utilizzare la convenzione di chiamata e disporre della firma di tipo interfaccia dispatch appropriata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#136](../../atl/codesnippet/cpp/composite-control-macros_2.h)]

### <a name="remarks"></a>Osservazioni

L'implementazione ATL CE dei sink di evento ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi. qualsiasi altro valore restituito non è supportato e il relativo comportamento non è definito.

## <a name="sink_entry_info-and-sink_entry_info_p"></a><a name="sink_entry_info"></a>SINK_ENTRY_INFO e SINK_ENTRY_INFO_P

Utilizzare la SINK_ENTRY_INFO macro all'interno di una mappa del sink di evento per fornire le informazioni necessarie a [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) per instradare gli eventi alla funzione del gestore pertinente.

```
SINK_ENTRY_INFO( id, iid, dispid, fn, info )
SINK_ENTRY_INFO_P( id, piid, dispid, fn, info ) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*id*<br/>
[in] Unsigned Integer che identifica l'origine evento. Questo valore deve corrispondere al parametro di modello *nID* utilizzato nella classe base [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) correlata.

*Iid*<br/>
[in] IID che identifica l'interfaccia dispatch.

*piid*<br/>
[in] Puntatore a IID che identifica l'interfaccia dispatch.

*Dispid*<br/>
[in] DISPID che identifica l'evento specificato.

*Fn*<br/>
[in] Nome della funzione del gestore eventi. Questa funzione deve `_stdcall` utilizzare la convenzione di chiamata e disporre della firma di tipo interfaccia dispatch appropriata.

*info*<br/>
[in] Informazioni sul tipo per la funzione del gestore eventi. Queste informazioni sul tipo vengono fornite sotto `_ATL_FUNC_INFO` forma di puntatore a una struttura. CC_CDECL è l'unica opzione supportata in Windows `_ATL_FUNC_INFO` CE per il campo CALLCONV della struttura. Qualsiasi altro valore non è supportato pertanto il comportamento non definito.

### <a name="remarks"></a>Osservazioni

I primi quattro parametri macro sono gli stessi di quelli della macro [SINK_ENTRY_EX.](#sink_entry_ex) Il parametro finale fornisce informazioni sul tipo per l'evento. L'implementazione ATL CE dei sink di evento ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi. qualsiasi altro valore restituito non è supportato e il relativo comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali di controllo compositoComposite Control Global Functions](../../atl/reference/composite-control-global-functions.md)
