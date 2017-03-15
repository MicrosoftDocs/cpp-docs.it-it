---
title: "Errore irreversibile C1001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1001"
ms.assetid: 5736cdb3-22c8-4fad-aa85-d5e0d2b232f4
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Errore irreversibile C1001
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

ERRORE INTERNO DEL COMPILATORE \(file file, riga numero\)  
  
 Il compilatore non è in grado di generare il codice corretto per un costrutto, probabilmente a causa della combinazione di un'espressione con un'opzione di ottimizzazione.  Provare a rimuovere una o più opzioni di ottimizzazione e a compilare nuovamente la funzione che contiene la riga indicata nel messaggio di errore.  
  
 È probabilmente possibile risolvere il problema rimuovendo una o più opzioni di ottimizzazione.  Per determinare l'opzione in cui viene generato l'errore, rimuovere le opzioni una alla volta e compilare nuovamente finché il messaggio di errore non viene più visualizzato.  Le opzioni da cui viene generato più comunemente questo messaggio sono **\/Og**, **\/Oi** e `/Oa`.  Dopo aver determinato l'opzione responsabile, sarà possibile disabilitarla utilizzando il pragma [optimize](../../preprocessor/optimize.md) per la funzione in cui si verifica l'errore e continuare a utilizzare l'opzione per la parte restante del modulo.  
  
 Microsoft Knowledge Base ha ulteriori informazioni sull'errore C1001; vedere [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;en\-us;134650](http://support.microsoft.com/default.aspx?scid=kb;en-us;134650).  
  
 Provare a riscrivere la riga in cui viene segnalato l'errore o alcune righe di codice immediatamente precedenti e successive.