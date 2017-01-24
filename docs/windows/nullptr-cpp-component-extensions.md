---
title: "nullptr  (C++ Component Extensions) | Microsoft Docs"
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
  - "__nullptr keyword (C++)"
  - "nullptr keyword [C++]"
ms.assetid: 594cfbf7-06cb-4366-9ede-c0b703e1d095
caps.latest.revision: 24
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# nullptr  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `nullptr` rappresenta un *valore di puntatore null*.  Utilizzare un valore di puntatore a null per indicare che un gestore di oggetto, un puntatore interno o un puntatore di tipo nativo non punta ad un oggetto.  
  
 Utilizzare `nullptr` con codice gestito o nativo.  Il compilatore genera le istruzioni relative ma diverse per i valori di puntatore null gestiti e nativi.  Per informazioni su come utilizzare la versione ISO C\+\+ standard di questa parola chiave, vedere [nullptr](../cpp/nullptr.md).  
  
 La parola chiave `__nullptr` è una parola chiave specifica di Microsoft che ha lo stesso significato di `nullptr`, ma si applica solo al codice nativo.  Se si utilizza `nullptr` con il codice nativo C\/C\+\+ e quindi si compila con l'opzione del compilatore [\/clr](../build/reference/clr-common-language-runtime-compilation.md), il compilatore non può determinare se `nullptr` indica un valore di puntatore null nativo o gestito.  Per rendere chiare le intenzioni al compilatore, utilizzare `nullptr` per specificare un valore o `__nullptr` gestito per specificare un valore nativo.  
  
 La parola chiave `nullptr` è equivalente a `Nothing` in Visual Basic e `null` in C\#.  
  
## Utilizzo  
 La parola chiave `nullptr` può essere utilizzata ovunque può essere usato un gestore, un puntatore nativo o un argomento di funzione.  
  
 La parola chiave `nullptr` non è un tipo e non è supportata l'utilizzo con:  
  
-   [sizeof](../cpp/sizeof-operator.md)  
  
-   [typeid](../cpp/typeid-operator.md)  
  
-   `throw nullptr` \(sebbene `throw (Object^)nullptr;` funzioni\)  
  
 La parola chiave `nullptr` può essere utilizzata nell'inizializzazione dei seguenti tipi di puntatore:  
  
-   Puntatore nativo  
  
-   Handle del runtime di windows  
  
-   Handle gestito  
  
-   Puntatore interno gestito  
  
 La parola chiave `nullptr` può essere utilizzata per verificare se un riferimento di handle o di puntatore è null prima che il riferimento venga utilizzato.  
  
 Chiamate a funzione tra i linguaggi che utilizzano i valori di puntatore null per il controllo degli errori devono essere interpretati correttamente.  
  
 Non è possibile inizializzare un handle a zero; solo `nullptr` può essere utilizzato.  L'assegnazione di costante a 0 a un handle di oggetto produce un `Int32` boxed e un cast a `Object^`.  
  
## Esempio  
 L'esempio di codice seguente mostra che la parola chiave `nullptr` può essere utilizzata ovunque un argomento handle, puntatore nativo o argomento della funzione può essere utilizzato.  E l'esempio dimostra che la parola chiave `nullptr` può essere utilizzata per controllare un riferimento prima che venga utilizzato.  
  
```  
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
  
## Esempio  
 **Esempio**  
  
 L'esempio di codice riportato di seguito mostra che `nullptr` e zero possono essere utilizzati indifferentemente sui puntatori nativi.  
  
```  
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
  
  **pMyClass \=\= nullptr**  
 **pMyClass \=\= 0**  
 **pMyClass \=\= nullptr**  
 **pMyClass \=\= 0**   
## Esempio  
 **Esempio**  
  
 L'esempio di codice seguente mostra che `nullptr` viene interpretato come un handle per qualsiasi tipo o un puntatore nativo a qualsiasi tipo.  Nel caso dell'overload di funzione con handle a tipi diversi, un errore di ambiguità verrà generato.  Il `nullptr` deve essere esplicitamente castato ad un tipo.  
  
```  
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
  
## Esempio  
 **Esempio**  
  
 L'esempio di codice seguente mostra che eseguire il cast di `nullptr` è consentito e restituisce un puntatore o un handle per il tipo di cast contenente il valore `nullptr`.  
  
```  
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
  
## Esempio  
 **Esempio**  
  
 L'esempio di codice seguente mostra che `nullptr` può essere utilizzato come parametro di funzione.  
  
```  
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
  
  **test**   
## Esempio  
 **Esempio**  
  
 L'esempio di codice seguente mostra che quando gli handle vengono dichiarati e non inizializzati in modo esplicito, vengono inizializzati per impostazione predefinita a `nullptr`.  
  
```  
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
  
  **NULL**   
## Esempio  
 **Esempio**  
  
 L'esempio di codice seguente mostra che `nullptr` può essere assegnato ad un puntatore nativo quando si esegue la compilazione con **\/clr**.  
  
```  
// mcpp_nullptr_6.cpp  
// compile with: /clr  
int main() {  
   int * i = 0;  
   int * j = nullptr;  
}  
```  
  
## Requisiti  
 Opzione del compilatore: \(Non obbligatorio; supportato per tutte le opzioni di generazione codice, inclusi **\/ZW** e **\/clr**\)  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)   
 [nullptr](../cpp/nullptr.md)