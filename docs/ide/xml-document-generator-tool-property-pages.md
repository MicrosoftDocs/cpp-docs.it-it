---
title: "Pagine delle proprietà dello strumento generatore documento XML | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCXDCMakeTool.ValidateIntelliSense
- VC.Project.VCXDCMakeTool.SuppressStartupBanner
- VC.Project.VCXDCMakeTool.DocumentLibraryDependencies
- VC.Project.VCXDCMakeTool.OutputDocumentFile
- VC.Project.VCXDCMakeTool.AdditionalDocumentFiles
dev_langs:
- C++
ms.assetid: 645912b5-197a-4c36-ba58-64df09444ca0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bc09dafc0f07bc16a11dd255419440b6464456c5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="xml-document-generator-tool-property-pages"></a>Pagina delle proprietà dello strumento generatore di documenti XML
La pagina delle proprietà dello strumento generatore di documenti XML espone la funzionalità di xdcmake.exe. xdcmake.exe unisce file xdc in un file XML quando il codice sorgente contiene commenti della documentazione e [/doc (processo di commenti relativi alla documentazione) (C/C++)](../build/reference/doc-process-documentation-comments-c-cpp.md) è specificato. Vedere [tag consigliati per i commenti relativi alla documentazione](../ide/recommended-tags-for-documentation-comments-visual-cpp.md) per informazioni sull'aggiunta di commenti al codice sorgente.  
  
> [!NOTE]
>  opzioni xdcmake.exe nell'ambiente di sviluppo (pagine delle proprietà) differiscono dalle opzioni quando xdcmake.exe viene utilizzato nella riga di comando. Per informazioni sull'utilizzo di xdcmake.exe nella riga di comando, vedere [riferimento a XDCMake](../ide/xdcmake-reference.md).  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Non visualizzare messaggio di avvio**  
 Non visualizzare messaggio di copyright.  
  
 **File di documentazione aggiuntivi**  
 Directory aggiuntive in cui si desidera che il sistema di progetto per cercare i file xdc. xdcmake cercherà sempre file xdc generati dal progetto. È possibile specificare più directory.  
  
 **File di documento di output**  
 Il percorso di directory e nome del file di output XML. Vedere [comuni macro per comandi di compilazione e proprietà](../ide/common-macros-for-build-commands-and-properties.md) per informazioni sull'utilizzo di macro per specificare i percorsi di directory.  
  
 **Dipendenze raccolte documenti**  
 Se il progetto presenta una dipendenza su un progetto con estensione LIB nella soluzione, è possibile elaborare file xdc dal progetto lib nei file con estensione XML per il progetto corrente.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)   
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)