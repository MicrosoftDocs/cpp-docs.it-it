---
title: "Procedura: Leggere e scrivere nell&#39;area Commenti e suggerimenti della barra di stato | Microsoft Docs"
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
  - "area Commenti e suggerimenti, barra di stato"
  - "barra di stato, area Commenti e suggerimenti"
  - "barra di stato, panoramica"
ms.assetid: e639561c-e1e7-4660-b2a2-8bca80f34a29
caps.latest.revision: 12
caps.handback.revision: 12
manager: "douge"
---
# Procedura: Leggere e scrivere nell&#39;area Commenti e suggerimenti della barra di stato
L'area di feedback delle visualizzazioni della barra di stato di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] il testo in.  È possibile impostare e recuperare il testo, testo statico per la visualizzazione e evidenzia il testo visualizzato.  
  
### Per utilizzare l'area di feedback della barra di stato di Visual Studio  
  
1.  Ottenere un'istanza dell'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> , che viene resa disponibile tramite il servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> .  
  
2.  Determinare se la barra di stato verrà bloccata chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.IsFrozen%2A> dell'istanza di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> .  
  
3.  Impostare il testo dell'area di feedback chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.SetText%2A> e passando una stringa di testo.  
  
4.  Leggere il testo dell'area di feedback chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.GetText%2A> .  
  
## Esempio  
 Questo tag fornisce il comportamento standard della struttura.  
  
 [!code-cs[VSSDKFeedbackStatusBar#1](../misc/codesnippet/CSharp/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar_1.cs)]
 [!code-vb[VSSDKFeedbackStatusBar#1](../misc/codesnippet/VisualBasic/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar_1.vb)]  
  
 Nell'esempio precedente, il codice è le seguenti operazioni:  
  
-   Ottiene un'istanza dell'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> dal servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> .  
  
-   Verifica che la barra di stato verrà bloccata chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.IsFrozen%2A> .  
  
-   Impedisce l'impostazione di valori ulteriori aggiornamenti della barra di stato chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.FreezeOutput%2A> .  
  
-   Legge il testo dalla barra di stato chiamando il metodo e delle visualizzazioni di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.GetText%2A> in una finestra di messaggio.  
  
-   Consente gli aggiornamenti della barra di stato chiamando <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.FreezeOutput%2A> e un valore 0 nel parametro.  
  
-   Cancellare il contenuto della barra di stato chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Clear%2A> .  
  
## Vedere anche  
 [Estendere la barra di stato](../Topic/Extending%20the%20Status%20Bar.md)   
 [Procedura: Programmare l'area Indicatore di stato della barra di stato](../misc/how-to-program-the-progress-bar-region-of-the-status-bar.md)   
 [Procedura: Usare l'area Animazione della barra di stato](../misc/how-to-use-the-animation-region-of-the-status-bar.md)   
 [Procedura: Programmare l'area di progettazione della barra di stato](../misc/how-to-program-the-designer-region-of-the-status-bar.md)