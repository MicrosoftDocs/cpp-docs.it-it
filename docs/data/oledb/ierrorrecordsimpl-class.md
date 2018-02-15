---
title: Classe IErrorRecordsImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::IErrorRecordsImpl
- ATL.IErrorRecordsImpl
- IErrorRecordsImpl
dev_langs:
- C++
helpviewer_keywords:
- IErrorRecordsImpl class
ms.assetid: dea8e938-c5d8-45ab-86de-eb8fbf534ffb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e69db8c89a60b7dee543bbdf87997514ba5f0cd7
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="ierrorrecordsimpl-class"></a>Classe IErrorRecordsImpl
Implementa OLE DB [IErrorRecords](https://msdn.microsoft.com/en-us/library/ms718112.aspx) interfaccia, aggiunta di record a e il recupero di record da un membro dati ([m_rgErrors](../../data/oledb/ierrorrecordsimpl-m-rgerrors.md)) di tipo **CAtlArray <** `RecordClass`**>**.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class RecordClass = ATLERRORINFO>  
class IErrorRecordsImpl : public IErrorRecords  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe derivata da `IErrorRecordsImpl`.  
  
 `RecordClass`  
 Una classe che rappresenta un oggetto di errore OLE DB.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetErrorDescriptionString](../../data/oledb/ierrorrecordsimpl-geterrordescriptionstring.md)|Ottiene la stringa di descrizione di errore da un record di errore.|  
|[GetErrorGUID](../../data/oledb/ierrorrecordsimpl-geterrorguid.md)|Ottiene l'errore GUID da un record di errore.|  
|[GetErrorHelpContext](../../data/oledb/ierrorrecordsimpl-geterrorhelpcontext.md)|Ottiene l'ID del contesto della Guida da un record di errore.|  
|[GetErrorHelpFile](../../data/oledb/ierrorrecordsimpl-geterrorhelpfile.md)|Ottiene il percorso completo del file della Guida da un record di errore.|  
|[GetErrorSource](../../data/oledb/ierrorrecordsimpl-geterrorsource.md)|Ottiene il codice di errore da un record di errore.|  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[AddErrorRecord](../../data/oledb/ierrorrecordsimpl-adderrorrecord.md)|Aggiunge un record per l'oggetto di errore OLE DB.|  
|[GetBasicErrorInfo](../../data/oledb/cdberrorinfo-getbasicerrorinfo.md)|Restituisce le informazioni di base sull'errore, ad esempio il codice restituito e il numero di errore specifico del provider.|  
|[GetCustomErrorObject](../../data/oledb/cdberrorinfo-getcustomerrorobject.md)|Restituisce un puntatore a un'interfaccia su un oggetto di errore personalizzato.|  
|[GetErrorInfo](../../data/oledb/cdberrorinfo-geterrorinfo.md)|Restituisce un [IErrorInfo](https://msdn.microsoft.com/en-us/library/ms718112.aspx) puntatore a interfaccia per il record specificato.|  
|[GetErrorParameters](../../data/oledb/cdberrorinfo-geterrorparameters.md)|Restituisce i parametri di errore.|  
|[GetRecordCount](../../mfc/reference/cdaorecordset-class.md#getrecordcount)|Restituisce il numero di record nell'oggetto record OLE DB.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_rgErrors](../../data/oledb/ierrorrecordsimpl-m-rgerrors.md)|Matrice di record di errore.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)