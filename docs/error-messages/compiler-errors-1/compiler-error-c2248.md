---
title: "Errore del compilatore C2248 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2248"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2248"
ms.assetid: 7a3ba0e8-d3b9-4bb9-95db-81ef17e31d23
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Errore del compilatore C2248
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': impossibile accedere a 'accesso' membro dichiarato nella classe 'classe'  
  
 I membri di una classe derivata non possono accedere ai membri `private` di una classe base.  Non è possibile accedere ai membri `private` o `protected` di istanze di classe.  
  
 Per ulteriori informazioni sull'errore C2248, vedere l'articolo della Knowledge Base KB243351 \(informazioni in lingua inglese\).  
  
 Il seguente codice di esempio genera l'errore C2248:  
  
```  
// C2248.cpp  
#include <stdio.h>  
class X {  
public:  
   int  m_pubMemb;  
   void setPrivMemb( int i ) {  
      m_privMemb = i;  
      printf_s("\n%d", m_privMemb);  
   }  
protected:  
   int  m_protMemb;  
  
private:  
   int  m_privMemb;  
} x;  
  
int main() {  
   x.m_pubMemb = 4;  
   printf_s("\n%d", x.m_pubMemb);  
   x.m_protMemb = 2;   // C2248 m_protMemb is protected  
   x.m_privMemb = 3;   // C2248  m_privMemb is private  
   x.setPrivMemb(0);   // OK uses public access function  
}  
```  
  
 Un altro problema relativo alla conformità che causa la visualizzazione dell'errore C2248 riguarda l'utilizzo di specializzazioni ed elementi friend di modelli.  Per ulteriori informazioni, vedere [Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md).  
  
```  
// C2248_b.cpp  
template<class T>  
void f(T t) {  
   t.i;   // C2248  
}  
  
struct S {  
private:  
   int i;  
  
public:  
   S() {}  
   // Delete the following line to resolve.  
   friend void f(S);   // refer to the non-template function void f(S)  
  
   // Uncomment the following line to resolve.  
   // friend void f<S>(S);  
};  
  
int main() {  
   S s;  
   f<S>(s);  
}  
```  
  
 L'errore C2248 può inoltre essere visualizzato a causa di un problema di conformità quando si tenta di dichiarare un elemento friend di una classe e quest'ultima non è visibile alla dichiarazione dell'elemento friend nell'ambito della classe.  In questo caso, concedere l'accesso friend alla classe contenitore per correggere l'errore.  
  
```  
// C2248_c.cpp  
// compile with: /c  
class T {  
   class S {  
      class E {};  
   };  
   friend class S::E;   // C2248  
};  
  
class A {  
   class S {  
      class E {};  
      friend class A;   // grant friendship to enclosing class  
   };  
   friend class S::E;   // OK  
};  
```