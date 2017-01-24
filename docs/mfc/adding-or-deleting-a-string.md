---
title: "Adding or Deleting a String | Microsoft Docs"
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
  - "vc.editors.string"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strings [C++], adding to string tables"
  - "string tables, deleting strings"
  - "strings [C++], deleting in string tables"
  - "string tables, adding strings"
ms.assetid: 077077b4-0f4b-4633-92d6-60b321164cab
caps.latest.revision: 11
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding or Deleting a String
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile inserire rapidamente nuove voci nella tabella di stringhe utilizzando l'editor stringhe.  Alle nuove stringhe, inserite alla fine della tabella, viene assegnato il successivo identificatore disponibile.  È quindi possibile, se necessario, modificare le proprietà ID, Value o Caption nella [finestra Proprietà](../Topic/Properties%20Window.md).  
  
 L'editor stringhe garantisce che non venga utilizzato un ID già in uso.  Se si seleziona un ID già in uso, l'editor stringhe visualizzerà una notifica, quindi assegnerà un ID univoco generico, ad esempio IDS\_STRING58113.  
  
### Per aggiungere una voce a una tabella di stringhe  
  
1.  Aprire la tabella di stringhe facendo doppio clic sulla relativa icona in [Visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare clic con il pulsante destro del mouse all'interno della tabella di stringhe e scegliere **Nuova stringa** dal menu di scelta rapida.  
  
3.  Nell'editor **stringhe** selezionare un **ID** dalla casella di riepilogo a discesa o digitare direttamente un ID.  
  
4.  Modificare **Value**, se necessario.  
  
5.  Digitare una voce per **Caption**.  
  
    > [!NOTE]
    >  Le stringhe Null non sono ammesse nelle tabelle di stringhe di Windows.  Se nella tabella di stringhe viene creata una voce corrispondente a una stringa Null, verrà visualizzato il messaggio "Immettere una stringa per la voce della tabella".  
  
### Per eliminare una voce da una tabella di stringhe  
  
1.  Selezionare la voce che si desidera eliminare.  
  
2.  Scegliere **Elimina** dal menu **Modifica**.  
  
 \- oppure \-  
  
-   Fare clic con il pulsante destro del mouse sulla stringa che si desidera eliminare e scegliere **Elimina** dal menu di scelta rapida.  
  
 \- oppure \-  
  
-   Premere **CANC**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, ovvero quelli che utilizzano Common Language Runtime, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [String Editor](../mfc/string-editor.md)   
 [Stringhe](_win32_Strings)   
 [Informazioni sulle stringhe](_win32_About_Strings_cpp)