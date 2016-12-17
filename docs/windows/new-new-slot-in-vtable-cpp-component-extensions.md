---
title: "new (new slot in vtable)  (C++ Component Extensions) | Microsoft Docs"
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
  - "new keyword [C++]"
ms.assetid: 1a9a5704-f02f-46ae-ad65-f0f2b6dbabc3
caps.latest.revision: 20
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# new (new slot in vtable)  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `new` indica che un membro virtuale otterrà un nuovo slot in vtable.  
  
> [!NOTE]
>  La parola chiave `new` dispone di molti utilizzi e significati.  Per ulteriori informazioni, vedere l'argomento di disambiguazione [new](../misc/new.md).  
  
## Tutti i runtime  
 \(Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime\).  
  
## Windows Runtime  
 Non supportata in [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Note**  
  
 In una compilazione **\/clr**, `new` indica che un membro virtuale otterrà un nuovo slot vtable in; che la funzione non esegue l'override di un metodo della classe base.  
  
 `new` il modificatore di newslot viene aggiunto in IL per la funzione.  Per ulteriori informazioni su newslot, vedere:  
  
-   [\<caps:sentence id\="tgt11" sentenceid\="e9bb59a12f97840a5c3173bb77c6b5b1" class\="tgtSentence"\>Metodo MethodInfo.GetBaseDefinition\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.reflection.methodinfo.getbasedefinition.aspx)  
  
-   [\<caps:sentence id\="tgt12" sentenceid\="f6ceddd85a425f38e7ed06e94a9808a9" class\="tgtSentence"\>Enumerazione MethodAttributes\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.reflection.methodattributes.aspx)  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio che segue viene mostrato l'effetto di `new`.  
  
```  
// newslot.cpp  
// compile with: /clr  
ref class C {  
public:  
   virtual void f() {  
      System::Console::WriteLine("C::f() called");  
   }  
  
   virtual void g() {  
      System::Console::WriteLine("C::g() called");  
   }  
};  
  
ref class D : public C {  
public:  
   virtual void f() new {  
      System::Console::WriteLine("D::f() called");  
   }  
  
   virtual void g() override {  
      System::Console::WriteLine("D::g() called");  
   }  
};  
  
ref class E : public D {  
public:  
   virtual void f() override {  
      System::Console::WriteLine("E::f() called");  
   }  
};  
  
int main() {  
   D^ d = gcnew D;  
   C^ c = gcnew D;  
  
   c->f();   // calls C::f  
   d->f();   // calls D::f  
  
   c->g();   // calls D::g  
   d->g();   // calls D::g  
  
   D ^ e = gcnew E;  
   e->f();   // calls E::f  
}  
```  
  
 **Output**  
  
  **C::f\(\) called**  
 **D::f\(\) called**  
 **D::g\(\) called**  
 **D::g\(\) called**  
 **E::f\(\) called**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)   
 [Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)