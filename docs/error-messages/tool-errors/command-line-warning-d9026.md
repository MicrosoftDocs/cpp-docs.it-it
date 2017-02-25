---
title: "Avviso della riga di comando D9026 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D9026"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9026"
ms.assetid: 149fe5e3-5329-4be8-b871-49dfd423aaba
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso della riga di comando D9026
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le opzioni si applicano all'intera riga di comando  
  
 In un comando un'opzione è stata specificata dopo la specifica di un nome file.  L'opzione è stata applicata al file che la precede.  
  
 Ad esempio, nel comando  
  
```  
CL verdi.c /G5 puccini.c  
```  
  
 il file VERDI.c verrà compilato utilizzando l'opzione \/G5 e non quella predefinita \/G4.  
  
 In alcune versioni precedenti, invece, venivano applicate solo le opzioni specificate prima del nome file; di conseguenza, relativamente all'esempio riportato, VERDI.c sarebbe stato compilato utilizzando \/G4 e PUCCINI.c utilizzando \/G5.