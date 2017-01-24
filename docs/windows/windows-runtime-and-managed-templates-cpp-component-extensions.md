---
title: "Windows Runtime and Managed Templates (C++ Component Extensions) | Microsoft Docs"
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
  - "templates, with CLR types"
ms.assetid: cf59d16b-5514-448b-9a95-e0b4fcb616a6
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Runtime and Managed Templates (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I modelli consentono di definire un prototipo del runtime di Windows o di un tipo di Common Language Runtime e quindi le variazioni istanziate di quel tipo utilizzando parametri di tipo diverso del modello.  
  
## Tutti i runtime  
 È possibile creare modelli per tipi valore o riferimento.  Per ulteriori informazioni sulla creazione di tipi valore o referenza, vedere [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md).  
  
 Per ulteriori informazioni sui modelli di classe standard C\+\+, vedere [Modelli di classe](../cpp/class-templates.md).  
  
## Windows Runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Common Language Runtime  
 Esistono alcune limitazioni nel creare modelli della classe da tipi gestiti, che sono illustrati nell'esempio di codice seguente.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 È possibile creare un'istanza di un tipo generico con un parametro di modello di tipo gestito, ma non è possibile creare un'istanza di un modello gestito con un parametro di modello di tipo generico.  Questo perché i tipi generici vengono risolti in fase di esecuzione.  Per ulteriori informazioni, vedere [Generics and Templates \(Visual C\+\+\)](../windows/generics-and-templates-visual-cpp.md).  
  
```cpp  
// managed_templates.cpp  
// compile with: /clr /c  
  
generic<class T>   
ref class R;   
  
template<class T>   
ref class Z {  
   // Instantiate a generic with a template parameter.  
   R<T>^ r;    // OK  
};  
  
generic<class T>   
ref class R {  
   // Cannot instantiate a template with a generic parameter.  
   Z<T>^ z;   // C3231  
};  
```  
  
 **Esempio**  
  
 Un tipo generico o una funzione non può essere annidato in modello gestito.  
  
```cpp  
// managed_templates_2.cpp  
// compile with: /clr /c  
  
template<class T> public ref class R {  
   generic<class T> ref class W {};   // C2959  
};  
```  
  
 **Esempio**  
  
 Non è possibile accedere ai modelli definiti in un assembly a cui viene fatto riferimento con la sintassi del linguaggio C\+\+\/CLI, ma è possibile utilizzare reflection.  Se un modello non è istanziato, non viene generato nei metadati.  Se un modello è istanziato, solo le funzioni membro a cui si fa riferimento verranno visualizzate nei metadati.  
  
```cpp  
// managed_templates_3.cpp  
// compile with: /clr  
  
// Will not appear in metadata.  
template<class T> public ref class A {};  
  
// Will appear in metadata as a specialized type.  
template<class T> public ref class R {  
public:  
   // Test is referenced, will appear in metadata  
   void Test() {}  
  
   // Test2 is not referenced, will not appear in metadata  
   void Test2() {}  
};  
  
// Will appear in metadata.  
generic<class T> public ref class G { };  
  
public ref class S { };  
  
int main() {  
   R<int>^ r = gcnew R<int>;  
   r->Test();  
}  
```  
  
 **Esempio**  
  
 È possibile modificare il modificatore gestito di una classe in una specializzazione parziale o in una specializzazione esplicita di un modello di classe.  
  
```cpp  
// managed_templates_4.cpp  
// compile with: /clr /c  
  
// class template  
// ref class  
template <class T>  
ref class A {};  
  
// partial template specialization  
// value type  
template <class T>  
value class A <T *> {};  
  
// partial template specialization  
// interface  
template <class T>   
interface class A<T%> {};  
  
// explicit template specialization  
// native class  
template <>  
class A <int> {};  
  
```  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)