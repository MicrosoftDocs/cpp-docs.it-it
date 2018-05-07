---
title: 'CDataConnection:: operator CSession * | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDataConnection.operatorCSession*
- CDataConnection::operatorCSession*
- operatorCSession*
- CSession*
dev_langs:
- C++
helpviewer_keywords:
- operator CSession*
- CSession* operator
ms.assetid: 0b0feede-5c3e-4835-be5b-03651597014d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 97219418f18220cde84c80cb9052f17552a3a45d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cdataconnectionoperator-csession"></a>CDataConnection::operator CSession*
Restituisce un puntatore all'oggetto `CSession` contenuto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
operator const CSession*() throw();  
  
```  
  
## <a name="remarks"></a>Note  
 Questo operatore restituisce un puntatore all'oggetto `CSession` contenuto, consentendo di passare un oggetto `CDataConnection` dove è previsto un puntatore `CSession`.  
  
## <a name="example"></a>Esempio  
 Vedere [operatore CSession &](../../data/oledb/cdataconnection-operator-csession-amp.md) per un esempio di utilizzo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CDataConnection (classe)](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CSession&](../../data/oledb/cdataconnection-operator-csession-amp.md)