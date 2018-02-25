---
title: Modelli Provider OLE DB (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers [C++], about providers
- databases [C++], OLE DB templates
- OLE DB provider templates [C++], about OLE DB provider templates
- templates [C++], OLE DB
ms.assetid: fccff85f-2af8-4500-82bd-6312d28a74b8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 255a61d7cff661406da327de79c6a726ffb60bab
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ole-db-provider-templates-c"></a>Modelli provider OLE DB (C++)
OLE DB è una parte importante della strategia di accesso universale ai dati di Microsoft. La progettazione di OLE DB consente l'accesso ai dati ad alte prestazioni da qualsiasi origine dati. Dati tabulari possono essere visualizzati tramite OLE DB, indipendentemente dal fatto se proviene da un database. La flessibilità offre una notevole quantità di energia.  
  
 Come spiegato in [consumer OLE DB e provider](../../data/oledb/ole-db-consumers-and-providers.md), OLE DB viene utilizzato il concetto di consumer e provider. Il consumer effettua richieste per i dati. il provider restituisce i dati in un formato tabulare al consumer. Da una prospettiva di programmazione, l'implicazione di questo modello è che il provider deve implementare tutte le chiamate che dal consumer.  
  
## <a name="what-is-a-provider"></a>Che cos'è un Provider?  
 Un provider OLE DB è un set di oggetti COM che servono l'interfaccia chiamate da un oggetto consumer, il trasferimento dei dati in un formato tabulare da un'origine durevole (un archivio dati denominata) al consumer.  
  
 Provider possono essere semplici o complesse. Il provider può supportare una quantità minima di funzionalità o un provider di qualità della produzione autentico implementare più interfacce. Un provider può restituire una tabella, consentono al client determinare il formato della tabella ed eseguire operazioni su tali dati.  
  
 Ciascun provider implementa un set standard di oggetti COM per gestire le richieste dal client, con un significato standard che qualsiasi consumer OLE DB possono accedere ai dati da qualsiasi provider, indipendentemente dal linguaggio (ad esempio C++ e base).  
  
 Ogni oggetto COM contiene diverse interfacce, alcuni dei quali sono necessari e alcuni dei quali sono facoltativi. Implementando le interfacce obbligatorie, un provider garantisce un livello minimo di funzionalità, detto conformità, che tutti i client devono essere in grado di utilizzare. Un provider può implementare interfacce facoltative per fornire funzionalità aggiuntive. [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md) descrive queste interfacce in modo dettagliato. Il client deve chiamare sempre il metodo `QueryInterface` per determinare se un provider supporta una determinata interfaccia.  
  
## <a name="ole-db-specification-level-support"></a>Supporto a livello specifica OLE DB  
 I modelli di provider OLE DB supportano la specifica di OLE DB versione 2.7. Utilizzare i modelli di provider OLE DB, è possibile implementare un provider compatibile a livello 0. Nell'esempio di Provider, ad esempio, utilizza i modelli per implementare un comando non-MS-DOS di server che esegue il comando DIR DOS per eseguire una query nel file system. L'esempio di Provider restituisce le informazioni di directory in un set di righe, ovvero il meccanismo standard di OLE DB per la restituzione di dati tabulari.  
  
 Il tipo più semplice di provider supportati per i modelli OLE DB è un provider di sola lettura senza comandi. Provider con comandi sono anche supportate, così come le funzionalità di aggiunta di segnalibri e di lettura/scrittura. È possibile implementare un provider di lettura/scrittura scrivendo codice aggiuntivo. Le transazioni e set di righe dinamici non sono supportate dalla versione corrente, ma è possibile aggiungere se si desidera.  
  
## <a name="when-do-you-need-to-create-an-ole-db-provider"></a>Quando è necessario creare un Provider OLE DB  
 Non è sempre necessaria creare un provider personalizzato; Microsoft offre diversi provider standard, predisporre nel **proprietà di Data Link** nella finestra di dialogo di Visual C++. Il motivo principale per creare un provider OLE DB è in grado di sfruttare la strategia di accesso universale ai dati. Alcuni dei vantaggi di procedere sono:  
  
-   L'accesso ai dati mediante qualsiasi linguaggio, ad esempio C++, Basic e Visual Basic Scripting Edition. Consente ai programmatori differenti all'interno dell'organizzazione di accedere agli stessi dati nello stesso modo, indipendentemente dal fatto che del linguaggio che usano.  
  
-   Esposizione dei dati ai dati di altri origini, ad esempio SQL Server, Excel e Access. Questo può essere molto utile se si desidera trasferire i dati tra formati diversi.  
  
-   Alle operazioni tra dati di origine (eterogenee). Può trattarsi di un metodo efficace del data warehouse. Tramite i provider OLE DB, è possibile mantenere i dati nel relativo formato nativo e ancora essere in grado di accedervi in un'operazione semplice.  
  
-   Aggiunta di funzionalità aggiuntive ai dati, ad esempio l'elaborazione di query.  
  
-   Miglioramento delle prestazioni di accesso ai dati controllando la modifica.  
  
-   Maggiore affidabilità. Se si dispone di un formato dati proprietari che solo un programmatore può accedere, si è a rischio. Utilizzando provider OLE DB, è possibile aprire tale formato proprietario per tutti i programmatori.  
  
## <a name="read-only-and-updatable-providers"></a>Provider aggiornabili e di sola lettura  
 Provider possono variare notevolmente la complessità e la funzionalità. È utile classificare i provider in sola lettura di provider e provider aggiornabili:  
  
-   Visual C++ 6.0 supportati solo i provider di sola lettura. [Creazione di un Provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md) viene illustrato come creare un provider di sola lettura.  
  
-   Visual C++ supporta provider aggiornabili, ovvero è possibile aggiornare (scrivere) nell'archivio dati. Per informazioni sui provider aggiornabili, vedere [la creazione di un Provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md); [UpdatePV](http://msdn.microsoft.com/en-us/c8bed873-223c-4a7d-af55-f90138c6f38f) esempio è un esempio di un provider aggiornabile.  
  
 Per altre informazioni, vedere:  
  
-   [L'architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)  
  
-   [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)  
  
-   [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso ai dati](../data-access-in-cpp.md)   
 [Documentazione di OLE DB SDK](https://msdn.microsoft.com/en-us/library/ms722784.aspx)   
 [Riferimento per programmatori OLE DB](https://msdn.microsoft.com/en-us/library/ms713643.aspx)