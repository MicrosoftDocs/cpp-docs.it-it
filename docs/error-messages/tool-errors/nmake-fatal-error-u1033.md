---
title: "Errore irreversibile U1033 di NMAKE  | Microsoft Docs"
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
  - "U1033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1033"
ms.assetid: c146f7b5-7d5c-4329-a522-28a648546016
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1033 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di sintassi: "stringa" imprevista  
  
 La stringa non fa parte della sintassi corretta di un makefile.  
  
### Possibili cause  
  
1.  Se una coppia di parentesi angolari di chiusura \(**\<\<**\) per un file inline non compare a inizio di riga si verificherà l'errore seguente:  
  
    ```  
    syntax error : 'EOF' unexpected  
    ```  
  
2.  Se una definizione di macro nel makefile contiene un segno di uguale \(**\=**\) senza che lo preceda un nome o se il nome da definire è una macro la cui espansione non produce alcun risultato, si verificherà l'errore seguente:  
  
    ```  
    syntax error : '=' unexpected  
    ```  
  
3.  Se un segno di punto e virgola \(**;**\) in una riga di commento nel file TOOLS.INI non compare a inizio di riga si verificherà l'errore seguente:  
  
    ```  
    syntax error : ';' unexpected  
    ```  
  
4.  Se il makefile è stato formattato da un elaboratore di testi potrebbe verificarsi l'errore seguente:  
  
    ```  
    syntax error : ':' unexpected  
    ```