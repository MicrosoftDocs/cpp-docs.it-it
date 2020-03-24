---
title: Modello a oggetti OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- rowsets, OLE DB object model
- OLE DB, object model
ms.assetid: 1a274a25-c310-4430-a1ec-bd2bd8120eff
ms.openlocfilehash: 192195d02b034546e50b1cb860b1f11c47dc2b65
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210119"
---
# <a name="ole-db-object-model"></a>Modello a oggetti OLE DB

Il modello a oggetti di OLE DB è costituito dagli oggetti o dai componenti seguenti. I primi quattro oggetti o componenti elencati (origini dati, sessioni, comandi e set di righe) consentono di connettersi a un'origine dati e visualizzarla. Il resto, a partire dalle funzioni di accesso, è correlato all'utilizzo dei dati quando viene visualizzato.

## <a name="data-sources"></a>Origini dati

Gli oggetti origine dati consentono di connettersi a un'origine dati, ad esempio un file o un sistema DBMS. Un oggetto origine dati crea e gestisce la connessione e contiene le informazioni sulle autorizzazioni e le autenticazioni, ad esempio nome account di accesso e password. Un oggetto origine dati può creare una o più sessioni.

## <a name="sessions"></a>Sessioni

Una sessione gestisce una particolare interazione con l'origine dati per eseguire una query e recuperare i dati. Ogni sessione è un'unica transazione. Una transazione è un'unità di lavoro indivisibile definita dal test ACID. Per una definizione di ACID, vedere [Transactions](#vcconoledbcomponents_transactions).

Le sessioni eseguono attività importanti, ad esempio l'apertura di set di righe e la restituzione dell'oggetto origine dati che l'ha creata. Le sessioni possono inoltre restituire i metadati o le informazioni sull'origine dati stessa, ad esempio le informazioni sulla tabella.

Una sessione può creare uno o più comandi.

## <a name="commands"></a>Comandi:

I comandi eseguono un comando di testo, ad esempio un'istruzione SQL. Se il comando di testo specifica un set di righe, ad esempio un'istruzione SQL **Select** , il comando crea il set di righe.

Un comando è semplicemente un contenitore per un comando di testo, ovvero una stringa, ad esempio un'istruzione SQL, passata da un consumer a un oggetto origine dati per l'esecuzione da parte dell'archivio dati sottostante del provider. In genere, il comando testo è un'istruzione SQL **Select** (in questo caso, poiché SQL **SELECT** specifica un set di righe, il comando crea automaticamente un set di righe).

## <a name="rowsets"></a>Set di righe

I set di righe mostrano i dati in formato tabulare. Un indice è un caso speciale di un set di righe. È possibile creare set di righe dalla sessione o dal comando.

### <a name="schema-rowsets"></a>Set di righe dello schema

Gli schemi contengono metadati (informazioni strutturali) su un database. I set di righe dello schema sono set di righe con informazioni sullo schema. Alcuni provider di OLE DB per DBMS supportano gli oggetti set di righe dello schema. Per ulteriori informazioni sui set di righe dello schema, vedere [recupero di metadati con set](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) di righe dello schema e [classi di set di righe dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).

### <a name="view-objects"></a>Visualizza oggetti

Un oggetto visualizzazione definisce un subset delle righe e delle colonne di un set di righe. Non dispone di dati propri. Gli oggetti visualizzazione non possono combinare i dati di più set di righe.

## <a name="accessors"></a>Funzioni

Solo OLE DB usa il concetto di funzioni di accesso. Una funzione di accesso descrive il modo in cui i dati vengono archiviati in un consumer. Dispone di un set di associazioni (denominato mappa colonna) tra i campi del set di righe (colonne) e i membri dati dichiarati nel consumer.

##  <a name="transactions"></a><a name="vcconoledbcomponents_transactions"></a> Transazioni

Gli oggetti transazione vengono utilizzati per il commit o l'interruzione di transazioni nidificate a un livello più basso. Una transazione è un'unità di lavoro indivisibile definita dal test ACID. ACID sta per:

- Atomicità, non può essere divisa in unità di lavoro più piccole

- Concorrenza, può verificarsi più di una transazione alla volta

- Isolamento, una transazione ha una conoscenza limitata delle modifiche apportate da un altro

- Durabilità, la transazione apporta modifiche permanenti

## <a name="enumerators"></a>Enumerators

Gli enumeratori cercano le origini dati disponibili e altri enumeratori. I consumer che non sono personalizzati per una determinata origine dati utilizzano gli enumeratori per cercare un'origine dati da utilizzare.

Un enumeratore radice, fornito in Microsoft Data Access SDK, attraversa il registro di sistema per cercare le origini dati e altri enumeratori. Altri enumeratori attraversano il registro di sistema o la ricerca in modo specifico del provider.

## <a name="errors"></a>Errors

Qualsiasi interfaccia in qualsiasi OLE DB oggetto può generare errori. Gli errori presentano informazioni aggiuntive su un errore, incluso un oggetto errore personalizzato facoltativo. Queste informazioni vengono archiviate in un HRESULT.

## <a name="notifications"></a>Notifiche

Le notifiche vengono utilizzate da gruppi di consumer cooperating che condividono un set di righe, in cui la condivisione indica che i consumer si presumeranno di lavorare all'interno della stessa transazione. Le notifiche consentono ai consumer cooperativi di condividere un set di righe per essere informati sulle azioni sul set di righe eseguito dai relativi peer.

## <a name="see-also"></a>Vedere anche

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)
