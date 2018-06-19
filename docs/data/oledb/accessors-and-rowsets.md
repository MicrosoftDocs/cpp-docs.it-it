---
title: Funzioni di accesso e rowset | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- accessors [C++]
- OLE DB consumer templates, rowset support
- OLE DB consumer templates, accessors
- rowsets [C++], accessing
- bulk rowsets
- CAccessorRowset class, accessor types
- single rowsets
- CArrayRowset class, accessors
- CBulkRowset class, accessors
- array rowsets
- CAccessorBase class
- CRowset class, accessors and rowsets
- accessors [C++], rowsets
- rowsets [C++], supported types
ms.assetid: edc9c8b3-1a2d-4c2d-869f-7e058c631042
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 49f5415f6c75984f968b25fb709c20d80dde554f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33094495"
---
# <a name="accessors-and-rowsets"></a>Funzioni di accesso e rowset
Per impostare e recuperare i dati, modelli OLE DB utilizzano una funzione di accesso e un set di righe tramite il [CAccessorRowset](../../data/oledb/caccessorrowset-class.md) classe. Questa classe può gestire più funzioni di accesso di tipo diverso.  
  
## <a name="accessor-types"></a>Tipi di funzione di accesso  
 Tutte le funzioni di accesso derivano da [CAccessorBase](../../data/oledb/caccessorbase-class.md). `CAccessorBase` Fornisce i parametri e associazione di colonna.  
  
 La figura seguente illustra i tipi di funzione di accesso.  
  
 ![Tipi di funzione di accesso](../../data/oledb/media/vcaccessortypes.gif "vcaccessortypes")  
Classi di funzione di accesso  
  
-   [CAccessor](../../data/oledb/caccessor-class.md) usare questa funzione di accesso quando si conosce la struttura del database in fase di progettazione. `CAccessor` associa in modo statico un record del database che contiene il buffer per l'origine dati.  
  
-   [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) utilizzare questa funzione di accesso quando non si conosce la struttura del database in fase di progettazione. `CDynamicAccessor` chiamate `IColumnsInfo::GetColumnInfo` per ottenere le informazioni di colonna di database. Crea e gestisce una funzione di accesso e il buffer.  
  
-   [CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) utilizzare questa funzione di accesso per gestire i tipi di comando sconosciuto. Quando si preparano i comandi, `CDynamicParameterAccessor` possibile ottenere informazioni sui parametri dal `ICommandWithParameters` interfaccia, se il provider supporta `ICommandWithParameters`.  
  
-   [CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md), [CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md), e [CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md) classi da utilizzare quando si ha alcuna conoscenza dello schema del database. `CDynamicStringAccessorA` Recupera i dati sotto forma di stringhe ANSI; `CDynamicStringAccessorW` recupera i dati come stringhe Unicode.  
  
-   [CManualAccessor](../../data/oledb/cmanualaccessor-class.md) con questa classe, è possibile utilizzare tutti i tipi di dati che si desidera se il provider può convertire il tipo. Gestisce sia le colonne di risultati e i parametri del comando.  
  
 Nella tabella seguente viene riepilogato il supporto nei tipi di funzione di accesso di modelli OLE DB.  
  
|Tipo di funzione di accesso|Dynamic|Gestisce i parametri|Buffer|Più funzioni di accesso|  
|-------------------|-------------|--------------------|------------|------------------------|  
|`CAccessor`|No|Yes|Utente|Yes|  
|`CDynamicAccessor`|Sì|No|Modelli OLE DB|No|  
|`CDynamicParameterAccessor`|Sì|Yes|Modelli OLE DB|No|  
|`CDynamicStringAccessor[A,W]`|Sì|No|Modelli OLE DB|No|  
|`CManualAccessor`|Sì|Yes|Utente|Yes|  
  
## <a name="rowset-types"></a>Tipi di rowset  
 I modelli OLE DB supportano tre tipi di set di righe (vedere la figura precedente): singolo set di righe (implementata da [CRowset](../../data/oledb/crowset-class.md)), rowset di massa (implementata da [CBulkRowset](../../data/oledb/cbulkrowset-class.md)) e matrice di set di righe (implementata da [CArrayRowset](../../data/oledb/carrayrowset-class.md)). Rowset singoli recuperano una solo handle di riga quando `MoveNext` viene chiamato. Rowset di massa possono recuperare più handle di riga. Rowset di matrici sono set di righe che è possibile accedere tramite la sintassi della matrice.  
  
 La figura seguente illustra i tipi di set di righe.  
  
 ![Immagine di RowsetType](../../data/oledb/media/vcrowsettypes.gif "vcrowsettypes")  
Classi rowset  
  
 [Set di righe dello schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) non accedere ai dati nei dati di archivio ma alle informazioni sull'archivio dati, note come metadati. Set di righe dello schema vengono in genere utilizzati in situazioni in cui la struttura del database non è noto in fase di compilazione e deve essere ottenuta in fase di esecuzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)