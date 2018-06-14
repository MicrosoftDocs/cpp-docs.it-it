---
title: Preparazione di un computer di test per l'esecuzione di un file eseguibile di debug | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- debug executable, preparing a test machine to run
ms.assetid: f0400989-cc2e-4dce-9788-6bdbe91c6f5a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 33683ebe349fbfdcb3fd51179ed6bc3140510c00
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33330297"
---
# <a name="preparing-a-test-machine-to-run-a-debug-executable"></a>Preparazione di un computer per il test per l'esecuzione di un file eseguibile di debug
Per preparare un computer per il test della versione di debug di un'applicazione compilata con Visual C++, è necessario distribuire le versioni di debug delle DDL della libreria di Visual C++ da cui dipende l'applicazione. Per identificare le DDL da distribuire, seguire i passaggi indicati nell'articolo [Informazioni sulle dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). Tipicamente, i nomi delle versioni di debug delle DLL della libreria di Visual C++ terminano con la lettera d. La versione di debug di msvcr100.dll è ad esempio denominata msvcr100d.dll.  
  
> [!NOTE]
>  Le versioni di debug di un'applicazione non sono ridistribuibili, analogamente alle versioni di debug delle DDL della libreria di Visual C++. È possibile distribuire le versioni di debug delle applicazioni e le DLL di Visual C++ solo nei propri computer e al solo scopo di eseguire il debug e il test delle applicazioni su un computer in cui non è installato Visual Studio. Per altre informazioni, vedere [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md).  
  
 È possibile distribuire le versioni di debug delle DDL della libreria di Visual C++ con la versione di debug di un'applicazione in tre modi diversi.  
  
-   Utilizzare la distribuzione centrale per installare una versione di debug di una determinata DLL di Visual C++ nella directory %windir%\system32\ utilizzando un progetto di installazione che include modelli merge per la versione corretta della libreria e l'architettura dell'applicazione. I modelli unione sono disponibili nella directory Programmi o Programmi (x86) in \File comuni\Modelli unione\\. Nel nome della versione di debug di un modello merge è presente il termine "Debug", ad esempio Microsoft_VC110_DebugCRT_x86.msm. Un esempio di questa distribuzione è disponibile in [Procedura dettagliata: Distribuzione di un'applicazione Visual C++ tramite un progetto di installazione](../ide/walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).  
  
-   Usare la distribuzione locale per installare una versione di debug di una determinata DLL di Visual C++ nella directory di installazione dell'applicazione usando i file inclusi nella directory Programmi o Programmi (x86) in \Microsoft Visual Studio \<versione>\VC\redist\Debug_NonRedist\\.  
  
    > [!NOTE]
    >  Per eseguire il debug remoto dell'applicazione compilata con Visual C++ 2005 o Visual C++ 2008 in un altro computer, è necessario distribuire le versioni di debug delle DLL della libreria di Visual C++ come assembly affiancati condivisi. È possibile utilizzare un progetto di installazione o Windows Installer per installare i modelli merge corrispondenti.  
  
-   Usare l'opzione **Distribuisci** nella finestra di dialogo **Gestione configurazione** in Visual Studio per copiare l'output del progetto e altri file nel computer remoto. 
  
 Dopo aver installato le DDL di Visual C++, è possibile eseguire un debugger remoto in una condivisione di rete. Per altre informazioni sul debug remoto, vedere [Debug remoto](/visualstudio/debugger/remote-debugging.md).  
  
## <a name="see-also"></a>Vedere anche  
 
 [Distribuzione in Visual C++](../ide/deployment-in-visual-cpp.md)   
 [Windows Installer Command line options](http://msdn.microsoft.com/library/windows/desktop/aa367988.aspx)  (Opzioni della riga di comando di Windows Installer)  
 [Esempi di distribuzione](../ide/deployment-examples.md) [Debug remoto](/visualstudio/debugger/remote-debugging.md)