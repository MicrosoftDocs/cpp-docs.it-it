---
title: Macro di punto di connessione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atlcom/ATL::BEGIN_CONNECTION_POINT_MAP
- atlcom/ATL::END_CONNECTION_POINT_MAP
dev_langs: C++
helpviewer_keywords: connection points [C++], macros
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 19eb60af9da72f3c158b9eacbfbfbdf478f1382d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="connection-point-macros"></a>Macro di punto di connessione
Queste macro definiscono mappe di punto di connessione e le voci.  
  
|||  
|-|-|  
|[BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map)|Contrassegna l'inizio delle voci di mappa del punto di connessione.|  
|[CONNECTION_POINT_ENTRY](#connection_point_entry)|Immette il mapping dei punti di connessione.|  
|[CONNECTION_POINT_ENTRY_P](#connection_point_entry)| (2017 di visual Studio) Analogamente a CONNECTION_POINT_ENTRY ma accetta un puntatore a iid.|
|[END_CONNECTION_POINT_MAP](#end_connection_point_map)|Contrassegna la fine delle voci di mappa del punto di connessione.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h 
   
##  <a name="begin_connection_point_map"></a>BEGIN_CONNECTION_POINT_MAP  
 Contrassegna l'inizio delle voci di mappa del punto di connessione.  
  
```
BEGIN_CONNECTION_POINT_MAP(x)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome della classe che contiene i punti di connessione.  
  
### <a name="remarks"></a>Note  
 Avviare la mappa dei punti di connessione con il `BEGIN_CONNECTION_POINT_MAP` (macro), aggiungere le voci per ognuno dei punti di connessione con il [CONNECTION_POINT_ENTRY](#connection_point_entry) (macro) e completare la mappa con la [END_CONNECTION_POINT_MAP](#end_connection_point_map) (macro).  
  
 Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#101](../../atl/codesnippet/cpp/connection-point-macros_1.h)]  
  
##  <a name="connection_point_entry"></a>CONNECTION_POINT_ENTRY e CONNECTION_POINT_ENTRY_P  
 Immette un punto di connessione per l'interfaccia specificata la mappa dei punti di connessione in modo che possano accedervi.  
  
```
CONNECTION_POINT_ENTRY(iid)
CONNECTION_POINT_ENTRY_P(piid) // (Visual Studio 2017)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia da aggiungere alla mappa del punto di connessione. 
 
 `piid`  
 [in] Puntatore al GUID dell'interfaccia da adde.   
  
### <a name="remarks"></a>Note  
 La mappa, tutte le voci di punto di connessione vengono utilizzate da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md). La classe che contiene la mappa dei punti di connessione deve ereditare da `IConnectionPointContainerImpl`.  
  
 Avviare la mappa dei punti di connessione con il [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) (macro), aggiungere le voci per ognuno dei punti di connessione con il `CONNECTION_POINT_ENTRY` (macro) e completare la mappa con la [END_CONNECTION_POINT_MAP ](#end_connection_point_map) (macro).  
  
 Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#120](../../atl/codesnippet/cpp/connection-point-macros_2.h)]  
  
##  <a name="end_connection_point_map"></a>END_CONNECTION_POINT_MAP  
 Contrassegna la fine delle voci di mappa del punto di connessione.  
  
```
END_CONNECTION_POINT_MAP()
```  
  
### <a name="remarks"></a>Note  
 Avviare la mappa dei punti di connessione con il [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) (macro), aggiungere le voci per ognuno dei punti di connessione con il [CONNECTION_POINT_ENTRY](#connection_point_entry) (macro) e completare la mappa con la `END_CONNECTION_POINT_MAP` (macro).  
  
 Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#128](../../atl/codesnippet/cpp/connection-point-macros_3.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)   
 [Funzioni globali del punto di connessione](../../atl/reference/connection-point-global-functions.md)
