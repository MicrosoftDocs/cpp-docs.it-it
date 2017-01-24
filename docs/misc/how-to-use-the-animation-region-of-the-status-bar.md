---
title: "Procedura: Usare l&#39;area Animazione della barra di stato | Microsoft Docs"
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
  - "barra di stato, programmazione"
  - "barra di stato, area Animazione"
  - "area Animazione, barra di stato"
ms.assetid: ec6fb915-7bc8-4a90-8156-70c1a243caff
caps.latest.revision: 14
caps.handback.revision: 14
manager: "douge"
---
# Procedura: Usare l&#39;area Animazione della barra di stato
L'area di animazione della barra di stato di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] visualizzare un'animazione ciclico che indica una un'operazione lunga o un'operazione di lunghezza indeterminata \(ad esempio, la compilazione di più progetti in una soluzione.  
  
### Per utilizzare l'area di animazione della barra di stato di Visual Studio  
  
1.  Ottenere un'istanza dell'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> , che viene resa disponibile tramite il servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> .  
  
2.  Avviare l'animazione chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Animation%2A> barra di stato.  Passare 1 come valore del primo parametro e un riferimento a un'icona animata come valore del secondo parametro.  
  
3.  Arrestare l'animazione chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Animation%2A> barra di stato.  Passare 0 come valore del primo parametro e un riferimento all'icona animata come valore del secondo parametro.  
  
## Esempio  
 In questo esempio viene illustrato come eseguire un'animazione incorporata nell'area di animazione.  
  
 [!code-cs[VSSDKAnimationStatusBar#1](../misc/codesnippet/CSharp/how-to-use-the-animation-region-of-the-status-bar_1.cs)]
 [!code-vb[VSSDKAnimationStatusBar#1](../misc/codesnippet/VisualBasic/how-to-use-the-animation-region-of-the-status-bar_1.vb)]  
  
## Vedere anche  
 [Estendere la barra di stato](../Topic/Extending%20the%20Status%20Bar.md)   
 [Procedura: Leggere e scrivere nell'area Commenti e suggerimenti della barra di stato](../misc/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar.md)   
 [Procedura: Programmare l'area Indicatore di stato della barra di stato](../misc/how-to-program-the-progress-bar-region-of-the-status-bar.md)   
 [Procedura: Programmare l'area di progettazione della barra di stato](../misc/how-to-program-the-designer-region-of-the-status-bar.md)