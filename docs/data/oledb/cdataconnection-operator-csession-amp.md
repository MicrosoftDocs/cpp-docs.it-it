---
title: 'CDataConnection:: operator CSession&amp; | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CSession&
- CDataConnection::operatorCSession&
- CDataConnection.operatorCSession&
- operatorCSession&
dev_langs:
- C++
helpviewer_keywords:
- operator CSession&
- CSession& operator
ms.assetid: fba1e498-e482-4dda-8e0f-2542163bf627
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1ce7a03d90225457c482c12a4d7df1d6135cd8ac
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cdataconnectionoperator-csessionamp"></a>CDataConnection::operator CSession&amp;
Restituisce un riferimento all'oggetto contenuto `CSession` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
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