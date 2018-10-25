---
title: Modello a oggetti OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 10/22/2018
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- rowsets, OLE DB object model
- OLE DB, object model
ms.assetid: 1a274a25-c310-4430-a1ec-bd2bd8120eff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 65cb4ef7acad08d3065f8394d61a50441d5e597c
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50056568"
---
# <a name="ole-db-object-model"></a>Modello a oggetti OLE DB

Il modello a oggetti OLE DB è costituito dalle seguenti oggetti o componenti. I primi quattro oggetti o i componenti elencati (origini dati, le sessioni, i comandi e i set di righe) consentono di connettersi a un'origine dati e visualizzare i dati. Il resto, a partire da funzioni di accesso, riguardano l'utilizzo con i dati quando viene visualizzato.

## <a name="data-sources"></a>Data Sources

Oggetti origine dei dati consentono di connettersi a un'origine dati, ad esempio un file o un sistema DBMS. Un oggetto origine dati crea e gestisce la connessione e contiene le informazioni di autenticazioni e autorizzazioni (ad esempio il nome di accesso e password). Un oggetto origine dati è possibile creare una o più sessioni.

## <a name="sessions"></a>Sessions

Una sessione di gestisce una particolare interazione con l'origine dati per eseguire query e recuperare i dati. Ogni sessione è una singola transazione. Una transazione è un'unità di lavoro indivisibile definita dalla proprietà ACID. Per una definizione di proprietà ACID, vedere [transazioni](#vcconoledbcomponents_transactions).

Le sessioni eseguire importanti attività, ad esempio aprendo i set di righe e restituire l'oggetto origine dati che l'ha creata. Le sessioni possono anche restituire metadati o informazioni relative all'origine dati (ad esempio, le informazioni della tabella).

Una sessione è possibile creare uno o più comandi.

## <a name="commands"></a>Comandi:

Comandi di eseguono un comando di testo, ad esempio un'istruzione SQL. Se il comando di testo specifica un set di righe, ad esempio un database SQL **seleziona** istruzione, il comando crea il set di righe.

Un comando è semplicemente un contenitore per un comando di testo, che è una stringa (ad esempio, un'istruzione SQL) passata da un consumer a un oggetto origine dati per l'esecuzione dall'archivio dati sottostante del provider. In genere, il comando di testo è un database SQL **selezionate** istruzione (nel qual caso, perché SQL **selezionare** specifica un set di righe, il comando crea automaticamente un set di righe).

## <a name="rowsets"></a>Set di righe

I set di righe Mostra i dati in formato tabulare. Un indice è un caso speciale di un set di righe. È possibile creare set di righe dalla sessione o il comando.

### <a name="schema-rowsets"></a>Rowset dello schema

Gli schemi dispongono di metadati (informazioni strutturali) su un database. Set di righe dello schema sono i set di righe contenenti le informazioni sullo schema. Alcuni provider OLE DB per DBMS supportano gli oggetti set di righe dello schema. Per altre informazioni sui set di righe dello schema, vedere [recupero di metadati with Schema Rowsets](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) e [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).

### <a name="view-objects"></a>Visualizzazione di oggetti

Un oggetto visualizzazione definisce un subset di righe e colonne da un set di righe. Non contiene alcun dato proprio. Visualizzazione di oggetti non può combinare dati da più set di righe.

## <a name="accessors"></a>Funzioni di accesso

Solo OLE DB Usa il concetto di funzioni di accesso. Una funzione di accesso viene descritto come i dati vengono archiviati in un consumer. Contiene un set di associazioni (denominato una mappa delle colonne) tra i campi di set di righe (colonne) e i membri di dati che si dichiara nel consumer.

##  <a name="vcconoledbcomponents_transactions"></a> Transazioni

Oggetti transazione vengono utilizzati durante il commit o annullare transazioni annidate in diverso da quello più basso. Una transazione è un'unità di lavoro indivisibile definita dalla proprietà ACID. ACID è l'acronimo di:

- Atomicità, non può essere suddiviso in unità di lavoro più piccole

- La concorrenza, più di una transazione può verificarsi in un momento

- Isolamento, una transazione ha una conoscenza limitata delle modifiche apportate da un altro

- La transazione di durabilità, apporta modifiche persistenti

## <a name="enumerators"></a>Enumeratori

Gli enumeratori cercare origini dati disponibili e altri enumeratori. I consumer che non sono personalizzati per una determinata origine dati vengono utilizzati enumeratori per cercare un'origine dati da utilizzare.

Un enumeratore radice, distribuito in Microsoft Data Access SDK, analizza il Registro di sistema alla ricerca di origini dati e altri enumeratori. Altri enumeratori attraversano il Registro di sistema o di una ricerca in modo specifico del provider.

## <a name="errors"></a>Errori

Qualsiasi interfaccia a tutti gli oggetti OLE DB può generare errori. Gli errori sono disponibili ulteriori informazioni sull'errore, tra cui un oggetto error personalizzato facoltativo. Queste informazioni vengono archiviate in un valore HRESULT.

## <a name="notifications"></a>Notifiche

Le notifiche vengono usate dai gruppi loro condividendo un set di righe (in cui la condivisione significa che i consumer si presuppone che a lavorare nella stessa transazione). Le notifiche permettono loro condividendo un set di righe essere informati sulle azioni sul set di righe eseguite da altri utenti.

## <a name="see-also"></a>Vedere anche

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)