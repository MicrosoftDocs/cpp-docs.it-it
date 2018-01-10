---
title: 'Procedura: creare un progetto C++ da codice esistente | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: C++, creating projects from existing code
ms.assetid: e328a938-395c-48ea-9e35-dd433de12b31
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d6781709c105c606f6ceb856654525385738c1ca
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-create-a-c-project-from-existing-code"></a>Procedura: creare un progetto C++ da codice esistente

In Visual Studio, è possibile trasferire i file del codice esistente in un progetto di Visual C++ tramite la **Crea nuovo progetto da file di codice esistenti** procedura guidata. Questa procedura guidata non è disponibile nelle edizioni Express precedente di Visual Studio. Questa procedura guidata crea una nuova soluzione e progetto che utilizza il sistema di MSBuild per gestire i file di origine e di configurazione di compilazione.  
  
Porting dei file di codice in un progetto di Visual C++ consente di utilizzare tutte le funzionalità di gestione progetto MSBuild native disponibile nell'IDE. Se si preferisce usare il sistema di compilazione esistente, ad esempio makefile nmake, CMake o alternative, è possibile utilizzare l'opzione Apri cartella alternativa. Per altre informazioni, vedere [Open Folder projects in Visual C++](../ide/non-msbuild-projects.md) (Aprire una cartella di progetti in Visual C++). Entrambe le opzioni consentono di utilizzare le funzionalità dell'IDE, ad esempio [IntelliSense](/visualstudio/ide/using-intellisense) e [le proprietà del progetto](../ide/working-with-project-properties.md).  
  
### <a name="to-create-a-c-project-from-existing-code"></a>Per creare un progetto C++ da codice esistente  
  
1.  Nel **File** dal menu **New**, quindi fare clic su **progetto da codice esistente**.  
  
1.  Nella prima pagina del **Crea nuovo progetto da file di codice esistenti** procedura guidata, selezionare **Visual C++** nel **il tipo di progetto si desidera creare** elenco. Scegliere **Avanti** per continuare. 
  
1.  Specificare il percorso del progetto e la directory dei file di origine. Per informazioni dettagliate su questa pagina, vedere [specificare percorso del progetto e file di origine, creazione guidata nuovo progetto da esistente codice file](../ide/specify-project-location-and-source-files.md). Scegliere **Avanti** per continuare.  
  
1.  Specificare le impostazioni di progetto da utilizzare. Per informazioni dettagliate su questa pagina, vedere [specifica le impostazioni del progetto, creazione guidata nuovo progetto da esistente codice file](../ide/specify-project-settings-create-new-project-from-existing-code-files-wizard.md). Scegliere **Avanti** per continuare.  

1.  Specificare le impostazioni di configurazione di Debug da utilizzare. Per informazioni dettagliate su questa pagina, vedere [specificare le impostazioni di configurazione di Debug, creazione guidata nuovo progetto da esistente codice file](../ide/specify-debug-configuration-settings.md). Scegliere **Avanti** per continuare.  

1.  Specificare le impostazioni di configurazione di versione da utilizzare. Per informazioni dettagliate su questa pagina, vedere [specifica le impostazioni di configurazione di rilascio, creazione guidata nuovo progetto da esistente codice file](../ide/specify-release-configuration.md). Scegliere **fine** per generare il nuovo progetto.  
  
## <a name="see-also"></a>Vedere anche  

[Progetto specificare percorso e il file di origine, creare il nuovo progetto da Creazione guidata file di codice esistenti](../ide/specify-project-location-and-source-files.md)   
[Specifica le impostazioni di progetto, creare un nuovo progetto da Creazione guidata file di codice esistenti](../ide/specify-project-settings-create-new-project-from-existing-code-files-wizard.md)   
[Specificare le impostazioni di configurazione di Debug, creare un nuovo progetto da Creazione guidata file di codice esistenti](../ide/specify-debug-configuration-settings.md)   
[Specifica le impostazioni di configurazione per il rilascio, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-release-configuration.md)