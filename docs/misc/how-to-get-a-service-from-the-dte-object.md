---
title: "Procedura: Ottenere un servizio dall&#39;oggetto DTE | Microsoft Docs"
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
  - "servizi, dall'oggetto DTE"
ms.assetid: c26a51d4-86f0-454b-9625-5443e55eec7d
caps.latest.revision: 13
caps.handback.revision: 13
manager: "douge"
---
# Procedura: Ottenere un servizio dall&#39;oggetto DTE
Un servizio può essere ottenuto da qualsiasi programma che ha accesso all' oggetto di <xref:EnvDTE.DTEClass> di automazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Ad esempio, è possibile accedere al servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsActivityLog> da una procedura guidata tramite l'oggetto DTE.  È possibile utilizzare questo servizio per scrivere nel log attività.  Per ulteriori informazioni, vedere [Procedura: utilizzare il registro attività](../Topic/How%20to:%20Use%20the%20Activity%20Log.md).  
  
 L'oggetto DTE implementa <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider>, che è possibile utilizzare per eseguire una query per un servizio dal codice gestito utilizzando <xref:Microsoft.VisualStudio.Shell.ServiceProvider.GetService%2A>.  
  
### Per ottenere un servizio dall' oggetto DTE  
  
1.  Il codice seguente crea <xref:Microsoft.VisualStudio.Shell.ServiceProvider> dall' oggetto DTE e chiama <xref:Microsoft.VisualStudio.Shell.ServiceProvider.GetService%2A> con il tipo del servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsActivityLog> .  Il servizio viene eseguito il cast dell' interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsActivityLog>, utilizzata per scrivere una voce del registro attività.  Per ulteriori abou di informazioni come scrivere nel log attività, vedere [Procedura: utilizzare il registro attività](../Topic/How%20to:%20Use%20the%20Activity%20Log.md).  
  
     [!code-cs[GetAServiceFromTheDTEObject#1](../misc/codesnippet/CSharp/how-to-get-a-service-from-the-dte-object_1.cs)]
     [!code-vb[GetAServiceFromTheDTEObject#1](../misc/codesnippet/VisualBasic/how-to-get-a-service-from-the-dte-object_1.vb)]  
  
## Vedere anche  
 [Utilizzo e servizi](../Topic/Using%20and%20Providing%20Services.md)   
 [Funzionalità fondamentali del servizio](../Topic/Service%20Essentials.md)