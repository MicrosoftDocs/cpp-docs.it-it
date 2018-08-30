---
title: 'Contenitori: File compositi | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 33a50c36bf41b8685c711cf6fb2e3797787a5b3c
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43206951"
---
# <a name="containers-compound-files"></a>Contenitori: file composti
Questo articolo illustra i componenti e l'implementazione di file compositi e i vantaggi e svantaggi dell'utilizzo di file composti nelle applicazioni OLE.  
  
 File compositi sono parte integrante di OLE. Vengono utilizzati per facilitare il trasferimento dei dati e archiviazione di documenti OLE. File compositi sono un'implementazione del modello di archiviazione strutturata attivo. Interfacce coerenti esistono che supportano la serializzazione per una risorsa di archiviazione, un flusso o un oggetto file. File compositi sono supportati nella libreria di classi Microsoft Foundation dalle classi `COleStreamFile` e `COleDocument`.  
  
> [!NOTE]
>  Usando un file composto non implica che le informazioni provengano da un documento composito o un documento OLE. File compositi sono solo uno dei modi per archiviare i documenti composti, i documenti OLE e altri dati.  
  
##  <a name="_core_components_of_a_compound_file"></a> Componenti di un File composto  
 Per l'implementazione dei file compositi OLE Usa tre tipi di oggetti: gli oggetti di flusso, oggetti di archiviazione, e `ILockBytes` oggetti. Questi oggetti sono simili ai componenti di un file system standard nei modi seguenti:  
  
-   Gli oggetti di Stream, ad esempio file, archiviano i dati di qualsiasi tipo.  
  
-   Oggetti di archiviazione, ad esempio directory, possono contenere altri oggetti di flusso e di archiviazione.  
  
-   `LockBytes` gli oggetti rappresentano l'interfaccia tra gli oggetti di archiviazione e l'hardware fisico. Determinano la modalità in cui vengono scritti i byte effettivi in qualsiasi dispositivo di archiviazione di `LockBytes` accede a oggetti, ad esempio un disco rigido o di un'area di memoria globale. Per altre informazioni sulle `LockBytes` gli oggetti e i `ILockBytes` l'interfaccia, vedere il *riferimento per programmatori OLE*.  
  
##  <a name="_core_advantages_and_disadvantages_of_compound_files"></a> Vantaggi e svantaggi dei file compositi  
 File compositi offrono vantaggi non disponibili con i metodi precedenti dell'archiviazione file. e che comprendono:  
  
-   L'accesso ai file incrementale.  
  
-   Modalità di accesso del file.  
  
-   Standardizzazione della struttura di file.  
  
 I potenziali svantaggi dei file compositi, ovvero grandi problemi di dimensioni e prestazioni relativi all'archiviazione su dischi floppy, ovvero devono essere considerate prima di decidere se si desidera usarle nell'applicazione.  
  
###  <a name="_core_incremental_access_to_files"></a> Incrementale accesso ai file  
 Incrementale accesso ai file è un beneficio richiesto in automatico dell'uso di file compositi. Perché un file composto può essere considerato come un "file system all'interno di un file", singoli tipi di oggetto, ad esempio flusso o l'archiviazione, è possibile accedere senza la necessità di caricare l'intero file. Si riduce sensibilmente l'ora di che un'applicazione deve accedere ai nuovi oggetti per la modifica dall'utente. L'aggiornamento incrementale, in base lo stesso concetto, offre vantaggi simili. Anziché salvare il file per salvare le modifiche apportate a un oggetto intero, OLE Salva solo l'oggetto flusso o di archiviazione modificata dall'utente.  
  
###  <a name="_core_file_access_modes"></a> Modalità di accesso ai file  
 La possibilità di determinare quando le modifiche agli oggetti in un file composto sono eseguito il commit su disco è un altro vantaggio dell'utilizzo di tali file. La modalità in cui si accede ai file, sottoposta a transazione o diretto, determina quando vengono eseguito il commit delle modifiche.  
  
-   Modalità di transazione Usa un'operazione di commit in due fasi per apportare modifiche agli oggetti in un file composto, mantenendo la precedente e le nuove copie del documento disponibile fino a quando l'utente sceglie di salvare o annullare le modifiche.  
  
-   La modalità diretta incorpora le modifiche apportate al documento non appena vengono eseguite, senza la possibilità di annullarle in un secondo momento.  
  
 Per altre informazioni sulle modalità di accesso, vedere la *riferimento per programmatori OLE*.  
  
###  <a name="_core_standardization"></a> Standardizzazione  
 La struttura dei file compositi standard consente a diverse applicazioni OLE esplorare i file compositi creati da un'applicazione OLE senza alcuna conoscenza dell'applicazione che effettivamente creato il file.  
  
###  <a name="_core_size_and_performance_considerations"></a> Le dimensioni e le considerazioni sulle prestazioni  
 A causa della complessità di struttura di archiviazione file composto e la possibilità di salvare i dati in modo incrementale, i file usando questo formato tendono a essere più grandi rispetto agli altri file con dati non strutturati o "file flat" archiviazione. Se l'applicazione carica frequentemente e Salva i file, usando i file compositi può causare la dimensione del file aumentare molto più rapidamente rispetto a quelli non compositi. Poiché i file compositi possono ottenere grandi dimensioni, il tempo di accesso per i file archiviati in e caricati da dischi floppy possono anche dipendere, causando un accesso più lento ai file.  
  
 Un altro problema che influisce sulle prestazioni è frammentazione file composito. Le dimensioni di un file composto sono determinata dalla differenza tra i settori del disco e il cognome utilizzata dal file. Un file frammentato può contenere molte aree di spazio che non contengono dati, ma vengono conteggiate durante il calcolo della dimensione. Nel corso della durata di un file composto, queste aree vengono create per l'inserimento o eliminazione di oggetti di archiviazione.  
  
##  <a name="_core_using_compound_files_format_for_your_data"></a> Utilizzando il formato di file compositi per i tuoi dati  
 Dopo aver completato la creazione di un'applicazione che dispone di una classe documento derivata da `COleDocument`, assicurarsi che il costruttore principale del documento chiama `EnableCompoundFile`. Quando la creazione guidata applicazione consente di creare applicazioni contenitore OLE, questa chiamata viene inserita automaticamente.  
  
 Nel *riferimento per programmatori OLE*, vedere [IStream](/windows/desktop/api/objidl/nn-objidl-istream), [IStorage](/windows/desktop/api/objidl/nn-objidl-istorage), e [ILockBytes](/windows/desktop/api/objidl/nn-objidl-ilockbytes).  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Contenitori: Problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md)   
 [Classe COleStreamFile](../mfc/reference/colestreamfile-class.md)   
 [Classe COleDocument](../mfc/reference/coledocument-class.md)
