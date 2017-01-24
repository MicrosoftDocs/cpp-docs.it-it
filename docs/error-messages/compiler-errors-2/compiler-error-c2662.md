---
title: "Errore del compilatore C2662 | Microsoft Docs"
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
  - "C2662"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2662"
ms.assetid: e172c2a4-f29e-4034-8232-e7dc6f83689f
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2662
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': impossibile convertire il puntatore 'this' da 'tipo1' a 'tipo2'  
  
 Non è stato possibile convertire il puntatore `this` da `type1`a `type2`.  
  
 Questo errore può verificarsi quando si richiama una funzione membro non\-`const` su un oggetto `const`.  Possibili soluzioni:  
  
-   Rimuovere `const` dalla dichiarazione dell'oggetto.  
  
-   Aggiungere `const` alla funzione membro.  
  
 Il seguente codice di esempio genera l'errore C2662:  
  
```  
// C2662.cpp  
class C {  
public:  
   void func1();  
   void func2() const{}  
} const c;  
  
int main() {  
   c.func1();   // C2662  
   c.func2();   // OK  
}  
```  
  
 Quando si esegue la compilazione con **\/clr**, non è possibile chiamare una funzione su un tipo gestito completo `const` o `volatile`.  Non è possibile dichiarare una funzione membro const di una classe gestita. È pertanto impossibile chiamare metodi sugli oggetti gestiti const.  
  
```  
// C2662_b.cpp  
// compile with: /c /clr  
ref struct M {  
   property M^ Type {  
      M^ get() { return this; }  
   }  
  
   void operator=(const M %m) {  
      M ^ prop = m.Type;   // C2662  
   }  
};  
  
ref struct N {  
   property N^ Type {  
      N^ get() { return this; }  
   }  
  
   void operator=(N % n) {  
      N ^ prop = n.Type;   // OK  
   }  
};  
```  
  
 Il seguente codice di esempio genera l'errore C2662:  
  
```  
// C2662_c.cpp  
// compile with: /c  
// C2662 expected  
typedef int ISXVD;  
typedef unsigned char BYTE;  
  
class LXBASE {  
protected:  
    BYTE *m_rgb;  
};  
  
class LXISXVD:LXBASE {  
public:  
   // Delete the following line to resolve.  
   ISXVD *PMin() { return (ISXVD *)m_rgb; }  
  
   ISXVD *PMin2() const { return (ISXVD *)m_rgb; };   // OK  
};  
  
void F(const LXISXVD *plxisxvd, int iDim) {  
   ISXVD isxvd;  
   // Delete the following line to resolve.  
   isxvd = plxisxvd->PMin()[iDim];  
  
   isxvd = plxisxvd->PMin2()[iDim];    
}  
```