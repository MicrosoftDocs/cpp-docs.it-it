---
title: "The project file &#39;&lt;filename&gt;&#39; cannot be updated | Microsoft Docs"
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
  - "vs.UpgradeErrors"
ms.assetid: ecd1e161-c51c-4aaa-ab80-8fc443bdad81
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The project file &#39;&lt;filename&gt;&#39; cannot be updated
Si sta tentando di aprire un progetto creato in una versione precedente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Il progetto deve essere aggiornato al formato corrente, ma non è possibile eseguirne l'aggiornamento poiché il file di progetto specificato \(VBPROJ\) è in sola lettura oppure il file è incluso nel controllo del codice sorgente ed è attualmente bloccato da un altro utente.  
  
### Per correggere l'errore  
  
1.  In Esplora file, individuare il file di progetto specificato.  
  
2.  Scegliere **Proprietà** dal menu **File**.  
  
3.  Nella finestra di dialogo **Proprietà** deselezionare l'attributo di **sola lettura**.  
  
 Se il file è incluso nel controllo del codice sorgente ed è bloccato da un altro utente, attendere che sia disponibile ed eseguirne l'estrazione in locale.  
  
## Vedere anche  
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)