---
title: "Errore dell‘analizzatore di espressioni CXX0036 | Microsoft Docs"
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
  - "CXX0036"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0036"
  - "CXX0036"
ms.assetid: 383404be-df5b-4eec-b113-df21bb5d269d
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore dell‘analizzatore di espressioni CXX0036
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

specifiche del contesto {...} non valide  
  
 Il messaggio può essere generato da uno dei vari errori possibili nell'utilizzo dell'operatore di contesto \(**{}**\).  
  
-   La sintassi dell'operatore di contesto \(**{}**\) non è stata specificata correttamente.  
  
     La sintassi dell'operatore di contesto è:  
  
     {*function*,*module*,*dll*}*expression*  
  
     Tale sintassi specifica il contesto dell'*espressione*.  L'operatore di contesto ha la stessa precedenza e lo stesso utilizzo di un cast di tipo.  
  
     Le virgole finali possono essere omesse.  Se in *funzione*, *modulo* o *dll* è contenuta una virgola letterale, l'intero nome deve essere racchiuso tra parentesi.  
  
-   Il nome della funzione non è stato digitato correttamente o non esiste nella libreria di moduli o nella libreria a collegamento dinamico specificata.  
  
     Poiché nel linguaggio C è prevista la distinzione tra maiuscole e minuscole, *funzione* deve essere specificato con la stessa distinzione tra maiuscole e minuscole con cui è definito nell'origine.  
  
-   Non è possibile trovare il modulo o la DLL.  
  
     Verificare il nome di percorso completo del modulo o della DLL specificata.  
  
 Questo errore è identico all'errore CAN0036.