---
title: "override  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "overriding, override keyword [C++]"
  - "override keyword [C++]"
ms.assetid: 34d19257-1686-4fcd-96f5-af07c70ba914
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# override  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave sensibile al contesto `override` indica che un membro di un tipo esegue l'override di una classe base o di un membro di un interfaccia base.  
  
## Note  
 La parola chiave `override` è valida quando si compila per le piattaforme native \(opzione predefinita del compilatore\), per le piattaforme Windows Runtime \(opzione del compilatore **\/ZW**\), o per le piattaforme Common Language Runtime \(opzione del compilatore **\/clr**\).  
  
 Per ulteriori informazioni sugli identificatori di override, vedere le pagine relative agli [Identificatore override](../cpp/override-specifier.md) e agli [identificatori di override e compilazioni native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
 Per ulteriori informazioni sulle parole chiave sensibili al contesto, vedere la pagina [Parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
## Esempi  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrato che `override` può essere utilizzato nelle compilazioni native.  
  
```cpp#  
// override_keyword_1.cpp  
// compile with: /c  
struct I1 {  
   virtual void f();  
};  
  
struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrato che `override` può anche essere utilizzato nelle compilazioni Windows Runtime.  
  
```cpp#  
// override_keyword_2.cpp  
// compile with: /ZW /c  
ref struct I1 {  
   virtual void f();  
};  
  
ref struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
 **Requisiti**  
  
 Opzione del compilatore: **\/ZW**  
  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrato che `override` può anche essere utilizzato nelle compilazioni Common Language Runtime.  
  
```cpp#  
// override_keyword_3.cpp  
// compile with: /clr /c  
ref struct I1 {  
   virtual void f();  
};  
  
ref struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
 **Requisiti**  
  
 Opzione del compilatore: **\/clr**  
  
## Vedere anche  
 [Identificatore override](../cpp/override-specifier.md)   
 [Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)