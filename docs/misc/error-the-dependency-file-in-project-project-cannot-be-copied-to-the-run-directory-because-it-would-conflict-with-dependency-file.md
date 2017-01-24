---
title: "Errore: impossibile copiare la dipendenza &quot;file&quot; del progetto &quot;progetto&quot; nella directory di esecuzione perch&#233; genererebbe un conflitto con la dipendenza &quot;file&quot; | Microsoft Docs"
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
  - "vs.tasklisterror.copy_version_conflict"
ms.assetid: cd7de1eb-7d58-4e2c-9811-a7201f7817be
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Errore: impossibile copiare la dipendenza &quot;file&quot; del progetto &quot;progetto&quot; nella directory di esecuzione perch&#233; genererebbe un conflitto con la dipendenza &quot;file&quot;
Esiste un conflitto tra i riferimenti. Per eseguire l'applicazione, vengono copiate più dipendenze distinte con lo stesso nome di file nella directory bin. La directory di esecuzione non riesce a risolvere il conflitto perché nessuna delle dipendenze è un riferimento primario.  
  
 Questo errore impedirà la riuscita della compilazione.  
  
 Facendo doppio clic su questa voce dell'Elenco attività si passa al nodo dei riferimento del progetto in cui il conflitto si è verificato.  
  
 **Per correggere l'errore**  
  
-   Fare in modo che uno degli assembly sia un riferimento diretto del progetto. Un possibile svantaggio di questo approccio è che l'assembly scelto non necessariamente funzionerà con gli assembly che richiedono un'altra versione dell'assembly a cui fanno riferimento.  
  
     \-oppure\-  
  
-   Assicurarsi che entrambe le copie dell'assembly abbiano un nome sicuro e si trovino nella Global Assembly Cache. Questo elimina la necessità di copiare gli assembly nella directory bin.  
  
## Vedere anche  
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [Global Assembly Cache](../Topic/Global%20Assembly%20Cache.md)   
 [Assembly con nomi sicuri](../Topic/Strong-Named%20Assemblies.md)   
 [Controllo delle versioni degli assembly](../Topic/Assembly%20Versioning.md)   
 [Procedura: creare e rimuovere dipendenze di progetto](../Topic/How%20to:%20Create%20and%20Remove%20Project%20Dependencies.md)