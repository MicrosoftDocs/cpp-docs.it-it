---
title: "2.7.2.1 private | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 079b4b84-f2b3-4050-a0ac-289493c36b3d
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.1 private
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`private` la clausola dichiarazione di variabili nell'variabile\-elenco per essere private per ogni thread in un team.  La sintassi di `private` la clausola è la seguente:  
  
```  
private(variable-list)  
```  
  
 Il comportamento di una variabile specificata in un oggetto `private` la clausola è indicato di seguito.  un nuovo oggetto con durata automatica di archiviazione è allocato per il costrutto.  La dimensione e l'allineamento di un nuovo oggetto sono determinati dal tipo della variabile.  Questa allocazione viene generato una volta per ogni thread del team e un costruttore predefinito viene richiamato per l'oggetto della classe se necessario, in caso contrario il valore iniziale è indeterminato.  L'oggetto originale a cui viene fatto riferimento dalla variabile di non modificare un valore non definito sulla voce al costrutto, devono interno dell'ambito dinamico del costrutto e ha un valore non definito in uscita dal costrutto.  
  
 Nell'ambito lessicale del costrutto la direttiva, la variabile fa riferimento al nuovo oggetto privato allocato dal thread.  
  
 Le restrizioni a `private` la clausola è la seguente:  
  
-   Una variabile con un tipo di classe che è specificato in un oggetto `private` la clausola deve disporre di un costruttore predefinito accessibile e ambigua.  
  
-   Una variabile specificata in un oggetto `private` la clausola non deve corrispondere a  **const**\- tipo completo a meno che non si abbia un tipo di classe con una proprietà  `mutable` membro.  
  
-   Una variabile specificata in un oggetto `private` la clausola non deve avere un tipo incompleto o un tipo di riferimento.  
  
-   Variabili visualizzate in `reduction` clausola di un oggetto  **parallelo** la direttiva non può essere specificata in un oggetto  `private` clausola in una direttiva di suddivisione del lavoro associato al costrutto parallelo.