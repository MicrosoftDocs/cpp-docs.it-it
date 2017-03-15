---
title: "Contenitori: file composti | Microsoft Docs"
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
  - "modalità di accesso per file [C++]"
  - "documenti compositi"
  - "file compositi"
  - "contenitori [C++], file compositi"
  - "documenti [C++], composito"
  - "documenti [C++], OLE"
  - "file [C++], composito"
  - "contenitori OLE, file compositi"
  - "OLE (documenti), file compositi"
  - "prestazioni [C++], file compositi"
  - "file compositi di struttura file standardizzata"
ms.assetid: 8b83cb3e-76c8-4bbe-ba16-737092b36f49
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Contenitori: file composti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene componenti e l'implementazione dei file composte e i vantaggi e gli svantaggi di utilizzare i file compositi nelle applicazioni OLE.  
  
 I file composte sono parte integrante di OLE.  Vengono utilizzati per facilitare il trasferimento dei dati e la creazione di archivi di documenti OLE.  I file composita è un'implementazione del modello di un'archiviazione strutturata attivo.  Le interfacce coerenti esistono la serializzazione di supporto a un'archiviazione, in un flusso, o a un oggetto file.  I file composte sono supportati nella libreria MFC dalle classi `COleStreamFile` e `COleDocument`.  
  
> [!NOTE]
>  Utilizzo di un file composto non implica che le informazioni provengano da un documento OLE o da un documento composto.  I file composte sono solo uno dei modi l'archiviazione dei documenti composti, documenti OLE e altri dati.  
  
##  <a name="_core_components_of_a_compound_file"></a> Componenti di un file composto  
 L'implementazione OLE dei file composte utilizza tre tipi di oggetto: oggetti flusso, oggetti di archiviazione e oggetti di `ILockBytes`.  Questi oggetti sono simili ai componenti di un file system standard nei modi seguenti:  
  
-   Gli oggetti flusso, quali file, dati di qualsiasi tipo.  
  
-   Gli oggetti di archiviazione, quali le directory, possono contenere altri archiviazione e oggetti flusso.  
  
-   Gli oggetti di**LockBytes** rappresentano l'interfaccia tra gli oggetti di archiviazione e l'hardware fisico.  Determinano quali i byte vengono scritti qualsiasi dispositivo di archiviazione l'oggetto di **LockBytes** accede, ad esempio un disco rigido o un'area della memoria globale.  Per ulteriori informazioni sugli oggetti di **LockBytes** e sull'interfaccia di `ILockBytes`, fare *riferimento ai programmatori OLE*.  
  
##  <a name="_core_advantages_and_disadvantages_of_compound_files"></a> Vantaggi e svantaggi dei file compositi  
 I file composte offrono i vantaggi non disponibili con i metodi precedenti di archiviazione dei file.  tra cui:  
  
-   Accedere a incrementale del file.  
  
-   Modalità di accesso ai file.  
  
-   Normalizzazione della struttura di file.  
  
 Svantaggi dei potenziali file compositi \- grandi e problemi di prestazioni correlati a archiviazione su dischetti \- quando si decide se utilizzarli nell'applicazione.  
  
###  <a name="_core_incremental_access_to_files"></a> Accesso ai file incrementale  
 L'accesso ai file incrementale è un vantaggio automatico di utilizzo dei file compositi.  Poiché un file composito può essere visualizzato come "file system in un file," singoli tipi di oggetto, ad esempio il flusso o archiviazione, è possibile accedervi senza che sia necessario caricare l'intero file.  Ciò può ridurre notevolmente il tempo che un'applicazione deve accedere ai nuovi oggetti per modificare dall'utente.  L'aggiornamento incrementale, in base allo stesso concetto, offre i vantaggi simili.  Anziché salvare l'intero file appena per salvare le modifiche apportate a un oggetto, OLE salva solo il flusso o l'oggetto di archiviazione modificato dall'utente.  
  
###  <a name="_core_file_access_modes"></a> Modalità di accesso ai file  
 In grado di determinare quando le modifiche agli oggetti in un file composto vengono associate al disco è un altro vantaggio dell'utilizzo dei file compositi.  La modalità in cui i file vengono aperti, processo o l'intestazione preferences, determina quando le modifiche sono completate.  
  
-   La modalità transazionale utilizza un'operazione in due fasi di commit per apportare modifiche agli oggetti in un file composto, quindi vengono entrambe le copie meno che le funzionalità nuove del documento disponibili finché l'utente non utilizzare per salvare o annullare le modifiche.  
  
-   La modalità diretta include le modifiche apportate al documento mentre vengono effettuate, senza la possibilità successivamente di annullarle.  
  
 Per ulteriori informazioni sulle modalità di accesso, fare *riferimento ai programmatori OLE*.  
  
###  <a name="_core_standardization"></a> Normalizzazione  
 La struttura standard dei file compositi consente alle applicazioni OLE diversi spostarsi tra i file compositi creati dall'applicazione OLE senza conoscenza dell'applicazione che effettivamente ha creato il file.  
  
###  <a name="_core_size_and_performance_considerations"></a> Dimensione e considerazioni sulle prestazioni  
 A causa della complessità della struttura di archiviazione composta del file e la possibilità di salvare i dati in modo incrementale, i file utilizzando il formato tendono a essere maggiori di altri file mediante l'archiviazione di file" non strutturata o "piano.  Se l'applicazione carica frequentemente e salvare i file, utilizzando i file compositi può determinare le dimensioni del file di aumentare notevolmente più rapidamente i file di noncompound.  Poiché i file compositi possono ottenere grandi dimensioni, il tempo di accesso per i file è stato memorizzato su e caricare dai dischi floppy può verificarsi problemi, conferendo un accesso più lento nei file.  
  
 Un altro problema che influisce sulle prestazioni è frammentazione di composto\- file.  La dimensione di un file composto è determinata dalla differenza tra la prima e gli ultimi aree del disco utilizzato dal file.  Un file frammentato può contenere molte aree di spazio disponibile che non contengono dati, ma viene conteggiato quando si calcola le dimensioni.  Durante un file composito, queste aree vengono create dall'inserimento o eliminazione degli oggetti di archiviazione.  
  
##  <a name="_core_using_compound_files_format_for_your_data"></a> Utilizzando il formato di file composto per i dati  
 Dopo aver creare un'applicazione con una classe di documento è derivato da `COleDocument`, assicurarsi che il costruttore del documento principale chiama `EnableCompoundFile`.  Quando la creazione guidata applicazione crea applicazioni del contenitore OLE, questa chiamata viene inserita automaticamente.  
  
 *Nel riferimento del programmatore OLE*, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034), [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) e [ILockBytes](http://msdn.microsoft.com/library/windows/desktop/aa379238).  
  
## Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Contenitori: problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md)   
 [COleStreamFile Class](../mfc/reference/colestreamfile-class.md)   
 [COleDocument Class](../mfc/reference/coledocument-class.md)