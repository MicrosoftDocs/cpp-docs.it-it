---
title: "Errore del compilatore C2555 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2555"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2555"
ms.assetid: 5e49ebb8-7c90-457a-aa12-7ca7ab6574b2
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2555
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

' classe1::funzione1': il tipo restituito della funzione virtual in override non è una covariante e differisce da 'classe2::funzione2'  
  
 Una funzione virtuale e una funzione di override derivata hanno elenchi di parametri identici, ma tipi restituiti diversi.  Una funzione di override in una classe derivata non può essere diversa da una funzione virtuale in una classe base solo per il tipo restituito.  
  
 Per risolvere l'errore, eseguire il cast del valore restituito dopo aver chiamato la funzione virtuale.  
  
 Questo errore può inoltre venire visualizzato se si esegue la compilazione con \/clr.   Ad esempio, l'equivalente in Visual C\+\+ della seguente dichiarazione C\#:  
  
```  
Guid[] CheckSources(Guid sourceID, Guid[] carouselIDs);  
```  
  
 is  
  
```  
Guid CheckSources(Guid sourceID, Guid carouselIDs[]) [];  
```  
  
 Per ulteriori informazioni sull'errore C2555, vedere l'articolo della Knowledge Base Q240862 \(informazioni in lingua inglese\).  
  
 Il seguente codice di esempio genera l'errore C2555:  
  
```  
// C2555.cpp  
// compile with: /c  
struct X {  
   virtual void func();  
};  
struct Y : X {  
   char func();  // C2555  
   void func2();   // OK  
};  
```