---
title: 'CDataConnection:: operator CDataSource * | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDataSource*
- CDataConnection::operatorCDataSource*
- CDataConnection.operatorCDataSource*
- operatorCDataSource*
dev_langs:
- C++
helpviewer_keywords:
- CDataSource* operator
- operator * (CDataSource)
ms.assetid: 9118e324-e68d-45c5-a791-03f041d420ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bade9d813fb9804ae353f7c5139f063f278da225
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33095339"
---
# <a name="cdataconnectionoperator-cdatasource"></a>CDataConnection::operator CDataSource*
Restituisce un puntatore all'oggetto `CDataSource` contenuto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
operator const CDataSource*() throw();  
  
```  
  
## <a name="remarks"></a>Note  
 Questo operatore restituisce un puntatore all'oggetto `CDataSource` contenuto, consentendo di passare un oggetto `CDataConnection` dove è previsto un puntatore `CDataSource`.  
  
 Vedere [operator CDataSource &](../../data/oledb/cdataconnection-operator-cdatasource-amp.md) per un esempio di utilizzo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CDataConnection (classe)](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CDataSource&](../../data/oledb/cdataconnection-operator-cdatasource-amp.md)