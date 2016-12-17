---
title: "Moving a String from One Resource File to Another | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strings [C++], moving between files"
  - "resource script files, moving strings"
  - "string editing, moving strings between resources"
  - "String editor, moving strings between files"
ms.assetid: 94f8ee81-9b4c-4788-ba95-68c58db38029
caps.latest.revision: 12
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Moving a String from One Resource File to Another
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per spostare una stringa da un file di script di risorsa a un altro  
  
1.  Aprire le tabelle di stringhe in entrambi i file RC.  Per ulteriori informazioni, vedere [Visualizzazione di risorse in un file di script di risorsa all'esterno di un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare clic con il pulsante destro del mouse sulla stringa che si desidera spostare e scegliere **Taglia** dal menu di scelta rapida.  
  
3.  Posizionare il cursore nella finestra **Editor stringhe** di destinazione.  
  
4.  Fare clic con il pulsante destro del mouse nel file RC in cui si desidera spostare la stringa e scegliere **Incolla** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se la proprietà **ID** o **valore** della stringa spostata è in conflitto con un **ID** o un **valore** esistente nel file di destinazione, la proprietà **ID** o **valore** della stringa spostata verrà modificata.  Se esiste una stringa con lo stesso **ID**, verrà modificato l'**ID** della stringa spostata.  Se esiste una stringa con lo stesso **valore**, verrà modificato il **valore** della stringa spostata.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, ovvero quelli che utilizzano Common Language Runtime, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [String Editor](../mfc/string-editor.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Personalizzazione del layout della finestra](../Topic/Customizing%20window%20layouts%20in%20Visual%20Studio.md)   
 [Stringhe](_win32_Strings)   
 [Informazioni sulle stringhe](_win32_About_Strings_cpp)