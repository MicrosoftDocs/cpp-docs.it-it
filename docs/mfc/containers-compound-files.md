---
title: 'Contenitori: File composti'
ms.date: 11/04/2016
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
ms.openlocfilehash: cc34f5ed32ee48d538b67cab080b0a52b2e00ae8
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508885"
---
# <a name="containers-compound-files"></a>Contenitori: File composti

In questo articolo vengono illustrati i componenti e l'implementazione dei file composti e i vantaggi e gli svantaggi dell'utilizzo di file compositi nelle applicazioni OLE.

I file composti sono parte integrante di OLE. Vengono usati per semplificare il trasferimento dei dati e l'archiviazione di documenti OLE. I file composti sono un'implementazione del modello di archiviazione strutturata attiva. Sono presenti interfacce coerenti che supportano la serializzazione in un archivio, in un flusso o in un oggetto file. I file composti sono supportati nell'libreria Microsoft Foundation Class dalle classi `COleStreamFile` e. `COleDocument`

> [!NOTE]
>  L'uso di un file composto non implica che le informazioni provengano da un documento OLE o da un documento composto. I file composti sono solo uno dei modi per archiviare documenti composti, documenti OLE e altri dati.

##  <a name="_core_components_of_a_compound_file"></a>Componenti di un file composto

L'implementazione OLE dei file composti usa tre tipi di oggetto: oggetti flusso, oggetti di archiviazione `ILockBytes` e oggetti. Questi oggetti sono simili ai componenti di un file system standard nei modi seguenti:

- Gli oggetti di flusso, ad esempio i file, archiviano dati di qualsiasi tipo.

- Gli oggetti di archiviazione come le directory possono contenere altri oggetti di archiviazione e di flusso.

- `LockBytes`gli oggetti rappresentano l'interfaccia tra gli oggetti di archiviazione e l'hardware fisico. Determinano il modo in cui i byte effettivi vengono scritti in `LockBytes` qualsiasi dispositivo di archiviazione a cui accede l'oggetto, ad esempio un disco rigido o un'area della memoria globale. Per ulteriori informazioni sugli `LockBytes` oggetti e sull' `ILockBytes` interfaccia, vedere la Guida *di riferimento per programmatori OLE*.

##  <a name="_core_advantages_and_disadvantages_of_compound_files"></a>Vantaggi e svantaggi dei file composti

I file composti offrono vantaggi non disponibili con i metodi di archiviazione file precedenti. e comprendono:

- Accesso ai file incrementale.

- Modalità di accesso ai file.

- Standardizzazione della struttura di file.

I potenziali svantaggi dei file composti, ovvero problemi di grandi dimensioni e di prestazioni relativi all'archiviazione nei dischi floppy, devono essere considerati quando si decide se utilizzarli nell'applicazione.

###  <a name="_core_incremental_access_to_files"></a>Accesso incrementale ai file

L'accesso incrementale ai file è un vantaggio automatico dell'uso di file composti. Poiché un file composto può essere visualizzato come "file system all'interno di un file", è possibile accedere ai singoli tipi di oggetto, ad esempio flusso o archiviazione, senza dover caricare l'intero file. Questo può ridurre notevolmente il tempo necessario a un'applicazione per accedere ai nuovi oggetti per la modifica da parte dell'utente. L'aggiornamento incrementale, basato sullo stesso concetto, offre vantaggi simili. Anziché salvare l'intero file solo per salvare le modifiche apportate a un oggetto, OLE Salva solo il flusso o l'oggetto di archiviazione modificato dall'utente.

###  <a name="_core_file_access_modes"></a>Modalità di accesso ai file

La possibilità di determinare quando le modifiche apportate agli oggetti in un file composto viene sottoposta a commit su disco è un altro vantaggio dell'uso di file composti. La modalità di accesso ai file, transazionale o diretta, determina quando viene eseguito il commit delle modifiche.

- La modalità transazionale usa un'operazione di commit in due fasi per apportare modifiche agli oggetti in un file composto, mantenendo al tempo stesso le copie precedenti e nuove del documento disponibili fino a quando l'utente non sceglie di salvare o annullare le modifiche.

- La modalità diretta incorpora modifiche al documento Man mano che vengono apportate, senza la possibilità di annullarle successivamente.

Per ulteriori informazioni sulle modalità di accesso, vedere la Guida *di riferimento per programmatori OLE*.

###  <a name="_core_standardization"></a>Standardizzazione

La struttura standardizzata dei file composti consente a diverse applicazioni OLE di esplorare i file composti creati dall'applicazione OLE senza conoscere l'applicazione che ha effettivamente creato il file.

###  <a name="_core_size_and_performance_considerations"></a>Considerazioni sulle dimensioni e sulle prestazioni

A causa della complessità della struttura di archiviazione dei file composti e della possibilità di salvare i dati in modo incrementale, i file che usano questo formato tendono a essere più grandi di altri file che usano l'archiviazione non strutturata o "file flat". Se l'applicazione carica e salva spesso i file, l'uso di file composti può causare un aumento più rapido delle dimensioni del file rispetto ai file non composti. Poiché i file composti possono essere di grandi dimensioni, il tempo di accesso per i file archiviati e caricati da dischi floppy può anche essere influenzato, causando un accesso più lento ai file.

Un altro problema che influisca sulle prestazioni è la frammentazione del file composto. La dimensione di un file composto è determinata dalla differenza tra il primo e l'ultimo settore del disco utilizzato dal file. Un file frammentato può contenere molte aree di spazio libero che non contengono dati, ma vengono conteggiate durante il calcolo delle dimensioni. Durante il ciclo di vita di un file composto, queste aree vengono create tramite l'inserimento o l'eliminazione di oggetti di archiviazione.

##  <a name="_core_using_compound_files_format_for_your_data"></a>Uso del formato dei file composti per i dati

Dopo aver creato un'applicazione con una classe documento derivata da `COleDocument`, verificare che il costruttore principale del documento chiami. `EnableCompoundFile` Quando la creazione guidata applicazione crea applicazioni contenitore OLE, questa chiamata viene inserita automaticamente.

Nella Guida *di riferimento per programmatori OLE*, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream), [IStorage](/windows/win32/api/objidl/nn-objidl-istorage)e [ILockBytes](/windows/win32/api/objidl/nn-objidl-ilockbytes).

## <a name="see-also"></a>Vedere anche

[Contenitori](../mfc/containers.md)<br/>
[Contenitori: problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md)<br/>
[Classe COleStreamFile](../mfc/reference/colestreamfile-class.md)<br/>
[Classe COleDocument](../mfc/reference/coledocument-class.md)
