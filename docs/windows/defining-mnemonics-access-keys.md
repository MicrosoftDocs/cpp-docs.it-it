---
title: "Defining Mnemonics (Access Keys) | Microsoft Docs"
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
  - "C++"
helpviewer_keywords: 
  - "access keys [C++], adding"
  - "keyboard shortcuts [C++], controls"
  - "dialog box controls, mnemonics"
  - "access keys [C++], checking"
  - "mnemonics, checking for duplicate"
  - "mnemonics"
  - "mnemonics, dialog box controls"
  - "keyboard shortcuts [C++], uniqueness checking"
  - "Check Mnemonics command"
  - "controls [C++], access keys"
  - "access keys [C++]"
ms.assetid: 60a85435-aa30-4c5c-98b6-42fb045b9eb2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Defining Mnemonics (Access Keys)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli utenti che utilizzano la tastiera spostano in genere lo stato attivo per l'input da un controllo a un altro all'interno di una finestra di dialogo mediante i tasti di direzione e TAB.  È tuttavia possibile definire un tasto di scelta, corrispondente ad esempio a un nome facile da memorizzare, che consenta di scegliere un controllo premendo un singolo tasto.  
  
### Per definire un tasto di scelta per un controllo con una didascalia visibile \(pulsanti di comando, caselle di controllo e di opzione\)  
  
1.  Selezionare il controllo nella finestra di dialogo.  
  
2.  Nella [finestra Proprietà](../Topic/Properties%20Window.md), in corrispondenza della proprietà **Caption**, digitare un nuovo nome per il controllo, digitando una e commerciale \(**&**\) prima della lettera che si desidera utilizzare come tasto di scelta per il controllo selezionato.  Digitare ad esempio `&Radio1`.  
  
3.  Premere **Invio**.  
  
     Nella didascalia verrà visualizzato un carattere sottolineato per indicare il tasto di scelta, ad esempio **R**adio1.  
  
### Per definire un tasto di scelta per un controllo senza una didascalia visibile  
  
1.  Creare una didascalia per il controllo utilizzando il controllo **Static Text** nella [Casella degli strumenti](../Topic/Toolbox.md).  
  
2.  Nella didascalia di testo statico digitare una e commerciale \(**&**\) prima della lettera che si desidera utilizzare come tasto di scelta.  
  
3.  Assicurarsi che il controllo di testo statico preceda immediatamente nell'ordine di tabulazione il controllo a cui assegna un'etichetta.  
  
 È necessario che tutti i tasti di scelta all'interno di una finestra di dialogo siano univoci.  
  
#### Per verificare la presenza di tasti di scelta duplicati  
  
1.  Scegliere **Tasti di scelta** dal menu **Formato**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requisiti  
 Win32  
  
## Vedere anche  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)