---
title: Struttura ATL_FUNC_INFO | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- _ATL_FUNC_INFO
- ATL::_ATL_FUNC_INFO
- ATL._ATL_FUNC_INFO
dev_langs:
- C++
helpviewer_keywords:
- _ATL_FUNC_INFO structure
- ATL_FUNC_INFO structure
ms.assetid: 441ebe2c-f971-47de-9f52-a258e8d6f88e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8852deacfd36ba988b9b31bdad363c05aee12b6e
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37882208"
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
 `cc`  
 Convenzione di chiamata. Quando si usa questa struttura con le [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) (classe), questo membro deve essere CC_STDCALL. `CC_CDECL` è l'unica opzione supportata in Windows CE per la `CALLCONV` campo il `_ATL_FUNC_INFO` struttura. Qualsiasi altro valore non è supportato in questo modo il comportamento non definito.  
  
 `vtReturn`  
 Il tipo variant della funzione di valore restituito.  
  
 `nParams`  
 Il numero di parametri della funzione.  
  
 `pVarTypes`  
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
  [Classi e struct](../../atl/reference/atl-classes.md)  
 [Classe IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)   
 [SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)





