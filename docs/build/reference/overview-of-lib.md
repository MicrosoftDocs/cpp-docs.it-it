---
title: Cenni preliminari su LIB
description: Panoramica dell'utilizzo e delle opzioni dello strumento libreria, lib. exe.
ms.date: 09/25/2019
f1_keywords:
- Lib
helpviewer_keywords:
- LIB [C++], modes
ms.assetid: e997d423-f574-434f-8b56-25585d137ee0
ms.openlocfilehash: 7223ef0a624cf15c43bd067db8a7919efd27df17
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685493"
---
# <a name="overview-of-lib"></a>Cenni preliminari su LIB

LIB (lib. exe) crea librerie standard, librerie di importazione e file di esportazione che è possibile usare con il [collegamento](linker-options.md) durante la compilazione di un programma. LIB viene eseguito da un prompt dei comandi.

È possibile utilizzare LIB nelle modalità seguenti:

- [Compilazione o modifica di una libreria COFF](managing-a-library.md)

- [Estrazione di un oggetto membro in un file](extracting-a-library-member.md)

- [Creazione di un file di esportazione e di una libreria di importazione](working-with-import-libraries-and-export-files.md)

Queste modalità si escludono a vicenda. è possibile utilizzare LIB in una sola modalità alla volta.

## <a name="lib-options"></a>Opzioni di LIB

Nella tabella seguente sono elencate le opzioni di lib. exe, con un collegamento a ulteriori informazioni.

|Opzione|Descrizione|
|-|-|
|**/DEF**|Creare una libreria di importazione e un file di esportazione.<br/><br/>Per ulteriori informazioni, vedere [compilazione di una libreria di importazione e di un file di esportazione](building-an-import-library-and-export-file.md).|
|**/ERRORREPORT**|   Inviare informazioni a Microsoft sugli errori interni con lib. exe.<br/><br/>Per altre informazioni, vedere [Esecuzione di LIB](running-lib.md).|
|**/EXPORT**|   Esporta una funzione dal programma.<br/><br/>Per ulteriori informazioni, vedere [compilazione di una libreria di importazione e di un file di esportazione](building-an-import-library-and-export-file.md).|
|**/EXTRACT**|   Creare un file oggetto (. obj) contenente una copia di un membro di una libreria esistente.<br/><br/>Per ulteriori informazioni, vedere [estrazione di un membro di libreria](extracting-a-library-member.md).|
|**/INCLUDE**|   Aggiunge un simbolo alla tabella dei simboli.<br/><br/>Per ulteriori informazioni, vedere [compilazione di una libreria di importazione e di un file di esportazione](building-an-import-library-and-export-file.md).|
|**/LIBPATH**|   Esegue l'override del percorso delle librerie dell'ambiente.<br/><br/>Per ulteriori informazioni, vedere [gestione di una libreria](managing-a-library.md).|
|**/LINKREPRO**|   Crea gli elementi necessari per riprodurre un arresto anomalo o un errore interno di lib. exe.<br/><br/>Per altre informazioni, vedere [Esecuzione di LIB](running-lib.md).|
|**/LINKREPROTARGET**|   Genera gli elementi **/LINKREPRO** solo quando lib. exe viene usato con un file specificato.<br/><br/>Per altre informazioni, vedere [Esecuzione di LIB](running-lib.md).|
|**/LIST**|   Visualizza le informazioni sulla libreria di output per l'output standard.<br/><br/>Per ulteriori informazioni, vedere [gestione di una libreria](managing-a-library.md).|
|**/LTCG**|   Fa in modo che la libreria venga compilata utilizzando la generazione di codice in fase di collegamento.<br/><br/>Per altre informazioni, vedere [Esecuzione di LIB](running-lib.md).|
|**/MACHINE**|   Specifica la piattaforma di destinazione per il programma.<br/><br/>Per altre informazioni, vedere [Esecuzione di LIB](running-lib.md).|
|**/NAME**|   Quando si compila una libreria di importazione, specifica il nome della DLL per la quale viene compilata la libreria di importazione.<br/><br/>Per ulteriori informazioni, vedere [gestione di una libreria](managing-a-library.md).|
|**/NODEFAULTLIB**|   Rimuove una o più librerie predefinite dall'elenco di librerie che esegue la ricerca durante la risoluzione dei riferimenti esterni.<br/><br/>Per ulteriori informazioni, vedere [gestione di una libreria](managing-a-library.md).|
|**/NOLOGO**|   Elimina la visualizzazione del messaggio di copyright e del numero di versione di LIB e impedisce l'eco dei file di comando.<br/><br/>Per altre informazioni, vedere [Esecuzione di LIB](running-lib.md).|
|**/OUT**|   Esegue l'override del nome file di output predefinito.<br/><br/>Per ulteriori informazioni, vedere [gestione di una libreria](managing-a-library.md).|
|**/REMOVE**|   Omette un oggetto dalla libreria di output.<br/><br/>Per ulteriori informazioni, vedere [gestione di una libreria](managing-a-library.md).|
|**/SUBSYSTEM**|   Indica al sistema operativo come eseguire un programma creato mediante il collegamento alla libreria di output.<br/><br/>Per ulteriori informazioni, vedere [gestione di una libreria](managing-a-library.md).|
|**/VERBOSE**|   Visualizza i dettagli sullo stato di avanzamento della sessione, inclusi i nomi dei file con estensione obj da aggiungere.<br/><br/>Per altre informazioni, vedere [Esecuzione di LIB](running-lib.md).|
|**/WX**|   Considera gli avvisi come errori.<br/><br/>Per altre informazioni, vedere [Esecuzione di LIB](running-lib.md).|

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](lib-reference.md)<br/>
[File di input LIB](lib-input-files.md)<br/>
[File di output di LIB](lib-output-files.md)<br/>
[Altri output di LIB](other-lib-output.md)<br/>
[Struttura di una libreria](structure-of-a-library.md)
