---
title: "Impossibile copiare il componente assembly su pi&#249; file &#39;nome_file_componente&#39; nel file &#39;nome_file_destinazione&#39;. &lt;Motivo.&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.cannotcopyscattercomponent"
ms.assetid: 22f851fc-431b-4cdf-9de1-3a29727fa1e6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile copiare il componente assembly su pi&#249; file &#39;nome_file_componente&#39; nel file &#39;nome_file_destinazione&#39;. &lt;Motivo.&gt;
Il componente specificato non è stato copiato nella directory bin.  
  
 Alcuni assembly sono costituiti da più file. Questo messaggio di diagnostica viene visualizzato ogni volta che un file che fa parte di un assembly su più file non può essere copiato nella directory di esecuzione.  
  
 L'errore può essere dovuto a diversi motivi. Ad esempio, la presenza di spazio su disco insufficiente o il raggiungimento del limite MAX\_PATH per la lunghezza dei percorsi. Un processo, ad esempio Visual Studio, potrebbe inoltre trattenere il componente che non può essere copiato.  
  
 **Per correggere l'errore**  
  
-   Verificare che sia disponibile spazio su disco adeguato.  
  
-   Provare a spostare il progetto in una cartella il cui percorso abbia una lunghezza minore rispetto a quella del percorso della cartella del progetto corrente.  
  
-   Modificare la directory di output in una cartella il cui percorso assoluto abbia una lunghezza inferiore. Questa soluzione è valida solo per progetti client \(non Web\).  
  
-   Riavviare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## Vedere anche  
 [Debug di applicazioni Web: errori e risoluzione dei problemi](../Topic/Debugging%20Web%20Applications:%20Errors%20and%20Troubleshooting.md)