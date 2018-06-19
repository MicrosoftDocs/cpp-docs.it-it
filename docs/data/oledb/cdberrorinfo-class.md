---
title: Classe CDBErrorInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDBErrorInfo
- ATL::CDBErrorInfo
- ATL.CDBErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- CDBErrorInfo class
ms.assetid: 9a5c18a2-ee3e-40f5-ab4c-581288d7f737
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 59222e30fe4a0ee7914c4a4d4e8dfa0d6d3a260b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098615"
---
# <a name="cdberrorinfo-class"></a>Classe CDBErrorInfo
Fornisce il supporto per l'elaborazione di errore OLE DB tramite OLE DB [IErrorRecords](https://msdn.microsoft.com/en-us/library/ms718112.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CDBErrorInfo  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetAllErrorInfo](../../data/oledb/cdberrorinfo-getallerrorinfo.md)|Restituisce tutte le informazioni sull'errore contenute in un record di errore.|  
|[GetBasicErrorInfo](../../data/oledb/cdberrorinfo-getbasicerrorinfo.md)|Chiamate [IErrorRecords::GetBasicErrorInfo](https://msdn.microsoft.com/en-us/library/ms723907.aspx) per restituire le informazioni di base relative all'errore specificato.|  
|[GetCustomErrorObject](../../data/oledb/cdberrorinfo-getcustomerrorobject.md)|Chiamate [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/en-us/library/ms725417.aspx) per restituire un puntatore a un'interfaccia su un oggetto di errore personalizzato.|  
|[GetErrorInfo](../../data/oledb/cdberrorinfo-geterrorinfo.md)|Chiamate [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/en-us/library/ms711230.aspx) per restituire un **IErrorInfo** puntatore a interfaccia per il record specificato.|  
|[GetErrorParameters](../../data/oledb/cdberrorinfo-geterrorparameters.md)|Chiamate [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx) per restituire i parametri di errore.|  
|[GetErrorRecords](../../data/oledb/cdberrorinfo-geterrorrecords.md)|Ottiene i record degli errori per l'oggetto specificato.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia restituisce uno o più record di errore all'utente. Chiamare [cdberrorinfo:: Geterrorrecords](../../data/oledb/cdberrorinfo-geterrorrecords.md) prima, per ottenere un conteggio di record di errore. Quindi chiamare uno dell'accesso funzioni, ad esempio [cdberrorinfo:: Getallerrorinfo](../../data/oledb/cdberrorinfo-getallerrorinfo.md)per recuperare informazioni sull'errore per ogni record.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [DBViewer](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)