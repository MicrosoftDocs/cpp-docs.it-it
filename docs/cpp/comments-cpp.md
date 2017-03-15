---
title: "Commenti C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "commenti del codice, C++"
  - "commenti, codice C++"
  - "commenti, codice di documentazione"
  - "spazio vuoto, commenti C++"
ms.assetid: 6fcb906c-c264-4083-84bc-373800b2e514
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Commenti C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un commento è un testo che viene ignorato dal compilatore ma può risultare utile per i programmatori  I commenti vengono generalmente utilizzati per annotare il codice per un futuro riferimento.  Il compilatore li tratta come uno spazio vuoto.  È possibile utilizzare i commenti nella fase di test per rendere alcune righe di codice inattive; tuttavia, le direttive del preprocessore `#if`\/`#endif` sono particolarmente consigliate per questa funzionalità perché permettono di racchiudere il codice che contiene i commenti ma non permette di annidare commenti.  
  
 Un commento C\+\+ può essere scritto in uno dei seguenti modi:  
  
-   I caratteri `/*` \(barra, asterisco\), seguiti da qualsiasi sequenza di caratteri \(nuove righe incluse\), seguiti dai caratteri `*/`.  Questa sintassi è la stessa dello standard ANSI C.  
  
-   I caratteri `//` \(due barre\), seguiti da qualsiasi sequenza di caratteri.  Una nuova riga non immediatamente preceduta da una barra rovesciata termina il form del commento.  Di conseguenza, viene comunemente chiamato "commento a riga singola."  
  
 I caratteri di commento \(`/*`, `*/` e `//`\) non hanno alcun significato particolare all'interno di un carattere costante, di un valore letterale stringa o di un commento.  I commenti che utilizzano la prima sintassi, pertanto, non possono essere annidati.  
  
## Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)