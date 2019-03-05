---
title: Struttura ATL_FUNC_INFO
ms.date: 11/04/2016
f1_keywords:
- _ATL_FUNC_INFO
- ATL::_ATL_FUNC_INFO
- ATL._ATL_FUNC_INFO
helpviewer_keywords:
- _ATL_FUNC_INFO structure
- ATL_FUNC_INFO structure
ms.assetid: 441ebe2c-f971-47de-9f52-a258e8d6f88e
ms.openlocfilehash: f6cf32bab86d741f3b0750c150c7bbc647b27ddc
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57299543"
---
# <a name="atlfuncinfo-structure"></a>Struttura ATL_FUNC_INFO

Contiene informazioni sul tipo usati per descrivere una proprietà o metodo in un'interfaccia dispatch.

## <a name="syntax"></a>Sintassi

```
struct _ATL_FUNC_INFO {
    CALLCONV cc;
    VARTYPE vtReturn;
    SHORT nParams;
    VARTYPE pVarTypes[_ATL_MAX_VARTYPES];
};
```

## <a name="members"></a>Membri

`cc`<br/>
Convenzione di chiamata. Quando si usa questa struttura con le [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) (classe), questo membro deve essere CC_STDCALL. `CC_CDECL` è l'unica opzione supportata in Windows CE per la `CALLCONV` campo il `_ATL_FUNC_INFO` struttura. Qualsiasi altro valore non è supportato in questo modo il comportamento non definito.

`vtReturn`<br/>
Il tipo variant della funzione di valore restituito.

`nParams`<br/>
Il numero di parametri della funzione.

`pVarTypes`<br/>
Matrice di tipi di varianti dei parametri di funzione.

## <a name="remarks"></a>Note

Internamente, ATL Usa questa struttura per contenere le informazioni ottenute da una libreria dei tipi. Potrebbe essere necessario modificare questa struttura direttamente se si forniscono informazioni sul tipo per un gestore eventi utilizzato con il [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) classe e [macro SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info) macro.

## <a name="example"></a>Esempio

Dato un metodo di interfaccia dispatch definito nell'IDL:

[!code-cpp[NVC_ATL_Windowing#139](../../atl/codesnippet/cpp/atl-func-info-structure_1.idl)]

è possibile definire un `_ATL_FUNC_INFO` struttura:

[!code-cpp[NVC_ATL_Windowing#140](../../atl/codesnippet/cpp/atl-func-info-structure_2.h)]

## <a name="requirements"></a>Requisiti

Intestazione: atlcom. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)<br/>
[Classe IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)
