---
title: "abstract  (C++ Component Extensions) | Microsoft Docs"
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
  - "abstract"
  - "abstract_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "abstract keyword [C++]"
ms.assetid: cbae3408-0378-4ac8-b70d-c016b381a6d5
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# abstract  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `abstract` dichiara:  
  
-   Che un tipo può essere usato come tipo di base, ma non è possibile creare un'istanza del tipo stesso.  
  
-   Che una funzione membro di tipo può essere definita solo in un tipo derivato.  
  
## Tutte le piattaforme  
 **Sintassi**  
  
```  
  
class-declaration class-identifier abstract {}  
virtual return-type member-function-identifier() abstract ;  
  
```  
  
 **Note**  
  
 La sintassi del primo esempio dichiara una classe astratta.  Il componente *class\-declaration* può essere una dichiarazione C\+\+ nativa \(`class` o `struct`\) o una dichiarazione di estensione C\+\+ \(`ref class` o `ref struct`\) se viene specificata l'opzione del compilatore **\/ZW** o **\/clr**.  
  
 La sintassi del secondo esempio dichiara una funzione membro virtuale astratta.  Dichiarare che una funzione astratta equivale a dichiararla come funzione virtuale pura.  Dichiarare una funzione membro astratta comporta che la classe contenitore venga dichiarata astratta.  
  
 La parola chiave `abstract` è supportata nel codice nativo e specifico della piattaforma, ovvero il codice può essere compilato con o senza l'opzione del compilatore **\/ZW** o **\/clr**.  
  
 È possibile rilevare in fase di compilazione se un tipo è astratto con il tratto di tipo `__is_abstract(``type``)`.  Per altre informazioni, vedere la pagina relativa al [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 La parola chiave `abstract` è un identificatore di override sensibile al contesto.  Per altre informazioni sulle parole chiave sensibili al contesto, vedere [Parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  Per altre informazioni sugli identificatori di override, vedere [Procedura: dichiarare gli identificatori di override nelle compilazioni native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Per altre informazioni, vedere [Classi e struct di riferimento](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 L'esempio di codice seguente genera un errore perché la classe `X` è contrassegnata come `abstract`.  
  
```  
// abstract_keyword.cpp  
// compile with: /clr  
ref class X abstract {  
public:  
   virtual void f() {}  
};  
  
int main() {  
   X ^ MyX = gcnew X;   // C3622  
}  
```  
  
 **Esempio**  
  
 L'esempio di codice seguente genera un errore perché crea un'istanza di una classe nativa contrassegnata come `abstract`.  Questo errore si verifica con o senza l'opzione del compilatore **\/clr**.  
  
```  
// abstract_keyword_2.cpp  
class X abstract {  
public:  
   virtual void f() {}  
};  
  
int main() {  
   X * MyX = new X; // C3622: 'X': a class declared as 'abstract'  
                    // cannot be instantiated. See declaration of 'X'}  
  
```  
  
 **Esempio**  
  
 L'esempio di codice seguente genera un errore perché la funzione `f` include una definizione, ma è contrassegnata come `abstract`.  L'istruzione finale nell'esempio illustra che dichiarare una funzione virtuale astratta equivale a dichiarare una funzione virtuale pura.  
  
```  
// abstract_keyword_3.cpp  
// compile with: /clr  
ref class X {  
public:  
   virtual void f() abstract {}   // C3634  
   virtual void g() = 0 {}   // C3634  
};  
```  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)