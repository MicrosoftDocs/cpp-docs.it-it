---
title: "Generic Functions (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
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
  - "functions [C++], generic"
  - "generic methods"
  - "generics [C++], functions"
  - "methods [C++], generic"
  - "generic functions"
ms.assetid: 8e409364-58f9-4360-b486-e7d555e0c218
caps.latest.revision: 21
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Generic Functions (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una funzione generica è una funzione dichiarata con i parametri di tipo.  Una volta chiamata, i tipi effettivi vengono utilizzati al posto dei parametri di tipo.  
  
## Tutte le piattaforme  
 **Osservazioni**  
  
 Questa funzionalità non si applica a tutte le piattaforme.  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Osservazioni**  
  
 Questa funzionalità non è supportata in [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 Una funzione generica è una funzione dichiarata con i parametri di tipo.  Una volta chiamata, i tipi effettivi vengono utilizzati al posto dei parametri di tipo.  
  
 **Sintassi**  
  
```  
[attributes] [modifiers]  
return-type identifier <type-parameter identifier(s)>  
[type-parameter-constraints clauses]  
  
([formal-parameters])  
{  
   function-body  
}  
```  
  
 **Parametri**  
  
 *attributes* \(facoltativo\)  
 Informazioni dichiarative aggiuntive.  Per ulteriori informazioni sugli attributi e sulle classi di attributo, vedere attributi.  
  
 *modifiers* \(Facoltativo\)  
 Un modificatore per la funzione, come static.  `virtual` non è consentito poiché i metodi virtuali non possono essere generici.  
  
 *return\-type*  
 Tipo restituito dal metodo.  Se il tipo restituito è void, nessun valore restituito è obbligatorio.  
  
 *identifier*  
 Il nome della funzione.  
  
 *type\-parameter identifier\(s\)*  
 Elenco delimitato da virgole degli identificatori.  
  
 *formal\-parameters* \(facoltativo\)  
 Elenco dei parametri  
  
 *type\-parameter\-constraints\-clauses*  
 Consente di specificare le restrizioni sui tipi che possono essere utilizzati come argomenti di tipo e assume il formato specificato in [Constraints on Generic Type Parameters \(C\+\+\/CLI\)](../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
 *function\-body*  
 Il corpo del metodo, che può fare riferimento agli identificatori di parametro di tipo.  
  
 **Osservazioni**  
  
 Le funzioni generiche sono funzioni dichiarate con un parametro di tipo generico.  Possono essere metodi in una classe o una struttura o funzioni autonome.  Una singola dichiarazione generica dichiara in modo implicito una famiglia di funzioni che differiscono solo in sostituzione di un tipo effettivo diverso per il parametro di tipo generico.  
  
 In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)], i costruttori di classe o di struct non possono essere dichiarati con parametri di tipo generico.  
  
 Una volta chiamato, il parametro di tipo generico è sostituito da un tipo effettivo.  Il tipo effettivo può essere specificato in modo esplicito in parentesi angolari utilizzando una sintassi simile a una chiamata di funzione di modello.  Se viene chiamato senza parametri di tipo, il compilatore tenta di dedurre il tipo effettivo dai parametri forniti nella chiamata di funzione.  Se l'argomento di tipo richiesto non può essere dedotto dai parametri utilizzati, verrà visualizzato un errore.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 L'esempio di codice seguente mostra una funzione generica.  
  
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
  
 Le funzioni generiche possono essere sottoposte a overload in base alla firma o il grado, il numero di parametri di tipo in una funzione.  Inoltre, le funzioni generiche possono essere sottoposte a overload con le funzioni non generiche con lo stesso nome, purché le funzioni differiscono in alcuni parametri di tipo.  Per esempio le funzioni seguenti possono essere sottoposte ad overload:  
  
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
  
 L'esempio seguente utilizza una funzione generica per cercare il primo elemento di un array.  Dichiara `MyClass`, che eredita dalla classe base `MyBaseClass`.  `MyClass` contiene una funzione generica, `MyFunction`, che chiama un'altra funzione generica, `MyBaseClassFunction`, nella classe di base.  In **main**, la funzione generica, `MyFunction`, viene chiamata utilizzando argomenti di tipo diversi.  
  
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
  
  **La mia funzione ha restituito un int: 2003**  
 **La mia funzione ha restituito una stringa: Ciao funzioni generiche\!**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)   
 [Generics](../windows/generics-cpp-component-extensions.md)