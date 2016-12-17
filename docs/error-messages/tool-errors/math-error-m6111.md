---
title: "Errore matematico M6111 | Microsoft Docs"
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
  - "M6111"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6111"
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore matematico M6111
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Underflow dello stack.  
  
 Un'operazione a virgola mobile ha causato un underflow dello stack sul coprocessore 8087\/287\/387 o sull'emulatore.  
  
 Questo errore è spesso provocato da una chiamata a una funzione `long double` che non restituisce un valore.  L'errore viene, ad esempio, generato dalla stringa seguente quando viene compilata ed eseguita:  
  
```  
long double ld() {};  
main ()  
{  
  ld();  
}  
```  
  
 Il programma termina con codice di uscita 139.