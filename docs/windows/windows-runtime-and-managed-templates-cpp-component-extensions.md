---
title: Windows Runtime e modelli gestiti (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- templates, with CLR types
ms.assetid: cf59d16b-5514-448b-9a95-e0b4fcb616a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ec064bc8ea40fd4835c4f779e0120e1daa445d7e
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641460"
---
# <a name="windows-runtime-and-managed-templates-c-component-extensions"></a>Windows Runtime e modelli gestiti (Estensioni del componente C++)
I modelli consentono di definire un prototipo di un tipo Windows Runtime o Common Language Runtime e, successivamente, di creare istanze delle variazioni di quel tipo utilizzando parametri di tipo dei modelli diversi.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 È possibile creare modelli da tipi di valore o riferimento.  Per altre informazioni sulla creazione di tipi di valore o riferimento, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
 Per altre informazioni sui modelli di classe C++ standard, vedere [modelli di classe](../cpp/class-templates.md).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/ZW`  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 La creazione di modelli di classe dai tipi gestiti presenta alcune limitazioni che vengono illustrate nell'esempio di codice seguente.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/clr`  
  
### <a name="examples"></a>Esempi  
  
 È possibile creare un'istanza di un tipo generico con un parametro di modello di tipo gestito, ma non di un modello gestito con un parametro di modello di tipo generico.  Questa condizione dipende dal fatto che i tipi generici vengono risolti in fase di esecuzione.  Per altre informazioni, vedere [Generics e modelli (Visual C++)](../windows/generics-and-templates-visual-cpp.md).  
  
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
  
 Una funzione o un tipo generico non può essere annidato in modello gestito.  
  
```cpp  
// managed_templates_2.cpp  
// compile with: /clr /c  
  
template<class T> public ref class R {  
   generic<class T> ref class W {};   // C2959  
};  
```  
  
 Non è possibile accedere ai modelli definiti in un assembly a cui viene fatto riferimento con la sintassi del linguaggio C++/CLI, tuttavia è possibile utilizzare la reflection.  Se non viene creata alcuna istanza di un modello, quest'ultimo non viene creato nei metadati.  In caso contrario, nei metadati vengono visualizzate solo le funzioni membro a cui viene fatto riferimento.  
  
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
  
 È possibile modificare il modificatore gestito di una classe in una specializzazione parziale o esplicita di un modello di classe.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)