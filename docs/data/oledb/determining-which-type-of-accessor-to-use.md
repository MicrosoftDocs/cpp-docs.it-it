---
title: Determinazione del tipo di funzione di accesso da usare | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- rowsets [C++], data types
- accessors [C++], types
ms.assetid: 22483dd2-f4e0-4dcb-8e4d-cd43a9c1a3db
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f21a4545bb24b0a4a9e19efa2a6ff9738272cc9f
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39340443"
---
# <a name="determining-which-type-of-accessor-to-use"></a>Determinazione del tipo di funzione di accesso da utilizzare
È possibile determinare i tipi di dati in un set di righe in fase di compilazione o in fase di esecuzione.  
  
 Se è necessario determinare i tipi di dati in fase di compilazione, usare una funzione di accesso statico (ad esempio `CAccessor`). È possibile determinare i tipi di dati manualmente o tramite la creazione guidata Consumer OLE DB ATL.  
  
 Se è necessario determinare i tipi di dati in fase di esecuzione, usare un dinamico (`CDynamicAccessor` o i relativi figli) o della funzione di accesso manuali (`CManualAccessor`). In questi casi, è possibile chiamare `GetColumnInfo` nel set di righe da restituire le informazioni di associazione di colonna, da cui è possibile determinare i tipi.  
  
 Nella tabella seguente elenca i tipi di funzioni di accesso disponibile nei modelli di consumer. Ogni funzione di accesso presenta vantaggi e svantaggi. A seconda della situazione attuale, un tipo di funzione di accesso dovrebbe adattarsi alla proprie esigenze.  
  
|Classe di funzione di accesso|Binding|Parametro|Commento|  
|--------------------|-------------|---------------|-------------|  
|`CAccessor`|Creare un record utente con le macro COLUMN_ENTRY. Le macro di associano un membro dati in tale record per la funzione di accesso. Quando viene creato il set di righe, colonne non possono essere non associate.|Sì, tramite una voce di macro PARAM_MAP. Una volta associato, non possono essere non associata.|Funzione di accesso più rapido a causa di piccole quantità di codice.|  
|`CDynamicAccessor`|Automatico.|No.|È utile se non si conosce il tipo di dati in un set di righe.|  
|`CDynamicParameterAccessor`|Automatico, ma può essere [sottoposto a override](../../data/oledb/overriding-a-dynamic-accessor.md).|Sì, se il provider supporta `ICommandWithParameters`. I parametri associati automaticamente.|Più lenta `CDynamicAccessor` ma utile per chiamare le stored procedure generiche.|  
|`CDynamicStringAccessor[A,W]`|Automatico.|No.|Recupera i dati dall'archivio dati come dati di tipo stringa.|  
|`CManualAccessor`|Uso manuale `AddBindEntry`.|Manualmente tramite `AddParameterEntry`.|Molto veloce. i parametri e colonne associato una sola volta. Determinare il tipo di dati da utilizzare. (Vedere [DBVIEWER](http://msdn.microsoft.com/07620f99-c347-4d09-9ebc-2459e8049832) esempio per un esempio.) Richiede codice più esteso rispetto `CDynamicAccessor` o `CAccessor`. È più simile a chiamata OLE DB direttamente.|  
|`CXMLAccessor`|Automatico.|No.|Recupera i dati dall'archivio dati come dati di tipo stringa e le formatta come XML assegnare tag di dati.|  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)