---
title: "Pagina proprietà passaggio di compilazione personalizzata: Generale | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCustomBuildStep.AdditionalInputs
- VC.Project.VCCustomBuildStep.CustomBuildAfterTargets
- VC.Project.VCCustomBuildStep.CustomBuildBeforeTargets
- VC.Project.VCCustomBuildStep.Outputs
- VC.Project.VCCustomBuildStep.Message
- VC.Project.VCCustomBuildStep.Command
dev_langs:
- C++
helpviewer_keywords:
- project properties, custom build step
- custom build step (general)
ms.assetid: bd319741-0491-46c4-a428-7c61b4b46a02
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2e57d6cf00843cd6604ef269235602ea1b5b5e9b
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="custom-build-step-property-page-general"></a>Pagina Istruzione di compilazione personalizzata: Generale
Per ogni combinazione di configurazione del progetto e piattaforma di destinazione, è possibile specificare un'istruzione personalizzata da eseguire quando il progetto viene compilato.  

Per la versione Linux di questa pagina, vedere [personalizzato passaggio proprietà di compilazione (C++ Linux)](../linux/prop-pages/custom-build-step-linux.md).
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Riga di comando**  
 Comando da eseguire tramite l'istruzione di compilazione personalizzata.  
  
 **Descrizione**  
 Messaggio che viene visualizzato quando viene eseguita l'istruzione di compilazione personalizzata.  
  
 **Outputs**  
 File di output che viene generato dall'istruzione di compilazione personalizzata. Questa impostazione è necessaria ai fini del corretto funzionamento delle compilazioni incrementali.  
  
 **Dipendenze aggiuntive**  
 Elenco delimitato da punti e virgola di eventuali file di input aggiuntivi da utilizzare per l'istruzione di compilazione personalizzata.  
  
 **Esegui dopo ed Esegui prima**  
 Queste opzioni definiscono i tempi di esecuzione dell'istruzione personalizzata durante il processo di compilazione, relativamente alle destinazioni specificate. Le destinazioni più comunemente elencate sono BuildGenerateSources, BuildCompile e BuildLink perché rappresentano le istruzioni principali nel processo di compilazione. Altre destinazioni elencate spesso sono Midl, CLCompile e Link.  
  
 Considera output come contenuto  
 Questa opzione è significativa per le app Universal Windows Platform o Windows Phone, che includono tutti i file di contenuto nel pacchetto AppX.  
  
### <a name="to-specify-a-custom-build-step"></a>Per specificare un'istruzione di compilazione personalizzata  
  
1.  Sulla barra dei menu scegliere **Progetto**, **Proprietà**. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
2.  Nel **pagine delle proprietà** finestra di dialogo passare al **le proprietà di configurazione**, **istruzione di compilazione personalizzata**, **generale** pagina.  
  
3.  Modificare le impostazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)