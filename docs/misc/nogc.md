---
title: "__nogc | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__nogc_cpp"
  - "__nogc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__nogc (dichiarazioni di tipi)"
  - "classi [C++], tipo non gestito"
  - "classi non gestite, dichiarazione di"
  - "classi non gestite"
ms.assetid: 3e7f1b09-0fc3-4a8f-9458-a22f7a38ce45
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __nogc
> [!NOTE]
>  Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Nella nuova sintassi, non è necessario contrassegnare in modo esplicito un tipo come non gestito.  
  
 Dichiara in modo esplicito un tipo non gestito.  
  
## Sintassi  
  
```  
  
__nogc   
class-specifier  
__nogc   
struct-specifier  
__nogc  
interface-specifier  
__nogc  
array-specifier  
__nogc  
pointer-specifier  
__nogc  
new  
  
```  
  
## Note  
 La parola chiave `__nogc` viene utilizzata per specificare in modo esplicito che un oggetto viene allocato nell'heap C\+\+ standard. Questa parola chiave è facoltativa. Se non si specifica `__gc` o `__nogc` prima della dichiarazione di classe, viene impostato in modo predefinito su `__nogc`.  
  
 Gli oggetti di questo tipo sono simili a oggetti C\+\+ standard in quanto vengono allocati dall'heap C\+\+ standard e non sono soggetti alle limitazioni di un oggetto gestito.  
  
 La parola chiave `__nogc` viene inoltre utilizzata quando viene allocato in modo esplicito un oggetto di un tipo \_\_value nell'heap C\+\+ standard.  
  
```  
// keyword__nogc.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__value struct V {   
   int i;  
};  
int main() {  
   V * v = __nogc new V;  
   v->i = 10;  
   delete v;  
}  
```  
  
> [!NOTE]
>  La parola chiave `__nogc` può essere inoltre applicata ai tipi matrice e puntatore.  
  
 Un puntatore gc non può essere membro di una classe `__nogc`. Vedere [\_\_value](../misc/value.md) per indicazioni su come incorporare un tipo di valore in una classe `__nogc`.  
  
## Esempio  
 Nell'esempio seguente, viene dichiarata una classe non gestita \(`X`\) viene inoltre creata un'istanza dell'oggetto che viene in seguito modificato:  
  
```  
// keyword__nogc_2.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__nogc class X {  
public:  
   int i;  
};  
  
int main() {  
   X* x;   // declares an unmanaged pointer of type X  
   x = new X();   // creates unmanaged object of type X on the C++ heap  
   Console::WriteLine(x->i);  
  
   x->i = 4;   // modifies unmanaged object  
   Console::WriteLine(x->i);  
  
   delete x;   // call C++ delete operator to clean up resource  
}  
```  
  
 **48378256 4**