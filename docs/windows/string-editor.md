---
title: "String Editor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.string.F1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "String editor"
  - "string tables"
  - "string tables, String editor"
  - "string editing"
  - "string editing, string tables"
  - "resource editors, String editor"
  - "strings [C++], editing"
ms.assetid: f71ab8de-3068-4e29-8e28-5a33d18dd416
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# String Editor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una tabella di stringhe è una risorsa di Windows che contiene un elenco di ID, valori e didascalie per tutte le stringhe dell'applicazione. Ad esempio, nella tabella di stringhe sono contenuti i prompt della barra di stato.  
  
 Quando si sviluppa un'applicazione possono essere presenti più tabelle di stringhe, uno per ogni lingua o condizione. Un modulo eseguibile, invece, ha una sola tabella di stringhe. Un'applicazione in esecuzione può fare riferimento a più tabelle di stringhe se le tabelle vengano inserite in DLL diverse.  
  
 Le tabelle di stringhe semplificano la localizzazione dell'applicazione in diverse lingue. Se tutte le stringhe si trovano in una tabella di stringhe, è possibile localizzare l'applicazione traducendo le stringhe e altre risorse senza modificare il codice sorgente. Questa procedura è in genere preferibile alla ricerca e alla sostituzione manuali delle diverse stringhe nei file di origine.  
  
 Con l'editor stringhe è possibile:  
  
-   [Cercare una o più stringhe](../mfc/finding-a-string.md).  
  
-   [Inserire nuove voci](../mfc/adding-or-deleting-a-string.md) nella tabella di stringhe in modo rapido.  
  
-   [Spostare una stringa da un file di risorse a un altro](../mfc/moving-a-string-from-one-resource-file-to-another.md)  
  
-   [Usare la modifica sul posto per le proprietà ID, Value e Caption](../mfc/changing-the-properties-of-a-string.md) e visualizzare immediatamente le modifiche.  
  
-   [Modificare la proprietà Caption di più stringhe](../mfc/changing-the-caption-property-of-multiple-strings.md)  
  
-   [Aggiungere caratteri speciali o di formattazione a una stringa](../mfc/adding-formatting-or-special-characters-to-a-string.md)  
  
    > [!NOTE]
    >  Windows non consente la creazione di tabelle di stringhe vuote. Se si crea una tabella di stringhe priva di voci, questa verrà eliminata automaticamente al salvataggio del file di risorse.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, ovvero quelli che usano Common Language Runtime, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Resource Editors](../mfc/resource-editors.md)   
 [Stringhe](http://msdn.microsoft.com/library/windows/desktop/ms646979.aspx)   
 [Informazioni sulle stringhe](http://msdn.microsoft.com/library/windows/desktop/ms647465.aspx)