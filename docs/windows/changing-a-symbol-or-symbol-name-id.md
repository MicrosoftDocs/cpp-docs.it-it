---
title: "Changing a Symbol or Symbol Name (ID) | Microsoft Docs"
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
  - "vc.editors.symbol.changing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbol names"
  - "symbols, names"
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Changing a Symbol or Symbol Name (ID)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea una nuova risorsa o un oggetto risorsa, l'ambiente di sviluppo gli assegna un nome di simbolo predefinito, ad esempio IDD\_DIALOG1.  È possibile usare la [finestra Proprietà](../Topic/Properties%20Window.md) per modificare il nome del simbolo predefinito o per modificare il nome di qualsiasi simbolo già associato a una risorsa.  
  
### Per modificare il nome del simbolo di una risorsa  
  
1.  In [Visualizzazione risorse](../windows/resource-view-window.md) selezionare la risorsa.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nella finestra **Proprietà** digitare il nuovo nome di un simbolo o selezionarlo dall'elenco dei simboli esistenti nella casella **ID**.  
  
     Se si digita il nuovo nome di un simbolo, gli viene assegnato automaticamente un valore.  
  
 È possibile usare la [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare i nomi dei simboli non attualmente assegnati a una risorsa.  Per altre informazioni vedere [Modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Symbol Name Restrictions](../windows/symbol-name-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)