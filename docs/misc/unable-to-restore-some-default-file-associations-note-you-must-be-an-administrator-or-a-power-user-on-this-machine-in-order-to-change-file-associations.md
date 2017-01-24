---
title: "Impossibile ripristinare alcune associazioni di file predefinite. Nota: per poter eseguire questa operazione, &#232; necessario essere un amministratore o un membro del gruppo Power Users su questo computer. | Microsoft Docs"
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
  - "VS.Message.0x00006A85"
  - "VS_E_RESTOREFILEASSOCS"
ms.assetid: 449c5608-83e3-4ddd-91f1-1061916995b3
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile ripristinare alcune associazioni di file predefinite. Nota: per poter eseguire questa operazione, &#232; necessario essere un amministratore o un membro del gruppo Power Users su questo computer.
Questo errore si verifica quando viene usata l'opzione \/AssociateFiles della riga di comando di devenv, ma i diritti utente correnti non consentono di accedere alla sezione HKEY\_CLASSES\_ROOT del Registro di sistema. Quando si esegue [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] in [!INCLUDE[wiprlhext](../c-runtime-library/reference/includes/wiprlhext_md.md)], è necessario eseguire devenv come amministratore per usare l'opzione \/AssociateFiles \(devenv.exe\).  
  
### Per correggere l'errore  
  
-   Passare alle credenziali di amministratore e riprovare.  
  
## Vedere anche  
 [User Rights and Visual Studio](http://msdn.microsoft.com/it-it/d5c55084-1e7b-4b61-b478-137db01c0fc0)   
 [Opzioni della riga di comando devenv](../Topic/Devenv%20Command%20Line%20Switches.md)