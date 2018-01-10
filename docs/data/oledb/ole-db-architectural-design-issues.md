---
title: Problemi di progettazione dell'architettura OLE DB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: OLE DB, application design considerations
ms.assetid: 8caa7d99-d2bb-42c9-8884-74f228bb6ecc
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b894ec1cbd227663d46e98e523ffe8c1c5d84475
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="ole-db-architectural-design-issues"></a>Problemi di progettazione dell'architettura OLE DB
Considerare quanto segue prima di avviare un'applicazione OLE DB:  
  
 **Implementazione di programmazione quali verranno usati per scrivere un'applicazione OLE DB?**  
 Microsoft offre varie librerie a tale scopo: una libreria di modelli OLE DB, OLE DB attributi e le interfacce OLE DB non elaborate in OLE DB SDK. Inoltre, sono disponibili procedure guidate che consentono scrivere un programma. Queste implementazioni sono descritte [modelli OLE DB, attributi e altre implementazioni](../../data/oledb/ole-db-templates-attributes-and-other-implementations.md).  
  
 **È necessario scrivere un provider personalizzato?**  
 La maggior parte degli sviluppatori non è necessario scrivere i propri provider. Microsoft offre diversi provider. Quando si crea una connessione dati (ad esempio, quando si aggiunge un utente al progetto mediante la creazione guidata Consumer OLE DB ATL), il **proprietà di Data Link** la finestra di dialogo sono elencati tutti i provider disponibili registrati nel sistema. Se uno di questi provider è appropriato per la propria applicazione di accesso dati e l'archivio dati, la cosa più semplice da fare è usare uno di questi. Tuttavia, se l'archivio dati non corrispondono a una di queste categorie, è necessario creare un provider personalizzato. Per informazioni sulla creazione di provider, vedere [modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).  
  
 **Il livello di supporto necessari per il consumer**  
 Alcuni utenti possono essere molto complessi. mentre altri possono essere molto complessi. La funzionalità degli oggetti OLE DB è specificata dalla proprietà. Quando si utilizza la creazione guidata Consumer OLE DB ATL per creare un utente o la creazione guidata Provider di Database per creare un provider, imposta le proprietà dell'oggetto appropriato per poter fornire un set standard di funzionalità. Tuttavia, se le classi consumer o provider generato dalla procedura guidata non supportano tutto ciò che occorre eseguire, è necessario utilizzare le interfacce per tali classi nel [libreria di modelli OLE DB](../../data/oledb/ole-db-templates.md). Queste interfacce eseguono il wrapping le interfacce OLE DB non elaborate, forniscono ulteriori implementazioni per semplificarne l'utilizzo.  
  
 Ad esempio, se si desidera aggiornare i dati in un set di righe, ma dimenticato di specificare per la creazione del consumer con la procedura guidata, è possibile specificare la funzionalità al termine dell'attività impostando la **DBPROP_IRowsetChange** e  **DBPROP_UPDATABILITY** le proprietà dell'oggetto comando. Quindi, quando viene creato il set di righe, ha il `IRowsetChange` interfaccia.  
  
 **Si dispone di codice precedente con un'altra tecnologia di accesso ai dati (ADO, ODBC o DAO)?**  
 Date le possibili combinazioni delle tecnologie (ad esempio l'utilizzo di componenti ADO con componenti OLE DB e la migrazione di codice ODBC e OLE DB), tutte le situazioni di copertura non rientra nell'ambito della documentazione di Visual C++. Tuttavia, molti articoli sui diversi scenari sono disponibili i seguenti siti Web Microsoft:  
  
-   [Guida e supporto tecnico Microsoft](http://go.microsoft.com/fwlink/p/?linkid=148218)  
  
-   [Microsoft Data Access articoli tecnici Overview](http://go.microsoft.com/fwlink/p/?linkid=148217)  
  
-   [Centro soluzioni di Visual Studio](http://go.microsoft.com/fwlink/p/?linkid=148215)  
  
-   [Cerca in Microsoft.com](http://search.microsoft.com/)  
  
 Quando si esegue una ricerca, immettere una combinazione di parole chiave che meglio si adatta lo scenario desiderato. ad esempio: se si utilizzano gli oggetti ADO con un provider OLE DB, eseguire una ricerca booleana con **ADO e "OLE DB"**. Se si desidera eseguire la migrazione del codice precedente DAO a ODBC, selezionare "tutte le parole" e specificare le stringhe, ad esempio **DAO migrazione**.  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)