---
title: "Errore del compilatore C2492 | Microsoft Docs"
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
  - "C2492"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2492"
ms.assetid: 8c44c9bb-c366-4fe5-a0ab-882e38608aaa
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2492
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': i dati 'thread' non possono avere un'interfaccia dll  
  
 La variabile è dichiarata con l'attributo [thread](../../cpp/thread.md) e l'interfaccia DLL.  L'indirizzo della variabile `thread` non è noto fino alla fase di esecuzione, pertanto non è possibile effettuare il collegamento a un'importazione o esportazione di DLL.  
  
 Il seguente codice di esempio genera l'errore C2492:  
  
```  
// C2492.cpp  
// compile with: /c  
class C {  
public:  
   char   ch;  
};  
  
__declspec(dllexport) __declspec(thread) C c_1;   // C2492  
__declspec(thread) C c_1;   // OK  
```