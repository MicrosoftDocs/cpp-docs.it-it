---
title: "Classe CDynamicStringAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicStringAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicStringAccessor (classe)"
ms.assetid: 138dc4de-c7c3-478c-863e-431e48249027
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CDynamicStringAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di accedere ad un'origine dati quando non si conosce lo schema del database \(la struttura sottostante del database\).  
  
## Sintassi  
  
```  
  
      template< typename BaseType, DBTYPEENUM OleDbType >  
class CDynamicStringAccessorT : public CDynamicAccessor  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[GetString](../../data/oledb/cdynamicstringaccessor-getstring.md)|Recupera i dati specificati di colonna come stringa.|  
|[SetString](../../data/oledb/cdynamicstringaccessor-setstring.md)|Imposta i dati specificati di colonna come stringa.|  
  
## Note  
 Mentre [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) richiede i dati nel formato nativo indicato dal provider, `CDynamicStringAccessor` richiede al provider di recuperare tutti i dati dall'archivio dati in formato stringa.  Questa soluzione è particolarmente utile per eseguire semplici attività che non richiedono calcoli di valori nell'archivio dati, quali la visualizzazione o la stampa del contenuto dell'archivio dati.  
  
 Il tipo nativo di dati della colonna nell'archivio dati non è importante; finché il provider può supportare la conversione di dati, fornirà i dati in formato stringa.  Se il provider non supporta la conversione dal tipo di dati nativo a una stringa \(non è comune\), la chiamata di richiesta restituirà il valore di successo **DB\_S\_ERRORSOCCURED**, e lo stato per la colonna corrispondente indicherà un problema di conversione con **DBSTATUS\_E\_CANTCONVERTVALUE**.  
  
 Utilizzare i metodi di `CDynamicStringAccessor` per ottenere le informazioni di colonna.  Tali informazioni di colonna vengono utilizzate per la creazione dinamica di una funzione di accesso in fase di esecuzione.  
  
 Le informazioni di colonna sono memorizzate in un buffer che viene creato e gestito da questa classe.  Per ottenere i dati dal buffer, utilizzare [GetString](../../data/oledb/cdynamicstringaccessor-getstring.md), o per memorizzare dati nel buffer, utilizzare [SetString](../../data/oledb/cdynamicstringaccessor-setstring.md).  
  
 Per informazioni ed esempi di utilizzo delle classi delle funzioni di accesso dinamiche, vedere [Utilizzo delle funzioni di accesso dinamiche](../../data/oledb/using-dynamic-accessors.md).  
  
## Requisiti  
 **Intestazione**: atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CAccessor](../../data/oledb/caccessor-class.md)   
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)   
 [Classe CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)   
 [Classe CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)