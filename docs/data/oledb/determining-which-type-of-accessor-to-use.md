---
title: Determinazione del tipo di accesso da utilizzare | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- rowsets [C++], data types
- accessors [C++], types
ms.assetid: 22483dd2-f4e0-4dcb-8e4d-cd43a9c1a3db
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cb2e18c8b0c5ab110b9818e46e7fc68c08656274
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="determining-which-type-of-accessor-to-use"></a>Determinazione del tipo di funzione di accesso da utilizzare
È possibile determinare i tipi di dati in un set di righe in fase di compilazione o in fase di esecuzione.  
  
 Se è necessario determinare i tipi di dati in fase di compilazione, utilizzare una funzione di accesso statica (ad esempio `CAccessor`). È possibile determinare i tipi di dati manualmente o tramite la creazione guidata Consumer OLE DB ATL.  
  
 Se è necessario determinare i tipi di dati in fase di esecuzione, utilizzare un dinamico (`CDynamicAccessor` o nei relativi elementi figlio) o una funzione di accesso manuali (`CManualAccessor`). In questi casi, è possibile chiamare `GetColumnInfo` nel set di righe da restituire le informazioni di associazione di colonna, da cui è possibile determinare i tipi.  
  
 Nella tabella seguente elenca i tipi di funzioni di accesso dei modelli consumer. Ogni funzione di accesso presenta vantaggi e svantaggi. A seconda della situazione specifica, un tipo di funzione di accesso deve in base alle esigenze.  
  
|Classe di funzione di accesso|Binding|Parametro|Commento|  
|--------------------|-------------|---------------|-------------|  
|`CAccessor`|Creare un record utente `COLUMN_ENTRY` macro. Le macro di associano un membro dati in tale record per la funzione di accesso. Quando viene creato il set di righe, colonne non possono essere non associate.|Sì, usando un **PARAM_MAP** immissione macro. Una volta associata, non possono essere non associato.|Funzione di accesso più rapido a causa di piccole quantità di codice.|  
|`CDynamicAccessor`|Automatico.|No.|È utile se non si conosce il tipo di dati in un set di righe.|  
|`CDynamicParameterAccessor`|Automatico, ma può essere [sottoposto a override](../../data/oledb/overriding-a-dynamic-accessor.md).|Sì, se il provider supporta `ICommandWithParameters`. I parametri associati automaticamente.|Più lenta `CDynamicAccessor` ma è utile per la chiamata di stored procedure generiche.|  
|**CDynamicStringAccessor [A, W]**|Automatico.|No.|Recupera i dati dall'archivio dati come dati di tipo stringa.|  
|`CManualAccessor`|Manuale tramite `AddBindEntry`.|Manualmente tramite `AddParameterEntry`.|Molto veloce. parametri e delle colonne associato una sola volta. Per determinare il tipo di dati da utilizzare. (Vedere [DBVIEWER](http://msdn.microsoft.com/en-us/07620f99-c347-4d09-9ebc-2459e8049832) esempio per un esempio.) È necessario altro codice di `CDynamicAccessor` o `CAccessor`. È più simile alla chiamata diretta di OLE DB.|  
|`CXMLAccessor`|Automatico.|No.|Recupera i dati dall'archivio dati come dati di tipo stringa e formatta i dati di tag XML.|  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)