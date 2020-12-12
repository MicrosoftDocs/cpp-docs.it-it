---
description: 'Altre informazioni su: riferimento a BSCMAKE'
title: Riferimenti a BSCMAKE
ms.date: 05/06/2019
helpviewer_keywords:
- BSCMAKE, reference
- Microsoft Browse Information Maintenance Utility
- browse windows
- browse information files (.bsc), building
- .bsc files, building
- bsc files, building
- BSCMAKE
ms.assetid: b97ad994-1355-4809-98db-6abc12c6fb13
ms.openlocfilehash: 11a90561e22b9fb3a39f022ba188e5c9d155e45e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179429"
---
# <a name="bscmake-reference"></a>Riferimenti a BSCMAKE

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

Microsoft Browse Information Maintenance Utility (BSCMAKE.EXE) compila un file di informazioni di visualizzazione (bsc) dai file sbr creati durante la compilazione. Alcuni strumenti di terze parti usano file BSC per l'analisi del codice.

Quando si compila il programma, è possibile creare automaticamente un file di informazioni di visualizzazione per il programma, usando BSCMAKE per compilare il file. Non è necessario saperne di più su come eseguire BSCMAKE se si crea il file di informazioni di visualizzazione nell'ambiente di sviluppo di Visual Studio. Tuttavia, può essere opportuno leggere questo argomento per conoscere le scelte possibili.

Se si compila il programma all'esterno dell'ambiente di sviluppo, si può comunque creare un file bsc personalizzato che è possibile esaminare nell'ambiente. Eseguire BSCMAKE sui file sbr creati durante la compilazione.

> [!NOTE]
> È possibile avviare questo strumento solo dal prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

Questa sezione include gli argomenti seguenti:

- [Compilazione di file di informazioni di visualizzazione: Panoramica](building-browse-information-files-overview.md)

- [Compilazione di un file BSC](building-a-dot-bsc-file.md)

- [Riga di comando di BSCMAKE](bscmake-command-line.md)

- [File di comando di BSCMAKE](bscmake-command-file-response-file.md)

- [Opzioni di BSCMAKE](bscmake-options.md)

- [Codici di uscita di BSCMAKE](bscmake-exit-codes.md)

## <a name="see-also"></a>Vedi anche

[Ulteriori strumenti di compilazione MSVC](c-cpp-build-tools.md)
