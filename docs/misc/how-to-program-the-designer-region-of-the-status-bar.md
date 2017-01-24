---
title: "Procedura: Programmare l&#39;area di progettazione della barra di stato | Microsoft Docs"
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
  - "area di progettazione, barra di stato"
  - "barre di stato, programmazione"
  - "barre di stato, area di progettazione"
ms.assetid: 735a86bb-80b2-4557-9677-00799856017f
caps.latest.revision: 11
caps.handback.revision: 11
manager: "douge"
---
# Procedura: Programmare l&#39;area di progettazione della barra di stato
L'area di progettazione della barra di stato di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] visualizzare le informazioni relative alla modifica, ad esempio, il numero di riga o il numero di colonne della posizione del cursore.  
  
### Per programmare l'area di progettazione della barra di stato di Visual Studio  
  
1.  Ottenere un'istanza dell'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> , che viene resa disponibile tramite il servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> .  
  
2.  Aggiornare l'area di progettazione della barra di stato chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.SetInsMode%2A> e il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.SetLineColChar%2A> dell'istanza di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> .  
  
## Esempio  
 In questo esempio viene illustrato come programmare l'area di progettazione della barra di stato.  
  
 [!code-vb[VSSDKDesignerStatusBar#1](../misc/codesnippet/VisualBasic/how-to-program-the-designer-region-of-the-status-bar_1.vb)]
 [!code-cs[VSSDKDesignerStatusBar#1](../misc/codesnippet/CSharp/how-to-program-the-designer-region-of-the-status-bar_1.cs)]  
  
## Vedere anche  
 [Estendere la barra di stato](../Topic/Extending%20the%20Status%20Bar.md)   
 [Procedura: Leggere e scrivere nell'area Commenti e suggerimenti della barra di stato](../misc/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar.md)   
 [Procedura: Programmare l'area Indicatore di stato della barra di stato](../misc/how-to-program-the-progress-bar-region-of-the-status-bar.md)   
 [Procedura: Usare l'area Animazione della barra di stato](../misc/how-to-use-the-animation-region-of-the-status-bar.md)