---
description: 'Altre informazioni su: gestione di una libreria'
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
ms.openlocfilehash: f862dfd460bb51cdf6e855c87b08b7426a5642d0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199129"
---
# <a name="managing-a-library"></a>Gestione di una libreria

La modalità predefinita per LIB è la compilazione o la modifica di una libreria di oggetti COFF. LIB viene eseguito in questa modalità quando non si specifica/EXTRACT (per copiare un oggetto in un file) o/DEF (per compilare una libreria di importazione).

Per compilare una libreria da oggetti e/o librerie, usare la sintassi seguente:

```
LIB [options...] files...
```

Questo comando crea una libreria da uno o più *file* di input. I *file* possono essere file oggetto COFF, file oggetto OMF a 32 bit o librerie COFF esistenti. LIB crea una raccolta che contiene tutti gli oggetti nei file specificati. Se un file di input è un file oggetto OMF a 32 bit, LIB lo converte in COFF prima di compilare la libreria. LIB non accetta un oggetto OMF a 32 bit che si trova in una libreria creata dalla versione a 16 bit di LIB. Per estrarre l'oggetto, è necessario innanzitutto utilizzare LIB a 16 bit. quindi, è possibile usare il file oggetto estratto come input per LIB a 32 bit.

Per impostazione predefinita, LIB denomina il file di output usando il nome di base del primo oggetto o del file di libreria e l'estensione LIB. Il file di output viene inserito nella directory corrente. Se esiste già un file con lo stesso nome, il file di output sostituisce quello esistente. Per mantenere una libreria esistente, utilizzare l'opzione/OUT per specificare un nome per il file di output.

Per la compilazione e la modifica di una libreria sono valide le opzioni seguenti:

**/LIBPATH:** *dir*<br/>
Esegue l'override del percorso delle librerie dell'ambiente. Per informazioni dettagliate, vedere la descrizione dell'opzione LINK [/LIBPATH](libpath-additional-libpath.md) .

**/LIST**<br/>
Visualizza le informazioni sulla libreria di output per l'output standard. È possibile reindirizzare l'output a un file. È possibile utilizzare/LIST per determinare il contenuto di una libreria esistente senza modificarlo.

**/Name:** *nomefile*<br/>
Quando si compila una libreria di importazione, specifica il nome della DLL per la quale viene compilata la libreria di importazione.

**/NODEFAULTLIB**<br/>
Rimuove una o più librerie predefinite dall'elenco di librerie che esegue la ricerca durante la risoluzione dei riferimenti esterni. Per ulteriori informazioni, vedere [/NODEFAULTLIB](nodefaultlib-ignore-libraries.md) .

**/Out:** *nomefile*<br/>
Esegue l'override del nome file di output predefinito. Per impostazione predefinita, la libreria di output viene creata nella directory corrente, con il nome di base del primo file di libreria o oggetto nella riga di comando e l'estensione LIB.

**/Remove:** *oggetto*<br/>
Omette l' *oggetto* specificato dalla libreria di output. LIB crea una libreria di output combinando tutti gli oggetti (in file oggetto o in librerie) e quindi eliminando tutti gli oggetti specificati con/REMOVE.

**/SUBSYSTEM:**{**CONSOLE** &#124; **EFI_APPLICATION** &#124; **EFI_BOOT_SERVICE_DRIVER** &#124; **EFI_ROM** &#124; **EFI_RUNTIME_DRIVER** &#124; **native** &#124; **POSIX** &#124; **Windows** &#124; Windows.] [, # [. # #]]<br/>
Indica al sistema operativo come eseguire un programma creato mediante il collegamento alla libreria di output. Per ulteriori informazioni, vedere la descrizione dell'opzione LINK [/Subsystem](subsystem-specify-subsystem.md) .

Le opzioni LIB specificate nella riga di comando non fanno distinzione tra maiuscole e minuscole.

È possibile utilizzare LIB per eseguire le seguenti attività di gestione della libreria:

- Per aggiungere oggetti a una libreria, specificare il nome file per la libreria esistente e i nomi file per i nuovi oggetti.

- Per combinare le librerie, specificare i nomi dei file di libreria. È possibile aggiungere oggetti e combinare librerie con un unico comando LIB.

- Per sostituire un membro di libreria con un nuovo oggetto, specificare la libreria contenente l'oggetto membro da sostituire e il nome file per il nuovo oggetto o la libreria che lo contiene. Quando un oggetto con lo stesso nome esiste in più di un file di input, LIB inserisce l'ultimo oggetto specificato nel comando LIB nella libreria di output. Quando si sostituisce un membro di libreria, assicurarsi di specificare il nuovo oggetto o la nuova libreria dopo la raccolta che contiene l'oggetto precedente.

- Per eliminare un membro da una raccolta, utilizzare l'opzione/REMOVE. LIB elabora le specifiche di/REMOVE dopo aver combinato tutti gli oggetti di input, indipendentemente dall'ordine della riga di comando.

> [!NOTE]
> Non è possibile eliminare un membro ed estrarlo in un file nello stesso passaggio. È necessario innanzitutto estrarre l'oggetto membro utilizzando/EXTRACT, quindi eseguire di nuovo LIB utilizzando/REMOVE. Questo comportamento è diverso da quello della libreria LIB a 16 bit (per le librerie OMF) fornita in altri prodotti Microsoft.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento a LIB](lib-reference.md)
