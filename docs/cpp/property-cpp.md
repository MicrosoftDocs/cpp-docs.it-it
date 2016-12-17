---
title: "property (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "property_cpp"
  - "Property"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], proprietà"
  - "property __declspec (parola chiave)"
ms.assetid: f3b850ba-bf48-4df7-a1d6-8259d97309ce
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# property (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'attributo può essere applicato ai "membri dati virtuali" non statici in una definizione di classe o struttura.  Il compilatore considera questi "membri dati virtuali" come membri dati modificando i riferimenti nelle chiamate di funzione.  
  
## Sintassi  
  
```  
  
      __declspec( property( get=get_func_name ) ) declarator  
__declspec( property( put=put_func_name ) ) declarator  
__declspec( property( get=get_func_name, put=put_func_name ) ) declarator  
```  
  
## Note  
 Quando il compilatore rileva un membro dati dichiarato con questo attributo a destra di un operatore di selezione dei membri \("**.**" o "**\-\>**"\), converte l'operazione in una funzione **put** o **get**, a seconda se tale espressione è un l\-value o un r\-value.  In contesti più complessi, ad esempio "`+=`", una riscrittura viene eseguita utilizzando sia **get** che **put**.  
  
 Questo attributo può anche essere utilizzato in una dichiarazione di una matrice vuota in una definizione di classe o struttura.  Ad esempio:  
  
```  
__declspec(property(get=GetX, put=PutX)) int x[];  
```  
  
 L'istruzione sopra indica che `x[]` può essere utilizzato con uno o più indici di matrice.  In questo caso, `i=p->x[a][b]` si trasformerà in `i=p->GetX(a, b)` e `p->x[a][b] = i` si trasformerà in `p->PutX(a, b, i);`  
  
 **Fine sezione specifica Microsoft**  
  
## Esempio  
  
```  
// declspec_property.cpp  
struct S {  
   int i;  
   void putprop(int j) {   
      i = j;  
   }  
  
   int getprop() {  
      return i;  
   }  
  
   __declspec(property(get = getprop, put = putprop)) int the_prop;  
};  
  
int main() {  
   S s;  
   s.the_prop = 5;  
   return s.the_prop;  
}  
```  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)