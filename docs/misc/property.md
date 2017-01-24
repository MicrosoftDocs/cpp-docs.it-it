---
title: "__property | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__property_cpp"
  - "__property"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__property (parola chiave)"
  - "classi gestite"
  - "classi gestite di proprietà [C++]"
ms.assetid: 235e3574-6882-4c52-8301-270277b9216d
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __property
> [!NOTE]
>  Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [property](../windows/property-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Dichiara una proprietà scalare o proprietà indicizzata per la classe gestita.  
  
## Sintassi  
  
```  
  
__property  
function-declarator  
  
```  
  
## Note  
 La parola chiave `__property` introduce la dichiarazione di una proprietà e può essere visualizzata in una classe, in un'interfaccia o in un tipo di valore. A una proprietà può essere associata una funzione Get \(sola lettura\), una funzione Set \(sola scrittura\) o entrambe \(lettura e scrittura\).  
  
> [!NOTE]
>  Un nome di proprietà non può corrispondere al nome della classe gestita che lo contiene. Il tipo restituito dalla funzione Get deve corrispondere al tipo dell'ultimo parametro di una funzione Set corrispondente.  
  
## Esempio  
 Nell'esempio seguente una proprietà scalare \(`Size`\) viene aggiunta alla dichiarazione `MyClass`. La proprietà viene quindi impostata e recuperata in modo implicito tramite le funzioni `get_Size` e `set_Size`:  
  
```  
// keyword__property.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__gc class MyClass {  
public:  
   MyClass() : m_size(0) {}  
   __property int get_Size() { return m_size; }  
   __property void set_Size(int value) { m_size = value; }  
   // compiler generates pseudo data member called Size  
protected:  
   int m_size;  
};  
  
int main() {  
   MyClass* class1 = new MyClass;  
   int curValue;  
  
   Console::WriteLine(class1->Size);  
  
   class1->Size = 4;   // calls the set_Size function with value==4  
   Console::WriteLine(class1->Size);  
  
   curValue = class1->Size;   // calls the get_Size function  
   Console::WriteLine(curValue);  
}  
```  
  
## Output  
  
```  
0  
4  
4  
```