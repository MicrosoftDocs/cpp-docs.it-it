---
title: per ognuno, in | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::foreach
- for
- each
- in
dev_langs: C++
helpviewer_keywords: for each keyword [C++]
ms.assetid: 0c3a364b-2747-43f3-bb8d-b7d3b7023f79
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 5dab51168b656422ddcf2c317a7f7fee1faf162e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="for-each-in"></a>for each, in
Scorre una matrice o una raccolta. Questa parola chiave non standard è disponibile sia nei progetti C++/CLI sia nei progetti C++ nativi. Il suo utilizzo non è tuttavia consigliato. È consigliabile utilizzare uno standard [per istruzione (C++) basato su intervallo](../cpp/range-based-for-statement-cpp.md) invece.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 **Sintassi**  
  
```  
  
      for each (typeidentifierinexpression) {  
   statements  
}  
  
```  
  
 **Parametri**  
  
 `type`  
 Tipo di `identifier`.  
  
 `identifier`  
 Variabile di iterazione che rappresenta l'elemento della raccolta.  Quando `identifier` è un [operatore di riferimento di rilevamento](../windows/tracking-reference-operator-cpp-component-extensions.md), è possibile modificare l'elemento.  
  
 `expression`  
 Raccolta o espressione di matrice. L'elemento della raccolta deve poter essere convertito dal compilatore nel tipo `identifier`.  
  
 `statements`  
 Una o più istruzioni da eseguire.  
  
 **Note**  
  
 L'istruzione `for each` viene utilizzata per scorrere una raccolta. È possibile modificare gli elementi di una raccolta, ma non è possibile aggiungere o eliminare elementi.  
  
 Il *istruzioni* vengono eseguiti per ogni elemento nella matrice o raccolta. Dopo che l'iterazione è stata completata per tutti gli elementi della raccolta, il controllo viene trasferito all'istruzione che segue il blocco `for each`.  
  
 `for each`e `in` sono [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
 Per ulteriori informazioni:  
  
-   [Scorrere la raccolta di librerie standard C++ tramite for each](../dotnet/iterating-over-stl-collection-by-using-for-each.md)  
  
-   [Procedura: Scorrere le matrici con for each](../dotnet/how-to-iterate-over-arrays-with-for-each.md)  
  
-   [Procedura: Scorrere una raccolta generica con for each](../dotnet/how-to-iterate-over-a-generic-collection-with-for-each.md)  
  
-   [Procedura: Scorrere una raccolta definita dall'utente con for each](../dotnet/how-to-iterate-over-a-user-defined-collection-with-for-each.md)  
  
## <a name="windows-runtime"></a>Windows Runtime  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
### <a name="example"></a>Esempio  
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
  
```Output  
abcd  
  
Testing  
```  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Note**  
  
 La sintassi CLR è lo stesso come il **tutti i runtime** sintassi, tranne che come indicato di seguito.  
  
 *espressione*  
 Raccolta o espressione di matrice gestita. L'elemento della raccolta deve essere in modo che il compilatore può convertire da <xref:System.Object> per il *identificatore* tipo.  
  
 *espressione* restituisce un tipo che implementa <xref:System.Collections.IEnumerable>, <xref:System.Collections.Generic.IEnumerable%601>, o un tipo che definisce un `GetEnumerator` metodo che restituisce un tipo che implementa <xref:System.Collections.IEnumerator> o dichiara tutti i metodi definiti in `IEnumerator`.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="example"></a>Esempio  
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
  
```Output  
abcd  
  
Testing   
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)