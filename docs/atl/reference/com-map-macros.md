---
title: Macro della mappa COM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces, COM map macros
ms.assetid: 0f33656d-321f-4996-90cc-9a7f21ab73c3
caps.latest.revision: 16
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 1c8e73fc4d6cab2e9052e74d68bddbb5796ebfa8
ms.contentlocale: it-it
ms.lasthandoff: 03/31/2017

---
# <a name="com-map-macros"></a>Macro della mappa COM
Queste macro definiscono le mappe dell'interfaccia COM.  
  
|||  
|-|-|  
|[BEGIN_COM_MAP](#begin_com_map)|Contrassegna l'inizio delle voci della mappa dell'interfaccia COM.|  
|[END_COM_MAP](#end_com_map)|Contrassegna la fine delle voci della mappa dell'interfaccia COM.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
   
##  <a name="begin_com_map"></a>BEGIN_COM_MAP  
 La mappa COM è il meccanismo che espone le interfacce in un oggetto a un client tramite `QueryInterface`.  
  
```
BEGIN_COM_MAP(x)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome dell'oggetto di classe a cui in che si siano esponendo le interfacce.  
  
### <a name="remarks"></a>Note  
 [CComObjectRootEx:: InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) restituisce solo i puntatori per le interfacce nella mappa COM. Avviare la mappa dell'interfaccia con il `BEGIN_COM_MAP` (macro), aggiungere le voci per ognuna delle interfacce con la [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) macro o una delle relative varianti e completare la mappa con la [END_COM_MAP](#end_com_map) (macro).  

  
### <a name="example"></a>Esempio  
 Da ATL [CERCAPERSONE](../../visual-cpp-samples.md) esempio:  
  
 [!code-cpp[NVC_ATL_COM N. 1](../../atl/codesnippet/cpp/com-map-macros_1.h)]  
  

  
##  <a name="end_com_map"></a>END_COM_MAP  
 Termina la definizione della mappa dell'interfaccia COM.  
  
```
END_COM_MAP()
```  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)   
 [Funzioni globali di mappa COM](../../atl/reference/com-map-global-functions.md)

