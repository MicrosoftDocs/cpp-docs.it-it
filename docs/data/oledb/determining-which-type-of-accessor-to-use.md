---
title: "Determinazione del tipo di funzione di accesso da utilizzare | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni di accesso [C++], tipi"
  - "rowset [C++], tipi di dati"
ms.assetid: 22483dd2-f4e0-4dcb-8e4d-cd43a9c1a3db
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Determinazione del tipo di funzione di accesso da utilizzare
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile determinare i tipi di dati di un rowset in fase di compilazione o in fase di esecuzione.  
  
 Per determinare i tipi di dati in fase di compilazione, utilizzare una funzione di accesso statica, ad esempio `CAccessor`.  È possibile determinare i tipi di dati manualmente o tramite la Creazione guidata consumer OLE DB ATL.  
  
 Per determinare i tipi di dati in fase di esecuzione, utilizzare una funzione di accesso dinamica, come `CDynamicAccessor` o le relative funzioni figlio, oppure manuale, ad esempio `CManualAccessor`.  In questi casi è possibile chiamare `GetColumnInfo` sul rowset per recuperare le informazioni di associazione delle colonne, dalle quali è possibile determinare i tipi.  
  
 Nella tabella riportata di seguito sono elencati i tipi di funzioni di accesso dei modelli consumer.  Ogni funzione di accesso presenta vantaggi e svantaggi specifici.  A seconda della situazione, un solo tipo di funzione di accesso risulta adatto.  
  
|Classe della funzione di accesso|Associazione|Parametro|Commento|  
|--------------------------------------|------------------|---------------|--------------|  
|`CAccessor`|Crea un record utente con le macro `COLUMN_ENTRY`.  Le macro associano un membro dati del record alla funzione di accesso.  In seguito alla creazione del rowset, non è più possibile annullare l'associazione delle colonne.|Sì, tramite una voce della macro **PARAM\_MAP**.  Una volta eseguita, non è possibile annullare l'associazione dei parametri.|Funzione di accesso più rapida grazie alla quantità limitata di codice.|  
|`CDynamicAccessor`|Automatica.|No.|Utile se non si conosce il tipo di dati di un rowset.|  
|`CDynamicParameterAccessor`|Automatica, ma è possibile eseguirne l'[override](../../data/oledb/overriding-a-dynamic-accessor.md).|Sì, se il provider supporta `ICommandWithParameters`.  I parametri vengono associati automaticamente.|Più lenta di `CDynamicAccessor`, ma utile per chiamare stored procedure generiche.|  
|**CDynamicStringAccessor\[A,W\]**|Automatica.|No.|Recupera i dati dall'archivio dati sotto forma di stringa.|  
|`CManualAccessor`|Manuale tramite `AddBindEntry`.|Associazione manuale tramite `AddParameterEntry`.|Molto veloce, in quanto i parametri e le colonne vengono associati una sola volta.  Il programmatore determina il tipo di dati da utilizzare. Per un esempio, vedere [DBVIEWER](http://msdn.microsoft.com/it-it/07620f99-c347-4d09-9ebc-2459e8049832). Richiede una quantità di codice superiore rispetto a `CDynamicAccessor` o `CAccessor`.  Analoga alla chiamata diretta di OLE DB.|  
|`CXMLAccessor`|Automatica.|No.|Recupera i dati dall'archivio dati sotto forma di stringa e li formatta come dati XML.|  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)