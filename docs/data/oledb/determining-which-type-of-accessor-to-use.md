---
title: Determinazione del tipo di funzione di accesso da utilizzare
ms.date: 05/09/2019
helpviewer_keywords:
- rowsets [C++], data types
- accessors [C++], types
ms.assetid: 22483dd2-f4e0-4dcb-8e4d-cd43a9c1a3db
ms.openlocfilehash: 31efa36bcd61caa154cd3e4c147ad5ed8728b04c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210990"
---
# <a name="determining-which-type-of-accessor-to-use"></a>Determinazione del tipo di funzione di accesso da utilizzare

È possibile determinare i tipi di dati in un set di righe in fase di compilazione o di esecuzione.

Se è necessario determinare i tipi di dati in fase di compilazione, usare una funzione di accesso statica, ad esempio `CAccessor`.

Se è necessario determinare i tipi di dati in fase di esecuzione, usare una funzione di accesso dinamica (`CDynamicAccessor` o i relativi figli) o una funzione di accesso manuale (`CManualAccessor`). In questi casi, è possibile chiamare `GetColumnInfo` nel set di righe per restituire le informazioni sull'associazione delle colonne, da cui è possibile determinare i tipi.

La tabella seguente elenca i tipi di funzione di accesso forniti nei modelli di consumer. Ogni funzione di accesso ha alcuni vantaggi e svantaggi. A seconda della situazione, un tipo di funzione di accesso sarà adatto alle proprie esigenze.

|Classe della funzione di accesso|Associazione|Parametro|Comment|
|--------------------|-------------|---------------|-------------|
|`CAccessor`|Creare un record utente con macro COLUMN_ENTRY. Le macro associano un membro dati nel record alla funzione di accesso. Quando viene creato il set di righe, non è possibile annullare l'associazione delle colonne.|Sì, tramite una voce di macro PARAM_MAP. Una volta associati i parametri, non è possibile annullarne l'associazione.|Funzione di accesso più veloce a causa della piccola quantità di codice.|
|`CDynamicAccessor`|Automatico.|No.|Utile se non si conosce il tipo di dati in un set di righe.|
|`CDynamicParameterAccessor`|Automatica, ma è possibile [eseguirne l'override](../../data/oledb/overriding-a-dynamic-accessor.md).|Sì, se il provider supporta `ICommandWithParameters`. Parametri associati automaticamente.|Più lenta di `CDynamicAccessor`, ma utile per chiamare stored procedure generiche.|
|`CDynamicStringAccessor[A,W]`|Automatico.|No.|Recupera i dati accessibili dall'archivio dati come dati stringa.|
|`CManualAccessor`|Manuale tramite `AddBindEntry`.|Manuale tramite `AddParameterEntry`.|Veloce. I parametri e le colonne vengono associati solo una volta. Determinare il tipo di dati da usare. Per un esempio, vedere l'esempio [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) . Richiede un codice maggiore rispetto `CDynamicAccessor` o `CAccessor`. È più simile a una chiamata diretta di OLE DB.|
|`CXMLAccessor`|Automatico.|No.|Recupera i dati accessibili dall'archivio dati come dati stringa e li formatta come dati con tag XML.|

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
