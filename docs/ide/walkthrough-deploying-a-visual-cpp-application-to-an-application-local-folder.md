---
title: Distribuire un'applicazione Visual C++ in una cartella locale dell'App | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- deploying Visual C++ applications
ms.assetid: 47a81c47-9dbe-47c6-96cc-fbb2fda5e6ad
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1d9a92a5fef96932f1d6a58503fe6355b5a410ce
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-deploying-a-visual-c-application-to-an-application-local-folder"></a>Procedura dettagliata: distribuzione di un'applicazione Visual C++ in una cartella locale di un'applicazione
Viene descritto come distribuire un'applicazione Visual C++ copiando i file nella cartella.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   Un computer in cui è installato Visual Studio.  
  
-   Un altro computer che non dispone delle librerie Visual C++.  
  
### <a name="to-deploy-an-application-to-an-application-local-folder"></a>Per distribuire un'applicazione in una cartella locale dell'applicazione  
  
1.  Creare e compilare un'applicazione MFC seguendo i passaggi descritti in [procedura dettagliata: distribuzione di un Visual C++ applicazione mediante un progetto di installazione](../ide/walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).  
  
2.  Copiare i file di libreria MFC e di Run-Time C (CRT) appropriati, ad esempio, per x86 piattaforma e supporto Unicode, copia Mfc100u e Msvcr100. dll da \Programmi\Microsoft Visual Studio 10.0\VC\redist\x86\—and quindi incollarli nella cartella \Release\ del un progetto MFC. Per ulteriori informazioni su altri file che potrebbe essere necessario copiare, vedere [determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md).  
  
3.  Eseguire l'applicazione MFC in un secondo computer che non dispone delle librerie Visual C++.  
  
    1.  Copiare il contenuto della cartella \Release\ e incollarli nella cartella dell'applicazione nel secondo computer.  
  
    2.  Nel secondo computer, eseguire l'applicazione.  
  
     L'applicazione viene eseguita correttamente perché le librerie Visual C++ sono disponibili nella cartella locale dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)