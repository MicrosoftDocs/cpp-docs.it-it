---
title: "Generic Delegates (Visual C++) | Microsoft Docs"
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
  - "generic delegates"
  - "delegates, generic [C++]"
ms.assetid: 09d430b2-1aef-4fbc-87f9-9d7b8185d798
caps.latest.revision: 20
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Generic Delegates (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Si possono utilizzare parametri generici di tipo con delegati.  Per ulteriori informazioni sui delegati, vedere [delegato](../windows/delegate-cpp-component-extensions.md).  
  
## Sintassi  
  
```  
[attributes]   
generic < [class | typename] type-parameter-identifiers >  
[type-parameter-constraints-clauses]  
[accessibility-modifiers] delegate result-type identifier   
([formal-parameters]);  
```  
  
#### Parametri  
 `attributes` \(facoltativo\)  
 Informazioni dichiarative aggiuntive.  Per ulteriori informazioni sugli attributi e sulle classi di attributo, vedere Attributi.  
  
 *identificatori di parametro di tipo*  
 Elenco delimitato da virgole degli identificatori per i parametri di tipo.  
  
 `type-parameter-constraints-clauses`  
 Assume il formato specificato in [Constraints on Generic Type Parameters \(C\+\+\/CLI\)](../windows/constraints-on-generic-type-parameters-cpp-cli.md)  
  
 *modificatori di accessibilità* \(Facoltativo\)  
 Modificatori di accessibilità \(ad esempio  **public**, `private`\).  
  
 *tipo del risultato*  
 Il tipo restituito del delegato.  
  
 *identificatore*  
 Nome del delegato.  
  
 *parametri formali* \(Facoltativo\)  
 La lista di parametri del delegato.  
  
## Esempio  
 I parametri di tipo delegato sono specificati nel punto in cui un oggetto delegato viene creato.  Sia il delegato che il metodo associato ad esso devono avere la stessa firma.  Il seguente è un esempio di una dichiarazione di delegato generica.  
  
```  
// generics_generic_delegate1.cpp  
// compile with: /clr /c  
generic < class ItemType>  
delegate ItemType GenDelegate(ItemType p1, ItemType% p2);  
```  
  
## Esempio  
 L'esempio seguente mostra che  
  
-   Non è possibile utilizzare lo stesso oggetto delegato con diversi tipi costruiti.  Creare oggetti delegati diversi per tipi diversi.  
  
-   È possibile associare un delegato generico ad un metodo generico.  
  
-   Quando un metodo generico viene chiamato senza specificare gli argomenti di tipo, il compilatore tenta di dedurre gli argomenti di tipo per la chiamata.  
  
```  
// generics_generic_delegate2.cpp  
// compile with: /clr  
generic < class ItemType>  
delegate ItemType GenDelegate(ItemType p1, ItemType% p2);  
  
generic < class ItemType>  
ref struct MyGenClass {  
   ItemType MyMethod(ItemType i, ItemType % j) {  
      return ItemType();  
   }  
};  
  
ref struct MyClass {  
   generic < class ItemType>  
   static ItemType MyStaticMethod(ItemType i, ItemType % j) {  
      return ItemType();  
   }  
};  
  
int main() {  
   MyGenClass<int> ^ myObj1 = gcnew MyGenClass<int>();  
   MyGenClass<double> ^ myObj2 = gcnew MyGenClass<double>();  
   GenDelegate<int>^ myDelegate1 =  
      gcnew GenDelegate<int>(myObj1, &MyGenClass<int>::MyMethod);  
  
   GenDelegate<double>^ myDelegate2 =   
      gcnew GenDelegate<double>(myObj2, &MyGenClass<double>::MyMethod);  
  
   GenDelegate<int>^ myDelegate =  
      gcnew GenDelegate<int>(&MyClass::MyStaticMethod<int>);  
}  
```  
  
## Esempio  
 L'esempio seguente dichiara un delegato generico `GenDelegate<ItemType>`quindi lo istanzia associandolo al metodo `MyMethod` che utilizza il parametro di tipo `ItemType`.  Due istanze del delegato \(una Integer e una double\) vengono create e invocate.  
  
```  
// generics_generic_delegate.cpp  
// compile with: /clr  
using namespace System;  
  
// declare generic delegate  
generic <typename ItemType>  
delegate ItemType GenDelegate (ItemType p1, ItemType% p2);  
  
// Declare a generic class:  
generic <typename ItemType>  
ref class MyGenClass {  
public:  
   ItemType MyMethod(ItemType p1, ItemType% p2) {  
      p2 = p1;  
      return p1;  
    }  
};  
  
int main() {  
   int i = 0, j = 0;   
   double m = 0.0, n = 0.0;  
  
   MyGenClass<int>^ myObj1 = gcnew MyGenClass<int>();  
   MyGenClass<double>^ myObj2 = gcnew MyGenClass<double>();   
  
   // Instantiate a delegate using int.  
   GenDelegate<int>^ MyDelegate1 =   
      gcnew GenDelegate<int>(myObj1, &MyGenClass<int>::MyMethod);  
  
   // Invoke the integer delegate using MyMethod.  
   i = MyDelegate1(123, j);  
  
   Console::WriteLine(  
      "Invoking the integer delegate: i = {0}, j = {1}", i, j);  
  
   // Instantiate a delegate using double.  
   GenDelegate<double>^ MyDelegate2 =   
      gcnew GenDelegate<double>(myObj2, &MyGenClass<double>::MyMethod);  
  
   // Invoke the integer delegate using MyMethod.  
   m = MyDelegate2(0.123, n);  
  
   Console::WriteLine(  
      "Invoking the double delegate: m = {0}, n = {1}", m, n);  
}  
```  
  
  **Invocando il delegato Integer: i \= 123, j \= 123**  
**Invocando il delegato double: m \= 0.123, n \= 0.123**   
## Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)