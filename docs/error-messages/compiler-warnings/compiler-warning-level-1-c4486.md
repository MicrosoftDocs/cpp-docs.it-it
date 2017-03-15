---
title: "Avviso del compilatore (livello 1) C4486 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4486"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4486"
ms.assetid: 2c0c59e3-d025-4d97-8da2-fa27df1402fc
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Avviso del compilatore (livello 1) C4486
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': un metodo virtuale privato di una classe di riferimento o di valori dovrebbe essere contrassegnato 'sealed'  
  
 Poiché non è possibile accedervi né eseguirne l'override, le funzioni membro virtuali private di una classe o di una struttura gestita devono essere contrassegnate come [sealed](../../windows/sealed-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4486:  
  
```  
// C4486.cpp  
// compile with: /clr /c /W1  
ref class B {  
private:  
   virtual void f() {}   // C4486  
   virtual void f1() sealed {}   // OK  
};  
```  
  
## Esempio  
 Nell'esempio riportato di seguito viene indicato un possibile utilizzo di una funzione virtuale privata di tipo sealed.  
  
```  
// C4486_b.cpp  
// compile with: /clr /c  
ref class B {};  
  
ref class D : B {};  
  
interface class I {  
   B^ mf();  
};  
  
ref class E : I {  
private:  
   virtual B^ g() sealed = I::mf {  
      return gcnew B;  
   }  
  
public:  
   virtual D^ mf() {  
      return gcnew D;  
   }  
};  
```