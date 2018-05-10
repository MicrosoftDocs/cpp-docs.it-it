---
title: valore letterale (estensioni del componente C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- literal
- literal_cpp
dev_langs:
- C++
helpviewer_keywords:
- literal keyword [C++]
ms.assetid: 6b1a1f36-2e1d-4a23-8eb6-172f4f3c477f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6871f02a1c37def05b6450e7ffad18f6fa45b461
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="literal-c-component-extensions"></a>valore letterale (Estensioni del componente C++)
Una variabile (membro dati) contrassegnata come `literal` in un **/clr** compilazione è l'equivalente nativo di un `static const` variabile.  
  
## <a name="all-platforms"></a>Tutte le piattaforme  
 **Note**  
  
 Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 **Note**  
  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
  
## <a name="remarks"></a>Note  
 Un membro dati contrassegnato come `literal` devono essere inizializzati durante la dichiarazione e il valore deve essere una costante integrale, enum o tipo di stringa. Per la conversione dal tipo dell'espressione di inizializzazione al tipo del membro dati const statico non deve essere richiesta una conversione definita dall'utente.  
  
 In fase di esecuzione non viene allocata nessuna memoria per il campo letterale; tramite il compilatore viene inserito solo il relativo valore nei metadati per la classe.  
  
 Una variabile contrassegnata `static const` non sarà disponibile nei metadati di altri compilatori.  
  
 Per ulteriori informazioni, vedere [statico](../cpp/storage-classes-cpp.md) e [const](../cpp/const-cpp.md).  
  
 `literal` è una parola chiave sensibile al contesto. Vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene mostrato che una variabile `literal` implica `static`.  
  
```  
// mcppv2_literal.cpp  
// compile with: /clr  
ref struct X {  
   literal int i = 4;  
};  
  
int main() {  
   int value = X::i;  
}  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato l'effetto di literal nei metadati:  
  
```  
// mcppv2_literal2.cpp  
// compile with: /clr /LD  
public ref struct A {  
   literal int lit = 0;  
   static const int sc = 1;  
};  
```  
  
 Si noti la differenza nei metadati per `sc` e `lit`: la direttiva `modopt` viene applicata a `sc`, cioè può essere ignorata dagli altri compilatori.  
  
```  
.field public static int32 modopt([mscorlib]System.Runtime.CompilerServices.IsConst) sc = int32(0x0000000A)  
```  
  
```  
.field public static literal int32 lit = int32(0x0000000A)  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, creato in C#, viene fatto riferimento ai metadati creati nell'esempio precedente e viene illustrato l'effetto di variabili `literal` e `static const`:  
  
```  
// mcppv2_literal3.cs  
// compile with: /reference:mcppv2_literal2.dll  
// A C# program  
class B {  
   public static void Main() {  
      // OK  
      System.Console.WriteLine(A.lit);  
      System.Console.WriteLine(A.sc);  
  
      // C# does not enforce C++ const  
      A.sc = 9;  
      System.Console.WriteLine(A.sc);  
  
      // C# enforces const for a literal  
      A.lit = 9;   // CS0131  
  
      // you can assign a C++ literal variable to a C# const variable  
      const int i = A.lit;  
      System.Console.WriteLine(i);  
  
      // but you cannot assign a C++ static const variable  
      // to a C# const variable  
      const int j = A.sc;   // CS0133  
      System.Console.WriteLine(j);  
   }  
}  
```  
  
## <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)