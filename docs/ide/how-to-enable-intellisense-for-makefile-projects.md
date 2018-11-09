---
title: 'Procedura: abilitare IntelliSense per progetti makefile'
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCNMakeTool.IntelliSense
helpviewer_keywords:
- Makefile projects, IntelliSense
- IntelliSense, Makefile projects
ms.assetid: 9443f453-f18f-4f12-a9a1-ef9dbf8b188f
ms.openlocfilehash: 80a4696856fea46c7749cfeb120535dcdab86282
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50434671"
---
# <a name="how-to-enable-intellisense-for-makefile-projects"></a>Procedura: abilitare IntelliSense per progetti makefile

IntelliSense non funziona nell'IDE per i progetti makefile di Visual C++ quando determinate impostazioni di progetto o opzioni del compilatore sono configurate in modo non corretto. Usare questa procedura per configurare i progetti makefile Visual C++, in modo che IntelliSense funzioni quando i progetti makefile vengono aperti nell'ambiente di sviluppo di Visual Studio.

### <a name="to-enable-intellisense-for-makefile-projects-in-the-ide"></a>Per abilitare IntelliSense per i progetti makefile nell'IDE

1. Aprire la finestra di dialogo **Pagine delle proprietà**. Per altre informazioni, vedere [Uso di proprietà di progetto](../ide/working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Selezionare la pagina della proprietà **NMake** e quindi modificare le proprietà nell'area **IntelliSense** nel modo desiderato.

   - Impostare la proprietà **Definizioni del preprocessore** per definire i simboli del preprocessore nel progetto makefile. Per altre informazioni, vedere [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md).

   - Impostare la proprietà **Percorso di ricerca di inclusione** per specificare l'elenco delle directory in cui il compilatore esegue la ricerca per risolvere i riferimenti di file che vengono passati alle direttive del preprocessore nel progetto makefile. Per altre informazioni, vedere [/I (Directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md).

         For projects that are built using CL.EXE from a Command Window, set the **INCLUDE** environment variable to specify directories that the compiler will search to resolve file references that are passed to preprocessor directives in your makefile project.

   - Impostare la proprietà **Inclusioni imposte** per specificare quali file di intestazione elaborare durante la compilazione del progetto makefile. Per altre informazioni, vedere [/FI (Specifica il file di inclusione da usare)](../build/reference/fi-name-forced-include-file.md).

   - Impostare la proprietà **Percorso di ricerca assembly** per specificare l'elenco delle directory in cui il compilatore eseguirà la ricerca per risolvere i riferimenti agli assembly .NET nel progetto. Per altre informazioni, vedere [/AI (Specifica le directory di metadati)](../build/reference/ai-specify-metadata-directories.md).

   - Impostare la proprietà **Assembly a uso forzato** per specificare quali assembly .NET elaborare durante la compilazione del progetto makefile. Per altre informazioni, vedere [/FU (Specifica file #using da usare)](../build/reference/fu-name-forced-hash-using-file.md).

   - Impostare la proprietà **Opzioni aggiuntive** per specificare opzioni aggiuntive del compilatore che IntelliSense deve usare durante l'analisi dei file C++.

1. Scegliere **OK** per chiudere le pagine delle proprietà.

1. Usare il comando **Salva tutto** per salvare le impostazioni del progetto modificate.

Alla successiva apertura del progetto makefile nell'ambiente di sviluppo di Visual Studio, eseguire il comando **Pulisci soluzione** e quindi il comando **Compila soluzione** nel progetto makefile. IntelliSense funzionerà correttamente nell'IDE.

## <a name="see-also"></a>Vedere anche

[Utilizzo di IntelliSense](/visualstudio/ide/using-intellisense)<br>
[Riferimenti a NMAKE](../build/nmake-reference.md)<br>
[Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)