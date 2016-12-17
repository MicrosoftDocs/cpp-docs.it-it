---
title: "Impossibile aggiungere il file &#39;file&#39; al progetto. &lt;motivo&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.projfile_no_add_file"
ms.assetid: 8bd70556-596a-4e24-a71c-a340604ee93d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile aggiungere il file &#39;file&#39; al progetto. &lt;motivo&gt;
Non è possibile aggiungere al progetto un file che è stato letto dal file con estensione vbproj o csproj. I motivi includono:  
  
-   Nome del file non valido.  
  
-   File all'interno di un percorso. Ad esempio, si dispone di un percorso relativo al progetto File1\\File2.txt., ma è presente anche una cartella con il percorso relativo File1\\File2.txt.  
  
-   Un elemento esiste già. Questa condizione si verifica quando un file viene elencato due volte nel file di progetto.  
  
-   Un collegamento esiste già. Il sistema del progetto di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] e [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] prevede una limitazione per cui può essere presente un solo collegamento con lo stesso nome per ogni progetto. Ciò significa, ad esempio, che non è possibile avere un collegamento al file.vb sia nella cartella A che nella cartella B del progetto.  
  
 Questo errore è probabilmente causato dalla modifica manuale del file di progetto.  
  
 Qualsiasi file per cui viene visualizzato questo messaggio diagnostico non verrà aggiunto al progetto.  
  
## Vedere anche  
 [File di progetto](../ide/project-files.md)   
 [NIB: Gestione degli elementi nei progetti](http://msdn.microsoft.com/it-it/762e606b-7f44-4b66-97a1-e30a703654a0)