---
title: Riferimenti a BSCMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- BSCMAKE, reference
- Microsoft Browse Information Maintenance Utility
- browse windows
- browse information files (.bsc), building
- .bsc files, building
- bsc files, building
- BSCMAKE
ms.assetid: b97ad994-1355-4809-98db-6abc12c6fb13
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0eeae72c2e7b3924c184f0e40e209986ad378809
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="bscmake-reference"></a>Riferimenti a BSCMAKE
> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.  
  
 Microsoft Browse Information Maintenance Utility (BSCMAKE.EXE) compila un file di informazioni di visualizzazione (bsc) dai file sbr creati durante la compilazione. Alcuni strumenti di terze parti utilizzano BSC (file) per l'analisi codice. 
  
 Quando si compila il programma, è possibile creare automaticamente un file di informazioni di visualizzazione per il programma, usando BSCMAKE per compilare il file. Non è necessario sapere come eseguire BSCMAKE se si crea il file di informazioni di visualizzazione nell'ambiente di sviluppo di Visual C++. Tuttavia, può essere opportuno leggere questo argomento per conoscere le scelte possibili.  
  
 Se si compila il programma all'esterno dell'ambiente di sviluppo, si può comunque creare un file bsc personalizzato che è possibile esaminare nell'ambiente. Eseguire BSCMAKE sui file sbr creati durante la compilazione.  
  
> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio Developer. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.  
  
 Questa sezione presenta i seguenti argomenti:  
  
-   [Panoramica sulla compilazione di file di informazioni di visualizzazione](../../build/reference/building-browse-information-files-overview.md)  
  
-   [Compilazione di un file BSC](../../build/reference/building-a-dot-bsc-file.md)  
  
-   [Riga di comando BSCMAKE](../../build/reference/bscmake-command-line.md)  
  
-   [File di comando BSCMAKE](../../build/reference/bscmake-command-file-response-file.md)  
  
-   [Opzioni di BSCMAKE](../../build/reference/bscmake-options.md)  
  
-   [Codici di uscita BSCMAKE](../../build/reference/bscmake-exit-codes.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)