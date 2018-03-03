---
title: 'Contenitori: File compositi | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- compound files [MFC]
- compound documents
- containers [MFC], compound files
- OLE documents [MFC], compound files
- performance [MFC], compound files
- files [MFC], compound
- standardized file structure compound files
- documents [MFC], compound
- documents [MFC], OLE
- OLE containers [MFC], compound files
- access modes for files [MFC]
ms.assetid: 8b83cb3e-76c8-4bbe-ba16-737092b36f49
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 261fcca76b4a5c9a6cb329081028672b2f241576
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="containers-compound-files"></a>Contenitori: file composti
In questo articolo vengono illustrati i componenti e l'implementazione di file compositi e i vantaggi e gli svantaggi dell'utilizzo di tali file nelle applicazioni OLE.  
  
 File compositi sono parte integrante di OLE. Vengono utilizzati per facilitare il trasferimento dei dati e archiviazione dei documenti OLE. File compositi sono un'implementazione del modello attivo di archiviazione strutturata. Interfacce coerente esistono che supportano la serializzazione di una risorsa di archiviazione, un flusso o un oggetto file. File compositi sono supportati nella libreria di classi Microsoft Foundation dalle classi `COleStreamFile` e `COleDocument`.  
  
> [!NOTE]
>  Utilizzando un file composto non implica che le informazioni provengano da un documento OLE o un documento composito. File compositi sono solo uno dei modi per archiviare i documenti composti OLE (documenti) e altri dati.  
  
##  <a name="_core_components_of_a_compound_file"></a>Componenti di un File composto  
 L'implementazione di OLE di file compositi utilizza tre tipi di oggetti: gli oggetti di flusso, oggetti di archiviazione, e `ILockBytes` oggetti. Questi oggetti sono simili ai componenti di un file system standard nei modi seguenti:  
  
-   Gli oggetti di flusso, ad esempio file, archiviano qualsiasi tipo di dati.  
  
-   Gli oggetti di archiviazione, come le directory, possono contenere altri oggetti di flusso e di archiviazione.  
  
-   **LockBytes** oggetti rappresentano l'interfaccia tra gli oggetti di archiviazione e l'hardware fisico. Determinano la modalità di scrittura dei byte effettivi per qualsiasi dispositivo di archiviazione di **LockBytes** accede a oggetti, ad esempio un disco rigido o un'area della memoria globale. Per ulteriori informazioni su **LockBytes** oggetti e `ILockBytes` interfaccia, vedere il *riferimento per programmatori OLE*.  
  
##  <a name="_core_advantages_and_disadvantages_of_compound_files"></a>Vantaggi e svantaggi dei file compositi  
 File compositi offrono vantaggi non disponibili con i metodi precedenti archiviazione dei file. e che comprendono:  
  
-   L'accesso a file incrementale.  
  
-   Modalità di accesso del file.  
  
-   Normalizzazione della struttura di file.  
  
 I potenziali svantaggi dei file compositi, dimensioni e prestazioni problemi relativi all'archiviazione su dischi floppy, devono essere considerata prima di decidere se si desidera utilizzarli nell'applicazione.  
  
###  <a name="_core_incremental_access_to_files"></a>Accesso incrementale ai file  
 Accesso incrementale ai file è un vantaggio dell'utilizzo di file compositi automatico. Perché un file composto può essere visualizzato come "file system in un file", singoli tipi di oggetto, ad esempio flusso o di archiviazione, è possibile accedere senza la necessità di caricare l'intero file. Questo può ridurre drasticamente l'ora di che un'applicazione deve accedere ai nuovi oggetti per la modifica dall'utente. L'aggiornamento incrementale, basata sul concetto stesso, offre vantaggi simili. Anziché salvare l'intero file solo per salvare le modifiche apportate a un oggetto, OLE Salva solo l'oggetto flusso o archiviazione modificato dall'utente.  
  
###  <a name="_core_file_access_modes"></a>Modalità di accesso ai file  
 La possibilità di determinare quando le modifiche agli oggetti in un file composto vengono salvate su disco è un altro vantaggio dell'utilizzo di tali file. La modalità in cui si accede a file, transazionale o diretto, determina quando vengono salvate le modifiche.  
  
-   Modalità transazione utilizza un'operazione di commit in due fasi per apportare modifiche agli oggetti in un file composto, conservando la precedente e la nuova copia del documento disponibile fino a quando l'utente sceglie di salvare o annullare le modifiche.  
  
-   Sono state apportate, senza la possibilità di annullarle in seguito, la modalità diretta include le modifiche apportate al documento.  
  
 Per ulteriori informazioni sulle modalità di accesso, vedere il *riferimento per programmatori OLE*.  
  
###  <a name="_core_standardization"></a>Standardizzazione  
 La struttura dei file compositi standardizzata consente diverse applicazioni OLE esplorare i file compositi creati da un'applicazione OLE senza alcuna conoscenza dell'applicazione che ha effettivamente creato il file.  
  
###  <a name="_core_size_and_performance_considerations"></a>Dimensioni e le considerazioni sulle prestazioni  
 A causa della complessità della struttura di archiviazione di file composto e la possibilità di salvare i dati in modo incrementale, i file usando questo formato tendono a essere più grande rispetto agli altri file utilizzando non strutturati o archiviazione "flat file". Se l'applicazione è spesso carica e Salva i file, l'utilizzo di file compositi può provocare molto più rapidamente rispetto ai file non compositi aumentare le dimensioni del file. Poiché i file compositi possono diventare grandi dimensioni, il tempo di accesso ai file archiviati e caricati da dischi floppy può essere influenzato anche, determinando un accesso più lento ai file.  
  
 Un altro problema che influisce sulle prestazioni è frammentazione file composito. La dimensione di un file composto è determinata dalla differenza tra i primo e l'ultimo dischi con settori utilizzata dal file. Un file frammentato può contenere più aree di spazio che non contengono dati, ma vengono conteggiate durante il calcolo delle dimensioni. Durante la durata di un file composito in queste aree vengono create per l'inserimento o eliminazione di oggetti di archiviazione.  
  
##  <a name="_core_using_compound_files_format_for_your_data"></a>Utilizzando il formato di file compositi per i dati  
 Dopo aver creato un'applicazione che dispone di una classe documento derivata da `COleDocument`, assicurarsi che il costruttore del documento principale chiama `EnableCompoundFile`. Quando la creazione guidata applicazioni crea applicazioni contenitore OLE, questa chiamata viene inserita automaticamente.  
  
 Nel *riferimento per programmatori OLE*, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034), [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015), e [ILockBytes](http://msdn.microsoft.com/library/windows/desktop/aa379238).  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Contenitori: Problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md)   
 [Classe COleStreamFile](../mfc/reference/colestreamfile-class.md)   
 [Classe COleDocument](../mfc/reference/coledocument-class.md)
