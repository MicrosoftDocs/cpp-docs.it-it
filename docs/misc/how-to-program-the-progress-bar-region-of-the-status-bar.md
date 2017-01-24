---
title: "Procedura: Programmare l&#39;area Indicatore di stato della barra di stato | Microsoft Docs"
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
  - "barra di stato, area Indicatore di stato"
  - "indicatore di stato, barra di stato"
  - "barra di stato, programmazione"
ms.assetid: 4b54616a-8c20-436d-b764-f2380e5760f2
caps.latest.revision: 11
caps.handback.revision: 11
manager: "douge"
---
# Procedura: Programmare l&#39;area Indicatore di stato della barra di stato
L'area dell'indicatore di stato della barra di stato di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] visualizzare lo stato incrementale delle operazioni rapide, ad esempio, per il salvataggio di un file su disco.  
  
### Per utilizzare l'area indicatore di stato della barra di stato di Visual Studio  
  
1.  Ottenere un'istanza dell'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> , che viene resa disponibile tramite il servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> .  
  
2.  inizializzare l'indicatore di stato ai valori iniziali chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Progress%2A> .  
  
3.  Aggiornare l'indicatore di stato mentre l'operazione viene eseguita tramite il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Progress%2A> per impostare i nuovi valori.  
  
## Esempio  
 In questo esempio viene illustrato come inizializzare e aggiornare l'indicatore di stato.  
  
 [!code-cs[VSSDKProgressStatusBar#1](../misc/codesnippet/CSharp/how-to-program-the-progress-bar-region-of-the-status-bar_1.cs)]
 [!code-vb[VSSDKProgressStatusBar#1](../misc/codesnippet/VisualBasic/how-to-program-the-progress-bar-region-of-the-status-bar_1.vb)]  
  
 Nell'esempio, il codice:  
  
-   Ottiene un'istanza dell'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar> dal servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsStatusbar> .  
  
-   Inizializza l'indicatore di stato ai valori iniziali specificate chiamando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Progress%2A> .  
  
-   Simula un'operazione scorrendo un ciclo di `for` e aggiornamento dei valori dell'indicatore di stato utilizzando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Progress%2A> .  
  
-   Rimuove l'indicatore di stato utilizzando il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsStatusbar.Clear%2A> .  
  
## Vedere anche  
 [Estendere la barra di stato](../Topic/Extending%20the%20Status%20Bar.md)   
 [Procedura: Leggere e scrivere nell'area Commenti e suggerimenti della barra di stato](../misc/how-to-read-from-and-write-to-the-feedback-region-of-the-status-bar.md)   
 [Procedura: Usare l'area Animazione della barra di stato](../misc/how-to-use-the-animation-region-of-the-status-bar.md)   
 [Procedura: Programmare l'area di progettazione della barra di stato](../misc/how-to-program-the-designer-region-of-the-status-bar.md)