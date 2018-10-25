---
title: Macro di controlli compositi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcom/ATL::BEGIN_SINK_MAP
- atlcom/ATL::END_SINK_MAP
- atlcom/ATL::SINK_ENTRY
dev_langs:
- C++
helpviewer_keywords:
- composite controls, macros
ms.assetid: 17f2dd5e-07e6-4aa6-b965-7a361c78c45e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 75e34fd4cfa53257f0e8a497cf8bc245c90f6732
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50077354"
---
# <a name="composite-control-macros"></a>Macro di controlli compositi

Queste macro definiscono mappe sink di evento e le voci.

|||
|-|-|
|[BEGIN_SINK_MAP](#begin_sink_map)|Contrassegna l'inizio della mappa eventi sink per il controllo composito.|
|[END_SINK_MAP](#end_sink_map)|Contrassegna la fine della mappa eventi sink per il controllo composito.|
|[MACRO SINK_ENTRY](#sink_entry)|Voce per la mappa di sink di evento.|
|[SINK_ENTRY_EX](#sink_entry_ex)|Voce alla mappa eventi sink con un parametro aggiuntivo.|
|[SINK_ENTRY_EX_P](#sink_entry_ex)| (Visual Studio 2017) Simile a SINK_ENTRY_EX con la differenza che accetta un puntatore a iid.|
|[SINK_ENTRY_INFO](#sink_entry_info)|Voce alla mappa eventi sink con informazioni sul tipo manualmente fornito per l'uso con [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md).|
|[SINK_ENTRY_INFO_P](#sink_entry_info)| (Visual Studio 2017) Simile alla macro SINK_ENTRY_INFO ad eccezione del fatto che accetta un puntatore a iid.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_sink_map"></a>  BEGIN_SINK_MAP

Dichiara l'inizio della mappa eventi sink per il controllo composito.

```
BEGIN_SINK_MAP(_class)
```

### <a name="parameters"></a>Parametri

*classe*<br/>
[in] Specifica il controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Note

Implementazione di ATL CE di ActiveX evento sink solo supporta valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il comportamento sarà indefinito.

##  <a name="end_sink_map"></a>  END_SINK_MAP

Dichiara la fine della mappa eventi sink per il controllo composito.

```
END_SINK_MAP()
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Note

Implementazione di ATL CE di ActiveX evento sink solo supporta valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il comportamento sarà indefinito.

##  <a name="sink_entry"></a>  MACRO SINK_ENTRY

Dichiara la funzione del gestore (*fn*) per l'evento specificato (*dispid*), del controllo identificato dalla *id*.

```
SINK_ENTRY( id, dispid, fn )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identifica il controllo.

*DISPID*<br/>
[in] Identifica l'evento specificato.

*Fn*<br/>
[in] Nome della funzione del gestore eventi. Questa funzione deve usare il `_stdcall` convenzione di chiamata e avere la firma dell'interfaccia dispatch-stile appropriato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]

### <a name="remarks"></a>Note

Implementazione di ATL CE di ActiveX evento sink solo supporta valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il comportamento sarà indefinito.

##  <a name="sink_entry_ex"></a>  SINK_ENTRY_EX e SINK_ENTRY_EX_P

Dichiara la funzione del gestore (*fn*) per l'evento specificato (*dispid*), dell'interfaccia dispatch (*iid*), per il controllo identificato dalla *id*.

```
SINK_ENTRY_EX( id, iid, dispid, fn )
SINK_ENTRY_EX_P( id, piid, dispid, fn ) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identifica il controllo.

*IID*<br/>
[in] Identifica l'interfaccia dispatch.

*piid*<br/>
[in] Puntatore all'interfaccia di dispatch.

*DISPID*<br/>
[in] Identifica l'evento specificato.

*Fn*<br/>
[in] Nome della funzione del gestore eventi. Questa funzione deve usare il `_stdcall` convenzione di chiamata e avere la firma dell'interfaccia dispatch-stile appropriato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#136](../../atl/codesnippet/cpp/composite-control-macros_2.h)]

### <a name="remarks"></a>Note

Implementazione di ATL CE di ActiveX evento sink solo supporta valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il comportamento sarà indefinito.

##  <a name="sink_entry_info"></a>  Macro SINK_ENTRY_INFO e SINK_ENTRY_INFO_P

Utilizzare la macro macro SINK_ENTRY_INFO all'interno di una mappa di sink di eventi per fornire le informazioni necessarie dal [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) per instradare gli eventi alla funzione di gestione pertinenti.

```
SINK_ENTRY_INFO( id, iid, dispid, fn, info )
SINK_ENTRY_INFO_P( id, piid, dispid, fn, info ) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Unsigned integer che identifica l'origine dell'evento. Questo valore deve corrispondere il *nID* parametro di modello utilizzato in correlato [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) classe di base.

*IID*<br/>
[in] IID che identifica l'interfaccia dispatch.

*piid*<br/>
[in] Puntatore a IID che identifica l'interfaccia dispatch.

*DISPID*<br/>
[in] DISPID che identifica l'evento specificato.

*Fn*<br/>
[in] Nome della funzione del gestore eventi. Questa funzione deve usare il `_stdcall` convenzione di chiamata e avere la firma dell'interfaccia dispatch-stile appropriato.

*Informazioni*<br/>
[in] Informazioni sul tipo per la funzione del gestore eventi. Questo tipo di informazioni viene fornito sotto forma di un puntatore a un `_ATL_FUNC_INFO` struttura. CC_CDECL è l'unica opzione supportata in Windows CE per il campo di convenzione di chiamata del `_ATL_FUNC_INFO` struttura. Qualsiasi altro valore non è supportato in questo modo il comportamento non definito.

### <a name="remarks"></a>Note

I parametri di macro primi quattro sono identici a quelli per il [SINK_ENTRY_EX](#sink_entry_ex) macro. Il parametro finale fornisce informazioni sul tipo per l'evento. Implementazione di ATL CE di ActiveX evento sink solo supporta valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il comportamento sarà indefinito.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali di controllo composito](../../atl/reference/composite-control-global-functions.md)
