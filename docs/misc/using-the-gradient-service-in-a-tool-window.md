---
title: "Uso del servizio di sfumatura in una finestra degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "servizi, procedure dettagliate"
  - "finestre degli strumenti, servizio di sfumatura"
  - "servizio di sfumatura, procedure dettagliate"
  - "servizi, utilizzo"
ms.assetid: 67590982-6e1f-4e4b-be18-7d1b294cabff
caps.latest.revision: 44
caps.handback.revision: 44
manager: "douge"
---
# Uso del servizio di sfumatura in una finestra degli strumenti
Poiché le finestre degli strumenti di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] sono compilate con Windows \(WPF\) Presentation Foundation, non è necessario chiamare il servizio sfumato nel codice.  A il contrario, nella finestra di progettazione che rappresenta la superficie della finestra degli strumenti, selezionare l'elemento di `Elemento StackPanel` , quindi nella finestra di **proprietà** , modificare la proprietà di **sfondo** per impostare la sfumatura.  Per ulteriori informazioni, vedere [Impostazione di colori, sfumature e opacità](../misc/setting-colors-gradients-and-opacity.md).  
  
## Vedere anche  
 [NOT IN BUILD: Tool Window Walkthroughs](http://msdn.microsoft.com/it-it/ecffc579-0e96-48ad-90f3-01a3d80f3ce5)   
 [Estensione delle finestre degli strumenti](../misc/extending-tool-windows.md)   
 [Impostazione di colori, sfumature e opacità](../misc/setting-colors-gradients-and-opacity.md)