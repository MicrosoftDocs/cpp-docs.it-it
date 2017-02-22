---
title: "Errore irreversibile C1067 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1067"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1067"
ms.assetid: e2c94be6-4573-4571-aac9-73d657fe9f96
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore irreversibile C1067
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: il limite di dimensione di 64 KB di un record di tipo è stato superato  
  
 L'errore si verifica se il nome decorato di un simbolo contiene più di 247 caratteri.  Per correggere l'errore, abbreviare il nome del simbolo.  
  
 Quando il compilatore genera le informazioni di debug, vengono creati record di tipo per definire i tipi individuati nel codice sorgente.  In tali record sono ad esempio inclusi strutture semplici ed elenchi di argomenti delle funzioni.  È possibile che alcuni record di tipo siano costituiti da elenchi molto estesi.  
  
 Per tutti i record di tipo è previsto un limite di dimensione di 64 KB.  Questo errore si verifica se tale limite viene superato.  
  
 L'errore C1067 può inoltre verificarsi se sono presenti molti simboli con nomi lunghi oppure se una classe, una struttura o un'unione contiene un numero eccessivo di membri.