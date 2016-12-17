---
title: "__sealed | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__sealed_cpp"
  - "__sealed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sealed (parola chiave) [C++]"
  - "__sealed (parola chiave)"
ms.assetid: 9e5f778a-4ad8-468d-9c44-783e576fb49b
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __sealed
> [!NOTE]
>  Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [sealed](../windows/sealed-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Viene impedito a un metodo di essere sottoposto a override o a una classe di essere una classe base.  
  
## Sintassi  
  
```  
  
__sealed   
class-specifier  
__sealed   
struct-specifier  
__sealed   
function-declarator  
  
```  
  
## Note  
 La parola chiave `__sealed` specifica che un metodo di classe non può essere sottoposto a override o che una classe non può essere una classe base.  
  
 Quando si utilizza la parola chiave `__sealed`, tenere presente quanto segue:  
  
-   Un metodo virtuale `__sealed` non può essere sottoposto a override.  
  
-   Se un metodo di membro non virtuale è contrassegnato come `__sealed`, la qualificazione `__sealed` viene ignorata.  
  
-   Un metodo `__sealed` non può essere puro.  
  
-   Il **sealed** \(parola chiave\) non è consentita se utilizzata con la [Interface](../cpp/interface.md) \(parola chiave\).  
  
 Quando una classe \(o struct\) è contrassegnata con `__sealed`, non può essere utilizzata come classe base. Ad esempio:  
  
```  
__sealed __gc class A {  
   // ...  
};  
// error: cannot derive from a sealed class  
__gc class B : public A { /* ...*/ };  
```  
  
> [!NOTE]
>  La parola chiave `__sealed` non è consentita se utilizzata con la parola chiave `__abstract`.  
  
## Esempio  
 Nell'esempio seguente, viene dichiarato un metodo virtuale sealed \(`f`\). La funzione viene quindi sottoposta a override in `main()`, determinando un errore di compilazione:  
  
```  
// keyword__sealed.cpp  
// compile with: /clr:oldSyntax  
  
#using <mscorlib.dll>  
extern "C" int printf_s(const char*, ...);  
  
__gc struct I  
{  
    __sealed virtual void f()  
    {   
        printf_s("I::f()\n");   
    }  
    virtual void g()  
    {  
        printf_s("I::g()\n");  
    }  
};  
  
__gc struct A : I   
{  
    void f() // C3248 sealed function  
    {   
        printf_s("A::f()\n");   
    }     
    void g()  
    {  
        printf_s("A::g()\n");  
    }  
};  
  
int main()  
{  
    A* pA = new A;  
  
    pA->f();  
    pA->g();  
}  
```