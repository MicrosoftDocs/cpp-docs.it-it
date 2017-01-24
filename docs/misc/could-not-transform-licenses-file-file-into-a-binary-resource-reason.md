---
title: "Could not transform licenses file &#39;file&#39; into a binary resource. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.licx_generator_failed"
ms.assetid: 875e948c-d7a3-4ffc-be0d-f341de5f6310
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Could not transform licenses file &#39;file&#39; into a binary resource. &lt;reason&gt;
Si è verificato un errore nel processore delle licenze utilizzato per convertire i file LICX in risorse binarie.  
  
 L'errore è provocato in genere da un file LICX danneggiato.  È possibile ad esempio che il file sia stato aperto e modificato in un editor di testo.  
  
 Se si verifica questo errore, il processo di compilazione non verrà completato.  
  
### Per correggere l'errore  
  
1.  Selezionare il progetto in Esplora soluzioni.  
  
2.  Scegliere **Mostra tutti i file** dal menu **Progetto.**  
  
3.  In Esplora soluzioni, espandere la cartella obj, quindi espandere la cartella **Debug**.  
  
4.  Individuare il file denominato "myApplication.exe.licenses" dove myApplication è il nome dell'applicazione Windows Form.  
  
5.  Eliminare il file e generare nuovamente la soluzione.  
  
## Vedere anche  
 [How to: License Components and Controls](../Topic/How%20to:%20License%20Components%20and%20Controls.md)