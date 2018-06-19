---
title: 'CDataConnection:: operator CDataSource&amp; | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDataSource&
- CDataConnection.operatorCDataSource&
- operatorCDataSource&
- CDataConnection::operatorCDataSource&
dev_langs:
- C++
helpviewer_keywords:
- CDataSource& operator
- operator & (CDataSource)
ms.assetid: 852faeee-f1b1-4465-9828-b261d1edf022
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8aca05cd83123e2866b8d46e5d5f085b5edd04f6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093428"
---
# <a name="cdataconnectionoperator-cdatasourceamp"></a>CDataConnection:: operator CDataSource&amp;
Restituisce un riferimento all'oggetto contenuto `CDataSource` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
operator const CDataSource&() throw();  
  
```  
  
## <a name="remarks"></a>Note  
 Questo operatore restituisce un riferimento all'oggetto contenuto `CDataSource` oggetto, che consente di passare un `CDataConnection` oggetto in cui un `CDataSource` riferimento è previsto.  
  
## <a name="example"></a>Esempio  
 Se si dispone di una funzione (ad esempio `func` seguito) che accetta un `CDataSource` riferimento, è possibile utilizzare **CDataSource &** per passare un `CDataConnection` invece dell'oggetto.  
  
 [!code-cpp[NVC_OLEDB_Consumer#3](../../data/oledb/codesnippet/cpp/cdataconnection-operator-cdatasource-amp_1.cpp)]  
  
 [!code-cpp[NVC_OLEDB_Consumer#4](../../data/oledb/codesnippet/cpp/cdataconnection-operator-cdatasource-amp_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CDataConnection (classe)](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CDataSource*](../../data/oledb/cdataconnection-operator-cdatasource-star.md)