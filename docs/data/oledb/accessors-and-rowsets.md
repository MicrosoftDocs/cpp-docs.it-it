---
description: 'Altre informazioni su: funzioni di accesso e set di righe'
title: Funzioni di accesso e rowset
ms.date: 11/19/2018
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
ms.openlocfilehash: 5bda7957f808319de596edf51b6cb3e378c14254
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246110"
---
# <a name="accessors-and-rowsets"></a>Funzioni di accesso e rowset

Per impostare e recuperare i dati, OLE DB modelli utilizzano una funzione di accesso e un set di righe tramite la classe [CAccessorRowset](../../data/oledb/caccessorrowset-class.md) . Questa classe è in grado di gestire più funzioni di accesso di tipi diversi.

## <a name="accessor-types"></a>Tipi di funzione di accesso

Tutte le funzioni di accesso derivano da [CAccessorBase](../../data/oledb/caccessorbase-class.md). `CAccessorBase` fornisce l'associazione di parametri e colonne.

Nella figura seguente sono illustrati i tipi di funzione di accesso.

![Tipi di funzione di accesso](../../data/oledb/media/vcaccessortypes.gif "Tipi di funzioni di accesso")<br/>
Classi della funzione di accesso

- [CAccessor](../../data/oledb/caccessor-class.md) Utilizzare questa funzione di accesso quando si conosce la struttura dell'origine del database in fase di progettazione. `CAccessor` associa in modo statico un record del database, che contiene il buffer, all'origine dati.

- [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) Utilizzare questa funzione di accesso quando non si conosce la struttura del database in fase di progettazione. `CDynamicAccessor` chiama `IColumnsInfo::GetColumnInfo` per ottenere le informazioni sulla colonna del database. Crea e gestisce una funzione di accesso e il buffer.

- [CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) Utilizzare questa funzione di accesso per gestire i tipi di comando sconosciuti. Quando si preparano i comandi, `CDynamicParameterAccessor` può ottenere informazioni sui parametri dall' `ICommandWithParameters` interfaccia se il provider supporta `ICommandWithParameters` .

- [CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md), [CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)e [CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md) utilizzano queste classi se non si conosce lo schema del database. `CDynamicStringAccessorA` Recupera i dati come stringhe ANSI; `CDynamicStringAccessorW` Recupera i dati come stringhe Unicode.

- [CManualAccessor](../../data/oledb/cmanualaccessor-class.md) Con questa classe è possibile usare qualsiasi tipo di dati desiderato se il provider è in grado di convertire il tipo. Gestisce sia le colonne dei risultati che i parametri di comando.

Nella tabella seguente viene riepilogato il supporto dei tipi di funzione di accesso OLE DB modello.

|Tipo di funzione di accesso|Dynamic|Gestisce i param|Buffer|Più funzioni di accesso|
|-------------------|-------------|--------------------|------------|------------------------|
|`CAccessor`|No|Sì|Utente|Sì|
|`CDynamicAccessor`|Sì|No|Modelli OLE DB|No|
|`CDynamicParameterAccessor`|Sì|Sì|Modelli OLE DB|No|
|`CDynamicStringAccessor[A,W]`|Sì|No|Modelli OLE DB|No|
|`CManualAccessor`|Sì|Sì|Utente|Sì|

## <a name="rowset-types"></a>Tipi di rowset

I modelli di OLE DB supportano tre tipi di set di righe (vedere la figura precedente): set di righe singoli (implementati da [CRowset](../../data/oledb/crowset-class.md)), set di righe bulk (implementati da [CBulkRowset](../../data/oledb/cbulkrowset-class.md)) e set di righe di matrici (implementati da [CArrayRowset](../../data/oledb/carrayrowset-class.md)). I singoli set di righe recuperano un singolo handle di riga quando `MoveNext` viene chiamato il metodo. I set di righe in blocco possono recuperare più handle di riga. I set di righe di matrici sono set di righe a cui è possibile accedere utilizzando la sintassi di matrice.

Nella figura seguente sono illustrati i tipi di set di righe.

![Immagine di RowsetType](../../data/oledb/media/vcrowsettypes.gif "Immagine di RowsetType")<br/>
Classi rowset

I [set di righe dello schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) non accedono ai dati nell'archivio dati, ma accedono alle informazioni sull'archivio dati, denominate metadati. I set di righe dello schema vengono in genere utilizzati in situazioni in cui la struttura del database non è nota in fase di compilazione e deve essere ottenuta in fase di esecuzione.

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)
