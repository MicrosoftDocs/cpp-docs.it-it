---
title: "Avviso del compilatore (livello 4) C4706 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4706"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4706"
ms.assetid: 89cd3f4f-812c-4a4b-9426-65a5a6d1b99c
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 4) C4706
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

assegnazione all'interno di un'espressione condizionale  
  
 Il valore del test di un'espressione condizionale è il risultato di un'assegnazione.  
  
 Un'assegnazione dispone di un valore, collocato a sinistra dell'assegnazione, che può essere utilizzato in un'altra espressione, anche di test.  
  
 Il seguente codice di esempio genera l'errore C4706:  
  
```  
// C4706a.cpp  
// compile with: /W4  
int main()  
{  
   int a = 0, b = 0;  
   if ( a  = b ) // C4706  
   {  
   }  
}  
```  
  
 L'avviso viene generato anche se si raddoppiano le parentesi che racchiudono la condizione del test:  
  
```  
// C4706b.cpp  
// compile with: /W4  
int main()  
{  
   int a = 0, b = 0;  
   if ( ( a  =  b ) ) // C4706  
   {  
   }  
}  
```  
  
 Se si intende eseguire il test di una relazione e non effettuare un'assegnazione, utilizzare l'operatore `==`.  Nelle righe seguenti, ad esempio, viene verificato se a e b sono uguali:  
  
```  
// C4706c.cpp  
// compile with: /W4  
int main()  
{  
   int a = 0, b = 0;  
   if ( a == b )  
   {  
   }  
}  
```  
  
 Se si desidera che il valore del test sia il risultato di un'assegnazione, assicurarsi che quest'ultima non sia zero né null.  Nel codice seguente, ad esempio, l'avviso non viene generato:  
  
```  
// C4706d.cpp  
// compile with: /W4  
int main()  
{  
   int a = 0, b = 0;  
   if ( ( a = b ) != 0 )  
   {  
   }  
}  
```