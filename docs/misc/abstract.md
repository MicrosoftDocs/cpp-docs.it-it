---
title: "__abstract | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__abstract_cpp"
  - "__abstract"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], abstract"
  - "__abstract (parola chiave)"
ms.assetid: fc6eee5e-9f07-4438-97f7-f2e124263575
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __abstract
> [!NOTE]
>  Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [abstract](../windows/abstract-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Dichiara una classe gestita di cui non è possibile creare un'istanza direttamente.  
  
## Sintassi  
  
```  
  
__abstract   
class-specifier  
__abstract   
struct-specifier  
  
```  
  
## Note  
 La parola chiave `__abstract` dichiara che la classe di destinazione può essere utilizzata solo come classe base di un'altra classe. L'applicazione di `__abstract` a una classe o struttura non implica che il risultato sia una classe \_\_gc o una struttura \_\_gc.  
  
 Differendo dalla nozione di C\+\+ di una classe base [abstract](../cpp/abstract-classes-cpp.md), una classe con la parola chiave `__abstract` può definire le relative funzioni membro.  
  
> [!NOTE]
>  La parola chiave `__abstract` non è consentita se utilizzata con la parola chiave `__value` o `__sealed` ed è ridondante se utilizzata con la parola chiave `__interface`.  
  
## Esempio  
 Nell'esempio seguente la classe `Derived` è derivata da una classe base astratta \(`Base`\). La creazione di istanze viene quindi effettuata su entrambe, ma solo `Derived` ha esito positivo.  
  
```  
// keyword__abstract.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__abstract __gc class Base {  
   int BaseFunction() {  
      return 0;  
   }  
};  
  
__gc class Derived: public Base {};  
  
int main() {  
   Base* MyBase = new Base();   // C3622 can't BAse is abstract  
   Derived* MyDerived = new Derived();  
}  
```