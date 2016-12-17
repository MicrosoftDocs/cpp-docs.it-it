---
title: "Avviso del compilatore (livello 1) C4326 | Microsoft Docs"
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
  - "C4326"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4326"
ms.assetid: d44d2c4e-9456-42d3-b35b-4ba4b2d42ec7
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4326
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il tipo restituito di 'funzione' dovrebbe essere 'tipo1' invece di 'tipo2'  
  
 Una funzione ha restituito un tipo diverso da ***tipo1***.  Utilizzando [\/Za](../../build/reference/za-ze-disable-language-extensions.md), ad esempio, la funzione principale non ha restituito `int`.  
  
 Il seguente codice di esempio genera l'errore C4326:  
  
```  
// C4326.cpp  
// compile with: /Za /W1  
char main()  
{   // C4326 try int main  
}  
```