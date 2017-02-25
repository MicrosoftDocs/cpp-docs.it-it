---
title: "Errore del compilatore C2993 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2993"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2993"
ms.assetid: 4ffd2b78-654b-46aa-95a6-b62101cf91c8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2993
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': tipo non valido per il parametro di template non di tipo 'parametro'  
  
 Non è possibile dichiarare un template con un argomento di struttura o unione.  Utilizzare i puntatori per passare strutture e unioni come parametri di template.  
  
 Il seguente codice di esempio genera l'errore C2993:  
  
```  
// C2993.cpp  
// compile with: /c  
// C2993 expected  
struct MyStruct {  
   int a;char b;  
};  
  
template <class T, struct MyStruct S>   // C2993  
  
// try the following line instead  
// template <class T, struct MyStruct * S>  
class CMyClass {};  
```  
  
 Questo errore può anche venire generato come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003: non sono più consentiti parametri di template non di tipo a virgola mobile.  Lo standard C\+\+ non consente parametri di template non di tipo a virgola mobile.  
  
 Se si tratta di un template di funzione, utilizzare un argomento di funzione per passare al parametro di template non di tipo a virgola mobile. Questo codice sarà valido nelle versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C\+\+.  Se si tratta di un template di classe, non è disponibile una soluzione semplice.  
  
```  
// C2993b.cpp  
// compile with: /c  
template<class T, float f> void func(T) {}   // C2993  
  
// OK  
template<class T>   void func2(T, float) {}  
```