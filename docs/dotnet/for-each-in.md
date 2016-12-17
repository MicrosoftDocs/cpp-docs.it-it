---
title: "for each, in | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::foreach"
  - "for"
  - "each"
  - "in"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "for each (parola chiave) [C++]"
ms.assetid: 0c3a364b-2747-43f3-bb8d-b7d3b7023f79
caps.latest.revision: 24
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# for each, in
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Scorre una matrice o una raccolta.  Questa parola chiave non standard è disponibile sia nei progetti C\+\+\/CLI sia nei progetti C\+\+ nativi.  Il suo utilizzo non è tuttavia consigliato.  In alternativa, considerare l'utilizzo di un'[Istruzione for basata su intervallo \(C\+\+\)](../cpp/range-based-for-statement-cpp.md) standard.  
  
## Tutti i runtime  
 **Sintassi**  
  
```  
  
        for each (type identifier in expression) {  
   statements  
}  
  
```  
  
 **Parametri**  
  
 `type`  
 Tipo di `identifier`.  
  
 `identifier`  
 Variabile di iterazione che rappresenta l'elemento della raccolta.  Quando `identifier` è un [Tracking Reference Operator](../windows/tracking-reference-operator-cpp-component-extensions.md), è possibile modificare l'elemento.  
  
 `expression`  
 Raccolta o espressione di matrice.  L'elemento della raccolta deve poter essere convertito dal compilatore nel tipo `identifier`.  
  
 `statements`  
 Una o più istruzioni da eseguire.  
  
 **Osservazioni**  
  
 L'istruzione `for each` viene utilizzata per scorrere una raccolta.  È possibile modificare gli elementi di una raccolta, ma non è possibile aggiungere o eliminare elementi.  
  
 Vengono eseguite *statements* per ogni elemento della matrice o della raccolta.  Dopo che l'iterazione è stata completata per tutti gli elementi della raccolta, il controllo viene trasferito all'istruzione che segue il blocco `for each`.  
  
 `for each` e `in` sono [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
 Per ulteriori informazioni:  
  
-   [Scorrimento di una raccolta STL con for each](../dotnet/iterating-over-stl-collection-by-using-for-each.md)  
  
-   [Procedura: scorrere le matrici con for each](../dotnet/how-to-iterate-over-arrays-with-for-each.md)  
  
-   [Procedura: scorrere una raccolta generica con for each](../dotnet/how-to-iterate-over-a-generic-collection-with-for-each.md)  
  
-   [Procedura: scorrere una raccolta definita dall'utente con for each](../dotnet/how-to-iterate-over-a-user-defined-collection-with-for-each.md)  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
### Esempio  
 In questo esempio viene illustrato come utilizzare `for each` per scorrere una stringa.  
  
```  
// for_each_string1.cpp  
// compile with: /ZW  
#include <stdio.h>  
using namespace Platform;  
  
ref struct MyClass {  
   property String^ MyStringProperty;  
};  
  
int main() {  
   String^ MyString = ref new String("abcd");  
  
   for each ( char c in MyString )  
      wprintf("%c", c);  
  
   wprintf("/n");  
  
   MyClass^ x = ref new MyClass();  
   x->MyStringProperty = "Testing";  
  
   for each( char c in x->MyStringProperty )  
      wprintf("%c", c);  
}  
```  
  
 **Output**  
  
  **abcd**  
 **Test**   
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Osservazioni**  
  
 La sintassi CLR è uguale alla sintassi di **tutti i runtime**, ad eccezione di quanto segue.  
  
 *expression*  
 Raccolta o espressione di matrice gestita.  L'elemento della raccolta deve poter essere convertito dal compilatore da <xref:System.Object> al tipo *identifier*.  
  
 *expression* restituisce un tipo che implementa <xref:System.Collections.IEnumerable>, <xref:System.Collections.Generic.IEnumerable%601> o un tipo che definisce un metodo `GetEnumerator` che a sua volta restituisce un tipo che implementa <xref:System.Collections.IEnumerator> o dichiara tutti i metodi definiti in `IEnumerator`.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempio  
 In questo esempio viene illustrato come utilizzare `for each` per scorrere una stringa.  
  
```  
// for_each_string2.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct MyClass {  
   property String ^ MyStringProperty;  
};  
  
int main() {  
   String ^ MyString = gcnew String("abcd");  
  
   for each ( Char c in MyString )  
      Console::Write(c);  
  
   Console::WriteLine();  
  
   MyClass ^ x = gcnew MyClass();  
   x->MyStringProperty = "Testing";  
  
   for each( Char c in x->MyStringProperty )  
      Console::Write(c);  
}  
```  
  
 **Output**  
  
  **abcd**  
 **Test**    
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)