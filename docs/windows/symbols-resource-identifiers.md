---
title: "Symbols: Resource Identifiers | Microsoft Docs"
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
  - "vc.editors.symbol.identifiers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbols, resource identifiers"
  - "symbols, creating"
  - "resource symbols"
  - "symbols, editing"
  - "resource editors, resource symbols"
ms.assetid: 8fccc09a-0237-4a65-b9c4-57d60c59e324
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Symbols: Resource Identifiers
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un simbolo è un identificatore \(ID\) di risorsa costituito da due parti: una stringa di testo \(nome del simbolo\) di cui viene eseguito il mapping a un valore integer \(valore del simbolo\). Ad esempio:  
  
```  
IDC_EDITNAME = 5100  
```  
  
 Molto spesso i nomi dei simboli sono denominati identificatori.  
  
 I simboli offrono un modo descrittivo per fare riferimento alle risorse e agli oggetti dell'interfaccia utente sia nel codice sorgente che durante l'uso negli editor di risorse. I simboli possono essere visualizzati e modificati facilmente mediante la [finestra di dialogo Simboli risorsa](../windows/viewing-resource-symbols.md).  
  
 Quando si crea una nuova risorsa o un nuovo oggetto risorsa, gli [editor di risorse](../mfc/resource-editors.md) forniscono alla risorsa un nome predefinito, ad esempio `IDC_RADIO1`, e le assegnano un valore. La definizione, costituita dal nome e dal valore, viene archiviata nel file Resource.h.  
  
> [!NOTE]
>  Quando si copiano risorse o oggetti risorsa da un file RC a un altro, Visual C\+\+ potrebbe modificare il valore del simbolo della risorsa trasferita o il nome e il valore del simbolo, allo scopo di evitare conflitti con i nomi o i valori dei simboli nel file esistente.  
  
 Il numero di risorse e simboli è direttamente proporzionale alle dimensioni e al livello di complessità dell'applicazione. Può quindi risultare difficile tenere traccia di un numero elevato di simboli distribuiti in diversi file. La finestra di dialogo [Simboli risorsa](../windows/resource-symbols-dialog-box.md) semplifica la gestione dei simboli offrendo uno strumento centrale che consente di:  
  
-   [Visualizzare i simboli risorsa](../windows/viewing-resource-symbols.md)  
  
-   [Creare nuovi simboli](../windows/creating-new-symbols.md)  
  
-   [Modificare i simboli non assegnati](../windows/changing-unassigned-symbols.md)  
  
-   [Eliminare i simboli non assegnati](../windows/deleting-unassigned-symbols.md)  
  
-   [Aprire l'editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md)  
  
-   [Modificare un simbolo o il nome di un simbolo \(ID\)](../windows/changing-a-symbol-or-symbol-name-id.md)  
  
-   [Modificare il valore numerico di un simbolo](../windows/changing-a-symbol-s-numeric-value.md)  
  
-   [Modificare i nomi nei file di intestazione simboli](../windows/changing-the-names-of-symbol-header-files.md)  
  
-   [Includere simboli condivisi \(di sola lettura\) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md)  
  
-   [Visualizzare gli ID simbolo predefiniti](../windows/predefined-symbol-ids.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [How to: Search for Symbols in Resources](../windows/how-to-search-for-symbols-in-resources.md)   
 [Resource Editors](../mfc/resource-editors.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)