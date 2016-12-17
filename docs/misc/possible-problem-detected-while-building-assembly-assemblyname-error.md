---
title: "Rilevato un possibile problema durante la compilazione dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39;: &lt;errore&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc40010"
  - "bc40010"
helpviewer_keywords: 
  - "BC40010"
ms.assetid: 3a4f4a4a-a5ad-4501-bf4c-0fbf25c50734
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Rilevato un possibile problema durante la compilazione dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39;: &lt;errore&gt;
Lo strumento ALink, chiamato dal compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)], segnala un errore durante la compilazione dell'assembly. Ecco alcune possibili cause:  
  
-   Un assembly firmato che fa riferimento a un assembly non firmato. In questo caso, è opportuno considerare se l'assembly a cui si fa riferimento soddisfa gli specifici criteri di sicurezza.  
  
-   La generazione di un'applicazione a 64 bit su una piattaforma a 32 bit. In questo caso, è necessario assicurarsi che le versioni a 64 bit di tutti gli assembly a cui si fa riferimento siano installati sulla piattaforma di destinazione. Per gli assembly di Common Language Runtime \(CLR\) questa operazione viene gestita automaticamente, anche se il messaggio di errore viene comunque generato.  
  
 Si tratta di un messaggio di avviso. Il compilatore continua a generare l'assembly. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40010  
  
### Per correggere l'errore  
  
1.  Esaminare il messaggio di errore tra virgolette e intraprendere l'azione appropriata.  
  
2.  Ripetere la compilazione del programma, per controllare se l'errore si verifica di nuovo.  
  
3.  Se l'errore si ripresenta, reinstallare il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  
  
4.  Se l'errore persiste dopo la reinstallazione, raccogliere informazioni sulla situazione contingente e informare il Servizio supporto tecnico Microsoft.  
  
## Vedere anche  
 [PAVEOVER Supporto tecnico e accessibilità](http://msdn.microsoft.com/it-it/14e1d293-7b6d-40a6-bf3e-a92f8ee6c88c)   
 [Common Language Runtime Overview](http://msdn.microsoft.com/it-it/0fd9aeae-af10-435f-86d4-e76619741e4a)