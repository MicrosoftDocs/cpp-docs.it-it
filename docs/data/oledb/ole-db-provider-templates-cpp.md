---
description: 'Altre informazioni su: modelli di provider OLE DB (C++)'
title: Modelli provider OLE DB (C++)
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB providers [C++], about providers
- databases [C++], OLE DB templates
- OLE DB provider templates [C++], about OLE DB provider templates
- templates [C++], OLE DB
ms.assetid: fccff85f-2af8-4500-82bd-6312d28a74b8
ms.openlocfilehash: 8706fcd9467e6d184633917d7c83ac81ad137b9d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286917"
---
# <a name="ole-db-provider-templates-c"></a>Modelli provider OLE DB (C++)

OLE DB è una parte importante della strategia Microsoft Universal Data Access. Il OLE DB progettazione consente l'accesso ai dati ad alte prestazioni da qualsiasi origine dati. Tutti i dati tabulari possono essere visualizzati tramite OLE DB indipendentemente dal fatto che provengano da un database. La flessibilità ti offre una notevole quantità di potenza.

Come illustrato in [OLE DB consumer e provider](../../data/oledb/ole-db-consumers-and-providers.md), OLE DB usa il concetto di consumer e provider. Il consumer effettua richieste di dati; il provider restituisce i dati in formato tabulare al consumer. Dal punto di vista della programmazione, l'implicazione più importante di questo modello è che il provider deve implementare qualsiasi chiamata che può essere apportata dal consumer.

## <a name="what-is-a-provider"></a>Che cos'è un provider?

Un provider OLE DB è un set di oggetti COM che forniscono chiamate di interfaccia da un oggetto consumer, trasferendo i dati in un formato tabulare da un'origine durevole (denominata archivio dati) al consumer.

I provider possono essere semplici o complessi. Il provider può supportare una quantità minima di funzionalità o un provider di qualità di produzione completo mediante l'implementazione di più interfacce. Un provider può restituire una tabella, consentire al client di determinare il formato della tabella ed eseguire operazioni su tali dati.

Ogni provider implementa un set standard di oggetti COM per gestire le richieste dal client, con un significato standard che qualsiasi utente OLE DB può accedere ai dati da qualsiasi provider, indipendentemente dalla lingua (ad esempio C++ e Basic).

Ogni oggetto COM contiene diverse interfacce, alcune delle quali sono obbligatorie e alcune delle quali sono facoltative. Implementando le interfacce obbligatorie, un provider garantisce un livello minimo di funzionalità (denominato conformità) che tutti i client devono essere in grado di utilizzare. Un provider può implementare interfacce facoltative per fornire funzionalità aggiuntive. L' [architettura del modello di Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md) descrive in modo dettagliato tali interfacce. Il client deve sempre chiamare `QueryInterface` per determinare se un provider supporta un'interfaccia specificata.

## <a name="ole-db-specification-level-support"></a>Supporto del livello di specifica OLE DB

I modelli di provider OLE DB supportano la specifica OLE DB versione 2,7. Utilizzando i modelli di provider di OLE DB, è possibile implementare un provider conforme a livello 0. Nell' `Provider` esempio, ad esempio, vengono usati i modelli per implementare un server di comando non SQL (MS-DOS) che esegue il comando DOS dir per eseguire una query sul file System. Nell' `Provider` esempio vengono restituite le informazioni sulla directory in un set di righe, ovvero il meccanismo di OLE DB standard per la restituzione dei dati tabulari.

Il tipo di provider più semplice supportato dai modelli di OLE DB è un provider di sola lettura senza comandi. Sono supportati anche i provider con comandi, come le funzionalità di segnalibro e di lettura/scrittura. È possibile implementare un provider di lettura/scrittura scrivendo codice aggiuntivo. I set di righe e le transazioni dinamici non sono supportati dalla versione corrente, ma è possibile aggiungerli se lo si desidera.

## <a name="when-do-you-need-to-create-an-ole-db-provider"></a>Quando è necessario creare un provider OLE DB?

Non è sempre necessario creare un provider personalizzato. Nella finestra di dialogo **proprietà di data link** di Microsoft sono disponibili diversi provider standard preconfezionati, in Visual C++. Il motivo principale per cui si crea un provider di OLE DB consiste nel sfruttare la strategia di accesso ai dati universale. Ecco alcuni dei vantaggi di questa operazione:

- Accesso ai dati tramite qualsiasi linguaggio, ad esempio C++, Basic e Visual Basic Scripting Edition. Consente a diversi programmatori dell'organizzazione di accedere agli stessi dati nello stesso modo, indipendentemente dal linguaggio usato.

- Aprire i dati in altre origini dati, ad esempio SQL Server, Excel e Access. Questa operazione può essere utile se si desidera trasferire dati tra formati diversi.

- Partecipazione a operazioni eterogenee per l'origine dati. Questo può essere un modo efficace per il data warehousing. Utilizzando i provider di OLE DB, è possibile mantenere i dati nel formato nativo ed essere comunque in grado di accedervi in un'operazione semplice.

- Aggiunta di funzionalità aggiuntive ai dati, ad esempio l'elaborazione delle query.

- Migliorare le prestazioni di accesso ai dati controllando la modalità di manipolazione.

- Maggiore affidabilità. Se si dispone di un formato di dati proprietario a cui un solo programmatore può accedere, si è a rischio. Utilizzando i provider di OLE DB, è possibile aprire il formato proprietario per tutti i programmatori.

## <a name="read-only-and-updatable-providers"></a>Provider Read-Only e aggiornabili

I provider possono variare notevolmente in merito a complessità e funzionalità. È utile categorizzare i provider in provider di sola lettura e provider aggiornabili:

- Visual C++ 6,0 supporta solo provider di sola lettura. [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md) viene illustrato come creare un provider di sola lettura.
- Visual C++ supporta i provider aggiornabili, che possono aggiornare (scrivere) nell'archivio dati. Per informazioni sui provider aggiornabili, vedere [creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md). L'esempio [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) è un esempio di provider aggiornabile.

Per altre informazioni, vedere:

- [Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)

- [Creazione di un provider di OLE DB](../../data/oledb/creating-an-ole-db-provider.md)

- [Programmazione OLE DB](../../data/oledb/ole-db-programming.md)

## <a name="see-also"></a>Vedi anche

[Accesso ai dati](../data-access-in-cpp.md)<br/>
[Documentazione di OLE DB SDK](/previous-versions/windows/desktop/ms722784(v=vs.85))<br/>
[guida di riferimento per programmatori OLE DB](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming)<br/>
