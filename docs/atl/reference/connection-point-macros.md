---
title: Macro di punto di connessione | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], macros
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
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
translationtype: Machine Translation
ms.sourcegitcommit: 8cdedc5cfac9d49df812ae6fcfcc548201b1edb5
ms.openlocfilehash: c16b6f2f889745270a51a32a1449add86dec6ecb
ms.lasthandoff: 02/24/2017

---
# <a name="connection-point-macros"></a>Macro di punto di connessione
Queste macro definiscono mapping dei punti di connessione e le voci.  
  
|||  
|-|-|  
|[BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map)|Contrassegna l'inizio delle voci della mappa punto di connessione.|  
|[CONNECTION_POINT_ENTRY](#connection_point_entry)|Immette i punti di connessione nella mappa.|  
|[CONNECTION_POINT_ENTRY_P](#connection_point_entry)| (2017 di visual Studio) Analogamente a CONNECTION_POINT_ENTRY ma accetta un puntatore a iid.|
|[END_CONNECTION_POINT_MAP](#end_connection_point_map)|Contrassegna la fine delle voci della mappa punto di connessione.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h 
   
##  <a name="a-namebeginconnectionpointmapa--beginconnectionpointmap"></a><a name="begin_connection_point_map"></a>BEGIN_CONNECTION_POINT_MAP  
 Contrassegna l'inizio delle voci della mappa punto di connessione.  
  
```
BEGIN_CONNECTION_POINT_MAP(x)
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome della classe che contiene i punti di connessione.  
  
### <a name="remarks"></a>Note  
 Avviare la mappa dei punti di connessione con il `BEGIN_CONNECTION_POINT_MAP` (macro), aggiungere le voci per ognuno dei punti di connessione con il [CONNECTION_POINT_ENTRY](#connection_point_entry) (macro) e completare la mappa con la [END_CONNECTION_POINT_MAP](#end_connection_point_map) (macro).  
  
 Per ulteriori informazioni sui punti di connessione ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#101;](../../atl/codesnippet/cpp/connection-point-macros_1.h)]  
  
##  <a name="a-nameconnectionpointentrya--connectionpointentry-and-connectionpointentryp"></a><a name="connection_point_entry"></a>CONNECTION_POINT_ENTRY e CONNECTION_POINT_ENTRY_P  
 Inserisce un punto di connessione per l'interfaccia specificata nella mappa di punto di connessione in modo che sia accessibile.  
  
```
CONNECTION_POINT_ENTRY(iid)
CONNECTION_POINT_ENTRY_P(piid) // (Visual Studio 2017)
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia da aggiungere alla mappa del punto di connessione. 
 
 `piid`  
 [in] Puntatore al GUID dell'interfaccia di essere stata aggiunta.   
  
### <a name="remarks"></a>Note  
 Le voci di punto di connessione nella mappa vengono utilizzate da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md). Classe che contiene la mappa dei punti di connessione deve ereditare da `IConnectionPointContainerImpl`.  
  
 Avviare la mappa dei punti di connessione con il [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) (macro), aggiungere le voci per ognuno dei punti di connessione con il `CONNECTION_POINT_ENTRY` (macro) e completare la mappa con la [END_CONNECTION_POINT_MAP](#end_connection_point_map) (macro).  
  
 Per ulteriori informazioni sui punti di connessione ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#120; NVC_ATL_Windowing](../../atl/codesnippet/cpp/connection-point-macros_2.h)]  
  
##  <a name="a-nameendconnectionpointmapa--endconnectionpointmap"></a><a name="end_connection_point_map"></a>END_CONNECTION_POINT_MAP  
 Contrassegna la fine delle voci della mappa punto di connessione.  
  
```
END_CONNECTION_POINT_MAP()
```  
  
### <a name="remarks"></a>Note  
 Avviare la mappa dei punti di connessione con il [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) (macro), aggiungere le voci per ognuno dei punti di connessione con il [CONNECTION_POINT_ENTRY](#connection_point_entry) (macro) e completare la mappa con la `END_CONNECTION_POINT_MAP` (macro).  
  
 Per ulteriori informazioni sui punti di connessione ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#128; NVC_ATL_Windowing](../../atl/codesnippet/cpp/connection-point-macros_3.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)   
 [Funzioni globali del punto di connessione](../../atl/reference/connection-point-global-functions.md)

