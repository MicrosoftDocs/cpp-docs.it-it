---
title: "Modello a oggetti OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB, modello a oggetti"
  - "rowset, modello a oggetto OLE DB"
ms.assetid: 1a274a25-c310-4430-a1ec-bd2bd8120eff
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modello a oggetti OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il modello a oggetti OLE DB comprende gli oggetti o componenti descritti di seguito.  I primi quattro oggetti o componenti elencati, ovvero le origini dati, le sessioni, i comandi e i rowset, consentono di stabilire una connessione a un'origine dati e di visualizzarla.  Gli altri componenti, a partire dalle funzioni di accesso, riguardano l'utilizzo dei dati dopo la visualizzazione.  
  
## Origini dati  
 Gli oggetti origine dati consentono di stabilire una connessione a un'origine dati quale un file o un DBMS.  Un oggetto origine dati crea e gestisce la connessione e include autorizzazioni e informazioni di autenticazione, quali il nome e la password di accesso.  Un oggetto origine dati può creare una o più sessioni.  
  
## Sessioni  
 Una sessione gestisce un determinato tipo di interazione con l'origine dati per eseguire query e recuperare dati.  Ogni sessione corrisponde a un'unica transazione.  Una transazione è un'unità di lavoro indivisibile che dispone delle proprietà ACID.  Per una definizione di ACID, vedere [Transazioni](#vcconoledbcomponents_transactions).  
  
 Le sessioni eseguono attività importanti quali l'apertura di rowset e la restituzione dell'oggetto origine dati che le ha create.  Le sessioni possono inoltre restituire metadati o informazioni sull'origine dati stessa, quali le informazioni di tabella.  
  
 Una sessione può creare uno o più comandi.  
  
## Comandi  
 I comandi consentono di eseguire un comando di tipo testo come un'istruzione SQL.  Se il comando di tipo testo specifica un rowset, ad esempio un'istruzione **SELECT** SQL, il comando crea il rowset.  
  
 Un comando è semplicemente un contenitore per un comando di tipo testo, ovvero una stringa, ad esempio un'istruzione SQL, passata da un consumer a un oggetto origine dati per essere eseguita dal provider sottostante l'archivio dati.  In genere, il comando di tipo testo è un'istruzione **SELECT** SQL. In tal caso, poiché l'istruzione **SELECT** SQL specifica un rowset, il comando crea automaticamente un rowset.  
  
## Rowset  
 I rowset espongono i dati in formato tabulare.  Un indice è un caso particolare di rowset.  È possibile creare rowset da una sessione o da un comando.  
  
### Rowset dello schema  
 Gli schemi contengono metadati, ovvero informazioni sulla struttura di un database.  I rowset dello schema sono rowset che contengono informazioni sullo schema.  Alcuni provider OLE DB per DBMS supportano gli oggetti rowset dello schema.  Per ulteriori informazioni sul set di righe dello schema, vedere[Recupero di metadati con i rowset dello schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) e [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).  
  
### Oggetti visualizzazione  
 Un oggetto visualizzazione definisce un sottoinsieme delle righe e delle colonne di un rowset.  Non contiene dati specifici.  Gli oggetti visualizzazione non possono combinare dati provenienti da diversi rowset.  
  
## Funzioni di accesso  
 Solo in OLE DB viene utilizzato il concetto di funzione di accesso.  Una funzione di accesso descrive il modo in cui i dati vengono memorizzati in un consumer.  Contiene un insieme di associazioni, denominato mappa delle colonne, tra i campi del rowset \(colonne\) e i membri dati dichiarati nel consumer.  
  
##  <a name="vcconoledbcomponents_transactions"></a> Transazioni  
 Gli oggetti transazione vengono utilizzati per confermare o annullare transazioni annidate a un livello diverso da quello più basso.  Una transazione è un'unità di lavoro indivisibile che dispone delle proprietà ACID.  ACID ha il seguente significato.  
  
-   Atomicità: una transazione non può essere suddivisa in unità di lavoro più piccole.  
  
-   Concorrenza: è possibile eseguire più transazioni contemporaneamente.  
  
-   Isolamento: ogni transazione ha una conoscenza limitata delle modifiche apportate dalle altre transazioni.  
  
-   Durata: la transazione apporta modifiche persistenti.  
  
## Enumeratori  
 Gli enumeratori eseguono una ricerca delle origini dati disponibili e di altri enumeratori.  I consumer non personalizzati per una determinata origine dati utilizzano gli enumeratori per cercare un'origine dati da utilizzare.  
  
 Un enumeratore radice, distribuito nell'SDK di Microsoft Data Access, analizza il Registro di sistema in cerca di origini dati e di altri enumeratori.  Gli altri enumeratori analizzano il Registro di sistema o eseguono ricerche secondo una modalità specifica del provider.  
  
## Errori  
 Qualsiasi interfaccia o oggetto OLE DB può generare errori.  Gli errori contengono ulteriori informazioni sul problema verificatosi, compreso un oggetto errore personalizzato e facoltativo.  Queste informazioni sono contenute in un HRESULT.  
  
## Notifiche  
 Le notifiche vengono utilizzate da gruppi di consumer che interagiscono tra loro condividendo un rowset; in questo contesto, il termine condivisione indica che i consumer funzionano all'interno della stessa transazione.  Le notifiche permettono di comunicare a tali consumer le azioni eseguite sul rowset condiviso da parte dei loro pari.  
  
## Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Cenni preliminari sulla programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)