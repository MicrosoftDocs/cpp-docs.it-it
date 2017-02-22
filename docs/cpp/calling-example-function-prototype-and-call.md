---
title: "Esempio di chiamata: prototipo e chiamata di funzione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "convenzioni di chiamata, esempi [C++]"
  - "esempi [C++], convenzioni di chiamata"
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Esempio di chiamata: prototipo e chiamata di funzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Nell'esempio seguente vengono illustrati i risultati dell'effettuare una chiamata di funzione utilizzando varie convenzioni di chiamata.  
  
 Questo esempio è basato sulla seguente struttura di funzione.  Sostituire `calltype` con la convenzione di chiamata appropriata.  
  
```  
void    calltype MyFunc( char c, short s, int i, double f );  
.  
.  
.  
void    MyFunc( char c, short s, int i, double f )  
    {  
    .  
    .  
    .  
    }  
.  
.  
.  
MyFunc ('x', 12, 8192, 2.7183);  
```  
  
 Per ulteriori informazioni, vedere [Risultati della chiamata di esempio](../cpp/results-of-calling-example.md).  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)