---
title: "Errore MSB3253 di MSBuild | Microsoft Docs"
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
  - "MSB3253"
ms.assetid: d4b5eb5b-703b-4b80-aa5d-6c70ff9fe84d
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Errore MSB3253 di MSBuild
**MSB3253: l'assembly \<nome\> di riferimento dipende da \<nome2\> che non è elencato come parte di .NET Framework Client Profile.**  
  
 Uno degli assembly, o assembly dipendenti, a cui si fa riferimento nel progetto dipende da un altro assembly che non è contenuto in [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)].  
  
 Questo errore si verifica in genere quando un progetto fa riferimento a un controllo o a una DLL di terze parti che a sua volta fa riferimento a un assembly esterno.  Ad esempio, un progetto utilizza un controllo che a sua volta utilizza funzionalità contenute nella versione completa di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)].  Se in un secondo momento l'applicazione viene destinata a [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] e viene installata in un sistema che non dispone di [!INCLUDE[net_v35_long](../misc/includes/net_v35_long_md.md)], è possibile che non funzioni correttamente se tenta di accedere a funzionalità non contenute nel sottoinsieme [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)].  
  
 Questo messaggio di errore è in realtà solo un avviso. La compilazione dell'applicazione verrà comunque eseguita.  Tuttavia, si possono verificare problemi in seguito se il controllo o la DLL fa riferimento a funzionalità contenute in un assembly mancante.  
  
 [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] è un sottoinsieme della libreria di runtime completa di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] 3.5.  Per ulteriori informazioni su [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)], vedere [Profilo client .NET Framework](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
### Per correggere l'errore  
  
-   Rimuovere dal progetto il riferimento all'assembly specificato o scegliere come destinazione la versione completa di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] anziché il sottoinsieme [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] della libreria.  Per informazioni su come destinare l'applicazione alla versione completa di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)], vedere [Procedura: destinare una versione di .NET Framework](../Topic/How%20to:%20Target%20a%20Version%20of%20the%20.NET%20Framework.md).  
  
## Vedere anche  
 [Target Framework and Target Platform](../Topic/MSBuild%20Target%20Framework%20and%20Target%20Platform.md)   
 [Project Element \(MSBuild\)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)