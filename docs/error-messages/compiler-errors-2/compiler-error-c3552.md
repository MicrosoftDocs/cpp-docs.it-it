---
title: "Errore del compilatore C3552 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3552"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3552"
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Errore del compilatore C3552
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'typename': un tipo restituito specificato in ritardo non può contenere 'auto'  
  
 Se si usa la parola chiave `auto` come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Tuttavia, non è possibile usare un'altra parola chiave `auto` per specificare il tipo restituito specificato in ritardo. Ad esempio, il frammento di codice seguente genera l'errore C3552.  
  
 `auto myFunction->auto; // C3552`