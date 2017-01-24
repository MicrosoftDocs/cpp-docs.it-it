---
title: "Associating a Menu Command with an Accelerator Key | Microsoft Docs"
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
  - "keyboard shortcuts, menu association"
  - "commands, associating menu commands with accelerator keys"
  - "menu commands, associating with keyboard shortcuts"
ms.assetid: ad2de43f-b20a-4c9f-bda8-0420179da48c
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Associating a Menu Command with an Accelerator Key
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Spesso è utile che una voce di menu e una combinazione di tasti eseguano lo stesso comando del programma. A questo scopo, è possibile usare l'editor di menu per assegnare lo stesso identificatore di risorsa al comando di menu e a una voce nella tabella dei tasti di scelta rapida dell'applicazione. Quindi si modifica la [Didascalia](../windows/menu-command-properties.md) del comando di menu per visualizzare il nome del tasto di scelta rapida.  
  
### Per associare un comando di menu a un tasto di scelta rapida  
  
1.  Nell'editor **Menu** selezionare il comando di menu desiderato.  
  
2.  Nella [Finestra Proprietà](../Topic/Properties%20Window.md) aggiungere il nome del tasto di scelta rapida alla proprietà **Caption**:  
  
    -   Dopo la didascalia di menu, digitare la sequenza di escape relativa a un carattere di tabulazione \(\\t\), in modo che tutti che i tasti di scelta rapida del menu vengano allineati a sinistra.  
  
    -   Digitare il nome del tasto di modifica \(**CTRL**, **ALT** o **MAIUSC**\) seguito da un segno più \(**\+**\) e dal nome, dalla lettera o dal simbolo del tasto aggiuntivo.  
  
         Ad esempio, per assegnare **CTRL\+O** al comando **Apri** nel menu **File**, è possibile modificare la proprietà **Caption** nel modo seguente:  
  
        ```  
        &Open...\tCtrl+O   
        ```  
  
         Nell'editor di menu il comando di menu viene aggiornato in modo da riflettere la nuova didascalia mentre viene digitata.  
  
3.  [Creare la voce della tabella dei tasti di scelta rapida](../windows/adding-an-entry-to-an-accelerator-table.md) nell'editor **tasti di scelta rapida**, assegnando lo stesso identificatore del comando di menu. Usare una combinazione di tasti che sia facile da ricordare.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [Adding Commands to a Menu](../windows/adding-commands-to-a-menu.md)   
 [Menu Editor](../mfc/menu-editor.md)