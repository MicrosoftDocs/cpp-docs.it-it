---
title: "Errore di compilazione progetto PRJ0050 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0050"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0050"
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Errore di compilazione progetto PRJ0050
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile registrare l'output.Verificare di disporre delle autorizzazioni appropriate per modificare il Registro di sistema.  
  
 Il sistema di compilazione di Visual C\+\+ non è stato in grado di registrare l'output della compilazione \(dll o exe\).  È necessario eseguire l'accesso come amministratore per modificare il Registro di sistema.  
  
 Se si sta compilando una dll, è possibile provare a registrare la dll manualmente utilizzando regsvr32.exe. In questo modo si dovrebbero visualizzare delle informazioni esplicative dell'esito negativo della compilazione.  
  
 Se non si sta compilando una dll, consultare il log di generazione per individuare il programma che provoca un errore.