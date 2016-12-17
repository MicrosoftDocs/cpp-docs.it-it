---
title: "Avviso del compilatore (livello 1) C4319 | Microsoft Docs"
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
  - "C4319"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4319"
ms.assetid: 1fac8048-9bd6-4552-a21c-192c67772bb9
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4319
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': estensione zero di 'type' a 'type' di dimensioni maggiori  
  
 Il risultato dell'operatore ~ \(complemento bit per bit\) è senza segno e quindi esteso in base a zero quando viene convertito in un tipo di dimensioni maggiori.  
  
 Nel seguente esempio, ~\(a \- 1\) viene valutato come espressione lunga senza segno a 32 bit e quindi convertito in un'estensione per zero a 64 bit.  Questo potrebbe causare risultati imprevisti per l'operazione.  
  
```  
// C4319.cpp  
// compile with: cl /W4 C4319.cpp  
int main() {  
   unsigned long a = 0;  
   unsigned long long q = 42;  
   q = q & ~(a - 1);    // C4319 expected  
}  
```