---
title: "Explicit Overrides  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overriding, override [C++]"
ms.assetid: 4ec3eaf5-163b-4df8-8f16-7a2ec04c3d0f
caps.latest.revision: 21
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Explicit Overrides  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come eseguire l'override in modo esplicito di un membro di una classe o interfaccia base.  Un override \(esplicito\) denominato deve essere utilizzato solo per eseguire l'override di un metodo con un metodo derivato che ha un nome diverso.  
  
## Tutti i runtime  
 **Sintassi**  
  
```  
  
        overriding-function-declarator = type::function [,type::function] { overriding-function-definition }  
overriding-function-declarator = function { overriding-function-definition }  
```  
  
 **Parametri**  
  
 *overriding\-function\-declarator*  
 Il tipo restituito, il nome e la lista degli argomenti della funzione di override.  Si noti che la funzione in override non deve avere lo stesso nome della funzione sottoposta a override.  
  
 *type*  
 Il tipo di base che contiene una funzione su cui eseguire l'override.  
  
 *function*  
 Un elenco delimitato da virgole di uno o più nomi di funzione su cui eseguire l'override.  
  
 *overriding\-function\-definition*  
 Le istruzioni del corpo della funzione che definiscono la funzione di override.  
  
 **Osservazioni**  
  
 Usare override espliciti per creare un alias per la firma di un metodo o per fornire diverse implementazioni dei metodi con la stessa firma.  
  
 Per informazioni su come modificare il comportamento dei tipi ereditati e dei membri dei tipi ereditati, vedere [Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md).  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Osservazioni**  
  
 Per informazioni sugli override espliciti nel codice nativo o nel codice compilato con **\/clr:oldSyntax**, vedere [Override espliciti](../cpp/explicit-overrides-cpp.md).  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 L'esempio di codice seguente mostra un semplice override implicito e l'implementazione di un membro in un'interfaccia di base, senza l'utilizzo di override espliciti.  
  
```  
// explicit_override_1.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
ref class X : public I1 {  
public:  
   virtual void f() {  
      System::Console::WriteLine("X::f override of I1::f");  
   }  
};  
  
int main() {  
   I1 ^ MyI = gcnew X;  
   MyI -> f();  
}  
```  
  
 **Output**  
  
  **X::f override of I1::f** **Esempio**  
  
 L'esempio di codice seguente mostra come implementare tutti i membri di interfaccia con una firma comune, utilizzando la sintassi di override esplicito.  
  
```  
  
// explicit_override_2.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
interface struct I2 {  
   virtual void f();  
};  
  
ref struct X : public I1, I2 {  
   virtual void f() = I1::f, I2::f {  
      System::Console::WriteLine("X::f override of I1::f and I2::f");  
   }  
};  
  
int main() {  
   I1 ^ MyI = gcnew X;  
   I2 ^ MyI2 = gcnew X;  
   MyI -> f();  
   MyI2 -> f();  
}  
```  
  
 **Output**  
  
  **Override X::f di I1::f e I2::f**  
 **Override X::f di I1::f e I2::f** **Esempio**  
  
 Il seguente esempio di codice mostra come un override di funzione può avere un nome diverso dalla funzione che sta implementando.  
  
```  
// explicit_override_3.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
ref class X : public I1 {  
public:  
   virtual void g() = I1::f {  
      System::Console::WriteLine("X::g");  
   }  
};  
  
int main() {  
   I1 ^ a = gcnew X;  
   a->f();  
}  
```  
  
 **Output**  
  
  **X::g** **Esempio**  
  
 L'esempio di codice seguente mostra un'implementazione di interfaccia esplicita che implementa una raccolta indipendente dai tipi.  
  
```  
// explicit_override_4.cpp  
// compile with: /clr /LD  
using namespace System;  
ref class R : ICloneable {  
   int X;  
  
   virtual Object^ C() sealed = ICloneable::Clone {  
      return this->Clone();  
   }  
  
public:  
   R() : X(0) {}  
   R(int x) : X(x) {}  
  
   virtual R^ Clone() {  
      R^ r = gcnew R;  
      r->X = this->X;  
      return r;  
   }  
};  
```  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)