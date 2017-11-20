---
title: "Pagina proprietà passaggio di compilazione personalizzata: Generale | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCustomBuildStep.AdditionalInputs
- VC.Project.VCCustomBuildStep.CustomBuildAfterTargets
- VC.Project.VCCustomBuildStep.CustomBuildBeforeTargets
- VC.Project.VCCustomBuildStep.Outputs
- VC.Project.VCCustomBuildStep.Message
- VC.Project.VCCustomBuildStep.Command
dev_langs: C++
helpviewer_keywords:
- project properties, custom build step
- custom build step (general)
ms.assetid: bd319741-0491-46c4-a428-7c61b4b46a02
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 10fa52dbf477f970cee0695aba13ec2eb5cfd90c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="custom-build-step-property-page-general"></a>Pagina Istruzione di compilazione personalizzata: Generale
Per ogni combinazione di configurazione del progetto e piattaforma di destinazione, è possibile specificare un'istruzione personalizzata da eseguire quando il progetto viene compilato.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Riga di comando**  
 Comando da eseguire tramite l'istruzione di compilazione personalizzata.  
  
 **Descrizione**  
 Messaggio che viene visualizzato quando viene eseguita l'istruzione di compilazione personalizzata.  
  
 **Output**  
 File di output che viene generato dall'istruzione di compilazione personalizzata. Questa impostazione è necessaria ai fini del corretto funzionamento delle compilazioni incrementali.  
  
 **Dipendenze aggiuntive**  
 Elenco delimitato da punti e virgola di eventuali file di input aggiuntivi da utilizzare per l'istruzione di compilazione personalizzata.  
  
 **Esegui dopo ed Esegui prima**  
 Queste opzioni definiscono i tempi di esecuzione dell'istruzione personalizzata durante il processo di compilazione, relativamente alle destinazioni specificate. Le destinazioni più comunemente elencate sono BuildGenerateSources, BuildCompile e BuildLink perché rappresentano le istruzioni principali nel processo di compilazione. Altre destinazioni elencate spesso sono Midl, CLCompile e Link.  
  
 Considera output come contenuto  
 Questa opzione è significativa solo per le applicazioni Windows Store o Windows Phone i cui file di contenuto sono tutti inclusi nel pacchetto appx.  
  
### <a name="to-specify-a-custom-build-step"></a>Per specificare un'istruzione di compilazione personalizzata  
  
1.  Sulla barra dei menu scegliere **Progetto**, **Proprietà**. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
2.  Nel **pagine delle proprietà** finestra di dialogo passare al **le proprietà di configurazione**, **istruzione di compilazione personalizzata**, **generale** pagina.  
  
3.  Modificare le impostazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)