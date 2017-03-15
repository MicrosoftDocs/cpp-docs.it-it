---
title: "Avviso del compilatore (livello 3) C4686 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4686"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4686"
ms.assetid: 767c83c2-9e4b-4f9e-88c8-02128ba563f4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 3) C4686
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**'**   
 ***tipo definito dall'utente* ': modifica nella convenzione di chiamata per il valore restituito del tipo definito dall'utente**  
  
 Una specializzazione di template di classe non è stata definita prima di essere utilizzata in un tipo restituito.  Per evitare la visualizzazione dell'avviso C4686 è possibile utilizzare qualsiasi elemento che crei un'istanza della classe. È anche possibile dichiarare un'istanza o accedere a un membro \(C\<int\>::anything\).  
  
 Questo avviso è il risultato delle operazioni effettuate per rendere Visual C\+\+ .NET 2003 conforme allo standard ISO C\+\+.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Provare a risolvere il problema nel modo seguente:  
  
```  
// C4686.cpp  
// compile with: /W3  
#pragma warning (default : 4686)  
template <class T>  
class C;  
  
template <class T>  
C<T> f(T);  
  
template <class T>  
class C {};  
  
int main() {  
   f(1);   // C4686  
}  
  
template <class T>  
C<T> f(T) {  
   return C<int>();  
}  
```