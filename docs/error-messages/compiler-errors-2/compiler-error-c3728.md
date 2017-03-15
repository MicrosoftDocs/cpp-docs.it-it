---
title: "Errore del compilatore C3728 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3728"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3728"
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3728
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'evento': l'evento non ha un metodo di generazione  
  
 Sono stati inclusi, tramite la direttiva [\#using](../../preprocessor/hash-using-directive-cpp.md), metadati creati con un linguaggio, quale C\#, che non consente la generazione di un evento dall'esterno della classe in cui è stato definito e un programma Visual C\+\+, che utilizza la programmazione CLR, ha tentato di generare l'evento.  
  
 Per generare un evento in un programma sviluppato in un linguaggio come C\#, è necessario che la classe che contiene l'evento definisca anche un metodo public che generi l'evento.