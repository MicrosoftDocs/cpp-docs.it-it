---
title: Comandi e tabelle | Microsoft Docs
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
ms.openlocfilehash: fefd4241d1412ec6ea319db9ca6669856715e631
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46028116"
---
# <a name="commands-and-tables"></a>Comandi e tabelle

Comandi e tabelle è possibile accedere a set di righe; vale a dire, aprire i set di righe, eseguire i comandi e associare le colonne. Il [CCommand](../../data/oledb/ccommand-class.md) e [CTable](../../data/oledb/ctable-class.md) classi creare un'istanza di oggetti comando e la tabella, rispettivamente. Tali classi derivano da [CAccessorRowset](../../data/oledb/caccessorrowset-class.md) come illustrato nella figura seguente.  
  
![CCommand e CTable](../../data/oledb/media/vccommandstables.gif "vccommandstables")  
Comando e le classi di tabella  
  
Nella tabella precedente `TAccessor` può essere qualsiasi tipo di funzione di accesso elencata nelle [tipi di funzione di accesso](../../data/oledb/accessors-and-rowsets.md). *TRowset* può essere qualsiasi tipo di set di righe elencata nelle [tipi di set di righe](../../data/oledb/accessors-and-rowsets.md). *TMultiple* specifica il tipo di risultato (una o più set di risultati).  
  
Il [Creazione guidata Consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md) consente di specificare se si desidera che un oggetto comando o di tabella.  
  
- Per le origini dati senza comandi, è possibile usare il `CTable` classe. In genere viene utilizzato per semplici set di righe che non specificare alcun parametro e non richiede più risultati. Questa semplice classe apre una tabella in un'origine dati utilizzando un nome di tabella specificato.  
  
- Per le origini dati che supportano i comandi, è possibile usare il `CCommand` classe. Per eseguire un comando, chiamare [aperto](../../data/oledb/ccommand-open.md) in questa classe. In alternativa, è possibile chiamare `Prepare` per preparare un comando che si desidera eseguire più volte.  
  
     `CCommand` dispone di tre argomenti di modello: un tipo di funzione di accesso, un tipo di set di righe e un tipo di risultato (`CNoMultipleResults`, per impostazione predefinita, o `CMultipleResults`). Se si specifica `CMultipleResults`, il `CCommand` supportate dalla classe di `IMultipleResults` interfaccia e gestisca più set di righe. Il [DBVIEWER](https://github.com/Microsoft/VCSamples) esempio viene illustrato come gestire i risultati di più.  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)