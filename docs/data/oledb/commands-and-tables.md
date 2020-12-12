---
description: 'Altre informazioni su: comandi e tabelle'
title: Comandi e tabelle
ms.date: 11/19/2018
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
ms.openlocfilehash: 767077af7b44b4727272fefc1c2af2f717baddd8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323340"
---
# <a name="commands-and-tables"></a>Comandi e tabelle

I comandi e le tabelle consentono di accedere ai set di righe. ovvero aprire set di righe, eseguire comandi e associare colonne. Le classi [CCommand](../../data/oledb/ccommand-class.md) e [CTable](../../data/oledb/ctable-class.md) creano rispettivamente gli oggetti Command e Table. Queste classi derivano da [CAccessorRowset](../../data/oledb/caccessorrowset-class.md) , come illustrato nella figura seguente.

![CCommand e CTable](../../data/oledb/media/vccommandstables.gif "CCommand e CTable")<br/>
Classi Command e Table

Nella tabella precedente `TAccessor` può essere qualsiasi tipo di funzione di accesso elencato in [tipi di funzioni di accesso](../../data/oledb/accessors-and-rowsets.md). `TRowset` può essere qualsiasi tipo di set di righe elencato in [tipi di set di righe](../../data/oledb/accessors-and-rowsets.md). `TMultiple` Specifica il tipo di risultato (un set di risultati singolo o multiplo).

La [creazione guidata consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md) consente di specificare se si desidera un oggetto comando o tabella.

- Per le origini dati senza comandi, è possibile usare la `CTable` classe. Generalmente viene usato per i set di righe semplici che non specificano parametri e non richiedono più risultati. Questa semplice classe apre una tabella in un'origine dati usando un nome di tabella specificato.

- Per le origini dati che supportano i comandi, è invece possibile usare la `CCommand` classe. Per eseguire un comando, chiamare [Open](./ccommand-class.md#open) in questa classe. In alternativa, è possibile chiamare `Prepare` per preparare un comando che si desidera eseguire più di una volta.

   `CCommand` dispone di tre argomenti di modello: un tipo di funzione di accesso, un tipo di set di righe e un tipo di risultato ( `CNoMultipleResults` , per impostazione predefinita, o `CMultipleResults` ). Se si specifica `CMultipleResults` , la `CCommand` classe supporta l' `IMultipleResults` interfaccia e gestisce più set di righe. Nell'esempio [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) viene illustrato come gestire i diversi risultati.

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)
