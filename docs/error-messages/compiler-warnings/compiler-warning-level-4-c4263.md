---
title: "Avviso del compilatore (livello 4) C4263 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4263"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4263"
ms.assetid: daabb05d-ab56-460f-ab6c-c74d222ef649
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 4) C4263
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': la funzione membro non esegue l'override di nessuna funzione membro virtuale di una classe base  
  
 La definizione di una funzione di classe ha lo stesso nome di una funzione virtuale in una classe base, ma non lo stesso numero o tipo di argomenti.  Questa condizione nasconde la funzione virtuale nella classe base.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Il seguente codice di esempio genera l'errore C4263:  
  
```  
// C4263.cpp  
// compile with: /W4  
#pragma warning(default:4263)  
#pragma warning(default:4264)  
class B {  
public:  
   virtual void func();  
};  
  
class D : public B {  
   void func(int);   // C4263  
};  
  
int main() {  
}  
```