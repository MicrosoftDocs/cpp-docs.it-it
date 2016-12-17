---
title: "Errore del compilatore C2435 | Microsoft Docs"
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
  - "C2435"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2435"
ms.assetid: be6aa8f8-579b-42ea-bdd8-2d01393646ad
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2435
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': l'inizializzazione dinamica richiede codice CRT gestito; impossibile compilare con \/clr:safe  
  
 L'inizializzazione di variabili di dominio applicazione globali richiede che il codice CRT venga compilato con `/clr:pure`, che non genera un'immagine verificabile.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).  
  
 Il seguente codice di esempio genera l'errore C2435:  
  
```  
// C2435.cpp  
// compile with: /clr:safe /c  
int globalvar = 0;   // C2435  
  
__declspec(process)  
int globalvar2 = 0;  
```