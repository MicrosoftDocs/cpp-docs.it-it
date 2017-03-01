---
title: Struttura le strutture ATL_FUNC_INFO | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 21
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
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: c18e1c5a41ef910cfe327fdbdd8d8885ef30a092
ms.lasthandoff: 02/24/2017

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
 Convenzione di chiamata. Quando si utilizza questa struttura con il [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) (classe), questo membro deve essere **CC_STDCALL**. `CC_CDECL`è l'unica opzione supportata in Windows CE per il `CALLCONV` campo di `_ATL_FUNC_INFO` struttura. Qualsiasi altro valore non è supportato in questo modo il comportamento non definito.  
  
 **vtReturn**  
 Il tipo di variante della funzione di valore restituito.  
  
 **nParams**  
 Il numero di parametri di funzione.  
  
 **pVarTypes**  
 Matrice di tipi variant dei parametri della funzione.  
  
## <a name="remarks"></a>Note  
 ATL utilizza internamente, questa struttura per contenere le informazioni ottenute da una libreria dei tipi. Potrebbe essere necessario modificare questa struttura direttamente se si fornisce informazioni sul tipo per un gestore eventi utilizzato con il [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) (classe) e [macro SINK_ENTRY_INFO](http://msdn.microsoft.com/library/1a0ae260-2c82-4926-a537-db01e5f206a7) (macro).  
  
## <a name="example"></a>Esempio  
 Dato un metodo di interfaccia dispatch definito in IDL:  
  
 [!code-cpp[NVC_ATL_Windowing&#139;](../../atl/codesnippet/cpp/atl-func-info-structure_1.idl)]  
  
 è possibile definire un `_ATL_FUNC_INFO` struttura:  
  
 [!code-cpp[NVC_ATL_Windowing&#140;](../../atl/codesnippet/cpp/atl-func-info-structure_2.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)   
 [IDispEventSimpleImpl (classe)](../../atl/reference/idispeventsimpleimpl-class.md)   
 [MACRO SINK_ENTRY_INFO](http://msdn.microsoft.com/library/1a0ae260-2c82-4926-a537-db01e5f206a7)






