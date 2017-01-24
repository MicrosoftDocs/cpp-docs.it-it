---
title: "Avviso del compilatore (livello 4) C4339 | Microsoft Docs"
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
  - "C4339"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4339"
ms.assetid: 5b83353d-7777-4afb-8476-3c368349028c
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4339
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': rilevato l'utilizzo di un tipo non definito nei metadati WinRT o CLR; l'uso di questo tipo può causare un'eccezione della fase di esecuzione  
  
 Un tipo non è stato definito nel codice compilato per Windows Runtime o Common Language Runtime.  Definire il tipo per evitare una possibile eccezione in fase di esecuzione.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 L'esempio seguente genera l'errore C4339 e mostra come risolverlo:  
  
```  
// C4339.cpp  
// compile with: /W4 /clr /c  
// C4339 expected  
#pragma warning(default : 4339)  
  
// Delete the following line to resolve.  
class A;  
  
// Uncomment the following line to resolve.  
// class A{};  
  
class X {  
public:  
   X() {}  
  
   virtual A *mf() {  
      return 0;  
   }  
};  
  
X * f() {  
   return new X();  
}  
```