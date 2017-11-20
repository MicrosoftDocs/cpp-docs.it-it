---
title: Struttura le strutture ATL_FUNC_INFO | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _ATL_FUNC_INFO
- ATL::_ATL_FUNC_INFO
- ATL._ATL_FUNC_INFO
dev_langs: C++
helpviewer_keywords:
- _ATL_FUNC_INFO structure
- ATL_FUNC_INFO structure
ms.assetid: 441ebe2c-f971-47de-9f52-a258e8d6f88e
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cb7f467d6491f58337177e8f16a580d28cb63e78
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="atlfuncinfo-structure"></a>Le strutture ATL_FUNC_INFO struttura
Contiene informazioni sul tipo utilizzati per descrivere una proprietà o metodo in un'interfaccia dispatch.  
  
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
 **cc**  
 Convenzione di chiamata. Quando si usa questa struttura con il [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) (classe), il membro deve essere **CC_STDCALL**. `CC_CDECL`è l'unica opzione è supportata in Windows CE per il `CALLCONV` campo il `_ATL_FUNC_INFO` struttura. Qualsiasi altro valore non è supportato in questo modo il comportamento corrispondente non è definito.  
  
 **vtReturn**  
 Il tipo variant della funzione di valore restituito.  
  
 **nParams**  
 Il numero di parametri di funzione.  
  
 **pVarTypes**  
 Matrice di tipi variant dei parametri della funzione.  
  
## <a name="remarks"></a>Note  
 Internamente, ATL Usa questa struttura per contenere le informazioni ottenute da una libreria dei tipi. Potrebbe essere necessario modificare direttamente questa struttura, se si forniscono informazioni sul tipo per un gestore eventi utilizzato con il [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) classe e [macro SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info) (macro).  
  
## <a name="example"></a>Esempio  
 In presenza di un metodo di interfaccia dispatch definito nell'IDL:  
  
 [!code-cpp[NVC_ATL_Windowing#139](../../atl/codesnippet/cpp/atl-func-info-structure_1.idl)]  
  
 è possibile definire un `_ATL_FUNC_INFO` struttura:  
  
 [!code-cpp[NVC_ATL_Windowing#140](../../atl/codesnippet/cpp/atl-func-info-structure_2.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)   
 [IDispEventSimpleImpl (classe)](../../atl/reference/idispeventsimpleimpl-class.md)   
 [MACRO SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)





