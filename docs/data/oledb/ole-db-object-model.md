---
title: Modello a oggetti OLE DB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: ba9fd9b7ba5503f6ed5e1837147524f5abc7c31b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33111081"
---
# <a name="ole-db-object-model"></a>Modello a oggetti OLE DB
Il modello a oggetti OLE DB comprende gli oggetti o i componenti seguenti. I primi quattro oggetti o componenti elencati (origini dati, le sessioni, comandi e i set di righe) consentono di connettersi a un'origine dati e visualizzarli. Il resto, a partire da funzioni di accesso, riguardano l'utilizzo con i dati quando viene visualizzato.  
  
## <a name="data-sources"></a>Origini dati  
 Gli oggetti origine dati consentono di connettersi a un'origine dati, ad esempio un file o il sistema DBMS. Un oggetto origine dati crea e gestisce la connessione e contiene le autorizzazioni e informazioni di autenticazione (ad esempio il nome di account di accesso e password). Un oggetto origine dati è possibile creare una o più sessioni.  
  
## <a name="sessions"></a>Sessions  
 Una sessione gestisce un determinato tipo di interazione con l'origine dati per eseguire query e recuperare i dati. Ogni sessione è una singola transazione. Una transazione è un'unità di lavoro indivisibile definita dalla proprietà ACID. Per una definizione di ACID, vedere [transazioni](#vcconoledbcomponents_transactions).  
  
 Le sessioni eseguono attività importanti come l'apertura di set di righe e restituisce l'oggetto origine dati che li ha creati. Le sessioni possono inoltre restituire metadati o informazioni relative all'origine dati (ad esempio informazioni della tabella).  
  
 Una sessione è possibile creare uno o più comandi.  
  
## <a name="commands"></a>Comandi:  
 I comandi di eseguono un comando di testo, ad esempio un'istruzione SQL. Se il comando di testo specifica un set di righe, ad esempio un database SQL **selezionare** istruzione, il comando crea il set di righe.  
  
 Un comando è semplicemente un contenitore per un comando di testo, che è una stringa (ad esempio un'istruzione SQL) passata da un consumer a un oggetto origine dati per l'esecuzione dall'archivio dati sottostante del provider. In genere, il comando di testo è un database SQL **selezionare** istruzione (in questo caso, perché SQL **selezionare** specifica un set di righe, il comando crea automaticamente un set di righe).  
  
## <a name="rowsets"></a>Set di righe  
 Set di righe espongono i dati in formato tabulare. Un indice è un caso speciale di un set di righe. È possibile creare set di righe dalla sessione o il comando.  
  
### <a name="schema-rowsets"></a>Rowset dello schema  
 Gli schemi contengono metadati (informazioni strutturali) su un database. Set di righe dello schema sono set di righe che contengono informazioni sullo schema. Alcuni provider OLE DB per DBMS supportano gli oggetti set di righe dello schema. Per ulteriori informazioni sui set di righe dello schema, vedere [recupero di metadati con i rowset dello Schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) e [classi Rowset dello Schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).  
  
### <a name="view-objects"></a>Oggetti visualizzazione  
 Un oggetto visualizzazione definisce un subset di righe e colonne di set di righe. Non contiene dati propri. Gli oggetti di visualizzazione non è possibile combinare dati da più set di righe.  
  
## <a name="accessors"></a>Funzioni di accesso  
 Solo OLE DB viene utilizzato il concetto di funzioni di accesso. Una funzione di accesso descrive l'archiviazione dei dati in un consumer. Contiene un set di associazioni (chiamata di una mappa delle colonne) tra i campi di set di righe (colonne) e i membri di dati dichiarato del consumer.  
  
##  <a name="vcconoledbcomponents_transactions"></a> Transazioni  
 Oggetti transazione vengono utilizzati durante il commit o annullare le transazioni annidate in diverso da quello più basso. Una transazione è un'unità di lavoro indivisibile definita dalla proprietà ACID. È l'acronimo ACID:  
  
-   Atomicità: non può essere suddivisa in unità di lavoro più piccole.  
  
-   Concorrenza: più di una transazione può verificarsi in un momento.  
  
-   Isolamento: una transazione in modo limitato delle informazioni sulle modifiche apportate da un altro.  
  
-   Durata: la transazione apporta modifiche persistenti.  
  
## <a name="enumerators"></a>Enumeratori  
 Gli enumeratori cercare origini dati disponibili e di altri enumeratori. I consumer che non sono personalizzati per una determinata origine dati utilizzano enumeratori per cercare un'origine dati da utilizzare.  
  
 Un enumeratore di radice, distribuito in Microsoft Data Access SDK consente di attraversare il Registro di sistema per le origini dati e altri enumeratori. Altri enumeratori attraversano il Registro di sistema o di una ricerca in modo specifico del provider.  
  
## <a name="errors"></a>Errori  
 Qualsiasi interfaccia a un oggetto OLE DB può generare errori. Errori di contengono informazioni aggiuntive sull'errore, tra cui un oggetto error personalizzato facoltativo. Queste informazioni sono contenute in un valore HRESULT.  
  
## <a name="notifications"></a>Notifiche  
 Le notifiche vengono usate da gruppi di loro condividendo un set di righe (in cui la condivisione indica che i consumer si presuppone che per operare all'interno della stessa transazione). Le notifiche permettono loro condividendo un set di righe per le azioni nel set di righe eseguite dal peer.  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)