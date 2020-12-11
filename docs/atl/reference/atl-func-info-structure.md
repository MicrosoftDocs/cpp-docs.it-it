---
description: 'Altre informazioni su: struttura _ATL_FUNC_INFO'
title: Struttura _ATL_FUNC_INFO
ms.date: 11/04/2016
f1_keywords:
- _ATL_FUNC_INFO
- ATL::_ATL_FUNC_INFO
- ATL._ATL_FUNC_INFO
helpviewer_keywords:
- _ATL_FUNC_INFO structure
- ATL_FUNC_INFO structure
ms.assetid: 441ebe2c-f971-47de-9f52-a258e8d6f88e
ms.openlocfilehash: 6368440347672524bb7d1e3aa3068ef91a2c6f09
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158855"
---
# <a name="_atl_func_info-structure"></a>Struttura _ATL_FUNC_INFO

Contiene informazioni sul tipo utilizzate per descrivere un metodo o una proprietà in un'interfaccia dispatch.

## <a name="syntax"></a>Sintassi

```cpp
struct _ATL_FUNC_INFO {
    CALLCONV cc;
    VARTYPE vtReturn;
    SHORT nParams;
    VARTYPE pVarTypes[_ATL_MAX_VARTYPES];
};
```

## <a name="members"></a>Members

`cc`<br/>
Convenzione di chiamata. Quando si usa questa struttura con la classe [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) , questo membro deve essere CC_STDCALL. `CC_CDECL` è l'unica opzione supportata in Windows CE per il `CALLCONV` campo della `_ATL_FUNC_INFO` struttura. Qualsiasi altro valore non è supportato, pertanto il comportamento non è definito.

`vtReturn`<br/>
Tipo Variant del valore restituito della funzione.

`nParams`<br/>
Numero di parametri della funzione.

`pVarTypes`<br/>
Matrice di tipi Variant dei parametri della funzione.

## <a name="remarks"></a>Commenti

Internamente, ATL utilizza questa struttura per conservare le informazioni ottenute da una libreria dei tipi. Potrebbe essere necessario modificare direttamente questa struttura se si forniscono informazioni sul tipo per un gestore eventi usato con la classe [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) e [SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info) macro.

## <a name="example"></a>Esempio

Dato un metodo di interfaccia dispatch definito in IDL:

[!code-cpp[NVC_ATL_Windowing#139](../../atl/codesnippet/cpp/atl-func-info-structure_1.idl)]

definire una `_ATL_FUNC_INFO` struttura:

[!code-cpp[NVC_ATL_Windowing#140](../../atl/codesnippet/cpp/atl-func-info-structure_2.h)]

## <a name="requirements"></a>Requisiti

Intestazione: atlcom.h

## <a name="see-also"></a>Vedi anche

[Classi e struct](../../atl/reference/atl-classes.md)<br/>
[Classe IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)
