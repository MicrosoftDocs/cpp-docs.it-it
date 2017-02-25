---
title: "Limiti dell&#39;associazione dati | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "associazione dati [C++], limiti di Visual C++"
ms.assetid: 376d7738-5252-4caa-adda-a5486ab2a2a2
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Limiti dell&#39;associazione dati
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'associazione dati è una tecnica estremamente efficace per creare applicazioni dati in modo rapido.  Tuttavia l'architettura corrente dei controlli per l'associazione dati è strutturata a due livelli.  
  
## Scalabilità  
 I controlli ADO associati a dati possono accedere ai dati solo dal controllo dati ADO,  mentre i controlli RDO associati a dati possono accedere ai dati solo dal controllo RemoteData RDO.  Per i controlli RemoteData RDO non c'è modo di ovviare a questo inconveniente. È possibile solo utilizzare un'architettura a due livelli che comporta la ricezione diretta di tutte le richieste di recupero dati da parte del server database.  Per evitare la connessione diretta al server database, è possibile scrivere un provider che consenta l'accesso a oggetti dati e a oggetti business di livello intermedio.  Il controllo dati ADO eseguirà la connessione a questi oggetti anziché al server database.  Questi oggetti di livello intermedio possono essere memorizzati nella cache e gestiti in un server di transazioni quali i servizi COM\+ 1.0.  
  
## Controllo delle versioni e distribuzione  
 Quando vengono rilasciate nuove versioni dei controlli, è necessario verificarne il funzionamento nell'applicazione.  Se sul computer di un utente è installata un'applicazione che presenta versioni diverse dei controlli, sarà necessario verificare il corretto funzionamento dell'applicazione.  Infine, quando vengono rilasciate nuove versioni dei controlli, sarà necessario distribuire i nuovi controlli agli utenti dell'applicazione.  
  
 **Driver e provider**  
  
 L'associazione dati rispecchia la qualità del driver ODBC o del provider OLE DB utilizzato.  Dal momento che l'esposizione dei dati ai controlli dati dipende dai driver e dai provider utilizzati, è importante accertare che questi ultimi supportino le funzionalità necessarie.  Dopo aver selezionato un driver o un provider, è inoltre necessario verificare che sul computer dell'utente sia installato non solo tale driver o provider,  ma anche eventuale middleware da esso richiesto.  Per la connettività Oracle ODBC, ad esempio, è necessario che sul computer dell'utente sia installato non solo un driver ODBC Oracle, ma anche il middleware SQL\*Net di Oracle.  Per la connettività con i server Oracle 7.3, è consigliato il driver Microsoft ODBC per Oracle.  
  
 **Programmabilità**  
  
 Poiché i controlli ActiveX sono stati sviluppati per essere utilizzati così come sono, la programmabilità è limitata all'accesso dello sviluppatore alle interfacce del controllo.  Nel modello di associazione dati dell'editor di risorse, questo viene implementato attraverso le [classi wrapper](../../data/ado-rdo/wrapper-classes.md) generate dalla procedura guidata per l'inserimento di un controllo ActiveX.  Se durante la procedura guidata non vengono individuate coclassi, non verrà generata alcuna classe wrapper, né sarà possibile l'accesso a livello di codice.  
  
 Nonostante questi limiti, l'associazione dati consente di creare rapidamente prototipi di applicazioni dati tramite Visual C\+\+.  Se la velocità di sviluppo è ritenuta un fattore importante, l'associazione dati potrà essere quindi utile per la progettazione dell'applicazione.  
  
## Vedere anche  
 [Associazione dati con controlli ActiveX in Visual C\+\+](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md)