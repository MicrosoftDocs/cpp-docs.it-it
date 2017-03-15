---
title: "Accesso non valido un&#39;unione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: b273d984-62a8-4003-9a87-bf0149d3f2dd
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Accesso non valido un&#39;unione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 3.3.2.3** L'accesso a un membro di un oggetto unione viene eseguito utilizzando un membro di un tipo diverso  
  
 Se viene dichiarata un'unione di due tipi e viene archiviato un valore, ma l'accesso all'unione viene eseguito con l'altro tipo, i risultati sono inaffidabili.  
  
 Ad esempio, viene dichiarata un'unione di **float** e `int`.  Un valore **float** viene archiviato, ma in seguito il programma accede al valore come `int`.  In una situazione del genere, il valore dipenderebbe dall'archiviazione interna di valori **float**.  L'Integer non sarebbe affidabile.  
  
## Vedere anche  
 [Strutture, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)