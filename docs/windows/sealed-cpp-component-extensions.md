---
title: "sealed  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "sealed_cpp"
  - "sealed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sealed keyword [C++]"
ms.assetid: 3d0d688a-41aa-45f5-a25a-65c44206521e
caps.latest.revision: 26
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# sealed  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`sealed` è una parola chiave sensibile al contesto per le classi di riferimento che indica che un membro virtuale non può essere sottoposto a override o che un tipo non può essere usato come tipo di base.  
  
> [!NOTE]
>  Il linguaggio standard ISO C\+\+11 contiene la parola chiave [final](../cpp/final-specifier.md), supportata in Visual Studio.  È possibile usare `final` sulle classi standard e `sealed` sulle classi di riferimento.  
  
## Tutti i runtime  
 **Sintassi**  
  
```  
  
ref class identifier sealed {...};  
virtual return-type identifier() sealed {...};  
  
```  
  
 **Parametri**  
  
 *identifier*  
 Nome della funzione o della classe.  
  
 *return\-type*  
 Tipo restituito da una funzione.  
  
 **Note**  
  
 Nel primo esempio di sintassi, la classe è sealed.  Nel secondo esempio una funzione virtuale è sealed.  
  
 La parola chiave `sealed` è valida per le piattaforme native e anche per [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e Common Language Runtime \(CLR\).  Per altre informazioni, vedere [Identificatori di override e compilazioni native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
 È possibile rilevare in fase di compilazione se un tipo è sealed usando il tratto di tipo `__is_sealed (``type``)`.  Per altre informazioni, vedere la pagina relativa al [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 `sealed` è una parola chiave sensibile al contesto.  Per altre informazioni, vedere [Parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Vedere [Classi e struct di riferimento](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Common Language Runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 L'esempio di codice seguente illustra l'effetto di `sealed` su un membro virtuale.  
  
```cpp  
// sealed_keyword.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
   virtual void g();  
};  
  
ref class X : I1 {  
public:  
   virtual void f() {  
      System::Console::WriteLine("X::f override of I1::f");  
   }  
  
   virtual void g() sealed {  
      System::Console::WriteLine("X::f override of I1::g");  
   }  
};  
  
ref class Y : public X {  
public:  
   virtual void f() override {  
      System::Console::WriteLine("Y::f override of I1::f");  
   }  
  
   /*  
   // the following override generates a compiler error  
   virtual void g() override {  
      System::Console::WriteLine("Y::g override of I1::g");  
   }    
   */  
};  
  
int main() {  
   I1 ^ MyI = gcnew X;  
   MyI -> f();  
   MyI -> g();  
  
   I1 ^ MyI2 = gcnew Y;  
   MyI2 -> f();  
}  
```  
  
 **Output**  
  
  **X::f override of I1::f**  
 **X::f override of I1::g**  
 **Y::f override of I1::f** L'esempio di codice successivo mostra come contrassegnare una classe come sealed.  
  
```cpp  
// sealed_keyword_2.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
ref class X sealed : I1 {  
public:  
   virtual void f() override {}  
};  
  
ref class Y : public X {   // C3246 base class X is sealed  
public:  
   virtual void f() override {}  
};  
```  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)