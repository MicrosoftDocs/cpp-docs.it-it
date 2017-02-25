---
title: "Errore del compilatore C3185 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3185"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3185"
ms.assetid: 5bf96279-043c-4981-9d02-b4550071b192
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C3185
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'typeid' utilizzato nel tipo gestito o WinRT 'type'; utilizzare 'operator'  
  
 Non è possibile applicare l'operatore [typeid](../../cpp/typeid-operator.md) a un tipo gestito o WinRT type; usare [typeid](../../windows/typeid-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3185 e mostra come risolverlo:  
  
```  
// C3185a.cpp  
// compile with: /clr  
ref class Base {};  
ref class Derived : public Base {};  
  
int main() {  
   Derived ^ pd = gcnew Derived;  
   Base ^pb = pd;  
   const type_info & t1 = typeid(pb);   // C3185  
   System::Type ^ MyType = Base::typeid;   // OK  
};  
```  
  
 **Estensioni gestite per C\+\+**  
  
 Non è possibile applicare [typeid](../../cpp/typeid-operator.md) a un tipo gestito; usare [\_\_typeof](../../misc/typeof.md).  
  
 L'esempio seguente genera l'errore C3185:  
  
```  
// C3185b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__gc class Base {};  
__gc class Derived : public Base {};  
  
int main() {  
   Derived *pd = new Derived;  
   Base *pb = pd;  
   const type_info & t1 = typeid(*pb);   // C3185  
  
   // OK  
   Type * t = __typeof(Base);  
   Type * t1 = __typeof(Derived);  
};  
```