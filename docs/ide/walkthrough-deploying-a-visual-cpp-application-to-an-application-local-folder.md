---
title: Distribuire un'applicazione Visual C++ in una cartella locale di un'app | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- deploying Visual C++ applications
ms.assetid: 47a81c47-9dbe-47c6-96cc-fbb2fda5e6ad
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9a02e585dc2b82c8b8ad675907e4205db6ad7279
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33337909"
---
# <a name="walkthrough-deploying-a-visual-c-application-to-an-application-local-folder"></a>Procedura dettagliata: distribuzione di un'applicazione Visual C++ in una cartella locale di un'applicazione
Viene descritto come distribuire un'applicazione Visual C++ copiando i file nella cartella corrispondente.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   Un computer in cui è installato Visual Studio.  
  
-   Un altro computer che non dispone delle librerie Visual C++.  
  
### <a name="to-deploy-an-application-to-an-application-local-folder"></a>Per distribuire un'applicazione Visual C++ in una cartella locale di un'applicazione  
  
1.  Creare e compilare un'applicazione MFC seguendo i passaggi descritti in [Procedura dettagliata: Distribuzione di un'applicazione Visual C++ tramite un progetto di installazione](../ide/walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).  
  
2.  Copiare i file di libreria MFC e i file di runtime di C (CRT) appropriati (ad esempio, per una piattaforma x86 e il supporto Unicode, copiare mfc100u.dll e msvcr100.dll da \Programmi\Microsoft Visual Studio 10.0\VC\redist\x86\) e incollarli nella cartella \Release\ del progetto MFC. Per altre informazioni sui file aggiuntivi che può essere necessario copiare, vedere [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md).  
  
3.  Eseguire l'applicazione MFC in un secondo computer che non dispone delle librerie Visual C++.  
  
    1.  Copiare il contenuto della cartella \Release\ e incollarlo nella cartella dell'applicazione nel secondo computer.  
  
    2.  Eseguire l'applicazione nel secondo computer.  
  
     L'applicazione viene eseguita correttamente perché le librerie Visual C++ sono disponibili nella cartella locale dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)