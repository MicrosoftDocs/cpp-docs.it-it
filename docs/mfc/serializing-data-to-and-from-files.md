---
title: "Serializzazione dei dati da e verso i file | Microsoft Docs"
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
  - "dati [MFC]"
  - "dati [MFC], serializzazione"
  - "deserializzazione [C++]"
  - "dati di documento [C++]"
  - "documenti [C++], salvataggio"
  - "documenti [C++], serializzazione"
  - "salvataggio di documenti"
  - "serializzazione [C++], ruolo di dati"
  - "serializzazione [C++], ruolo di documento"
ms.assetid: b42a0c68-4bc4-4012-9938-5433a26d2c24
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Serializzazione dei dati da e verso i file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'idea di base di persistenza è un oggetto che deve poter scrivere lo stato corrente, indicato dai valori delle variabili membro, in un archivio permanente.  In seguito, l'oggetto potrà essere ricreato lettura, o "deserializzazione," lo stato dall'archivio permanente.  Un punto chiave è rappresentata dall'oggetto è responsabile della lettura e la scrittura dello stato.  Pertanto, affinché la classe sia permanente, deve implementare le operazioni di base di serializzazione.  
  
 Il framework fornisce un'implementazione predefinita per i documenti salvataggio dei file su disco in risposta a salva e salva con nome ai comandi del menu File e per il caricamento di documenti dai file su disco in risposta al comando apri.  Con minimo lavoro, è possibile implementare capacità di un documento di scrivere e leggere i dati da un file.  L'elemento principale da effettuare consiste nell'eseguire l'override della funzione membro di [Serializzare](../Topic/CObject::Serialize.md) nella classe del documento.  
  
 La Creazione guidata applicazione MFC consente l'override scheletriche la funzione membro `Serialize` di **CDocument** nella classe del documento creato automaticamente.  Dopo avere implementato le variabili membro dell'applicazione, è possibile compilare i file di override di `Serialize` con il codice che invia dati "a un oggetto dell'archivio" connesso a un file.  Un oggetto di [CArchive](../mfc/reference/carchive-class.md) è simile agli oggetti di input\/output di `cout` e di `cin` dalla libreria iostream di C\+\+.  Tuttavia, `CArchive` legge e scrive il formato binario, non testo formattato.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Serializzazione](../mfc/serialization-in-mfc.md)  
  
-   [Il ruolo del documento tramite la serializzazione](#_core_the_document.92.s_role_in_serialization)  
  
-   [Il ruolo dei dati nella serializzazione](#_core_the_data.92.s_role_in_serialization)  
  
-   [Ignorare il meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)  
  
##  <a name="_core_the_document.92.s_role_in_serialization"></a> Il ruolo del documento tramite la serializzazione  
 Il framework risponde automaticamente il menu File aperto, su salva e salva con nome ai controlli chiamando la funzione membro di `Serialize` di documento se viene implementato.  Un comando di `ID_FILE_OPEN`, ad esempio, chiama una funzione di gestione nell'oggetto applicazione.  Durante questo processo, vedere l'utente e risponde alla finestra di dialogo apri file e il framework ottiene il nome del file scelto dall'utente.  Il framework crea un'impostazione dell'oggetto di `CArchive` per il caricamento di dati nel documento e passare all'archivio `Serialize`.  Il framework ha già aperto il file.  Il codice nella funzione membro di `Serialize` del documento legge i dati nell'archivio, ricostruente gli oggetti dati in base alle necessità.  Per ulteriori informazioni sulla serializzazione, vedere l'articolo [Serializzazione](../mfc/serialization-in-mfc.md).  
  
##  <a name="_core_the_data.92.s_role_in_serialization"></a> Il ruolo dei dati nella serializzazione  
 In genere i dati di tipo classe devono essere serializzarsi.  Ossia quando si passa un oggetto in un archivio, l'oggetto deve sapere come scriversi all'archivio e leggersi dall'archivio.  MFC fornisce supporto per rendere le classi serializzabili in questo modo.  Se si progetta una classe per definire un tipo di dati e si desidera serializzare i dati di quel tipo, progetti per la serializzazione.  
  
## Vedere anche  
 [Utilizzo di documenti](../mfc/using-documents.md)