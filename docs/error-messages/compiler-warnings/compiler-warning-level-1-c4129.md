---
title: "Avviso del compilatore (livello 1) C4129 | Microsoft Docs"
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
  - "C4129"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4129"
ms.assetid: a4190c64-4bfb-48fd-8e98-52720bc0d878
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4129
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'carattere': sequenza di caratteri di escape sconosciuta  
  
 L'oggetto `character` che segue una barra rovesciata \(\\\) in una costante carattere o stringa non è riconosciuto come sequenza di escape valida.  La barra rovesciata viene ignorata e non viene stampata,  mentre viene stampato il carattere che la segue.  
  
 Per stampare una singola barra rovesciata, immetterne una doppia \(\\\\\).  
  
 Nella sezione 2.13.2 di C\+\+ standard vengono descritte le sequenze di caratteri di escape.  
  
 Il seguente codice di esempio genera l'errore C4129:  
  
```  
// C4129.cpp  
// compile with: /W1  
int main() {  
   char array1[] = "\/709";   // C4129  
   char array2[] = "\n709";   // OK  
}  
```