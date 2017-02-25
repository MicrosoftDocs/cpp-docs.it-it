---
title: "Errore del compilatore C3231 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3231"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3231"
ms.assetid: fe5dc352-e634-45fa-9534-3da176294c98
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3231
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'arg': un argomento di tipo modello non può utilizzare un parametro di tipo generico  
  
 L'istanza dei modelli viene creata in fase di compilazione, mentre l'istanza dei generics viene creata in fase di esecuzione.  È pertanto impossibile generare codice generico in grado di chiamare il modello, poiché non è possibile creare un'istanza di quest'ultimo in fase di esecuzione quando il tipo generico è noto.  
  
 Il seguente codice di esempio genera l'errore C3231:  
  
```  
// C3231.cpp  
// compile with: /clr /LD  
template <class T> class A;  
  
generic <class T>  
ref class C {  
   void f() {  
      A<T> a;   // C3231  
   }  
};  
```