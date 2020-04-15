---
title: Modello a oggetti OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- rowsets, OLE DB object model
- OLE DB, object model
ms.assetid: 1a274a25-c310-4430-a1ec-bd2bd8120eff
ms.openlocfilehash: b37205eb91317c602010a4b568057845b2345ef0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369793"
---
# <a name="ole-db-object-model"></a>Modello a oggetti OLE DB

Il modello a oggetti OLE DB è costituito dai seguenti oggetti o componenti. I primi quattro oggetti o componenti elencati (origini dati, sessioni, comandi e set di righe) consentono di connettersi a un'origine dati e di visualizzarla. Il resto, a partire dalle funzioni di accesso, riguarda l'utilizzo dei dati quando vengono visualizzati.

## <a name="data-sources"></a>Origini dati

Gli oggetti origine dati consentono di connettersi a un'origine dati, ad esempio un file o DBMS. Un oggetto origine dati crea e gestisce la connessione e contiene le autorizzazioni e le informazioni di autenticazione (ad esempio nome di accesso e password). Un oggetto origine dati può creare una o più sessioni.

## <a name="sessions"></a>Sessioni

Una sessione gestisce una particolare interazione con l'origine dati per eseguire query e recuperare i dati. Ogni sessione è una singola transazione. Una transazione è un'unità di lavoro indivisibile definita dal test ACID. Per una definizione di ACID, vedere [Transactions](#vcconoledbcomponents_transactions).

Le sessioni eseguire attività importanti, ad esempio l'apertura di set di righe e la restituzione dell'oggetto origine dati che lo ha creato. Le sessioni possono anche restituire metadati o informazioni sull'origine dati stessa, ad esempio informazioni sulla tabella.

Una sessione può creare uno o più comandi.

## <a name="commands"></a>Comandi:

I comandi eseguono un comando di testo, ad esempio un'istruzione SQL. Se il comando di testo specifica un set di righe, ad esempio un'istruzione SQL **SELECT,** il comando crea il set di righe.

Un comando è semplicemente un contenitore per un comando di testo, ovvero una stringa (ad esempio un'istruzione SQL) passata da un consumer a un oggetto origine dati per l'esecuzione dall'archivio dati sottostante del provider. In genere, il comando di testo è un'istruzione SQL **SELECT** (nel qual caso, poiché SQL **SELECT** specifica un set di righe, il comando crea automaticamente un set di righe).

## <a name="rowsets"></a>Set di righe

I set di righe mostrano i dati in formato tabulare. Un indice è un caso speciale di un set di righe. È possibile creare set di righe dalla sessione o dal comando.

### <a name="schema-rowsets"></a>Set di righe dello schema

Gli schemi dispongono di metadati (informazioni strutturali) su un database. I set di righe dello schema sono set di righe con informazioni sullo schema. Alcuni provider OLE DB per DBMS supportano oggetti set di righe dello schema. Per ulteriori informazioni sui rowset dello schema, vedere [Recupero di metadati con i set](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) di righe dello schema e Classi di set di righe dello schema e classi [Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).

### <a name="view-objects"></a>Visualizza oggetti

Un oggetto visualizzazione definisce un subset delle righe e delle colonne di un set di righe. Non ha dati propri. Gli oggetti visualizzazione non possono combinare dati da più set di righe.

## <a name="accessors"></a>Funzioni di accesso

Solo OLE DB utilizza il concetto di funzioni di accesso. Una funzione di accesso descrive la modalità di archiviazione dei dati in un consumer. Include un set di associazioni (denominato mappa delle colonne) tra i campi del set di righe (colonne) e i membri dati dichiarati nel consumer.

## <a name="transactions"></a><a name="vcconoledbcomponents_transactions"></a>Transazioni

Gli oggetti transazione vengono utilizzati quando si esegue il commit o l'interruzione di transazioni nidificate a un livello diverso da quello più basso. Una transazione è un'unità di lavoro indivisibile definita dal test ACID. ACID sta per:

- Atomicità, non può essere diviso in unità di lavoro più piccole

- Concorrenza, possono verificarsi più di una transazione alla voltaConcurrency, more than one transaction can occur in a time

- Isolamento, una transazione ha una conoscenza limitata delle modifiche apportate da un altro

- Durabilità, la transazione apporta modifiche persistenti

## <a name="enumerators"></a>Enumerators

Gli enumeratori cercano le origini dati disponibili e altri enumeratori. I consumer che non sono personalizzati per una particolare origine dati utilizzano gli enumeratori per cercare un'origine dati da utilizzare.

Un enumeratore radice, fornito in Microsoft Data Access SDK, attraversa il Registro di sistema alla ricerca di origini dati e altri enumeratori. Altri enumeratori attraversano il Registro di sistema o la ricerca in modo specifico del provider.

## <a name="errors"></a>Errors

Qualsiasi interfaccia su qualsiasi oggetto OLE DB può generare errori. Gli errori contengono informazioni aggiuntive su un errore, incluso un oggetto errore personalizzato facoltativo. Queste informazioni vengono archiviate in un HRESULT.

## <a name="notifications"></a>Notifiche

Le notifiche vengono utilizzate da gruppi di consumer che condividono un set di righe (dove la condivisione significa che si presuppone che i consumer funzionino all'interno della stessa transazione). Le notifiche consentono ai consumer che condividono un set di righe di essere informati sulle azioni nel set di righe eseguite dai relativi peer.

## <a name="see-also"></a>Vedere anche

[Programmazione OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[OLE DB Programming Overview](../../data/oledb/ole-db-programming-overview.md)
