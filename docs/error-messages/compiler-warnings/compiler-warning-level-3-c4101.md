---
title: "Avviso del compilatore (livello 3) C4101 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4101"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4101"
ms.assetid: d98563cd-9dce-4aae-8f12-bd552a4ea677
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 3) C4101
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': variabile locale senza riferimenti  
  
 La variabile locale non viene mai utilizzata.  L'avviso viene generato nella situazione riportata di seguito:  
  
```  
// C4101a.cpp  
// compile with: /W3  
int main() {  
int i;   // C4101  
}  
```  
  
 Viene inoltre generato quando si chiama una funzione membro **static** tramite un'istanza della classe:  
  
```  
// C4101b.cpp  
// compile with:  /W3  
struct S {  
   static int func()  
   {  
      return 1;  
   }  
};  
  
int main() {  
   S si;   // C4101, si is never used  
   int y = si.func();  
   return y;  
}  
```  
  
 In questa situazione, le informazioni relative a `si` vengono utilizzate durante la compilazione per accedere alla funzione **static**, ma non è necessario utilizzare l'istanza della classe per chiamare la funzione **static**. Viene quindi generato l'avviso.  Per risolvere il problema, è possibile effettuare le seguenti operazioni:  
  
-   Aggiungere un costruttore, in cui verrà utilizzata l'istanza di `si` nella chiamata a `func`.  
  
-   Rimuovere la parola chiave **static** dalla definizione di `func`.  
  
-   Chiamare la funzione **static** in modo esplicito: `int y = S::func();`.