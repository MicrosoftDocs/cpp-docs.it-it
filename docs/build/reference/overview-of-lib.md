---
title: Cenni preliminari su LIB
ms.date: 11/04/2016
f1_keywords:
- Lib
helpviewer_keywords:
- LIB [C++], modes
ms.assetid: e997d423-f574-434f-8b56-25585d137ee0
ms.openlocfilehash: a66f78d225a5899b53a931c7eb6a0564de689ca1
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57423287"
---
# <a name="overview-of-lib"></a>Cenni preliminari su LIB

LIB crea librerie standard, librerie di importazione ed esportare file di cui è possibile usare con [collegamento](../../build/reference/linker-options.md) durante la creazione di un programma. LIB viene eseguito da un prompt dei comandi.

È possibile usare LIB nelle modalità seguenti:

- [Creando o modificando una libreria COFF](../../build/reference/managing-a-library.md)

- [L'estrazione di un oggetto membro in un file](../../build/reference/extracting-a-library-member.md)

- [Creazione di un file di esportazione e una libreria di importazione](../../build/reference/working-with-import-libraries-and-export-files.md)

Queste modalità si escludono a vicenda; è possibile usare LIB nella sola modalità alla volta.

## <a name="lib-options"></a>Opzioni di LIB

Nella tabella seguente sono elencate le opzioni per lib.exe, con un collegamento a informazioni aggiuntive.

|Opzione|Descrizione|
|-|-|
|**/DEF**|Creare una libreria di importazione e un file di esportazione.<br/><br/>Per altre informazioni, vedere [compilazione di una libreria di importazione e File di esportazione](../../build/reference/building-an-import-library-and-export-file.md).|
|**/ERRORREPORT**|   Inviare a Microsoft informazioni sugli errori interni con lib.exe.<br/><br/>Per altre informazioni, vedere [esecuzione di LIB](../../build/reference/running-lib.md).|
|**/EXPORT**|   Esporta una funzione dal programma.<br/><br/>Per altre informazioni, vedere [compilazione di una libreria di importazione e File di esportazione](../../build/reference/building-an-import-library-and-export-file.md).|
|**/EXTRACT**|   Creare un file oggetto (obj) che contiene una copia di un membro di una libreria esistente.<br/><br/>Per altre informazioni, vedere [l'estrazione di un membro di una libreria](../../build/reference/extracting-a-library-member.md).|
|**/INCLUDE**|   Aggiunge un simbolo alla tabella dei simboli.<br/><br/>Per altre informazioni, vedere [compilazione di una libreria di importazione e File di esportazione](../../build/reference/building-an-import-library-and-export-file.md).|
|**/LIBPATH**|   Esegue l'override del percorso delle librerie dell'ambiente.<br/><br/>Per altre informazioni, vedere [gestione di una libreria](../../build/reference/managing-a-library.md).|
|**/LIST**|   Visualizza le informazioni sulla libreria di output nell'output standard.<br/><br/>Per altre informazioni, vedere [gestione di una libreria](../../build/reference/managing-a-library.md).|
|**/LTCG**|   Fa sì che la libreria essere compilate utilizzando generazione codice in fase di collegamento.<br/><br/>Per altre informazioni, vedere [esecuzione di LIB](../../build/reference/running-lib.md).|
|**/MACHINE**|   Specifica la piattaforma di destinazione per il programma.<br/><br/>Per altre informazioni, vedere [esecuzione di LIB](../../build/reference/running-lib.md).|
|**/NAME**|   Quando si compila una libreria di importazione, specifica il nome della DLL per il quale viene compilata la libreria di importazione.<br/><br/>Per altre informazioni, vedere [gestione di una libreria](../../build/reference/managing-a-library.md).|
|**/NODEFAULTLIB**|   Rimuove uno o più librerie predefinite dall'elenco delle librerie di che viene eseguita la ricerca durante la risoluzione di riferimenti esterni.<br/><br/>Per altre informazioni, vedere [gestione di una libreria](../../build/reference/managing-a-library.md).|
|**/NOLOGO**|   Evita la visualizzazione di LIB copyright messaggio e numero di versione e impedire che vengano visualizzati dei file di comando.<br/><br/>Per altre informazioni, vedere [esecuzione di LIB](../../build/reference/running-lib.md).|
|**/OUT**|   Sostituisce il nome di file di output predefinito.<br/><br/>Per altre informazioni, vedere [gestione di una libreria](../../build/reference/managing-a-library.md).|
|**/REMOVE**|   Omette un oggetto dalla libreria di output.<br/><br/>Per altre informazioni, vedere [gestione di una libreria](../../build/reference/managing-a-library.md).|
|**/SUBSYSTEM**|   Indica al sistema operativo come eseguire un programma creato mediante il collegamento alla libreria di output.<br/><br/>Per altre informazioni, vedere [gestione di una libreria](../../build/reference/managing-a-library.md).|
|**/VERBOSE**|   Visualizza i dettagli sullo stato di avanzamento della sessione, inclusi i nomi dei file con estensione obj da aggiungere.<br/><br/>Per altre informazioni, vedere [esecuzione di LIB](../../build/reference/running-lib.md).|
|**/WX**|   Considera gli avvisi come errori.<br/><br/>Per altre informazioni, vedere [esecuzione di LIB](../../build/reference/running-lib.md).|

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](../../build/reference/lib-reference.md)<br/>
[File di input LIB](../../build/reference/lib-input-files.md)<br/>
[File di output di LIB](../../build/reference/lib-output-files.md)<br/>
[Altri output di LIB](../../build/reference/other-lib-output.md)<br/>
[Struttura di una libreria](../../build/reference/structure-of-a-library.md)
