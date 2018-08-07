---
title: nullptr (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- __nullptr keyword (C++)
- nullptr keyword [C++]
ms.assetid: 594cfbf7-06cb-4366-9ede-c0b703e1d095
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ccfb2b234550f5b7fc03e717d92e74b1fd5d5f74
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604447"
---
# <a name="nullptr--c-component-extensions"></a>nullptr (Estensioni del componente C++)
Il **nullptr** parola chiave rappresenta un *valore puntatore null*. Usare un valore del puntatore null per indicare che un handle di oggetto, puntatore interno o al tipo di puntatore nativo non punta a un oggetto.  
  
 Uso **nullptr** con codice gestito o nativo. Il compilatore genera le istruzioni appropriate, ma diverse per i valori di puntatore null gestito e nativo. Per informazioni sull'utilizzo la versione di C++ standard ISO di questa parola chiave, vedere [nullptr](../cpp/nullptr.md).  
  
 Il **nullptr** parola chiave è una parola chiave specifiche di Microsoft che ha lo stesso significato come **nullptr**, ma si applica al solo codice nativo. Se si usa **nullptr** con codice C/C++ nativo del codice e quindi eseguire la compilazione con il [/clr](../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore, il compilatore non è possibile determinare se **nullptr** indica nativo o gestire il valore di puntatore null. Per rendere l'intenzione chiara per il compilatore, usare **nullptr** per specificare un valore gestito o **nullptr** per specificare un valore nativo.  
  
 Il **nullptr** equivale alla parola chiave **Nothing** in Visual Basic e **null** nel linguaggio c#.  
  
## <a name="usage"></a>Utilizzo  
 Il **nullptr** parola chiave può essere utilizzato ovunque un handle, un puntatore nativo o un argomento della funzione può essere utilizzato.  
  
 Il **nullptr** parola chiave non è un tipo e non è supportato per l'utilizzo con:  
  
-   [sizeof](../cpp/sizeof-operator.md)  
  
-   [typeid](../cpp/typeid-operator.md)  
  
-   `throw nullptr` (anche se `throw (Object^)nullptr;` funzionerà)  
  
 Il **nullptr** parola chiave può essere usato nell'inizializzazione dei seguenti tipi di puntatore:  
  
-   Puntatore nativo  
  
-   Handle di Windows Runtime  
  
-   Handle di gestito  
  
-   Puntatore interno gestito  
  
 Il **nullptr** parola chiave può essere usato per verificare se un riferimento di puntatore o handle è null prima che venga utilizzato il riferimento.  
  
 Le chiamate di funzione tra le lingue che utilizzano valori di puntatore null per il controllo degli errori devono essere interpretate correttamente.  
  
 Non è possibile inizializzare un handle a zero. solo **nullptr** può essere utilizzato. Assegnazione di costante 0 per un handle di oggetto produce boxed `Int32` e un cast a `Object^`.  
  
## <a name="example"></a>Esempio  
 Esempio di codice seguente viene dimostrato che la **nullptr** parola chiave può essere usato ogni volta che un handle, puntatore nativo, o un argomento di funzione è utilizzabile. E l'esempio dimostra che il **nullptr** parola chiave può essere usato per verificare un riferimento prima di utilizzarlo.  
  
```cpp  
// mcpp_nullptr.cpp  
// compile with: /clr  
value class V {};  
ref class G {};  
void f(System::Object ^) {}  
  
int main() {  
// Native pointer.  
   int *pN = nullptr;  
// Managed handle.  
   G ^pG = nullptr;  
   V ^pV1 = nullptr;  
// Managed interior pointer.  
   interior_ptr<V> pV2 = nullptr;  
// Reference checking before using a pointer.  
   if (pN == nullptr) {}  
   if (pG == nullptr) {}  
   if (pV1 == nullptr) {}  
   if (pV2 == nullptr) {}  
// nullptr can be used as a function argument.  
   f(nullptr);   // calls f(System::Object ^)  
}  
```  
  
## <a name="example"></a>Esempio  
  
 Esempio di codice seguente mostra che **nullptr** e zero può essere usato in modo intercambiabile sui puntatori nativi.  
  
```cpp  
// mcpp_nullptr_1.cpp  
// compile with: /clr  
class MyClass {  
public:  
   int i;  
};  
  
int main() {  
   MyClass * pMyClass = nullptr;  
   if ( pMyClass == nullptr)  
      System::Console::WriteLine("pMyClass == nullptr");  
  
   if ( pMyClass == 0)  
      System::Console::WriteLine("pMyClass == 0");  
  
   pMyClass = 0;  
   if ( pMyClass == nullptr)  
      System::Console::WriteLine("pMyClass == nullptr");  
  
   if ( pMyClass == 0)  
      System::Console::WriteLine("pMyClass == 0");  
}  
```  
  
 **Output**  
  
```Output  
pMyClass == nullptr  
  
pMyClass == 0  
  
pMyClass == nullptr  
  
pMyClass == 0  
```  
  
## <a name="example"></a>Esempio  
  
 Esempio di codice seguente mostra che **nullptr** viene interpretato come un handle a qualsiasi tipo o un puntatore nativo per qualsiasi tipo. In caso di overload di funzioni con handle a tipi diversi, verrà generato un errore di ambiguità. Il **nullptr** sarebbe necessario eseguire il cast esplicito a un tipo.  
  
```cpp  
// mcpp_nullptr_2.cpp  
// compile with: /clr /LD  
void f(int *){}  
void f(int ^){}  
  
void f_null() {  
   f(nullptr);   // C2668  
   // try one of the following lines instead  
   f((int *) nullptr);  
   f((int ^) nullptr);  
}  
```  
  
## <a name="example"></a>Esempio  
  
 Esempio di codice seguente mostra che il cast **nullptr** è consentito e restituisce un puntatore o handle al tipo di cast che contiene il **nullptr** valore.  
  
```cpp  
// mcpp_nullptr_3.cpp  
// compile with: /clr /LD  
using namespace System;  
template <typename T>   
void f(T) {}   // C2036 cannot deduce template type because nullptr can be any type  
  
int main() {  
   f((Object ^) nullptr);   // T = Object^, call f(Object ^)  
  
   // Delete the following line to resolve.  
   f(nullptr);  
  
   f(0);   // T = int, call f(int)  
}  
```  
  
## <a name="example"></a>Esempio  
  
 Esempio di codice seguente mostra che **nullptr** può essere utilizzato come parametro di funzione.  
  
```cpp  
// mcpp_nullptr_4.cpp  
// compile with: /clr  
using namespace System;  
void f(Object ^ x) {  
   Console::WriteLine("test");  
}  
  
int main() {  
   f(nullptr);  
}  
```  
  
 **Output**  
  
```Output  
test  
```  
  
## <a name="example"></a>Esempio  
  
 Esempio di codice seguente mostra che quando gli handle vengono dichiarati e inizializzati in modo non esplicito, sono inizializzati da per impostazione predefinita **nullptr**.  
  
```cpp  
// mcpp_nullptr_5.cpp  
// compile with: /clr  
using namespace System;  
ref class MyClass {  
public:  
   void Test() {  
      MyClass ^pMyClass;   // gc type  
      if (pMyClass == nullptr)  
         Console::WriteLine("NULL");  
   }  
};  
  
int main() {  
   MyClass ^ x = gcnew MyClass();  
   x -> Test();  
}  
```  
  
 **Output**  
  
```Output  
NULL  
```  
  
## <a name="example"></a>Esempio  
  
 Esempio di codice seguente mostra che **nullptr** può essere assegnato a un puntatore nativo durante la compilazione con `/clr`.  
  
```cpp  
// mcpp_nullptr_6.cpp  
// compile with: /clr  
int main() {  
   int * i = 0;  
   int * j = nullptr;  
}  
```  
  
## <a name="requirements"></a>Requisiti  
 L'opzione del compilatore: (non obbligatorio, supportato da tutte le opzioni di generazione di codice, tra cui `/ZW` e `/clr`)  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme Runtime](../windows/component-extensions-for-runtime-platforms.md)   
 [nullptr](../cpp/nullptr.md)