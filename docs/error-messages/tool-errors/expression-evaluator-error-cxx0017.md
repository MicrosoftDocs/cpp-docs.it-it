---
title: "Errore dell‘analizzatore di espressioni CXX0017 | Microsoft Docs"
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
  - "CXX0017"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0017"
  - "CXX0017"
ms.assetid: af74db02-a64d-49ca-8363-3e044a107580
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore dell‘analizzatore di espressioni CXX0017
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il simbolo non è stato individuato.  
  
 Un simbolo specificato in un'espressione non è stato trovato.  
  
 L'errore potrebbe essere determinato da un'incongruenza di maiuscole\/minuscole nel nome del simbolo.  Poiché nei linguaggi C e C\+\+ è prevista la distinzione tra maiuscole e minuscole, un nome di simbolo deve essere specificato con la stessa distinzione tra maiuscole e minuscole con cui è definito nell'origine.  
  
 L'errore può verificarsi quando si tenta di eseguire un cast di tipo su una variabile per controllarla durante il debug.  Nella dichiarazione `typedef` è specificato un nuovo nome per un tipo, ma non viene definito un nuovo tipo.  Il cast di tipo tentato durante il debug richiede il nome di un tipo già definito.  
  
 Questo errore è identico all'errore CAN0017.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Verificare che il simbolo sia stato già dichiarato nel punto del programma in cui viene utilizzato.  
  
2.  Per impostare variabili nel debugger, utilizzare un nome effettivo di tipo anziché un nome definito con `typedef`.