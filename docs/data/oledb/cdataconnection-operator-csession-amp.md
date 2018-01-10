---
title: 'CDataConnection:: operator CSession&amp; | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CSession&
- CDataConnection::operatorCSession&
- CDataConnection.operatorCSession&
- operatorCSession&
dev_langs: C++
helpviewer_keywords:
- operator CSession&
- CSession& operator
ms.assetid: fba1e498-e482-4dda-8e0f-2542163bf627
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 35e28b96c3daddcdf8a9ea4bdf06f9b1410463f2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdataconnectionoperator-csessionamp"></a>CDataConnection:: operator CSession&amp;
Restituisce un riferimento all'oggetto contenuto `CSession` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
operator const CSession&();  
  
```  
  
## <a name="remarks"></a>Note  
 Questo operatore restituisce un riferimento all'oggetto contenuto `CSession` oggetto, che consente di passare un `CDataConnection` oggetto in cui un `CSession` riferimento è previsto.  
  
## <a name="example"></a>Esempio  
 Se si dispone di una funzione (ad esempio `func` seguito) che accetta un `CSession` riferimento, è possibile utilizzare **CSession &** per passare un `CDataConnection` invece dell'oggetto.  
  
 [!code-cpp[NVC_OLEDB_Consumer#5](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_1.cpp)]  
  
 [!code-cpp[NVC_OLEDB_Consumer#6](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CDataConnection (classe)](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CSession*](../../data/oledb/cdataconnection-operator-csession-star.md)