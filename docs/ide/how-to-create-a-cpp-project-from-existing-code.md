---
title: 'Procedura: Creare un progetto C++ da codice esistente | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- C++, creating projects from existing code
ms.assetid: e328a938-395c-48ea-9e35-dd433de12b31
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1786e5704d7afd07576ab738d907eb841518f8be
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33330135"
---
# <a name="how-to-create-a-c-project-from-existing-code"></a>Procedura: creare un progetto C++ da codice esistente

In Visual Studio è possibile trasferire file di codice esistenti in un progetto Visual C++ usando la procedura guidata **Creazione guidata nuovo progetto da file di codice esistenti**. Questa procedura guidata non è disponibile nelle edizioni Express precedenti di Visual Studio. La procedura guidata crea una nuova soluzione e un progetto che usa il sistema MSBuild per gestire i file di origine e la configurazione della build.  
  
L'importazione di file di codice esistenti in un progetto di Visual C++ consente di usare tutte le funzionalità di gestione progetto MSBuild native incorporate nell'IDE. Se si preferisce usare il sistema di compilazione esistente, ad esempio makefile nmake, CMake o altri ancora, è possibile usare l'opzione Apri cartella. Per altre informazioni, vedere [Open Folder projects in Visual C++](../ide/non-msbuild-projects.md) (Aprire una cartella di progetti in Visual C++). Entrambe le opzioni consentono di usare funzionalità IDE come [IntelliSense](/visualstudio/ide/using-intellisense) e [Proprietà del progetto](../ide/working-with-project-properties.md).  
  
### <a name="to-create-a-c-project-from-existing-code"></a>Per creare un progetto C++ da codice esistente  
  
1.  Nel menu **File** scegliere **Nuovo**, quindi fare clic su **Progetto da codice esistente**.  
  
1.  Nella prima pagina della procedura guidata **Creazione guidata nuovo progetto da file di codice esistenti**, selezionare **Visual C++** nell'elenco **Specificare il tipo di progetto che si desidera creare**. Scegliere **Avanti** per continuare. 
  
1.  Specificare il percorso del progetto e la directory dei file di origine. Per informazioni dettagliate su questa pagina, vedere [Specifica il percorso di progetto e i file di origine, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-project-location-and-source-files.md). Scegliere **Avanti** per continuare.  
  
1.  Specificare le impostazioni del progetto da usare. Per informazioni dettagliate su questa pagina, vedere [Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-project-settings-create-new-project-from-existing-code-files-wizard.md). Scegliere **Avanti** per continuare.  

1.  Specificare le impostazioni di configurazione per il debug da usare. Per informazioni dettagliate su questa pagina, vedere [Specifica le impostazioni di configurazione per il debug, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-debug-configuration-settings.md). Scegliere **Avanti** per continuare.  

1.  Specificare le impostazioni di configurazione Rilascio da usare. Per informazioni dettagliate su questa pagina, vedere [Specifica le impostazioni di configurazione per il rilascio, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-release-configuration.md). Scegliere **Fine** per generare il nuovo progetto.  
  
## <a name="see-also"></a>Vedere anche  

[Specifica il percorso di progetto e i file di origine, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-project-location-and-source-files.md)   
[Specifica le impostazioni del progetto, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-project-settings-create-new-project-from-existing-code-files-wizard.md)   
[Specifica le impostazioni di configurazione per il debug, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-debug-configuration-settings.md)   
[Specifica le impostazioni di configurazione per il rilascio, Creazione guidata nuovo progetto da file di codice esistenti](../ide/specify-release-configuration.md)