---
title: 'Contenitori: file composti'
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
ms.openlocfilehash: 98166a355fd267ecbec0a7f0cc1d18fd0b2e7cd0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81353593"
---
# <a name="containers-compound-files"></a>Contenitori: file composti

In questo articolo vengono illustrati i componenti e l'implementazione di file composti e i vantaggi e gli svantaggi dell'utilizzo di file composti nelle applicazioni OLE.

I file composti sono parte integrante di OLE. Vengono utilizzati per facilitare il trasferimento dei dati e l'archiviazione di documenti OLE. I file composti sono un'implementazione del modello di archiviazione strutturata Active.Compound files are an implementation of the Active structured storage model. Esistono interfacce coerenti che supportano la serializzazione in un archivio, un flusso o un oggetto file. I file composti sono supportati nella libreria `COleStreamFile` `COleDocument`Microsoft Foundation Class dalle classi e .

> [!NOTE]
> L'utilizzo di un file composto non implica che le informazioni provengano da un documento OLE o da un documento composto. I file composti sono solo uno dei modi per archiviare documenti composti, documenti OLE e altri dati.

## <a name="components-of-a-compound-file"></a><a name="_core_components_of_a_compound_file"></a>Componenti di un file composto

L'implementazione OLE dei file composti utilizza tre tipi `ILockBytes` di oggetto: oggetti flusso, oggetti di archiviazione e oggetti. Questi oggetti sono simili ai componenti di un file system standard nei modi seguenti:

- Gli oggetti di flusso, come i file, archiviano i dati di qualsiasi tipo.

- Gli oggetti di archiviazione, come le directory, possono contenere altri oggetti di archiviazione e flusso.

- `LockBytes`rappresentano l'interfaccia tra gli oggetti di archiviazione e l'hardware fisico. Determinano il modo in cui i `LockBytes` byte effettivi vengono scritti in qualsiasi dispositivo di archiviazione a cui l'oggetto sta accedendo, ad esempio un disco rigido o un'area di memoria globale. Per ulteriori `LockBytes` informazioni sugli `ILockBytes` oggetti e sull'interfaccia , vedere *OLE Programmer's Reference*.

## <a name="advantages-and-disadvantages-of-compound-files"></a><a name="_core_advantages_and_disadvantages_of_compound_files"></a>Vantaggi e svantaggi dei file composti

I file composti offrono vantaggi non disponibili con i metodi precedenti di archiviazione dei file.Compound files provide benefits not available with earlier methods of file storage. Tali impostazioni includono:

- Accesso incrementale ai file.

- Modalità di accesso ai file.

- Standardizzazione della struttura dei file.

I potenziali svantaggi dei file composti, ovvero problemi di prestazioni e dimensioni di grandi dimensioni relativi all'archiviazione su dischi floppy, devono essere considerati quando si decide se utilizzarli nell'applicazione.

### <a name="incremental-access-to-files"></a><a name="_core_incremental_access_to_files"></a>Accesso incrementale ai file

L'accesso incrementale ai file è un vantaggio automatico dell'utilizzo di file composti. Poiché un file composto può essere visualizzato come un "file system all'interno di un file", è possibile accedere a singoli tipi di oggetto, ad esempio flusso o archiviazione, senza la necessità di caricare l'intero file. Ciò può ridurre drasticamente il tempo necessario a un'applicazione per accedere a nuovi oggetti per la modifica da parte dell'utente. L'aggiornamento incrementale, basato sullo stesso concetto, offre vantaggi simili. Anziché salvare l'intero file solo per salvare le modifiche apportate a un oggetto, OLE salva solo il flusso o l'oggetto di archiviazione modificato dall'utente.

### <a name="file-access-modes"></a><a name="_core_file_access_modes"></a>Modalità di accesso ai file

La possibilità di determinare quando viene eseguito il commit su disco delle modifiche apportate agli oggetti in un file composto è un altro vantaggio dell'utilizzo di file composti. La modalità di accesso ai file, transazionale o diretta, determina quando viene eseguito il commit delle modifiche.

- La modalità transazionale utilizza un'operazione di commit in due fasi per apportare modifiche agli oggetti in un file composto, mantenendo così disponibili sia le copie precedenti che le nuove copie del documento fino a quando l'utente non sceglie di salvare o annullare le modifiche.

- La modalità Diretta incorpora le modifiche al documento man mano che vengono apportate, senza la possibilità di annullarle in un secondo momento.

Per ulteriori informazioni sulle modalità di accesso, vedere *OLE Programmer's Reference*.

### <a name="standardization"></a><a name="_core_standardization"></a>Standardizzazione

La struttura standardizzata dei file composti consente a diverse applicazioni OLE di sfogliare i file composti creati dall'applicazione OLE senza alcuna conoscenza dell'applicazione che ha effettivamente creato il file.

### <a name="size-and-performance-considerations"></a><a name="_core_size_and_performance_considerations"></a>Considerazioni su dimensioni e prestazioni

A causa della complessità della struttura di archiviazione dei file compositi e della possibilità di salvare i dati in modo incrementale, i file che utilizzano questo formato tendono ad essere più grandi di altri file utilizzando l'archiviazione non strutturata o "file flat". Se l'applicazione carica e salva spesso i file, l'utilizzo di file composti può causare un aumento delle dimensioni del file molto più rapidamente rispetto ai file non composti. Poiché i file composti possono diventare grandi, il tempo di accesso per i file archiviati e caricati da dischi floppy può anche essere influenzato, con conseguente accesso più lento ai file.

Un altro problema che influisce sulle prestazioni è la frammentazione dei file composti. La dimensione di un file composto è determinata dalla differenza tra il primo e l'ultimo settore del disco utilizzato dal file. Un file frammentato può contenere molte aree di spazio libero che non contengono dati, ma vengono conteggiate durante il calcolo delle dimensioni. Durante la durata di un file composto, queste aree vengono create mediante l'inserimento o l'eliminazione di oggetti di archiviazione.

## <a name="using-compound-files-format-for-your-data"></a><a name="_core_using_compound_files_format_for_your_data"></a>Utilizzo del formato dei file composti per i datiUsing Compound Files Format for Your Data

Dopo aver creato correttamente un'applicazione `COleDocument`con una classe documento `EnableCompoundFile`derivata da , assicurarsi che il costruttore principale del documento chiami . Quando la creazione guidata applicazione crea applicazioni contenitore OLE, questa chiamata viene inserita automaticamente.

In *OLE Programmer's Reference*, vedere [IStream](/windows/win32/api/objidl/nn-objidl-istream), [IStorage](/windows/win32/api/objidl/nn-objidl-istorage)e [ILockBytes](/windows/win32/api/objidl/nn-objidl-ilockbytes).

## <a name="see-also"></a>Vedere anche

[Contenitori](../mfc/containers.md)<br/>
[Contenitori: problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md)<br/>
[Classe COleStreamFile](../mfc/reference/colestreamfile-class.md)<br/>
[Classe COleDocument](../mfc/reference/coledocument-class.md)
