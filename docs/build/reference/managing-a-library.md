---
title: Gestione di una libreria | Documenti Microsoft
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
ms.openlocfilehash: 97c6da9e12e9071b4792476d2e49739a55d7ea8e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379640"
---
# <a name="managing-a-library"></a>Gestione di una libreria
La modalità predefinita di LIB è per creare o modificare una raccolta di oggetti COFF. LIB viene eseguito in questa modalità quando non si specifica /EXTRACT (per copiare un oggetto in un file) o /DEF (per generare una libreria di importazione).  
  
 Per creare una raccolta di oggetti e/o le librerie, utilizzare la sintassi seguente:  
  
```  
LIB [options...] files...  
```  
  
 Questo comando crea una libreria da uno o più input *file*. Il *file* possono essere file oggetto COFF, file oggetto OMF a 32 bit o librerie COFF esistenti. LIB crea una libreria che contiene tutti gli oggetti nei file specificati. Se un file di input è un file oggetto OMF a 32 bit, viene convertito in COFF prima di compilare la libreria. LIB non può accettare un oggetto OMF a 32 bit in una libreria creata con la versione a 16 bit. Utilizzare innanzitutto LIB a 16 bit per estrarre l'oggetto. è quindi possibile utilizzare il file oggetto estratto come input per la libreria di 32 bit.  
  
 Per impostazione predefinita, LIB il nome del file di output utilizzando il nome base del primo file oggetto o di libreria e l'estensione. lib. Il file di output viene inserito nella directory corrente. Se esiste già un file con lo stesso nome, il file di output sostituisce il file esistente. Per mantenere una raccolta esistente, utilizzare l'opzione /OUT per specificare un nome per il file di output.  
  
 Le opzioni seguenti si applicano per la creazione e modifica di una libreria:  
  
 /LIBPATH: `dir`  
 Esegue l'override del percorso delle librerie dell'ambiente. Per informazioni dettagliate, vedere la descrizione del collegamento [/LIBPATH](../../build/reference/libpath-additional-libpath.md) opzione.  
  
 / ELENCO  
 Visualizza le informazioni sulla libreria di output nell'output standard. L'output può essere reindirizzato a un file. È possibile utilizzare /LIST per determinare il contenuto di una libreria esistente senza modificarla.  
  
 / NOME: *filename*  
 Quando si compila una libreria di importazione, specifica il nome della DLL per la quale compilare la libreria di importazione.  
  
 /NODEFAULTLIB  
 Rimuove uno o più librerie predefinite dall'elenco delle librerie che la ricerca durante la risoluzione di riferimenti esterni. Vedere [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per ulteriori informazioni.  
  
 / In uscita: *filename*  
 Sostituisce il file di output predefinito. Per impostazione predefinita, la libreria di output viene creata nella directory corrente, con il nome base del primo file di libreria o un oggetto nella riga di comando e l'estensione. lib.  
  
 / Rimuovi: *oggetto*  
 Omette specificato *oggetto* dalla libreria di output. LIB crea una libreria di output combinando tutti gli oggetti (in librerie o file oggetto), quindi eliminando tutti gli oggetti specificati con /Remove.  
  
 /SUBSYSTEM: {CONSOLE DI &AMP;#124; EFI_APPLICATION &AMP;#124; IL DRIVER EFI_BOOT_SERVICE_DRIVER &AMP;#124; EFI_ROM &AMP;#124; EFI_RUNTIME_DRIVER &AMP;#124; NATIVO &AMP;#124; POSIX &AMP;#124; WINDOWS &AMP;#124; WINDOWSCE} [, & [. # #]]  
 Indica al sistema operativo come eseguire un programma creato mediante il collegamento alla libreria di output. Per ulteriori informazioni, vedere la descrizione del collegamento [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) opzione.  
  
 Opzioni di LIB specificate nella riga di comando non sono tra maiuscole e minuscole.  
  
 È possibile utilizzare LIB per eseguire le attività di gestione delle librerie seguenti:  
  
-   Per aggiungere oggetti in una raccolta, specificare il nome del file per la raccolta esistente e i nomi dei file per i nuovi oggetti.  
  
-   Per combinare le librerie, specificare i nomi dei file di libreria. È possibile aggiungere oggetti e combinare librerie con un unico comando LIB.  
  
-   Per sostituire un membro di una libreria con un nuovo oggetto, specificare la raccolta che contiene l'oggetto membro da sostituire e il nome del file per il nuovo oggetto (o la libreria che lo contiene). Quando un oggetto che ha lo stesso nome esiste in più di un file di input, viene inserito l'ultimo oggetto specificato nel comando LIB nella libreria di output. Quando si sostituisce un membro di libreria, assicurarsi di specificare il nuovo oggetto o una raccolta dopo la raccolta che contiene l'oggetto precedente.  
  
-   Per eliminare un membro da una raccolta, utilizzare l'opzione /REMOVE. LIB elabora le specifiche di /REMOVE dopo la combinazione di tutti gli oggetti di input, indipendentemente dall'ordine della riga di comando.  
  
> [!NOTE]
>  È Impossibile eliminare un membro ed estrarre i file in un file nello stesso passaggio. Innanzitutto è necessario estrarre l'oggetto membro mediante l'opzione /EXTRACT, quindi eseguire nuovamente /Remove. LIB. Questo comportamento è diverso da quello di LIB a 16 bit (per le librerie OMF) fornito in altri prodotti Microsoft.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a LIB](../../build/reference/lib-reference.md)