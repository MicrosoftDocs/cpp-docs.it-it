---
title: Gestione di una libreria
ms.date: 11/04/2016
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
ms.openlocfilehash: de55059834a0887d487b7be38377af9984512b75
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336398"
---
# <a name="managing-a-library"></a>Gestione di una libreria

La modalità predefinita per LIB consiste nel compilare o modificare una libreria di oggetti COFF. LIB viene eseguito in questa modalità quando non si specifica /EXTRACT (per copiare un oggetto in un file) o /DEF (per compilare una libreria di importazione).

Per compilare una libreria da oggetti e/o librerie, utilizzare la sintassi seguente:

```
LIB [options...] files...
```

Questo comando crea una libreria da uno o più *file*di input. I *file* possono essere file oggetto COFF, file oggetto OMF a 32 bit o librerie COFF esistenti. LIB crea una libreria che contiene tutti gli oggetti nei file specificati. Se un file di input è un file oggetto OMF a 32 bit, LIB lo converte in COFF prima di compilare la libreria. LIB non può accettare un oggetto OMF a 32 bit che si trova in una libreria creata dalla versione a 16 bit di LIB. È innanzitutto necessario utilizzare il LIB a 16 bit per estrarre l'oggetto; quindi è possibile utilizzare il file oggetto estratto come input per il LIB a 32 bit.

Per impostazione predefinita, LIB assegna un nome al file di output utilizzando il nome di base del primo file oggetto o libreria e l'estensione lib. Il file di output viene inserito nella directory corrente. Se esiste già un file con lo stesso nome, il file di output sostituisce il file esistente. Per mantenere una libreria esistente, utilizzare l'opzione /OUT per specificare un nome per il file di output.

Le seguenti opzioni si applicano alla creazione e alla modifica di una libreria:

**/LIBPATH:** *dir*<br/>
Esegue l'override del percorso delle librerie dell'ambiente. Per informazioni dettagliate, vedere la descrizione dell'opzione LINK [/LIBPATH.](libpath-additional-libpath.md)

**/list**<br/>
Visualizza le informazioni sulla libreria di output nell'output standard. L'output può essere reindirizzato a un file. È possibile utilizzare /LIST per determinare il contenuto di una libreria esistente senza modificarla.

**/NAME:** *nome file*<br/>
Quando si compila una libreria di importazione, specifica il nome della DLL per la quale viene compilata la libreria di importazione.

**/NODEFAULTLIB**<br/>
Rimuove una o più librerie predefinite dall'elenco delle librerie in cui viene eseguita la ricerca durante la risoluzione dei riferimenti esterni. Vedere [/NODEFAULTLIB](nodefaultlib-ignore-libraries.md) per ulteriori informazioni.

**/OUT:** *nome file*<br/>
Sostituisce il nome del file di output predefinito. Per impostazione predefinita, la libreria di output viene creata nella directory corrente, con il nome di base del primo file di libreria o oggetto nella riga di comando e l'estensione lib.

**/REMOVE:** *oggetto*<br/>
Omette *l'oggetto* specificato dalla libreria di output. LIB crea una libreria di output combinando tutti gli oggetti (in file oggetto o librerie) e quindi eliminando tutti gli oggetti specificati con /REMOVE.

**/SUBSYSTEM:**-**CONSOLE** &#124; **EFI_APPLICATION** &#124; **EFI_BOOT_SERVICE_DRIVER &#124;** EFI_ROM **&#124; &#124;** &#124; EFI_RUNTIME_DRIVER **&#124;** **&#124;** **POSIX** &#124; **WINDOWS** &#124; **WINDOWSCE**<br/>
Indica al sistema operativo come eseguire un programma creato mediante il collegamento alla libreria di output. Per ulteriori informazioni, vedere la descrizione dell'opzione LINK [/SUBSYSTEM.](subsystem-specify-subsystem.md)

Per le opzioni LIB specificate nella riga di comando non viene fatta distinzione tra maiuscole e minuscole.

È possibile utilizzare LIB per eseguire le seguenti attività di gestione della libreria:

- Per aggiungere oggetti a una libreria, specificare il nome file per la libreria esistente e i nomi dei file per i nuovi oggetti.

- Per combinare le librerie, specificare i nomi dei file delle librerie. È possibile aggiungere oggetti e combinare librerie con un singolo comando LIB.

- Per sostituire un membro di libreria con un nuovo oggetto, specificare la libreria contenente l'oggetto membro da sostituire e il nome file per il nuovo oggetto (o la libreria che lo contiene). Quando un oggetto con lo stesso nome è presente in più di un file di input, LIB inserisce l'ultimo oggetto specificato nel comando LIB nella libreria di output. Quando sostituite un membro di libreria, assicuratevi di specificare il nuovo oggetto o libreria dopo la libreria che contiene l'oggetto precedente.

- Per eliminare un membro da una libreria, utilizzare l'opzione /REMOVE. LIB elabora tutte le specifiche di /REMOVE dopo la combinazione di tutti gli oggetti di input, indipendentemente dall'ordine della riga di comando.

> [!NOTE]
> Non è possibile eliminare un membro ed estrarlo in un file nello stesso passaggio. È innanzitutto necessario estrarre l'oggetto membro utilizzando /EXTRACT, quindi eseguire nuovamente LIB utilizzando /REMOVE. Questo comportamento è diverso da quello del LIB a 16 bit (per le librerie OMF) fornito in altri prodotti Microsoft.

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](lib-reference.md)
