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
ms.openlocfilehash: 685bf55910d4746463de30b17b71aa6d246db199
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417789"
---
# <a name="composite-control-macros"></a>Macro di controllo composito

Queste macro definiscono le mappe e le voci del sink di evento.

|||
|-|-|
|[BEGIN_SINK_MAP](#begin_sink_map)|Contrassegna l'inizio della mappa del sink di evento per il controllo composito.|
|[END_SINK_MAP](#end_sink_map)|Contrassegna la fine della mappa del sink di evento per il controllo composito.|
|[SINK_ENTRY](#sink_entry)|Voce della mappa di sink di evento.|
|[SINK_ENTRY_EX](#sink_entry_ex)|Voce alla mappa di sink di evento con un parametro aggiuntivo.|
|[SINK_ENTRY_EX_P](#sink_entry_ex)| (Visual Studio 2017) Simile a SINK_ENTRY_EX ad eccezione del fatto che accetta un puntatore a IID.|
|[SINK_ENTRY_INFO](#sink_entry_info)|Voce alla mappa di sink di evento con informazioni sul tipo fornite manualmente per l'uso con [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md).|
|[SINK_ENTRY_INFO_P](#sink_entry_info)| (Visual Studio 2017) Simile a SINK_ENTRY_INFO ad eccezione del fatto che accetta un puntatore a IID.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_sink_map"></a>BEGIN_SINK_MAP

Dichiara l'inizio della mappa del sink di evento per il controllo composito.

```
BEGIN_SINK_MAP(_class)
```

### <a name="parameters"></a>Parametri

*_class*<br/>
in Specifica il controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Osservazioni

L'implementazione della CE ATL dei sink di eventi ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il suo comportamento non è definito.

##  <a name="end_sink_map"></a>END_SINK_MAP

Dichiara la fine della mappa del sink di evento per il controllo composito.

```
END_SINK_MAP()
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Osservazioni

L'implementazione della CE ATL dei sink di eventi ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il suo comportamento non è definito.

##  <a name="sink_entry"></a>SINK_ENTRY

Dichiara la funzione del gestore (*FN*) per l'evento specificato (*DISPID*) del controllo identificato dall' *ID*.

```
SINK_ENTRY( id, dispid, fn )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identifica il controllo.

*DISPID*<br/>
in Identifica l'evento specificato.

*FN*<br/>
in Nome della funzione del gestore eventi. Questa funzione deve usare la convenzione di chiamata `_stdcall` e avere la firma di tipo interfaccia dispatch appropriata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Osservazioni

L'implementazione della CE ATL dei sink di eventi ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il suo comportamento non è definito.

##  <a name="sink_entry_ex"></a>SINK_ENTRY_EX e SINK_ENTRY_EX_P

Dichiara la funzione del gestore (*FN*) per l'evento specificato (*DISPID*), dell'interfaccia dispatch (*IID*), per il controllo identificato dall' *ID*.

```
SINK_ENTRY_EX( id, iid, dispid, fn )
SINK_ENTRY_EX_P( id, piid, dispid, fn ) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identifica il controllo.

*IID*<br/>
in Identifica l'interfaccia dispatch.

*pIID*<br/>
in Puntatore all'interfaccia dispatch.

*DISPID*<br/>
in Identifica l'evento specificato.

*FN*<br/>
in Nome della funzione del gestore eventi. Questa funzione deve usare la convenzione di chiamata `_stdcall` e avere la firma di tipo interfaccia dispatch appropriata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#136](../../atl/codesnippet/cpp/composite-control-macros_2.h)]

### <a name="remarks"></a>Osservazioni

L'implementazione della CE ATL dei sink di eventi ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il suo comportamento non è definito.

##  <a name="sink_entry_info"></a>SINK_ENTRY_INFO e SINK_ENTRY_INFO_P

Usare la macro SINK_ENTRY_INFO all'interno di una mappa di sink di evento per fornire le informazioni necessarie a [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) per indirizzare gli eventi alla funzione del gestore pertinente.

```
SINK_ENTRY_INFO( id, iid, dispid, fn, info )
SINK_ENTRY_INFO_P( id, piid, dispid, fn, info ) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Intero senza segno che identifica l'origine evento. Questo valore deve corrispondere al parametro di modello *NID* usato nella classe di base [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) correlata.

*IID*<br/>
in IID che identifica l'interfaccia dispatch.

*pIID*<br/>
in Puntatore a IID che identifica l'interfaccia dispatch.

*DISPID*<br/>
in DISPID che identifica l'evento specificato.

*FN*<br/>
in Nome della funzione del gestore eventi. Questa funzione deve usare la convenzione di chiamata `_stdcall` e avere la firma di tipo interfaccia dispatch appropriata.

*info*<br/>
in Informazioni sul tipo per la funzione del gestore eventi. Queste informazioni sul tipo vengono fornite sotto forma di puntatore a una struttura `_ATL_FUNC_INFO`. CC_CDECL è l'unica opzione supportata in Windows CE per il campo CALLCONV della struttura `_ATL_FUNC_INFO`. Qualsiasi altro valore non è supportato, pertanto il comportamento non è definito.

### <a name="remarks"></a>Osservazioni

I primi quattro parametri macro sono identici a quelli per la macro [SINK_ENTRY_EX](#sink_entry_ex) . Il parametro finale fornisce informazioni sul tipo per l'evento. L'implementazione della CE ATL dei sink di eventi ActiveX supporta solo valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il suo comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali di controllo composito](../../atl/reference/composite-control-global-functions.md)
