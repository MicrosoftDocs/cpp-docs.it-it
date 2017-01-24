---
title: "Procedura: Registrare un servizio | Microsoft Docs"
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
  - "servizi, registrazione"
ms.assetid: d086be78-ec3c-43cc-b799-5180a71e19f1
caps.latest.revision: 16
caps.handback.revision: 16
manager: "douge"
---
# Procedura: Registrare un servizio
Il framework di pacchetto gestito \(MPF\) fornisce gli attributi per controllare la registrazione dei servizi gestiti. L'utilità RegPkg usa questi attributi per registrare un servizio con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## Esempio  
 Il codice che segue proviene da [Esempi di VSSDK](../misc/vssdk-samples.md).  
  
 [!code-vb[VSSDKRegisterService#1](../misc/codesnippet/VisualBasic/how-to-register-a-service_1.vb)]
 [!code-cs[VSSDKRegisterService#1](../misc/codesnippet/CSharp/how-to-register-a-service_1.cs)]  
  
 L'attributo <xref:Microsoft.VisualStudio.Shell.ProvideServiceAttribute> registra il servizio SMyGlobalService con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Per ulteriori informazioni su <xref:Microsoft.VisualStudio.Shell.DefaultRegistryRootAttribute> e su <xref:Microsoft.VisualStudio.Shell.PackageRegistrationAttribute>, vedere [Package VS della registrazione e annullamento della registrazione](../Topic/Registering%20and%20Unregistering%20VSPackages.md).  
  
 Per registrare un servizio che sostituisce un altro servizio con lo stesso nome, usare l'attributo <xref:Microsoft.VisualStudio.Shell.ProvideServiceOverrideAttribute> anziché l'attributo <xref:Microsoft.VisualStudio.Shell.ProvideServiceAttribute>.  
  
## Programmazione efficiente  
 Per semplificare la ricompilazione di un provider di servizi senza modificare il client del servizio, o viceversa, è possibile definire il servizio e le relative interfacce in un modulo di assembly separato. Il codice seguente proviene dal file IMyGlobalService.cs nell'esempio Reference.Services \(C\#\).  
  
 [!code-vb[VSSDKRegisterService#2](../misc/codesnippet/VisualBasic/how-to-register-a-service_2.vb)]
 [!code-cs[VSSDKRegisterService#2](../misc/codesnippet/CSharp/how-to-register-a-service_2.cs)]  
  
 L'attributo <xref:System.Runtime.InteropServices.ComVisibleAttribute> è necessario per ottenere l'interfaccia dal codice non gestito.  
  
> [!NOTE]
>  Nonostante sia possibile usare lo stesso tipo o GUID per il servizio e l'interfaccia, è consigliabile separarli perché un servizio può esporre interfacce diverse.  
  
## Vedere anche  
 [Registering VSPackages](http://msdn.microsoft.com/it-it/31e6050f-1457-4849-944a-a3c36b76f3dd)   
 [Funzionalità fondamentali del servizio](../Topic/Service%20Essentials.md)