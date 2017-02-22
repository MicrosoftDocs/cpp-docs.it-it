---
title: "Creating a Menu | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.menu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mnemonics, associating menu items"
  - "menus, associating commands with mnemonic keys"
  - "menus, creating"
ms.assetid: 66f94448-9b97-4b73-bf97-10d4bf87cc65
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Creating a Menu
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La finestra delle risorse non è disponibile nelle edizioni Express.  
  
### Per creare un menu standard  
  
1.  Scegliere **Visualizzazione risorse** nel menu **Visualizza**, quindi fare clic con il pulsante destro del mouse sull'intestazione **Menu** e scegliere **Aggiungi risorsa**. Scegliere **Menu**.  
  
2.  Selezionare la casella **Nuovo elemento** \(il rettangolo che contiene "Digitare qui"\) nella barra dei menu.  
  
     ![Casella Nuovo elemento dell'editor menu](../windows/media/vcmenueditornewitembox.gif "vcMenuEditorNewItemBox")  
Casella Nuovo elemento  
  
3.  Digitare un nome per il nuovo menu, ad esempio "File".  
  
     Il testo immesso verrà visualizzato nell'editor di **menu** e nella casella **Didascalia** della [finestra Proprietà](../Topic/Properties%20Window.md). È possibile modificare le proprietà per il nuovo menu in questa posizione.  
  
     Dopo aver assegnato al nuovo menu un nome nella barra dei menu, la casella del nuovo elemento viene spostata verso destra \(per consentire l'aggiunta di un altro menu\) e un'altra casella del nuovo elemento viene visualizzata sotto il primo menu in modo da poter aggiungere i comandi di menu.  
  
     ![Casella Nuovo elemento espansa](../windows/media/vcmenueditornewitemboxexpanded.gif "vcMenuEditorNewItemBoxExpanded")  
Casella del nuovo elemento con stato attivo spostato dopo aver digitato il nome del menu  
  
    > [!NOTE]
    >  Per creare un menu con un singolo elemento nella barra dei menu, impostare la proprietà Popup su False.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [Menu Editor](../mfc/menu-editor.md)