---
title: 'CDataConnection:: CDataConnection | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDataConnection.CDataConnection
- ATL.CDataConnection.CDataConnection
- CDataConnection::CDataConnection
- ATL::CDataConnection::CDataConnection
dev_langs:
- C++
helpviewer_keywords:
- CDataConnection class, constructor
ms.assetid: ac25c9a0-44d3-4083-b13f-76c07772e12d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 267341f88886f3ff94a6b828034e8acbaa2dc0c1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093324"
---
# <a name="cdataconnectioncdataconnection"></a>CDataConnection::CDataConnection
Crea e Inizializza un `CDataConnection` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      CDataConnection();   

CDataConnection(const CDataConnection &ds);  
```  
  
#### <a name="parameters"></a>Parametri  
 `ds`  
 [in] Un riferimento a una connessione dati esistente.  
  
## <a name="remarks"></a>Note  
 La sostituzione del primo crea un nuovo `CDataConnection` oggetto con le impostazioni predefinite.  
  
 Il secondo override crea un nuovo `CDataConnection` oggetto con le impostazioni equivale a specificare l'oggetto di connessione dati.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataConnection](../../data/oledb/cdataconnection-class.md)