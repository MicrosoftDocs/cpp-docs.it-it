---
title: "Origini dati e sessioni | Microsoft Docs"
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
  - "connessioni [C++], origine dati"
  - "origini dati [C++], OLE DB"
  - "modelli consumer OLE DB [C++], origini dati"
ms.assetid: 6ee52216-e082-4869-a1d6-ce561cfb76e5
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Origini dati e sessioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nella figura riportata di seguito sono illustrate le classi che supportano la connessione e l'accesso a un'origine dati.  Ogni classe si basa su un'implementazione del componente OLE DB standard.  
  
 ![Classi delle origini dati e delle sessioni](../../data/oledb/media/vcdatasourcesessionclasses.png "vcDataSourceSessionClasses")  
Classi delle origini dati e delle sessioni  
  
 Di seguito sono descritte le classi disponibili.  
  
-   [CDataSource](../../data/oledb/cdatasource-class.md) Genera un'istanza dell'oggetto origine dati, che a sua volta crea e gestisce una connessione a un'origine dati tramite un provider OLE DB.  L'origine dati utilizza informazioni quali l'indirizzo dell'origine dati e le informazioni di autenticazione sotto forma di stringa di connessione.  
  
     Si noti inoltre che la classe di supporto [CEnumerator](../../data/oledb/cenumerator-class.md) viene spesso utilizzata prima di stabilire la connessione per ottenere un elenco dei provider disponibili registrati in un sistema.  In questo modo risulta possibile selezionare un provider come origine dati.  Nella finestra di dialogo delle proprietà Data Link, ad esempio, viene utilizzata questa classe per popolare l'elenco dei provider presente nella scheda **Provider**.  Essa equivale alla funzione **SQLBrowseConnect** o **SQLDriverConnect**.  
  
-   [CSession](../../data/oledb/csession-class.md) Genera un'istanza dell'oggetto sessione, che rappresenta una sessione di accesso singola all'origine dati.  È comunque possibile creare più sessioni di accesso a un'origine dati.  Per ogni sessione è possibile creare rowset, comandi e altri oggetti per accedere ai dati dell'origine dati.  La sessione gestisce le transazioni.  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)