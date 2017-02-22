---
title: "Avviso del compilatore (livello 4) C4626 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4626"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4626"
ms.assetid: 7f822ff4-a4a3-4f17-b45b-e8b7b4659a14
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 4) C4626
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'derived class': l'operatore di assegnazione è stato definito in modo implicito come eliminato perché un operatore di assegnazione della classe di base è inaccessibile o è stato eliminato  
  
 Un operatore di assegnazione è stato eliminato o non è accessibile in una classe di base e quindi non è stato generato per una classe derivata.  Qualsiasi tentativo di assegnare oggetti di questo tipo causerà un errore del compilatore.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 L'esempio seguente genera l'errore C4626 e mostra come risolverlo:  
  
```  
// C4626  
// compile with: /W4  
#pragma warning(default : 4626)  
class B  
{  
// public:  
   B& operator = (const B&)  
   {  
      return *this;  
   }  
};  
  
class D : public B  
{  
  
}; // C4626 - to fix, make B's copy constructor public  
  
int main()  
{  
   D m;  
   D n;  
   // m = n;   // this line will cause an error  
}  
```