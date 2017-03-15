---
title: "interior_ptr (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "stdcli::language::interior_ptr"
  - "interior_ptr_cpp"
  - "interior_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interior_ptr keyword [C++]"
ms.assetid: 25160f74-569e-492d-9e3c-67ece7486baa
caps.latest.revision: 17
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# interior_ptr (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un *puntatore interno* dichiara un puntatore in un tipo di riferimento, ma non all'oggetto stesso.  Un puntatore interno può puntare ad un handle di riferimento, ad un tipo di valore, ad un handle di tipo boxed, ad un membro di un tipo gestito o ad un elemento di un array gestito.  
  
## Tutti i runtime  
 \(Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime\).  
  
## Windows Runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Common Language Runtime  
 L'esempio di sintassi seguente illustra un puntatore interno.  
  
### Sintassi  
  
```cpp  
cli::interior_ptr<cv_qualifier type> var = &initializer;  
```  
  
### Parametri  
 *cv\_qualifier*  
 **const** o qualificatori di `volatile`.  
  
 *type*  
 Tipo di *initializer*.  
  
 *var*  
 Il nome della variabile `interior_ptr`.  
  
 *initializer*  
 Un membro di un tipo di riferimento, di un elemento di un array gestito o di un qualsiasi altro oggetto che è possibile assegnare ad un puntatore nativo.  
  
### Osservazioni  
 Un puntatore nativo non può tracciare un elemento se la sua posizione cambia nell'heap gestito, il quale deriva da istanze di spostamento del Garbage Collector di un oggetto.  Affinché un puntatore faccia riferimento correttamente all'istanza, il runtime deve aggiornare il puntatore all'oggetto appena posizionato.  
  
 Un `interior_ptr` rappresenta un superset della funzionalità di un puntatore nativo.  Pertanto, qualsiasi cosa che possa essere assegnata ad un puntatore nativo può anche essere assegnata ad un `interior_ptr`.  Un puntatore interno può eseguire lo stesso gruppo di operazioni dei puntatori nativi, incluso il confronto e l'aritmetica dei puntatori.  
  
 Un puntatore interno può essere dichiarato solo nello stack.  Un puntatore interno non può essere dichiarato come membro di una classe.  
  
 Poiché i puntatori interni sono disponibili solo nello stack, prendere l'indirizzo di un puntatore interno genera un puntatore non gestito.  
  
 `interior_ptr` ha una conversione implicita a `bool`, che consente di utilizzarlo nelle istruzioni condizionali.  
  
 Per informazioni su come dichiarare un puntatore interno che punta in un oggetto che non può essere spostato sull'heap del garbage collection, vedere [pin\_ptr](../windows/pin-ptr-cpp-cli.md).  
  
 `interior_ptr` è nello spazio dei nomi cli.  Per ulteriori informazioni, vedere [Platform, default, and cli Namespaces](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md).  
  
 Per ulteriori informazioni sui puntatori interni, vedere  
  
-   [How to: Declare and Use Interior Pointers and Managed Arrays \(C\+\+\/CLI\)](../windows/how-to-declare-and-use-interior-pointers-and-managed-arrays-cpp-cli.md)  
  
-   [How to: Declare Value Types with the interior\_ptr Keyword \(C\+\+\/CLI\)](../windows/how-to-declare-value-types-with-the-interior-ptr-keyword-cpp-cli.md)  
  
-   [How to: Overload Functions with Interior Pointers and Native Pointers \(C\+\+\/CLI\)](../windows/how-to-overload-functions-with-interior-pointers-and-native-pointers-cpp-cli.md)  
  
-   [How to: Declare Interior Pointers with the const Keyword \(C\+\+\/CLI\)](../windows/how-to-declare-interior-pointers-with-the-const-keyword-cpp-cli.md)  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Il seguente codice di esempio mostra come dichiarare e utilizzare un puntatore interno in un tipo di riferimento.  
  
```cpp  
// interior_ptr.cpp  
// compile with: /clr  
using namespace System;  
  
ref class MyClass {  
public:  
   int data;  
};  
  
int main() {  
   MyClass ^ h_MyClass = gcnew MyClass;  
   h_MyClass->data = 1;  
   Console::WriteLine(h_MyClass->data);  
  
   interior_ptr<int> p = &(h_MyClass->data);  
   *p = 2;  
   Console::WriteLine(h_MyClass->data);  
  
   // alternatively  
   interior_ptr<MyClass ^> p2 = &h_MyClass;  
   (*p2)->data = 3;  
   Console::WriteLine((*p2)->data);  
}  
```  
  
 **Output**  
  
 **1**   
**2**   
**3**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)