---
title: "Errore del compilatore C3222 | Microsoft Docs"
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
  - "C3222"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3222"
ms.assetid: 5624bde8-2fd0-4b8b-92ce-5dfbaf91cf93
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3222
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'parameter': impossibile dichiarare argomenti predefiniti per funzioni membro di un tipo gestito o WinRT o funzioni generiche  
  
 Non è consentito dichiarare un parametro di metodo con un argomento predefinito.  Un overload del metodo è un modo per ovviare al problema,  vale a dire, definire un metodo con lo stesso nome senza parametri e quindi inizializzare la variabile nel corpo del metodo.  
  
 L'esempio seguente genera l'errore C3222:  
  
```  
// C3222_2.cpp  
// compile with: /clr  
public ref class G {  
   void f( int n = 0 );   // C3222  
};  
```  
  
 L'esempio seguente genera l'errore C3222:  
  
```  
// C3222.cpp  
// compile with: /clr:oldSyntax  
public __gc class G {  
   void f( int n = 0 );   // C3222  
};  
```