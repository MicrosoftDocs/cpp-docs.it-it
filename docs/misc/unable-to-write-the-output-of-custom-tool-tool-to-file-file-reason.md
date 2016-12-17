---
title: "Unable to write the output of custom tool &#39;tool&#39; to file &#39;file&#39;. &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.cannot_write_gen_output"
ms.assetid: eafcee9e-186b-4019-9042-8d8f9fc0925a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Unable to write the output of custom tool &#39;tool&#39; to file &#39;file&#39;. &lt;reason&gt;
Non è stato possibile scrivere l'output dello strumento personalizzato nel file specificato.  
  
 L'output di uno strumento personalizzato viene scritto nello stesso file purché il nome file dell'input dello strumento personalizzato resti invariato.  Questo errore si verifica nel caso in cui l'output generato sia bloccato.  
  
 **Per correggere l'errore**  
  
-   Riavviare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e rieseguire lo strumento personalizzato facendo clic con il pulsante destro del mouse sul file interessato e scegliendo **Esegui strumento personalizzato** dal menu di scelta rapida.  
  
     Il file generato non è probabilmente aggiornato in quanto il sistema del progetto non è stato in grado di aggiornarlo.