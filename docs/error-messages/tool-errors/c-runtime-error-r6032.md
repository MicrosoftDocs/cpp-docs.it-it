---
title: "Errore R6032 del linguaggio C in fase di esecuzione  | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6032"
ms.assetid: 52092a63-cc51-444a-bfc3-fad965a3558e
caps.latest.revision: 7
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore R6032 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Spazio insufficiente per le informazioni sulle impostazioni locali  
  
 Il runtime conserva le informazioni sulle impostazioni locali su ogni thread in modo da poter elaborare le chiamate alle funzioni collegate alle impostazioni locali.  Se l'allocazione della memoria per queste informazioni ha esito negativo, il runtime non è in grado di continuare perché da ciò dipendono troppe funzionalità di base.