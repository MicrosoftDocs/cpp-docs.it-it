---
title: "Warning: Found conflicts between different versions of the same dependent assembly | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ResolveAssemblyReference.SuggestedRedirects"
ms.assetid: fd14a789-bbdf-46c7-bcd3-9d3165adf96d
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Warning: Found conflicts between different versions of the same dependent assembly
Questo avviso viene visualizzato se il grafico della dipendenza del progetto contiene riferimenti a versioni diverse dello stesso assembly.  
  
 Se è presente un file app.config, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] consente di aggiungervi un reindirizzamento dell'associazione.  Un reindirizzamento dell'associazione forza tutti i riferimenti all'assembly da reindirizzare alla versione dal numero più elevato dell'assembly. [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] salva le informazioni di reindirizzamento in app.config.  Se si utilizza un reindirizzamento dell'associazione, questo avviso non verrà più visualizzato.  
  
 Se si decide di non aggiungere un reindirizzamento dell'associazione, il progetto continua a fare riferimento alla stessa versione dell'assembly precedente.  Tuttavia, l'avviso viene ancora visualizzato.  
  
### Per correggere l'errore  
  
-   Fare doppio clic sull'avviso e quindi scegliere "Sì" al prompt "Risolvere tali conflitti aggiungendo record di reindirizzamento delle associazioni nel file app.config?"