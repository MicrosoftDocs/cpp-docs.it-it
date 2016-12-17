---
title: "Il progetto contiene gi&#224; un riferimento all&#39;assembly &lt;identit&#224;assembly&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32208"
  - "vbc32208"
helpviewer_keywords: 
  - "BC32208"
ms.assetid: a9f73a2c-5135-4315-bf2c-710ef216095d
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il progetto contiene gi&#224; un riferimento all&#39;assembly &lt;identit&#224;assembly&gt;
Il progetto contiene già un riferimento all'assembly \<identitàassembly\>. Non è possibile aggiungere un secondo riferimento a '\<percorsofile\>'.  
  
 Un progetto fa più di un riferimento allo stesso assembly.  
  
 L'identità dell'assembly include il nome, la versione, la chiave pubblica e le eventuali impostazioni cultura dell'assembly.  
  
 Una delle possibili cause di questo errore è la presenza di un riferimento a un altra copia dell'assembly tramite un percorso del file diverso da quello del riferimento originale.  
  
 **ID errore:** BC32208  
  
### Per correggere l'errore  
  
-   Rimuovere il secondo riferimento. Non è necessario, in quanto fa riferimento allo stesso assembly.  
  
## Vedere anche  
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)