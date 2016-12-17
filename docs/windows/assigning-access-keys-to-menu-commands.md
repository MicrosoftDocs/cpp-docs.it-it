---
title: "Assigning Access Keys to Menu Commands | Microsoft Docs"
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
  - "access keys [C++], checking"
  - "menus, shortcut keys"
  - "keyboard shortcuts [C++], command assignments"
  - "access keys [C++], assigning"
  - "mnemonics, adding to menus"
  - "keyboard shortcuts [C++], uniqueness checking"
  - "mnemonics, uniqueness checking"
  - "Check Mnemonics command"
ms.assetid: fbcf1a00-af6a-4171-805a-0ac01d4e8b0d
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Assigning Access Keys to Menu Commands
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile assegnare un tasto di scelta \(che consente all'utente di selezionare il menu con la tastiera\) ai menu e comandi di menu.  
  
### Per assegnare un tasto di scelta \(scelta rapida\) a un comando di menu  
  
1.  Digitare una e commerciale \(**&**\) davanti a una lettera nel nome di menu o nel nome del comando per specificare tale lettera come tasto di scelta corrispondente. Ad esempio "&File" imposta ALT\+F come tasto di scelta rapida per il menu File nelle applicazioni scritte per Microsoft Windows.  
  
     La voce di menu visualizzerà un segnale visivo che indica che a una delle lettere è assegnato un tasto di scelta rapida. La lettera che segue la e commerciale verrà visualizzata con una sottolineatura \(a seconda del sistema operativo\).  
  
    > [!NOTE]
    >  Verificare che tutti i tasti di scelta di un menu siano univoci facendo clic con il pulsante destro del mouse sul menu e scegliendo **Tasti di scelta** dal menu di scelta rapida.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Menu Editor](../mfc/menu-editor.md)