---
title: "Changing the Tab Order of Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controls [C++], tab order"
  - "focus, tab order"
  - "tab controls, tab order"
  - "Tabstop property for controls"
  - "controls [C++], focus"
  - "dialog box controls, tab order"
ms.assetid: e2cee764-4367-42d7-9563-65a68f76f5ff
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Changing the Tab Order of Controls
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'ordine di tabulazione è l'ordine in cui il tasto TAB consente di spostare lo stato attivo per l'input da un controllo al successivo all'interno di una finestra di dialogo.  In una finestra di dialogo l'ordine di tabulazione procede in genere da sinistra verso destra e dall'alto verso il basso.  Ogni controllo dispone di una proprietà **Tabstop** che determina se un controllo riceve lo stato attivo per l'input.  
  
### Per impostare lo stato attivo per l'input per un controllo  
  
1.  Nella [Finestra Proprietà](../Topic/Properties%20Window.md), selezionare **True** o **False** per la proprietà **Tabstop**.  
  
 È necessario che anche i controlli per i quali la proprietà Tabstop non è stata impostata su True facciano parte dell'ordine di tabulazione.  Questo può rivelarsi importante, ad esempio, quando si [definiscono tasti di scelta](../mfc/defining-mnemonics-access-keys.md) per i controlli che non dispongono di didascalie.  È necessario che il testo statico contenente un tasto di scelta per un controllo correlato preceda immediatamente il controllo correlato nell'ordine di tabulazione.  
  
> [!NOTE]
>  Se la finestra di dialogo contiene controlli sovrapposti, la modifica dell'ordine di tabulazione potrebbe modificare il modo in cui vengono visualizzati i controlli.  I controlli successivi nell'ordine di tabulazione vengono sempre visualizzati sopra i controlli sovrapposti che li precedono nell'ordine di tabulazione.  
  
#### Per visualizzare l'ordine di tabulazione corrente per tutti i controlli di una finestra di dialogo  
  
1.  Scegliere **Ordine di tabulazione** dal menu **Formato**.  
  
 \- oppure \-  
  
-   Premere CTRL \+ D.  
  
#### Per modificare l'ordine di tabulazione per tutti i controlli di una finestra di dialogo  
  
1.  Scegliere **Ordine di tabulazione** dal menu **Formato**.  
  
     Il numero visualizzato nell'angolo superiore sinistro di ciascun controllo ne indica la posizione nell'ordine di tabulazione corrente.  
  
2.  Impostare l'ordine di tabulazione facendo clic su ciascun controllo nell'ordine che si desidera che segua il tasto TAB.  
  
3.  Premere **INVIO** per uscire dalla modalità **Ordine di tabulazione**.  
  
    > [!TIP]
    >  Dopo aver attivato la modalità Ordine di tabulazione, premendo ESC o INVIO è possibile disabilitare la funzione di modifica dell'ordine di tabulazione.  
  
#### Per modificare l'ordine di tabulazione per due o più controlli  
  
1.  Scegliere **Ordine di tabulazione** dal menu **Formato**.  
  
2.  Specificare il controllo da cui inizierà la modifica dell'ordine di tabulazione.  A questo scopo, tenendo premuto **CTRL** fare clic sul controllo precedente a quello a partire dal quale si desidera modificare l'ordine.  
  
     Se ad esempio si desidera modificare l'ordine dei controlli da 7 a 9, selezionare innanzitutto il controllo 6 tenendo premuto CTRL.  
  
    > [!NOTE]
    >  Per impostare un controllo specifico come numero 1, ovvero come primo controllo nell'ordine di tabulazione, fare doppio clic sul controllo.  
  
3.  Rilasciare CTRL, quindi fare clic sui controlli nell'ordine che si desidera venga seguito dal tasto TAB a partire dal punto selezionato.  
  
4.  Premere **INVIO** per uscire dalla modalità **Ordine di tabulazione**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requisiti  
 Win32  
  
## Vedere anche  
 [Arrangement of Controls on Dialog Boxes](../mfc/arrangement-of-controls-on-dialog-boxes.md)   
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)