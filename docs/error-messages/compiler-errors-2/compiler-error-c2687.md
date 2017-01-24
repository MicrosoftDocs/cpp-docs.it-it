---
title: "Errore del compilatore C2687 | Microsoft Docs"
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
  - "C2687"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2687"
ms.assetid: 1d24b24a-cd0f-41cc-975c-b08dcfb7f402
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2687
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': la dichiarazione dell'eccezione non può essere 'void' o indicare un tipo incompleto oppure un puntatore o un riferimento a un tipo incompleto  
  
 Affinché un tipo faccia parte di una dichiarazione di eccezione, deve essere definito e non void.  
  
 Il seguente codice di esempio genera l'errore C2687:  
  
```  
// C2687.cpp  
class C;  
  
int main() {  
   try {}  
   catch (C) {}   // C2687 error  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2687b.cpp  
// compile with: /EHsc  
class C {};  
  
int main() {  
   try {}  
   catch (C) {}  
}  
```