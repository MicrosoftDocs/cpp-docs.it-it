---
title: 'CDataConnection:: operator BOOL | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDataConnection::operatorBOOL
- ATL::CDataConnection::operatorBOOL
- CDataConnection.operatorBOOL
- ATL.CDataConnection.operatorBOOL
dev_langs:
- C++
helpviewer_keywords:
- BOOL operator
- operator bool
ms.assetid: ad0bea7f-61ff-47f7-8127-32a31e3e9b9d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5597e99b23a928df1d5052ed6354baf2dae21864
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093415"
---
# <a name="cdataconnectionoperator-bool"></a>CDataConnection::operator BOOL
Determina se la sessione corrente è aperta o non.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
operator BOOL() throw();  
  
```  
  
## <a name="remarks"></a>Note  
 Restituisce **BOOL** valore (typedef MFC). **TRUE** significa che la sessione corrente è aperta; **FALSE** indica che la sessione corrente è chiuso.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CDataConnection (classe)](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection:: operator bool](../../data/oledb/cdataconnection-operator-bool-ole-db.md)