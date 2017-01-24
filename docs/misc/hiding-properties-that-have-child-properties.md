---
title: "Nascondere le propriet&#224; con propriet&#224; figlio | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "proprietà [Visual Studio SDK], nascondere"
  - "finestra Proprietà, nascondere le proprietà con proprietà figlio"
ms.assetid: 6003607e-fc19-4bf9-a299-9f6adf8e92eb
caps.latest.revision: 13
caps.handback.revision: 13
manager: "douge"
---
# Nascondere le propriet&#224; con propriet&#224; figlio
Può essere opportuno nascondere le proprietà che presentano proprietà figlio:  
  
-   Se sono stati annidati i progetti in cui il progetto padre a livello di codice controlla alcuni aspetti del progetto figlio.  
  
-   Se si utilizza un controllo con una finestra di progettazione sofisticata non si desidera fornire agli sviluppatori accesso completo a tutte le proprietà del controllo.  
  
-   Se sono presenti proprietà dell'ambito di un oggetto e si desidera limitare la visualizzazione delle proprietà.  
  
### Per nascondere le proprietà che presentano proprietà figlio  
  
1.  Impostare il parametro di `pfDisplay` in <xref:Microsoft.VisualStudio.Shell.Interop.IVsPerPropertyBrowsing.DisplayChildProperties%2A> a `FALSE`.  
  
2.  Impostare il parametro di `pfHide` in <xref:Microsoft.VisualStudio.Shell.Interop.IVsPerPropertyBrowsing.HideProperty%2A> a `TRUE`.  
  
## Vedere anche  
 [Proprietà Visualizza griglia](../Topic/Properties%20Display%20Grid.md)