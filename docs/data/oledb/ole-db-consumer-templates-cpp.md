---
title: Modelli Consumer OLE DB (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- databases [C++], OLE DB templates
- OLE DB consumers [C++], data access
- OLE DB consumer templates [C++]
- databases [C++], consumers
ms.assetid: d3e42612-0bc0-4d65-9c32-0e8a7b219e82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b22f97401900a24ae864174872027b18509dfe0c
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49082423"
---
# <a name="ole-db-consumer-templates-c"></a>Modelli consumer OLE DB (C++)

I modelli consumer OLE DB supportano la specifica di OLE DB versione 2.6. Si noti tuttavia che, pur essendo stati testati con OLE DB 2.6, non supportano tutte le interfacce disponibili nella specifica. I modelli consumer consentono di ridurre notevolmente la quantità di codice da scrivere per implementare un consumer OLE DB. I vantaggi connessi al loro uso sono i seguenti:  
  
- Facilità di accesso alle funzionalità di OLE DB e semplicità di integrazione con ATL e MFC.  
  
- Modello di associazione dei parametri e delle colonne di database di facile uso.  
  
- Tipi di dati C/C++ nativi per la programmazione con OLE DB.  
  
Per usare i modelli OLE DB è necessario avere una certa familiarità con i modelli C++, COM e le interfacce OLE DB. Se non si conosce sufficientemente OLE DB, vedere la [guida di riferimento per programmatori OLE DB](/previous-versions/windows/desktop/ms718124).  
  
I modelli OLE DB supportano il modello a oggetti OLE DB esistente anziché aggiungere un nuovo modello a oggetti. Le classi di primo livello dei modelli consumer OLE DB corrispondono ai componenti definiti nella specifica OLE DB. La struttura dei modelli consumer OLE DB comprende funzionalità avanzate, quali l'uso di più funzioni di accesso su un rowset. L'uso dei modelli e dell'ereditarietà multipla rende la libreria di piccole dimensioni e flessibile.  
  
## <a name="how-ole-db-consumers-access-data"></a>Accesso ai dati con i consumer OLE DB  

I consumer usano diversi tipi di oggetto, descritti negli argomenti elencati di seguito:  
  
- [Origini dati e sessioni](../../data/oledb/data-sources-and-sessions.md)  
  
- [Funzioni di accesso e rowset](../../data/oledb/accessors-and-rowsets.md)  
  
- [Comandi e tabelle](../../data/oledb/commands-and-tables.md)  
  
- [Record utente](../../data/oledb/user-records.md)  
  
Prima di eseguire qualsiasi operazione con il consumer, è necessario selezionare un provider OLE DB adatto al tipo di database a cui si vuole accedere, ad esempio SQL, Oracle, ODBC e MSDS. Per operare questa selezione si usa in genere un enumeratore (vedere [CEnumerator](../../data/oledb/cenumerator-class.md) menzionato in [Origini dati e sessioni](../../data/oledb/data-sources-and-sessions.md)).  
  
L' [oggetto origine dati](../../data/oledb/data-sources-and-sessions.md) fornisce le informazioni di connessione necessarie per connettere l'origine dati selezionata. Tale oggetto contiene anche le informazioni di autenticazione, quali i nomi e le password di accesso, usate per concedere agli utenti le autorizzazioni per accedere all'origine dati. L'oggetto origine dati stabilisce una connessione al database e quindi crea uno o più oggetti sessione. Ogni [oggetto sessione](../../data/oledb/data-sources-and-sessions.md) gestisce le proprie interazioni con il database, ovvero le query e le operazioni di recupero dei dati, ed esegue queste transazioni in modo indipendente rispetto alle altre sessioni esistenti.  
  
La sessione crea gli oggetti rowset e comando. L' [oggetto comando](../../data/oledb/commands-and-tables.md) consente agli utenti di interagire con il database, ad esempio usando comandi SQL. L' [oggetto rowset](../../data/oledb/accessors-and-rowsets.md) è un set di dati all'interno del quale è possibile spostarsi e [aggiornare, eliminare e inserire righe](../../data/oledb/updating-rowsets.md).  
  
Un consumer OLE DB associa le colonne delle tabelle del database con le variabili locali. Per eseguire questa operazione usa una [funzione di accesso](../../data/oledb/accessors-and-rowsets.md)che contiene una mappa in cui è descritto il sistema di memorizzazione dei dati all'interno del consumer. Tale mappa è costituita da un set di associazioni tra le colonne delle tabelle e i buffer (variabili) locali nell'applicazione consumer.  
  
Un punto importante da tenere presente quando si usano i consumer è che in ognuno di essi è necessario dichiarare due classi: la [classe di comando (o di tabella)](../../data/oledb/commands-and-tables.md) e la [classe di record utente](../../data/oledb/user-records.md). Si accede al rowset attraverso la classe di comando o di tabella, che eredita sia da una classe di funzione di accesso che da una classe di rowset. La classe di record utente contiene la mappa delle associazioni di rowset sopra descritta.  
  
Per altre informazioni, vedere i seguenti argomenti:  
  
- [Creazione di un consumer OLE DB](../../data/oledb/creating-an-ole-db-consumer.md)  
  
- [Scenari di consumer OLE DB comuni (esempi)](../../data/oledb/working-with-ole-db-consumer-templates.md)  
  
## <a name="see-also"></a>Vedere anche  

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Accesso ai dati](../data-access-in-cpp.md)<br/>
[Documentazione di OLE DB SDK](/previous-versions/windows/desktop/ms722784)   
[guida di riferimento per programmatori OLE DB](/previous-versions/windows/desktop/ms713643)