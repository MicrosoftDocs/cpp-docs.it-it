---
title: "Editing a String in a Version Information Resource | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.version"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "version information resources"
  - "resources [Visual Studio], editing version information"
ms.assetid: d3a7d4e4-7d31-47c2-902c-f50b8404ba4f
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Editing a String in a Version Information Resource
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per modificare una stringa in una risorsa di informazioni sulla versione  
  
1.  Fare clic sull'elemento per selezionarlo, quindi fare di nuovo clic per iniziare a modificarlo. Apportare le modifiche direttamente nella tabella Informazioni sulla versione o nella [finestra Proprietà](../Topic/Properties%20Window.md). Le modifiche verranno riflesse in entrambe le posizioni.  
  
     **Nota** Quando si modifica la chiave **FILEFLAGS** nell'editor delle informazioni sulla versione, si noterà che non è possibile impostare la proprietà **Debug**, **Private Build** o **Special Build** \(nella finestra Proprietà\) per i file con estensione rc:  
  
    -   L'editor delle informazioni sulla versione imposta la proprietà **Debug** con un \#ifdef nello script di risorsa, in base al flag di compilazione **\_DEBUG**.  
  
    -   Se per la chiave **Private Build** è impostato un **Valore** nella tabella di informazioni sulla versione, la proprietà **Private Build** corrispondente \(nella finestra Proprietà\) per la chiave **FILEFLAGS** sarà **True**. Se **Valore** è vuoto, la proprietà sarà **False**. Analogamente, la chiave **Special Build** \(nella tabella di informazioni sulla versione\) è associata alla proprietà **Special Build** per la chiave **FILEFLAGS**.  
  
 È possibile ordinare la sequenza di informazioni del blocco di stringhe facendo clic sull'intestazione di colonna Chiave o Valore. Queste intestazioni riordinano automaticamente le informazioni nella sequenza selezionata.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [Version Information Editor](../mfc/version-information-editor.md)   
 [Informazioni sulla versione \(Windows\)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)