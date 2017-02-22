---
title: "Errore irreversibile C1092 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1092"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1092"
ms.assetid: bcaa87f0-fbfc-4a33-844b-3b9f5d67f279
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore irreversibile C1092
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica e continuazione non supporta le modifiche ai tipi di dati. Richiesta compilazione  
  
 Dall'ultima compilazione riuscita è stato modificato o aggiunto un tipo di dati.  
  
-   Nella funzione Modifica e continuazione non sono supportate le modifiche ai tipi di dati esistenti, incluse le definizioni di classi, strutture o enumeratori.  Interrompere il debug e compilare l'applicazione.  
  
-   Nella funzione Modifica e continuazione non è supportata l'aggiunta di nuovi tipi di dati se un file di database di programma, come vc*x*0.pdb \(dove *x* rappresenta la versione principale di Visual C\+\+ in uso\), è di sola lettura.  Per aggiungere un tipo di dati, è necessario che il file PDB venga aperto in scrittura nel compilatore.  
  
### Per correggere questo errore senza terminare la sessione di debug corrente  
  
1.  Modificare il tipo di dati riportandolo allo stato precedente all'errore.  
  
2.  Scegliere **Applica modifiche del codice** dal menu **Debug**.  
  
### Per correggere l'errore senza modificare il codice sorgente  
  
1.  Scegliere **Termina debug** dal menu **Debug**.  
  
2.  Scegliere **Compila** dal menu **Compila**.  
  
 Per ulteriori informazioni, vedere [Modifiche del codice supportate](../Topic/Supported%20Code%20Changes%20\(C++\).md).