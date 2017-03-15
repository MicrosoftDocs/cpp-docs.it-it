---
title: "Parole chiave sensibili al contesto (Estensioni del componente C++) | Microsoft Docs"
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
  - "internal_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parole chiave sensibili al contesto"
ms.assetid: e33da089-f434-44e9-8cce-4668d05a8939
caps.latest.revision: 19
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Parole chiave sensibili al contesto (Estensioni del componente C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

*Le parole chiave sensibili al contesto* sono elementi del linguaggio riconosciuti solo in contesti specifici.  All'esterno del contesto specifico, una parola chiave sensibile al contesto può essere un simbolo definito dall'utente.  
  
## Tutti i runtime  
 **Note**  
  
 Di seguito è riportato un elenco di parole chiave sensibili al contesto:  
  
-   [abstract](../windows/abstract-cpp-component-extensions.md)  
  
-   [delegato](../windows/delegate-cpp-component-extensions.md)  
  
-   [evento](../windows/event-cpp-component-extensions.md)  
  
-   [finally](../dotnet/finally.md)  
  
-   [for each, in](../dotnet/for-each-in.md)  
  
-   [initonly](../dotnet/initonly-cpp-cli.md)  
  
-   `internal` \(vedere [Visibilità di membri](../misc/member-visibility.md)\)  
  
-   [literal](../windows/literal-cpp-component-extensions.md)  
  
-   [override](../windows/override-cpp-component-extensions.md)  
  
-   [property](../windows/property-cpp-component-extensions.md)  
  
-   [sealed](../windows/sealed-cpp-component-extensions.md)  
  
-   `where` \(parte di [Generics](../windows/generics-cpp-component-extensions.md)\)  
  
 Per scopi di leggibilità, è possibile limitare l'utilizzo delle parole chiave sensibili al contesto come simboli definiti dall'utente.  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Note**  
  
 Non esistono commenti specifici della piattaforma per questa funzionalità.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Note**  
  
 Non esistono commenti specifici della piattaforma per questa funzionalità.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio seguente viene illustrato che nel contesto appropriato, la parola chiave sensibile al contesto `property` può essere utilizzata per definire una proprietà e una variabile.  
  
```  
// context_sensitive_keywords.cpp  
// compile with: /clr  
public ref class C {  
   int MyInt;  
public:  
   C() : MyInt(99) {}  
  
   property int Property_Block {   // context-sensitive keyword  
      int get() { return MyInt; }  
   }  
};  
  
int main() {  
   int property = 0;               // variable name  
   C ^ MyC = gcnew C();  
   property = MyC->Property_Block;  
   System::Console::WriteLine(++property);  
}  
```  
  
 **Output**  
  
  **100**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)