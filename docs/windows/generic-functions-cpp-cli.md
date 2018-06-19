---
title: Funzioni generiche (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- functions [C++], generic
- generic methods
- generics [C++], functions
- methods [C++], generic
- generic functions
ms.assetid: 8e409364-58f9-4360-b486-e7d555e0c218
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 66eb27b28a1b18942c0a8a9a77a877a2f0b2ef8c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878834"
---
# <a name="generic-functions-ccli"></a>Funzioni generiche (C++/CLI)
Una funzione generica è una funzione dichiarata con parametri di tipo. Quando viene chiamato, vengono utilizzati i tipi effettivi anziché i parametri di tipo.  
  
## <a name="all-platforms"></a>Tutte le piattaforme  
 **Note**  
  
 Questa funzionalità non è applicabile a tutte le piattaforme.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 **Note**  
  
 Questa funzionalità non è supportata in Windows Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 Una funzione generica è una funzione dichiarata con parametri di tipo. Quando viene chiamato, vengono utilizzati i tipi effettivi anziché i parametri di tipo.  
  
 **Sintassi**  
  
```  
[attributes] [modifiers]  
return-type identifier<type-parameter identifier(s)>  
[type-parameter-constraints clauses]  
  
([formal-parameters])  
{function-body}  
```  
  
 **Parametri**  
  
 *attributi* (facoltativo)  
 Informazioni dichiarative aggiuntive. Per ulteriori informazioni sugli attributi e classi di attributi, vedere attributi.  
  
 *modificatori* (facoltativo)  
 Un modificatore per la funzione, ad esempio statico.  `virtual` non è consentita perché i metodi virtuali non possono essere generici.  
  
 *Tipo restituito*  
 Tipo restituito dal metodo. Se il tipo restituito è void, nessun valore restituito è obbligatorio.  
  
 *identifier*  
 Nome della funzione.  
  
 *parametro di tipo identificatore/i*  
 Elenco delimitato da virgole di identificatori.  
  
 *i parametri formali* (facoltativo)  
 Elenco di parametri.  
  
 *parametro di tipo-clausole di vincoli*  
 Questo consente di specificare le restrizioni per i tipi che possono essere utilizzati come argomenti di tipo e assume il formato specificato in [vincoli sui parametri di tipo generico (C + + CLI)](../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
 *corpo della funzione*  
 Il corpo del metodo, che può fare riferimento agli identificatori di parametro di tipo.  
  
 **Note**  
  
 Funzioni generiche sono le funzioni dichiarate con un parametro di tipo generico. Possono essere metodi nelle funzioni di classe o struct o autonomo. Una singola dichiarazione generica dichiara in modo implicito una famiglia di funzioni che differiscono solo per la sostituzione di un tipo effettivo diverso per il parametro di tipo generico.  
  
 In Visual C++, costruttori di classe o struct non possono essere dichiarati con parametri di tipo generico.  
  
 Quando viene chiamato, il parametro di tipo generico viene sostituito da un tipo effettivo. Il tipo effettivo può essere specificato in modo esplicito in parentesi angolari utilizzando una sintassi simile a una chiamata di funzione di modello. Se chiamata senza parametri di tipo, il compilatore tenterà di dedurre il tipo effettivo dai parametri specificati nella chiamata di funzione. Se l'argomento tipo designato non può essere dedotto dai parametri usati, il compilatore segnalerà un errore.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Esempio di codice riportato di seguito viene illustrato come una funzione generica.  
  
```  
// generics_generic_function_1.cpp  
// compile with: /clr  
generic <typename ItemType>  
void G(int i) {}  
  
ref struct A {  
   generic <typename ItemType>  
   void G(ItemType) {}  
  
   generic <typename ItemType>  
   static void H(int i) {}  
};  
  
int main() {  
   A myObject;  
  
   // generic function call  
   myObject.G<int>(10);  
  
   // generic function call with type parameters deduced  
   myObject.G(10);  
  
   // static generic function call  
   A::H<int>(10);  
  
   // global generic function call  
   G<int>(10);  
}  
```  
  
 **Esempio**  
  
 Funzioni generiche possono essere sottoposti a overload in base a una firma o grado, il numero di parametri di tipo in una funzione. Funzioni generiche, inoltre, possono risultare sovraccarico con le funzioni non generica con lo stesso nome, purché le funzioni differiscono per alcuni parametri di tipo. Ad esempio, le funzioni seguenti possono essere sottoposti a overload:  
  
```  
// generics_generic_function_2.cpp  
// compile with: /clr /c  
ref struct MyClass {  
   void MyMythod(int i) {}  
  
   generic <class T>   
   void MyMythod(int i) {}  
  
   generic <class T, class V>   
   void MyMythod(int i) {}  
};  
```  
  
 **Esempio**  
  
 L'esempio seguente usa una funzione generica per individuare il primo elemento in una matrice. Dichiara `MyClass`, che eredita dalla classe di base `MyBaseClass`. `MyClass` contiene una funzione generica `MyFunction`, che chiama un'altra funzione generica, `MyBaseClassFunction`, all'interno della classe basa. In **principale**, la funzione generica, `MyFunction`, viene chiamato utilizzando argomenti di tipo diverso.  
  
```  
// generics_generic_function_3.cpp  
// compile with: /clr  
using namespace System;  
  
ref class MyBaseClass {  
protected:  
   generic <class ItemType>  
   ItemType MyBaseClassFunction(ItemType item) {  
      return item;  
   }  
};  
  
ref class MyClass: public MyBaseClass {  
public:  
   generic <class ItemType>  
   ItemType MyFunction(ItemType item) {  
      return MyBaseClass::MyBaseClassFunction<ItemType>(item);  
   }  
};  
  
int main() {  
   MyClass^ myObj = gcnew MyClass();  
  
   // Call MyFunction using an int.  
   Console::WriteLine("My function returned an int: {0}",  
                           myObj->MyFunction<int>(2003));  
  
   // Call MyFunction using a string.  
   Console::WriteLine("My function returned a string: {0}",  
   myObj->MyFunction<String^>("Hello generic functions!"));  
}  
```  
  
 **Output**  
  
```Output  
My function returned an int: 2003  
My function returned a string: Hello generic functions!  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme Runtime](../windows/component-extensions-for-runtime-platforms.md)   
 [Generics](../windows/generics-cpp-component-extensions.md)