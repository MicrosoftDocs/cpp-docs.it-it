---
title: "Errore del compilatore C2356 | Microsoft Docs"
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
  - "C2356"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2356"
ms.assetid: 84d5a816-9a61-4d45-9978-38e485bbf767
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2356
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il segmento di inizializzazione non deve cambiare durante l'unità di conversione  
  
 Possibili cause:  
  
-   `#pragma init_seg` è preceduto dal codice di inizializzazione del segmento  
  
-   `#pragma init_seg` è preceduto da un altro oggetto `#pragma init_seg`  
  
 Per correggere l'errore, spostare il codice di inizializzazione del segmento all'inizio del modulo.  Per inizializzare più aree, spostarle in moduli distinti.  
  
 Il seguente codice di esempio genera l'errore C2356:  
  
```  
// C2356.cpp  
#pragma warning(disable : 4075)  
  
int __cdecl myexit(void (__cdecl *)());  
int __cdecl myexit2(void (__cdecl *)());  
  
#pragma init_seg(".mine$m",myexit)  
#pragma init_seg(".mine$m",myexit2)   // C2356  
```