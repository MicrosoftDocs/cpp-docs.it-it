---
title: Determinazione del tipo di funzione di accesso da utilizzare
ms.date: 10/24/2018
helpviewer_keywords:
- rowsets [C++], data types
- accessors [C++], types
ms.assetid: 22483dd2-f4e0-4dcb-8e4d-cd43a9c1a3db
ms.openlocfilehash: 98234852d0577e581135980d6b8e525aeead5dc2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62175369"
---
# <a name="determining-which-type-of-accessor-to-use"></a>Determinazione del tipo di funzione di accesso da utilizzare

È possibile determinare i tipi di dati in un set di righe in fase di compilazione o in fase di esecuzione.

Se è necessario determinare i tipi di dati in fase di compilazione, usare una funzione di accesso statico (ad esempio `CAccessor`). È possibile determinare i tipi di dati manualmente o tramite il **Creazione guidata Consumer OLE DB ATL**.

Se è necessario determinare i tipi di dati in fase di esecuzione, usare un dinamico (`CDynamicAccessor` o i relativi figli) o della funzione di accesso manuali (`CManualAccessor`). In questi casi, è possibile chiamare `GetColumnInfo` nel set di righe da restituire le informazioni di associazione di colonna, da cui è possibile determinare i tipi.

Nella tabella seguente elenca i tipi di funzioni di accesso disponibile nei modelli di consumer. Ogni funzione di accesso presenta vantaggi e svantaggi. A seconda della situazione attuale, un tipo di funzione di accesso dovrebbe adattarsi alla proprie esigenze.

|Classe di funzione di accesso|Binding|Parametro|Commento|
|--------------------|-------------|---------------|-------------|
|`CAccessor`|Creare un record utente con le macro COLUMN_ENTRY. Le macro di associano un membro dati in tale record per la funzione di accesso. Quando viene creato il set di righe, colonne non possono essere non associate.|Sì, tramite una voce di macro PARAM_MAP. Una volta associato, non possono essere non associata.|Funzione di accesso più rapido a causa di piccole quantità di codice.|
|`CDynamicAccessor`|Automatico.|No.|È utile se non si conosce il tipo di dati in un set di righe.|
|`CDynamicParameterAccessor`|Automatico, ma può essere [sottoposto a override](../../data/oledb/overriding-a-dynamic-accessor.md).|Sì, se il provider supporta `ICommandWithParameters`. I parametri associati automaticamente.|Più lenta `CDynamicAccessor` ma utile per chiamare le stored procedure generiche.|
|`CDynamicStringAccessor[A,W]`|Automatico.|No.|Recupera i dati dall'archivio dati come dati di tipo stringa.|
|`CManualAccessor`|Uso manuale `AddBindEntry`.|Manualmente tramite `AddParameterEntry`.|Fast; i parametri e colonne associato una sola volta. Determinare il tipo di dati da utilizzare. (Vedere [DBVIEWER](https://github.com/Microsoft/VCSamples) esempio per un esempio.) Richiede codice più esteso rispetto `CDynamicAccessor` o `CAccessor`. È più simile a chiamata OLE DB direttamente.|
|`CXMLAccessor`|Automatico.|No.|Recupera i dati dall'archivio dati come dati di tipo stringa e le formatta come XML assegnare tag di dati.|

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)