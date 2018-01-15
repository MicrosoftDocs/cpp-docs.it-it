---
title: Override esplicito (estensioni del componente C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: overriding, override [C++]
ms.assetid: 4ec3eaf5-163b-4df8-8f16-7a2ec04c3d0f
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 346dd73952934d514b2741c41d5a27816b7152ac
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="explicit-overrides--c-component-extensions"></a>Override esplicito (Estensioni del componente C++)
In questo argomento viene illustrato come eseguire l'override esplicito di un membro di una classe di base o interfaccia. Override (esplicito) denominato deve essere utilizzato solo per eseguire l'override di un metodo con un metodo derivato ha un nome diverso.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 **Sintassi**  
  
```  
  
      overriding-function-declarator = type::function [,type::function] { overriding-function-definition }  
overriding-function-declarator = function { overriding-function-definition }  
```  
  
 **Parametri**  
  
 *dichiaratore di funzione viene sottoposto a override*  
 Elenco di restituzione, tipo, nome e l'argomento della funzione esegue l'override.  Si noti che la funzione esegue l'override non deve avere lo stesso nome della funzione da sottoporre a override.  
  
 *type*  
 Tipo di base che contiene una funzione per eseguire l'override.  
  
 *function*  
 Un elenco delimitato da virgole di uno o più nomi di funzione per eseguire l'override.  
  
 *definizione di funzione viene sottoposto a override*  
 Le istruzioni di corpo di funzione che definiscono la funzione esegue l'override.  
  
 **Note**  
  
 Utilizzare esplicita le sostituzioni per creare un alias per una firma del metodo o di fornire diverse implementazioni di metodi witht la stessa firma.  
  
 Per informazioni su come modificare il comportamento di tipi ereditati e i membri ereditati, vedere [gli identificatori di Override](../windows/override-specifiers-cpp-component-extensions.md).  
  
## <a name="windows-runtime"></a>Windows Runtime  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Note**  
  
 Per informazioni su explicit sostituiscono in codice nativo o codice compilato con **oldSyntax**, vedere [override espliciti](../cpp/explicit-overrides-cpp.md).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Esempio di codice seguente viene illustrato un override di implicita, semplice e l'implementazione di un membro in un'interfaccia di base, non utilizza override espliciti.  
  
```  
// explicit_override_1.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
ref class X : public I1 {  
public:  
   virtual void f() {  
      System::Console::WriteLine("X::f override of I1::f");  
   }  
};  
  
int main() {  
   I1 ^ MyI = gcnew X;  
   MyI -> f();  
}  
```  
  
 **Output**  
  
```Output  
X::f override of I1::f  
```  
  
 **Esempio**  
  
 Esempio di codice seguente viene illustrato come implementare tutti i membri di interfaccia con una firma comune, utilizzando la sintassi di override esplicito.  
  
```  
  
// explicit_override_2.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
interface struct I2 {  
   virtual void f();  
};  
  
ref struct X : public I1, I2 {  
   virtual void f() = I1::f, I2::f {  
      System::Console::WriteLine("X::f override of I1::f and I2::f");  
   }  
};  
  
int main() {  
   I1 ^ MyI = gcnew X;  
   I2 ^ MyI2 = gcnew X;  
   MyI -> f();  
   MyI2 -> f();  
}  
```  
  
 **Output**  
  
```Output  
X::f override of I1::f and I2::f  
X::f override of I1::f and I2::f  
```  
  
 **Esempio**  
  
 Esempio di codice seguente viene illustrato come una funzione di sostituzione può avere un nome diverso dalla funzione che sta implementando.  
  
```  
// explicit_override_3.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
ref class X : public I1 {  
public:  
   virtual void g() = I1::f {  
      System::Console::WriteLine("X::g");  
   }  
};  
  
int main() {  
   I1 ^ a = gcnew X;  
   a->f();  
}  
```  
  
 **Output**  
  
```Output  
X::g  
```  
  
 **Esempio**  
  
 Esempio di codice seguente viene illustrata un'implementazione esplicita dell'interfaccia che implementa una raccolta di tipi sicuri.  
  
```  
// explicit_override_4.cpp  
// compile with: /clr /LD  
using namespace System;  
ref class R : ICloneable {  
   int X;  
  
   virtual Object^ C() sealed = ICloneable::Clone {  
      return this->Clone();  
   }  
  
public:  
   R() : X(0) {}  
   R(int x) : X(x) {}  
  
   virtual R^ Clone() {  
      R^ r = gcnew R;  
      r->X = this->X;  
      return r;  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)