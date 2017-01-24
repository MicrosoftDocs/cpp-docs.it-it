---
title: "Domande frequenti su installazione e distribuzione | Microsoft Docs"
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
  - "distribuzione [Visual Studio SDK]"
  - "LCID [Visual Studio SDK]"
  - "installazione [Visual Studio SDK]"
ms.assetid: 4ac62bf3-e335-4899-9074-89bcd004dc65
caps.latest.revision: 10
caps.handback.revision: 10
manager: "douge"
---
# Domande frequenti su installazione e distribuzione
In questo argomento rivolge le domande della community di utenti di [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] sull'installazione e distribuzione.  L'argomento continuerà a essere aggiornato con il nuovo contenuto dalla community.  
  
## Contenuto  
  
-   [Determinazione di LCID di installazione di Visual Studio a livello di codice](#DeterminingtheLCIDofaVisualStudioInstallationProgrammatically)  
  
##  <a name="DeterminingtheLCIDofaVisualStudioInstallationProgrammatically"></a> Determinazione di LCID di installazione di Visual Studio a livello di codice  
 **q:** Esiste una soluzione a livello di codice determinare LCID di un'installazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] ?  
  
 **A:**  <xref:Microsoft.VisualStudio.Shell.Interop.IUIHostLocale2.GetUILocale%2A> o <xref:Microsoft.VisualStudio.Shell.Interop.IUIHostLocale.GetUILocale%2A>restituirà attualmente LCID di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] in uso.  
  
## Vedere anche  
 [Rilascio di un prodotto](../misc/releasing-a-visual-studio-integration-product.md)