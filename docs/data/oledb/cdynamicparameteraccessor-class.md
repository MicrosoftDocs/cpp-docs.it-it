---
title: CDynamicParameterAccessor (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CDynamicParameterAccessor
- ATL::CDynamicParameterAccessor
- CDynamicParameterAccessor
dev_langs: C++
helpviewer_keywords: CDynamicParameterAccessor class
ms.assetid: 5f22626e-e80d-491f-8b3b-cedc50331960
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b0c2590866db418f1652ebd1a46c0465ccb99086
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicparameteraccessor-class"></a>CDynamicParameterAccessor (classe)
Simile a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) ma ottiene le informazioni sui parametri da impostare chiamando l'interfaccia [ICommandWithParameters](https://msdn.microsoft.com/en-us/library/ms712937.aspx) .  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDynamicParameterAccessor : public CDynamicAccessor  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-cdynamicparameteraccessor.md)|Costruttore.|  
|[GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md)|Recupera i dati del parametro dal buffer.|  
|[GetParamCount](../../data/oledb/cdynamicparameteraccessor-getparamcount.md)|Recupera il numero di parametri nella funzione di accesso.|  
|[GetParamIO](../../data/oledb/cdynamicparameteraccessor-getparamio.md)|Determina se il parametro specificato è un parametro di input o output.|  
|[GetParamLength](../../data/oledb/cdynamicparameteraccessor-getparamlength.md)|Recupera la lunghezza del parametro specificato archiviato nel buffer.|  
|[GetParamName](../../data/oledb/cdynamicparameteraccessor-getparamname.md)|Recupera il nome di un parametro specificato.|  
|[GetParamStatus](../../data/oledb/cdynamicparameteraccessor-getparamstatus.md)|Recupera lo stato del parametro specificato archiviato nel buffer.|  
|[GetParamString](../../data/oledb/cdynamicparameteraccessor-getparamstring.md)|Recupera i dati string del parametro specificato archiviato nel buffer.|  
|[GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md)|Recupera il tipo di dati di un parametro specificato.|  
|[SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md)|Imposta il buffer usando i dati del parametro.|  
|[SetParamLength](../../data/oledb/cdynamicparameteraccessor-setparamlength.md)|Imposta la lunghezza del parametro specificato archiviato nel buffer.|  
|[SetParamStatus](../../data/oledb/cdynamicparameteraccessor-setparamstatus.md)|Imposta lo stato del parametro specificato archiviato nel buffer.|  
|[SetParamString](../../data/oledb/cdynamicparameteraccessor-setparamstring.md)|Imposta i dati string del parametro specificato archiviato nel buffer.|  
  
## <a name="remarks"></a>Note  
 Il provider deve supportare `ICommandWithParameters` in modo che il consumer usi questa classe.  
  
 Le informazioni di parametro vengono archiviate in un buffer creato e gestito da questa classe. Per ottenere i dati dei parametri dal buffer, usare [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) e [GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).  
  
 Per un esempio sull'uso di questa classe per eseguire una stored procedure di SQL Server e recuperare i valori dei parametri di output, vedere l'articolo della Knowledge Base Q058860 "Procedura: Esecuzione della stored procedure usando CDynamicParameterAccessor". Gli articoli della Knowledge Base sono disponibili nella documentazione di Visual Studio in MSDN Library o all'indirizzo [http://support.microsoft.com/](http://support.microsoft.com).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti per i modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor (classe)](../../data/oledb/caccessor-class.md)   
 [CDynamicAccessor (classe)](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)