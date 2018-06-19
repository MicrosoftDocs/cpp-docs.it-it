---
title: Comandi e tabelle | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB consumer templates, table support
- CCommand class, OLE DB consumer templates
- commands [C++], OLE DB Consumer Templates
- CTable class
- CAccessorRowset class, command and table classes
- rowsets, accessing
- tables [C++], OLE DB Consumer Templates
- OLE DB consumer templates, command support
ms.assetid: 4bd3787b-6d26-40a9-be0c-083080537c12
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 23d2739807a065b93b10a209a9ea68070b36970b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098680"
---
# <a name="commands-and-tables"></a>Comandi e tabelle
Comandi e tabelle consentono di accedere ai set di righe; vale a dire, aprire i set di righe, eseguire i comandi e associare le colonne. Il [CCommand](../../data/oledb/ccommand-class.md) e [CTable](../../data/oledb/ctable-class.md) classi creare gli oggetti comando e di tabella, rispettivamente. Queste classi derivano da [CAccessorRowset](../../data/oledb/caccessorrowset-class.md) come illustrato nella figura seguente.  
  
 ![CCommand e CTable](../../data/oledb/media/vccommandstables.gif "vccommandstables")  
Comando e le classi di tabella  
  
 Nella tabella precedente, `TAccessor` può essere qualsiasi tipo di funzione di accesso elencata nella [tipi di funzione di accesso](../../data/oledb/accessors-and-rowsets.md). *TRowset* può essere qualsiasi tipo di set di righe elencata nella [tipi di Rowset](../../data/oledb/accessors-and-rowsets.md). *TMultiple* specifica il tipo di risultato (uno o più set di risultati).  
  
 Il [la creazione guidata Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md) consente di specificare se si desidera che un oggetto comando o di tabella.  
  
-   Per le origini dati senza comandi, è possibile utilizzare la `CTable` classe. In genere viene utilizzato per set di righe semplici che non specificano parametri e non richiedono più risultati. Questa classe semplice apre una tabella in un'origine dati utilizzando un nome di tabella specificato.  
  
-   Per le origini dati che supportano i comandi, è possibile utilizzare la `CCommand` classe. Per eseguire un comando, chiamare [aprire](../../data/oledb/ccommand-open.md) in questa classe. In alternativa, è possibile chiamare `Prepare` per preparare un comando che si desidera eseguire più volte.  
  
     **CCommand** dispone di tre argomenti di modello: un tipo di funzione di accesso, un tipo di set di righe e un tipo di risultato (`CNoMultipleResults`, per impostazione predefinita, o `CMultipleResults`). Se si specifica `CMultipleResults`, `CCommand` classe supporta il **IMultipleResults** l'interfaccia e gestisce più set di righe. Il [DBVIEWER](http://msdn.microsoft.com/en-us/07620f99-c347-4d09-9ebc-2459e8049832) esempio viene illustrato come gestire più risultati.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)