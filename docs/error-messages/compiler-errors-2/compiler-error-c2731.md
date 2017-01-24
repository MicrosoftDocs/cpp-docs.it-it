---
title: "Errore del compilatore C2731 | Microsoft Docs"
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
  - "C2731"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2731"
ms.assetid: 9b563999-febd-4582-9147-f355083c091e
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2731
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': impossibile eseguire l'overload della funzione  
  
 Le funzioni `main`, `WinMain`, `DllMain` e `LibMain` non possono essere sottoposte a overload.  
  
 Il seguente codice di esempio genera l'errore C2731:  
  
```  
// C2731.cpp  
extern "C" void WinMain(int, char *, char *);  
void WinMain(int, short, char *, char*);   // C2731  
```