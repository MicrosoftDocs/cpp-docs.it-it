---
title: Classe CDynamicStringAccessor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CDynamicStringAccessor
dev_langs: C++
helpviewer_keywords: CDynamicStringAccessor class
ms.assetid: 138dc4de-c7c3-478c-863e-431e48249027
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d6c24e6eaac83d72f8710b039b312f40517fd7e9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicstringaccessor-class"></a>Classe CDynamicStringAccessor
Consente di accedere a un'origine dati quando non si conosce lo schema del database (la struttura sottostante del database).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      template< typename BaseType, DBTYPEENUM OleDbType >  
class CDynamicStringAccessorT : public CDynamicAccessor  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetString](../../data/oledb/cdynamicstringaccessor-getstring.md)|Recupera i dati specificati di colonna come stringa.|  
|[SetString](../../data/oledb/cdynamicstringaccessor-setstring.md)|Imposta i dati specificati di colonna come stringa.|  
  
## <a name="remarks"></a>Note  
 Mentre [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) richiede i dati in formato nativo indicato dal provider, `CDynamicStringAccessor` richiede che il provider di recuperare tutti i dati dall'archivio dati come dati di tipo stringa. Ciò è particolarmente utile per eseguire semplici operazioni che non richiedono il calcolo di valori nell'archivio dati, ad esempio visualizzare o stampare il contenuto dell'archivio dati.  
  
 Il tipo nativo di dati della colonna nell'archivio dati non è importante; se il provider supporta la conversione di dati, potrà fornire i dati in formato stringa. Se il provider non supporta la conversione dal tipo di dati nativo a una stringa (che non è comune), la chiamata di richiesta restituirà il valore di esito positivo **DB_S_ERRORSOCCURED**, e lo stato per la colonna corrispondente verrà indicare un problema di conversione **DBSTATUS_E_CANTCONVERTVALUE**.  
  
 Utilizzare `CDynamicStringAccessor` metodi per ottenere informazioni di colonna. Utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione.  
  
 Le informazioni di colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere dati dal buffer tramite [GetString](../../data/oledb/cdynamicstringaccessor-getstring.md), o se archiviarlo per il buffer utilizzando [SetString](../../data/oledb/cdynamicstringaccessor-setstring.md).  
  
 Per informazioni ed esempi di utilizzo delle classi di funzioni di accesso dinamiche, vedere [utilizzando funzioni di accesso dinamiche](../../data/oledb/using-dynamic-accessors.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti per i modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor (classe)](../../data/oledb/caccessor-class.md)   
 [CDynamicParameterAccessor (classe)](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [CDynamicAccessor (classe)](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)   
 [Classe CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)   
 [Classe CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)