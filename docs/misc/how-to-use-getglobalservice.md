---
title: "Procedura: Usare GetGlobalService | Microsoft Docs"
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
  - "servizi, GetGlobalService"
ms.assetid: 4cdf5ab5-9f09-4caf-9011-2dcb2c62f1b7
caps.latest.revision: 14
caps.handback.revision: 14
manager: "douge"
---
# Procedura: Usare GetGlobalService
Talvolta può essere necessario ottenere un servizio da una finestra degli strumenti o da un contenitore di controlli che non sono stati collocati, o è stato collocati con un provider di servizi che non è al servizio desiderato.  Ad esempio, potrebbe essere necessario scrivere nel log attività dall'interno di un controllo.  Per ulteriori informazioni su questi e altri scenari, vedere [Procedura: risolvere i problemi relativi a servizi](../Topic/How%20to:%20Troubleshoot%20Services.md).  
  
 È possibile ottenere la maggior parte dei servizi di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] chiamando il metodo statico di <xref:Microsoft.VisualStudio.Shell.Package.GetGlobalService%2A> .  
  
 <xref:Microsoft.VisualStudio.Shell.Package.GetGlobalService%2A> si basa su un provider di servizi memorizzato nella cache inizializzato la prima volta il package VS derivato da <xref:Microsoft.VisualStudio.Shell.Package> è collocato.  È necessario accertarsi che questa condizione viene soddisfatta, altrimenti essere preparati per un servizio null.  
  
 Fortunatamente, il funzionamento di <xref:Microsoft.VisualStudio.Shell.Package.GetGlobalService%2A> correttamente per la maggior parte dei casi.  
  
-   Se un VSPackage fornisce un servizio noto solo a un altro package VS, il package VS che richiede il servizio viene situato prima che il package VS che fornisce il servizio venga caricato.  
  
-   Se una finestra degli strumenti viene creata da un package VS, il package VS è collocato prima che la finestra degli strumenti sia creato.  
  
-   Se un contenitore di controlli è ospitato da una finestra degli strumenti creata da un package VS, il package VS è collocato prima che il contenitore di controlli venga creato.  
  
### Per ottenere un servizio dall'interno di una finestra degli strumenti o un contenitore di controlli  
  
-   Inserire il codice nel costruttore, nella finestra degli strumenti, o nel contenitore di controlli:  
  
     [!code-vb[UseGetGlobalService#1](../misc/codesnippet/VisualBasic/how-to-use-getglobalservice_1.vb)]
     [!code-cs[UseGetGlobalService#1](../misc/codesnippet/CSharp/how-to-use-getglobalservice_1.cs)]  
  
     Questo codice ottiene un servizio di SVsActivityLog e ne viene eseguito il cast in un'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsActivityLog> , che può essere utilizzata per scrivere nel log attività.  Per un esempio, vedere [Procedura: utilizzare il registro attività](../Topic/How%20to:%20Use%20the%20Activity%20Log.md).  
  
## Vedere anche  
 [Procedura: risolvere i problemi relativi a servizi](../Topic/How%20to:%20Troubleshoot%20Services.md)   
 [Utilizzo e servizi](../Topic/Using%20and%20Providing%20Services.md)   
 [Funzionalità fondamentali del servizio](../Topic/Service%20Essentials.md)