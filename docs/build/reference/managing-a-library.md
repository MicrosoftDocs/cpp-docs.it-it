---
title: Gestione di una libreria | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLibrarianTool.OVERWRITEAllDefaultLibraries
- VC.Project.VCLibrarianTool.AdditionalDependencies
- VC.Project.VCLibrarianTool.RemoveObjects
- VC.Project.VCLibrarianTool.LibraryPaths
- VC.Project.VCLibrarianTool.OutputFile
- VC.Project.VCLibrarianTool.OVERWRITEDefaultLibraryNames
- VC.Project.VCLibrarianTool.AdditionalLibraryDirectories
- VC.Project.VCLibrarianTool.ListContentsFile
- VC.Project.VCLibrarianTool.ListContents
- VC.Project.VCLibrarianTool.SubSystemVersion
- VC.Project.VCLibrarianTool.OVERWRITEDefaultLibraryName
- VC.Project.VCLibrarianTool.SubSystem
dev_langs:
- C++
helpviewer_keywords:
- /LIBPATH library manager option
- OUT library manager option
- CONVERT library manager option
- LIBPATH library manager option
- /LIST library manager option
- object files, building and modifying
- -LINK50COMPAT library manager option
- REMOVE library manager option
- SUBSYSTEM library manager option
- /LINK50COMPAT library manager option
- /OUT library manager option
- LIB [C++], managing COFF libraries
- -CONVERT library manager option
- LINK50COMPAT library manager option
- -OUT library manager option
- -REMOVE library manager option
- -LIST library manager option
- /SUBSYSTEM library manager option
- -SUBSYSTEM library manager option
- /REMOVE library manager option
- -LIBPATH library manager option
- object files
- LIST library manager option
- /CONVERT library manager option
ms.assetid: f56a8b85-fbdc-4c09-8d8e-00f0ffe1da53
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dd6fff812d200e16b82994f9f9bbe598aface547
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713154"
---
# <a name="managing-a-library"></a>Gestione di una libreria

La modalità predefinita per LIB è per compilare o modificare una raccolta di oggetti COFF. LIB viene eseguito in questa modalità quando non si specifica /EXTRACT (per copiare un oggetto in un file) o /DEF (per compilare una libreria di importazione).

Per compilare una libreria da oggetti e/o le librerie, usare la sintassi seguente:

```
LIB [options...] files...
```

Questo comando crea una libreria da una o più input *file*. Il *file* possono essere file oggetto COFF, file oggetto OMF a 32 bit o delle librerie COFF esistente. LIB crea una raccolta che contiene tutti gli oggetti nei file specificati. Se un file di input è un file oggetto OMF a 32 bit, lo converte in formato COFF prima di compilare la libreria. LIB non può accettare un oggetto OMF a 32 bit che si trova in una libreria creata con la versione a 16 bit. Utilizzare innanzitutto LIB 16 bit per estrarre l'oggetto. è quindi possibile usare il file oggetto estratti come input a LIB 32 bit.

Per impostazione predefinita, LIB il nome del file di output usando il nome base del primo file oggetto o una raccolta e l'estensione. lib. Il file di output viene inserito nella directory corrente. Se esiste già un file con lo stesso nome, il file di output sostituisce il file esistente. Per mantenere una libreria esistente, usare l'opzione /OUT per specificare un nome per il file di output.

Le opzioni seguenti si applicano alla creazione e modifica di una libreria:

**/LIBPATH:** *dir*<br/>
Esegue l'override del percorso delle librerie dell'ambiente. Per informazioni dettagliate, vedere la descrizione del collegamento [/LIBPATH](../../build/reference/libpath-additional-libpath.md) opzione.

**/ LIST**<br/>
Visualizza le informazioni sulla libreria di output nell'output standard. L'output può essere reindirizzato a un file. È possibile utilizzare /LIST per determinare il contenuto di una libreria esistente senza modificarla.

**/ NOME:** *nomefile*<br/>
Quando si compila una libreria di importazione, specifica il nome della DLL per il quale viene compilata la libreria di importazione.

**/NODEFAULTLIB**<br/>
Rimuove uno o più librerie predefinite dall'elenco delle librerie di che viene eseguita la ricerca durante la risoluzione di riferimenti esterni. Visualizzare [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per altre informazioni.

**/ Ingresso uscita:** *nomefile*<br/>
Sostituisce il nome di file di output predefinito. Per impostazione predefinita, la libreria di output viene creata nella directory corrente, con il nome base del primo file di libreria o un oggetto nella riga di comando e l'estensione. lib.

**/ Rimuovi:** *oggetto*<br/>
Omette l'oggetto specificato *oggetto* dalla libreria di output. LIB crea una libreria di output combinando tutti gli oggetti (in librerie o file oggetto), quindi eliminando tutti gli oggetti specificati con /Remove.

**/SUBSYSTEM:**{**CONSOLE** &AMP;#124; **EFI_APPLICATION** &AMP;#124; **EFI_BOOT_SERVICE_DRIVER** &AMP;#124; **EFI_ROM** &AMP;#124; **EFI_RUNTIME_DRIVER** &AMP;#124; **NATIVO** &AMP;#124; **POSIX** &AMP;#124; **WINDOWS** &AMP;#124; **WINDOWSCE**} [, & [. # #]]<br/>
Indica al sistema operativo come eseguire un programma creato mediante il collegamento alla libreria di output. Per altre informazioni, vedere la descrizione del collegamento [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) opzione.

Opzioni di LIB specificate nella riga di comando non sono tra maiuscole e minuscole.

È possibile utilizzare LIB per eseguire le attività di gestione delle librerie seguenti:

- Per aggiungere gli oggetti in una raccolta, specificare il nome del file per la libreria esistente e i nomi di file per i nuovi oggetti.

- Per combinare le librerie, specificare i nomi dei file di libreria. È possibile aggiungere oggetti e combinare le raccolte con un singolo comando LIB.

- Per sostituire un membro della raccolta con un nuovo oggetto, specificare il nome file per il nuovo oggetto (o la raccolta che lo contiene) e la raccolta che contiene l'oggetto membro da sostituire. Quando un oggetto che ha lo stesso nome esiste in più di un file di input, LIB inserisce l'ultimo oggetto specificato nel comando LIB nella libreria di output. Quando si sostituisce un membro di libreria, assicurarsi di specificare il nuovo oggetto o una raccolta dopo la raccolta che contiene l'oggetto precedente.

- Per eliminare un membro da una raccolta, usare l'opzione /REMOVE. LIB elabora qualsiasi specifica di /REMOVE dopo la combinazione di tutti gli oggetti di input, indipendentemente dall'ordine della riga di comando.

> [!NOTE]
>  È Impossibile eliminare un membro sia estrarre i file in un file nello stesso passaggio. È innanzitutto necessario estrarre l'oggetto membro utilizzando /EXTRACT, quindi eseguire LIB usando /REMOVE. Questo comportamento è diverso da quello di libreria a 16 bit (per OMF (librerie)) fornito in altri prodotti Microsoft.

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](../../build/reference/lib-reference.md)