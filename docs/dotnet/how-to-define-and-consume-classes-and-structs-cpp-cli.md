---
title: "Procedura: definire e utilizzare classi e struct (C++ /CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "struct [C++]"
  - "classi [C++], creazione di istanze"
ms.assetid: 1c03cb0d-1459-4b5e-af65-97d6b3094fd7
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Definire e usare classi e struct (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come definire e utilizzare i tipi di riferimento e i tipi di valore definiti dall'utente in [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)].  
  
##  <a name="a-namebkmkcontentsa-contents"></a><a name="BKMK_Contents"></a> Contenuto  
 [Creazione di istanze di oggetto](#BKMK_Object_instantiation)  
  
 [Classi implicitamente astratte](#BKMK_Implicitly_abstract_classes)  
  
 [Visibilità dei tipi](#BKMK_Type_visibility)  
  
 [Visibilità dei membri](#BKMK_Member_visibility)  
  
 [Classi native pubbliche e private](#BKMK_Public_and_private_native_classes)  
  
 [Costruttori statici](#BKMK_Static_constructors)  
  
 [Semantica del puntatore](#BKMK_Semantics_of_the_this_pointer)  
  
 [Funzioni Hide-by-signature](#BKMK_Hide_by_signature_functions)  
  
 [Costruttori di copia](#BKMK_Copy_constructors)  
  
 [Distruttori e finalizzatori](#BKMK_Destructors_and_finalizers)  
  
##  <a name="a-namebkmkobjectinstantiationa-object-instantiation"></a><a name="BKMK_Object_instantiation"></a> Creazione di istanze di oggetto  
 È possibile creare istanze dei tipi di riferimento (ref) e dei tipi di valore solo nell'heap gestito, non nello stack o nell'heap nativo.  
  
```  
// mcppv2_ref_class2.cpp  
// compile with: /clr  
ref class MyClass {  
public:  
   int i;  
  
   // nested class  
   ref class MyClass2 {  
   public:  
      int i;  
   };  
  
   // nested interface  
   interface struct MyInterface {  
      void f();  
   };  
};  
  
ref class MyClass2 : public MyClass::MyInterface {  
public:  
   virtual void f() {  
      System::Console::WriteLine("test");  
   }  
};  
  
public value struct MyStruct {  
   void f() {  
      System::Console::WriteLine("test");  
   }     
};  
  
int main() {  
   // instantiate ref type on garbage-collected heap  
   MyClass ^ p_MyClass = gcnew MyClass;  
   p_MyClass -> i = 4;  
  
   // instantiate value type on garbage-collected heap  
   MyStruct ^ p_MyStruct = gcnew MyStruct;  
   p_MyStruct -> f();  
  
   // instantiate value type on the stack  
   MyStruct p_MyStruct2;  
   p_MyStruct2.f();  
  
   // instantiate nested ref type on garbage-collected heap  
   MyClass::MyClass2 ^ p_MyClass2 = gcnew MyClass::MyClass2;  
   p_MyClass2 -> i = 5;  
}  
```  
  
##  <a name="a-namebkmkimplicitlyabstractclassesa-implicitly-abstract-classes"></a><a name="BKMK_Implicitly_abstract_classes"></a> Classi implicitamente astratte  
 Un *classe implicitamente astratta* non può essere creata un'istanza. Una classe è implicitamente astratta se il tipo di base della classe è un'interfaccia e la classe non implementa tutte le funzioni membro dell'interfaccia stessa.  
  
 Se non si riesce a costruire degli oggetti da una classe che deriva da un'interfaccia, il motivo potrebbe essere che la classe è implicitamente astratta. Per ulteriori informazioni sulle classi astratte, vedere [astratta](../windows/abstract-cpp-component-extensions.md).  
  
 Nell'esempio di codice seguente viene mostrato che non è possibile creare l'istanza della classe `MyClass` in quanto la funzione `MyClass::func2` non è implementata. Per consentire la compilazione dell'esempio, rimuovere il commento `MyClass::func2`.  
  
```  
// mcppv2_ref_class5.cpp  
// compile with: /clr  
interface struct MyInterface {  
   void func1();  
   void func2();  
};  
  
ref class MyClass : public MyInterface {  
public:  
   void func1(){}  
   // void func2(){}  
};  
  
int main() {  
   MyClass ^ h_MyClass = gcnew MyClass;   // C2259   
                                          // To resolve, uncomment MyClass::func2.  
}  
```  
  
##  <a name="a-namebkmktypevisibilitya-type-visibility"></a><a name="BKMK_Type_visibility"></a> Visibilità dei tipi  
 È possibile controllare la visibilità dei tipi CLR (Common Language Runtime) in modo che, se viene fatto riferimento a un assembly, i tipi nell'assembly possono essere visibili o non visibili all'esterno dell'assembly.  
  
 `public` indica che un tipo è visibile ai file di origine che contiene un `#using` direttiva dell'assembly che contiene il tipo.  `private` indica che un tipo non è visibile ai file di origine che contengono un `#using` direttiva dell'assembly che contiene il tipo. Tuttavia, i tipi privati sono visibili all'interno dello stesso assembly. Per impostazione predefinita, la visibilità di una classe è `private`.  
  
 Per impostazione predefinita, prima di Visual C++ 2005 i tipi nativi avevano accessibilità pubblica all'esterno dell'assembly. Abilitare [Avviso del compilatore (livello 1) C4692](../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md) che consentono di vedere in tipi nativi privati vengono utilizzati in modo non corretto. Utilizzare il [make_public](../preprocessor/make-public.md) pragma per consentire l'accessibilità pubblica a un tipo nativo in un file di codice sorgente che non è possibile modificare.  
  
 Per ulteriori informazioni, vedere [#using (direttiva)](../preprocessor/hash-using-directive-cpp.md).  
  
 Nell'esempio seguente viene illustrato come dichiarare i tipi, specificarne l'accessibilità e quindi accedere a questi tipi all'interno dell'assembly. Naturalmente, se viene fatto riferimento a un assembly contenente tipi privati tramite `#using`, sono visibili solo i tipi pubblici nell'assembly.  
  
```  
// type_visibility.cpp  
// compile with: /clr  
using namespace System;  
// public type, visible inside and outside assembly  
public ref struct Public_Class {  
   void Test(){Console::WriteLine("in Public_Class");}  
};  
  
// private type, visible inside but not outside assembly  
private ref struct Private_Class {  
   void Test(){Console::WriteLine("in Private_Class");}  
};  
  
// default accessibility is private  
ref class Private_Class_2 {  
public:  
   void Test(){Console::WriteLine("in Private_Class_2");}  
};  
  
int main() {  
   Public_Class ^ a = gcnew Public_Class;  
   a->Test();  
  
   Private_Class ^ b = gcnew Private_Class;  
   b->Test();  
  
   Private_Class_2 ^ c = gcnew Private_Class_2;  
   c->Test();  
}  
```  
  
 **Output**  
  
```Output  
in Public_Class  
in Private_Class  
in Private_Class_2  
```  
  
 A questo punto, è possibile riscrivere l'esempio precedente in modo da incorporarlo come una DLL.  
  
```  
// type_visibility_2.cpp  
// compile with: /clr /LD  
using namespace System;  
// public type, visible inside and outside the assembly  
public ref struct Public_Class {  
   void Test(){Console::WriteLine("in Public_Class");}  
};  
  
// private type, visible inside but not outside the assembly  
private ref struct Private_Class {  
   void Test(){Console::WriteLine("in Private_Class");}  
};  
  
// by default, accessibility is private  
ref class Private_Class_2 {  
public:  
   void Test(){Console::WriteLine("in Private_Class_2");}  
};  
```  
  
 Nell'esempio successivo viene illustrato come accedere ai tipi all'esterno dell'assembly. In questo esempio, il client utilizza il componente incorporato nell'esempio precedente.  
  
```  
// type_visibility_3.cpp  
// compile with: /clr  
#using "type_visibility_2.dll"  
int main() {  
   Public_Class ^ a = gcnew Public_Class;  
   a->Test();  
  
   // private types not accessible outside the assembly  
   // Private_Class ^ b = gcnew Private_Class;  
   // Private_Class_2 ^ c = gcnew Private_Class_2;  
}  
```  
  
 **Output**  
  
```Output  
in Public_Class  
```  
  
##  <a name="a-namebkmkmembervisibilitya-member-visibility"></a><a name="BKMK_Member_visibility"></a> Visibilità dei membri  
 È possibile rendere l'accesso a un membro di una classe pubblica dall'interno dello stesso assembly diverso dall'accesso dall'esterno dell'assembly utilizzando coppie di identificatori di accesso `public`, `protected` e `private`  
  
 In questa tabella sono riepilogati gli effetti dei vari identificatori di accesso:  
  
|Identificatore|Effetto|  
|---------------|------------|  
|public|Il membro è accessibile all'interno e all'esterno dell'assembly.  Vedere [pubblico](../cpp/public-cpp.md) Per ulteriori informazioni.|  
|private|Non è possibile accedere al membro, né all'interno né all'esterno dell'assembly.  Vedere [privata](../cpp/private-cpp.md) Per ulteriori informazioni.|  
|protected|È possibile accedere al membro all'esterno e all'interno dell'assembly, ma solo per i tipi derivati.  Vedere [protetti](../cpp/protected-cpp.md) Per ulteriori informazioni.|  
|internal|Membro è pubblico nell'assembly, ma privato all'esterno dell'assembly.  `internal` è una parola chiave sensibile al contesto.  Per ulteriori informazioni, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).|  
|pubblico - o - protetto protetto pubblico|Il membro è pubblico nell'assembly, ma protetto all'esterno dell'assembly.|  
|privato protetto - o - protetto privato|Il membro è protetto all'interno dell'assembly, ma privato all'esterno dell'assembly.|  
  
 Nell'esempio seguente viene illustrato un tipo pubblico che dispone di membri che vengono dichiarati con le diverse accessibilità e successivamente viene mostrata la modalità di accesso a questi membri dall'interno dell'assembly.  
  
```  
  
// compile with: /clr  
using namespace System;  
// public type, visible inside and outside the assembly  
public ref class Public_Class {  
public:  
   void Public_Function(){System::Console::WriteLine("in Public_Function");}  
  
private:  
   void Private_Function(){System::Console::WriteLine("in Private_Function");}  
  
protected:  
   void Protected_Function(){System::Console::WriteLine("in Protected_Function");}  
  
internal:  
   void Internal_Function(){System::Console::WriteLine("in Internal_Function");}  
  
protected public:  
   void Protected_Public_Function(){System::Console::WriteLine("in Protected_Public_Function");}  
  
public protected:  
   void Public_Protected_Function(){System::Console::WriteLine("in Public_Protected_Function");}  
  
private protected:  
   void Private_Protected_Function(){System::Console::WriteLine("in Private_Protected_Function");}  
  
protected private:  
   void Protected_Private_Function(){System::Console::WriteLine("in Protected_Private_Function");}  
};  
  
// a derived type, calls protected functions  
ref struct MyClass : public Public_Class {  
   void Test() {  
      Console::WriteLine("=======================");  
      Console::WriteLine("in function of derived class");  
      Protected_Function();  
      Protected_Private_Function();  
      Private_Protected_Function();  
      Console::WriteLine("exiting function of derived class");  
      Console::WriteLine("=======================");  
   }  
};  
  
int main() {  
   Public_Class ^ a = gcnew Public_Class;  
   MyClass ^ b = gcnew MyClass;  
   a->Public_Function();  
   a->Protected_Public_Function();  
   a->Public_Protected_Function();  
  
   // accessible inside but not outside the assembly  
   a->Internal_Function();  
  
   // call protected functions  
   b->Test();  
  
   // not accessible inside or outside the assembly  
   // a->Private_Function();  
}  
```  
  
 **Output**  
  
```Output  
in Public_Function  
in Protected_Public_Function  
in Public_Protected_Function  
in Internal_Function  
=======================  
in function of derived class  
in Protected_Function  
in Protected_Private_Function  
in Private_Protected_Function  
exiting function of derived class  
=======================  
```  
  
 A questo punto è possibile compilare l'esempio precedente come una DLL.  
  
```  
  
// compile with: /clr /LD  
using namespace System;  
// public type, visible inside and outside the assembly  
public ref class Public_Class {  
public:  
   void Public_Function(){System::Console::WriteLine("in Public_Function");}  
  
private:  
   void Private_Function(){System::Console::WriteLine("in Private_Function");}  
  
protected:  
   void Protected_Function(){System::Console::WriteLine("in Protected_Function");}  
  
internal:  
   void Internal_Function(){System::Console::WriteLine("in Internal_Function");}  
  
protected public:  
   void Protected_Public_Function(){System::Console::WriteLine("in Protected_Public_Function");}  
  
public protected:  
   void Public_Protected_Function(){System::Console::WriteLine("in Public_Protected_Function");}  
  
private protected:  
   void Private_Protected_Function(){System::Console::WriteLine("in Private_Protected_Function");}  
  
protected private:  
   void Protected_Private_Function(){System::Console::WriteLine("in Protected_Private_Function");}  
};  
  
// a derived type, calls protected functions  
ref struct MyClass : public Public_Class {  
   void Test() {  
      Console::WriteLine("=======================");  
      Console::WriteLine("in function of derived class");  
      Protected_Function();  
      Protected_Private_Function();  
      Private_Protected_Function();  
      Console::WriteLine("exiting function of derived class");  
      Console::WriteLine("=======================");  
   }  
};  
```  
  
 Nell'esempio seguente viene utilizzato il componente creato nell'esempio precedente e quindi viene illustrato come accedere ai membri dall'esterno dell'assembly.  
  
```  
  
// compile with: /clr  
#using "type_member_visibility_2.dll"  
using namespace System;  
// a derived type, calls protected functions  
ref struct MyClass : public Public_Class {  
   void Test() {  
      Console::WriteLine("=======================");  
      Console::WriteLine("in function of derived class");  
      Protected_Function();  
      Protected_Public_Function();  
      Public_Protected_Function();  
      Console::WriteLine("exiting function of derived class");  
      Console::WriteLine("=======================");  
   }  
};  
  
int main() {  
   Public_Class ^ a = gcnew Public_Class;  
   MyClass ^ b = gcnew MyClass;  
   a->Public_Function();  
  
   // call protected functions  
   b->Test();  
  
   // can't be called outside the assembly  
   // a->Private_Function();  
   // a->Internal_Function();     
   // a->Protected_Private_Function();  
   // a->Private_Protected_Function();  
}  
```  
  
 **Output**  
  
```Output  
in Public_Function  
=======================  
in function of derived class  
in Protected_Function  
in Protected_Public_Function  
in Public_Protected_Function  
exiting function of derived class  
=======================  
```  
  
##  <a name="a-namebkmkpublicandprivatenativeclassesa-public-and-private-native-classes"></a><a name="BKMK_Public_and_private_native_classes"></a> Classi native pubbliche e private  
 È possibile fare riferimento a un tipo nativo da un tipo gestito.  Ad esempio, una funzione in un tipo gestito può accettare un parametro il cui tipo è uno struct nativo.  Se il tipo e la funzione gestiti sono pubblici in un assembly, anche il tipo nativo deve essere pubblico.  
  
```  
  
// native type  
public struct N {  
   N(){}  
   int i;  
};  
```  
  
 Successivamente, creare il file di codice sorgente che utilizza il tipo nativo:  
  
```  
  
// compile with: /clr /LD  
#include "mcppv2_ref_class3.h"  
// public managed type  
public ref struct R {  
   // public function that takes a native type  
   void f(N nn) {}  
};  
```  
  
 A questo punto compilare un client:  
  
```  
  
// compile with: /clr  
#using "mcppv2_ref_class3.dll"  
  
#include "mcppv2_ref_class3.h"  
  
int main() {  
   R ^r = gcnew R;  
   N n;  
   r->f(n);  
}  
```  
  
##  <a name="a-namebkmkstaticconstructorsa-static-constructors"></a><a name="BKMK_Static_constructors"></a> Costruttori statici  
 Un tipo CLR, ad esempio una classe o uno struct, può avere un costruttore statico che può essere utilizzato per inizializzare i membri dati statici.  Un costruttore statico viene chiamato al massimo una volta e viene chiamato prima del primo accesso a un qualsiasi membro statico del tipo.  
  
 Un costruttore di istanza viene eseguito sempre dopo un costruttore statico.  
  
 Il compilatore non può rendere inline una chiamata a un costruttore se la classe dispone di un costruttore statico.  Il compilatore non può rendere inline una chiamata a qualsiasi funzione membro se la classe è un tipo di valore, dispone di un costruttore statico e non ha un costruttore di istanza.  La chiamata può essere resa inline da CLR, ma non dal compilatore.  
  
 Definire un costruttore statico come funzione membro privata, poiché ha lo scopo di essere chiamato solo da CLR.  
  
 Per ulteriori informazioni sui costruttori statici, vedere [procedura: definire un costruttore statico di interfaccia (C + c++ /CLI)](../dotnet/how-to-define-an-interface-static-constructor-cpp-cli.md) .  
  
```  
  
// compile with: /clr  
using namespace System;  
  
ref class MyClass {  
private:  
   static int i = 0;  
  
   static MyClass() {  
      Console::WriteLine("in static constructor");  
      i = 9;  
   }  
  
public:  
   static void Test() {  
      i++;  
      Console::WriteLine(i);  
   }  
};  
  
int main() {  
   MyClass::Test();  
   MyClass::Test();  
}  
```  
  
 **Output**  
  
```Output  
in static constructor  
10  
11  
```  
  
##  <a name="a-namebkmksemanticsofthethispointera-semantics-of-the-this-pointer"></a><a name="BKMK_Semantics_of_the_this_pointer"></a> Semantica del puntatore  
 Quando si utilizza Visual C++ per definire i tipi, il puntatore `this` in un tipo di riferimento è di tipo "handle". Il puntatore `this` in un tipo di valore è di tipo "puntatore interno".  
  
 Queste diverse semantiche del puntatore `this` possono generare un comportamento imprevisto quando viene chiamato un indicizzatore predefinito. Nell'esempio seguente viene illustrato il modo corretto per accedere a un indicizzatore predefinito sia in un tipo di riferimento che in un tipo di valore.  
  
 Per altre informazioni, vedere  
  
-   [Operatore handle a oggetto (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)  
  
-   [interior_ptr (C + c++ /CLI)](../windows/interior-ptr-cpp-cli.md)  
  
-   [Procedura: utilizzare proprietà indicizzate](../misc/how-to-use-indexed-properties.md)  
  
```  
  
// compile with: /clr  
using namespace System;  
  
ref struct A {  
   property Double default[Double] {  
      Double get(Double data) {  
         return data*data;  
      }  
   }  
  
   A() {  
      // accessing default indexer  
      Console::WriteLine("{0}", this[3.3]);  
   }  
};  
  
value struct B {  
   property Double default[Double] {  
      Double get(Double data) {  
         return data*data;  
      }  
   }  
   void Test() {  
      // accessing default indexer  
      Console::WriteLine("{0}", this->default[3.3]);  
   }  
};  
  
int main() {  
   A ^ mya = gcnew A();  
   B ^ myb = gcnew B();  
   myb->Test();  
}  
```  
  
 **Output**  
  
```Output  
10.89  
10.89  
```  
  
##  <a name="a-namebkmkhidebysignaturefunctionsa-hide-by-signature-functions"></a><a name="BKMK_Hide_by_signature_functions"></a> Funzioni Hide-by-signature  
 Nel linguaggio C++ standard, una funzione in una classe base viene nascosta da una funzione con lo stesso nome in una classe derivata, anche se la funzione della classe derivata non dispone dello stesso numero o tipo di parametri. Questa è detta *hide-by-name* semantica. In un tipo riferimento, una funzione in una classe base può essere nascosta solo da una funzione in una classe derivata se il nome e l'elenco dei parametri sono gli stessi. Ciò è noto come *hide-by-signature* semantica.  
  
 La classe è considerata una classe hide-by-signature quando tutte le relative funzioni sono contrassegnate nei metadati come `hidebysig`. Per impostazione predefinita, tutte le classi che vengono create sotto **/clr** hanno `hidebysig` funzioni. Tuttavia, una classe che viene compilata mediante **oldSyntax** non dispone di `hidebysig` funzioni; al contrario, sono funzioni hide-by-name. Quando la classe dispone di funzioni `hidebysig`, il compilatore non nasconde le funzioni per nome in tutte le classi base dirette, ma se rileva una classe hide-by-name in una catena di ereditarietà, continua il comportamento hide-by-name.  
  
 Nella semantica hide-by-signature, quando una funzione viene chiamata su un oggetto, il compilatore identifica la classe più derivata che contiene una funzione la quale può soddisfare la chiamata di funzione. Se è presente solo una funzione nella classe che può soddisfare la chiamata, il compilatore chiama questa funzione. Se è disponibile più di una funzione nella classe che può soddisfare la chiamata, il compilatore utilizza le regole di risoluzione di overload per determinare quale funzione chiamare. Per ulteriori informazioni sulle regole di overload, vedere [overload di funzioni](../cpp/function-overloading.md).  
  
 Per una chiamata di funzione specificata, una funzione in una classe base può avere una firma che rende la corrispondenza leggermente migliore rispetto a una funzione in una classe derivata. Tuttavia, se la funzione è stata chiamata esplicitamente su un oggetto della classe derivata, viene chiamata la funzione nella classe derivata.  
  
 Poiché il valore restituito non viene considerato parte della firma di una funzione, una funzione di classe base viene nascosta se ha lo stesso nome e prende lo stesso numero e tipo di argomenti di una funzione di classe derivata, anche se differisce nel tipo del valore restituito.  
  
 Nell'esempio seguente viene mostrato che una funzione in una classe base non viene nascosta da una funzione in una classe derivata.  
  
```  
  
// compile with: /clr  
using namespace System;  
ref struct Base {  
   void Test() {   
      Console::WriteLine("Base::Test");   
   }  
};  
  
ref struct Derived : public Base {  
   void Test(int i) {   
      Console::WriteLine("Derived::Test");   
   }  
};  
  
int main() {  
   Derived ^ t = gcnew Derived;  
   // Test() in the base class will not be hidden  
   t->Test();  
}  
```  
  
 **Output**  
  
```Output  
Base::Test  
```  
  
 Nell'esempio seguente viene mostrato che il compilatore di Visual C++ chiama una funzione nella classe più derivata, anche se è necessaria una conversione per far corrispondere uno o più parametri, e non chiama una funzione in una classe base che rappresenta una corrispondenza migliore per la chiamata di funzione.  
  
```  
  
// compile with: /clr  
using namespace System;  
ref struct Base {  
   void Test2(Single d) {   
      Console::WriteLine("Base::Test2");   
   }  
};  
  
ref struct Derived : public Base {  
   void Test2(Double f) {   
      Console::WriteLine("Derived::Test2");   
   }  
};  
  
int main() {  
   Derived ^ t = gcnew Derived;  
   // Base::Test2 is a better match, but the compiler  
   // calls a function in the derived class if possible  
   t->Test2(3.14f);  
}  
```  
  
 **Output**  
  
```Output  
Derived::Test2  
```  
  
 Nell'esempio seguente viene illustrato che è possibile nascondere una funzione anche se la classe base ha la stessa firma della classe derivata.  
  
```  
  
// compile with: /clr  
using namespace System;  
ref struct Base {  
   int Test4() {   
      Console::WriteLine("Base::Test4");   
      return 9;   
   }  
};  
  
ref struct Derived : public Base {  
   char Test4() {   
      Console::WriteLine("Derived::Test4");   
      return 'a';   
   }  
};  
  
int main() {  
   Derived ^ t = gcnew Derived;  
  
   // Base::Test4 is hidden  
   int i = t->Test4();  
   Console::WriteLine(i);  
}  
```  
  
 **Output**  
  
```Output  
Derived::Test4  
97  
```  
  
 Nell'esempio seguente definisce un componente che viene compilato mediante **oldSyntax**. Le classi definite tramite le estensioni gestite per C++ hanno funzioni membro hide-by-name.  
  
```  
  
// compile with: /clr:oldSyntax /LD  
using namespace System;  
public __gc struct Base0 {  
   void Test() {   
      Console::WriteLine("in Base0::Test");  
   }  
};  
  
public __gc struct Base1 : public Base0 {  
   void Test(int i) {   
      Console::WriteLine("in Base1::Test");  
   }  
};  
```  
  
 Nell'esempio seguente viene utilizzato il componente compilato nell'esempio precedente. Si noti come hide-by-signature funzionalità non viene applicata alle classi base di tipi che vengono compilati tramite **oldSyntax**.  
  
```  
  
// compile with: /clr:oldSyntax /LD  
// compile with: /clr  
using namespace System;  
#using "hide_by_signature_4.dll"  
  
ref struct Derived : public Base1 {  
   void Test(int i, int j) {   
      Console::WriteLine("Derived::Test");  
   }  
};  
  
int main() {  
   Derived ^ t = gcnew Derived;  
   t->Test(8, 8);   // OK  
   t->Test(8);   // OK  
   t->Test();   // C2661  
}  
```  
  
##  <a name="a-namebkmkcopyconstructorsa-copy-constructors"></a><a name="BKMK_Copy_constructors"></a> Costruttori di copia  
 Nel linguaggio C++ standard, un costruttore di copia viene chiamato quando un oggetto viene spostato. In questo modo un oggetto viene creato ed eliminato definitivamente allo stesso indirizzo.  
  
 Tuttavia, quando **/clr** viene utilizzato per la compilazione e una funzione compilata in MSIL chiama una funzione nativa in cui una classe nativa, o più, viene passato per valore e in cui la classe nativa ha un costruttore di copia e/o un distruttore, viene chiamato alcun costruttore di copia e l'oggetto viene eliminato in un indirizzo diverso da quello in cui è stato creato. Ciò potrebbe causare problemi se la classe dispone di un puntatore in se stessa o se il codice tiene traccia degli oggetti in base all'indirizzo.  
  
 Per altre informazioni, vedere [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).  
  
 Nell'esempio seguente viene illustrato quando un costruttore di copia non viene generato.  
  
```  
  
// compile with: /clr  
#include<stdio.h>  
  
struct S {  
   int i;  
   static int n;  
  
   S() : i(n++) {   
      printf_s("S object %d being constructed, this=%p\n", i, this);   
   }  
  
   S(S const& rhs) : i(n++) {   
      printf_s("S object %d being copy constructed from S object "  
               "%d, this=%p\n", i, rhs.i, this);   
   }  
  
   ~S() {  
      printf_s("S object %d being destroyed, this=%p\n", i, this);   
   }  
};  
  
int S::n = 0;  
  
#pragma managed(push,off)  
void f(S s1, S s2) {  
   printf_s("in function f\n");  
}  
#pragma managed(pop)  
  
int main() {  
   S s;  
   S t;  
   f(s,t);  
}  
```  
  
 **Output**  
  
```Output  
S object 0 being constructed, this=0018F378  
S object 1 being constructed, this=0018F37C  
S object 2 being copy constructed from S object 1, this=0018F380  
S object 3 being copy constructed from S object 0, this=0018F384  
S object 4 being copy constructed from S object 2, this=0018F2E4  
S object 2 being destroyed, this=0018F380  
S object 5 being copy constructed from S object 3, this=0018F2E0  
S object 3 being destroyed, this=0018F384  
in function f  
S object 5 being destroyed, this=0018F2E0  
S object 4 being destroyed, this=0018F2E4  
S object 1 being destroyed, this=0018F37C  
S object 0 being destroyed, this=0018F378  
```  
  
##  <a name="a-namebkmkdestructorsandfinalizersa-destructors-and-finalizers"></a><a name="BKMK_Destructors_and_finalizers"></a> Distruttori e finalizzatori  
 I distruttori in un tipo di riferimento eseguono una pulitura deterministica delle risorse. I finalizzatori puliscono le risorse non gestite e possono essere chiamati in modo deterministico dal distruttore o da Garbage Collector in modo non deterministico. Per informazioni sui distruttori in C++ standard, vedere [distruttori](../cpp/destructors-cpp.md).  
  
```  
class classname {  
   ~classname() {}   // destructor  
   ! classname() {}   // finalizer  
};  
```  
  
 Il comportamento dei distruttori in una classe gestita di Visual C++ è diverso rispetto alle estensioni gestite per C++. Per ulteriori informazioni su questa modifica, vedere [modifiche nella semantica del distruttore](../dotnet/changes-in-destructor-semantics.md).  
  
 Garbage Collector di CLR elimina gli oggetti gestiti inutilizzati e ne libera la memoria quando non sono più necessari. Tuttavia, è possibile che un tipo utilizzi risorse che Garbage Collector non sa come rilasciare. Queste risorse sono note come risorse non gestite (ad esempio, gli handle di file nativi). Si consiglia di rilasciare tutte le risorse non gestite nel finalizzatore. Poiché le risorse gestite vengono rilasciate in maniera non deterministica da Garbage Collector, non è sicuro fare riferimento alle risorse gestite in un finalizzatore poiché è possibile che Garbage Collector le abbia già pulite.  
  
 Un finalizzatore di Visual C++ non corrisponde la <xref:System.Object.Finalize%2A> metodo. (Documentazione di CLR utilizza il finalizzatore e <xref:System.Object.Finalize%2A> metodo come sinonimi). Il <xref:System.Object.Finalize%2A> metodo viene chiamato da garbage collector, che richiama ciascun finalizzatore nella catena di ereditarietà di classe. A differenza dei distruttori Visual C++, una chiamata del finalizzatore della classe derivata non indica al compilatore di richiamare il finalizzatore in tutte le classi base.  
  
 Poiché il compilatore Visual C++ supporta il rilascio deterministico delle risorse, non tentare di implementare il <xref:System.IDisposable.Dispose%2A> o <xref:System.Object.Finalize%2A> metodi. Tuttavia, se si ha familiarità con questi metodi, ecco come eseguire il mapping di un finalizzatore di Visual C++ e un distruttore che chiama il finalizzatore per il <xref:System.IDisposable.Dispose%2A> modello:  
  
```  
// Visual C++ code  
ref class T {  
   ~T() { this->!T(); }   // destructor calls finalizer  
   !T() {}   // finalizer  
};  
  
// equivalent to the Dispose pattern  
void Dispose(bool disposing) {  
   if (disposing) {  
      ~T();  
   } else {  
      !T();  
   }  
}  
```  
  
 Un tipo gestito può inoltre utilizzare le risorse gestite che si preferirebbe rilasciare in modo deterministico e non consente a Garbage Collector di liberarle in modo non deterministico ad un certo punto dopo che l'oggetto non è più necessario. Il rilascio deterministico delle risorse può migliorare significativamente le prestazioni.  
  
 Il compilatore di Visual C++ consente la definizione di un distruttore per pulire gli oggetti in modo deterministico. Utilizzare il distruttore per rilasciare tutte le risorse che si desidera liberare in modo deterministico.  Se è presente un finalizzatore, chiamarlo dal distruttore, per evitare la duplicazione di codice.  
  
```  
  
// compile with: /clr /c  
ref struct A {  
   // destructor cleans up all resources  
   ~A() {  
      // clean up code to release managed resource  
      // ...  
      // to avoid code duplication,   
      // call finalizer to release unmanaged resources  
      this->!A();  
   }  
  
   // finalizer cleans up unmanaged resources  
   // destructor or garbage collector will  
   // clean up managed resources  
   !A() {  
      // clean up code to release unmanaged resources  
      // ...  
   }  
};  
```  
  
 Se il codice che utilizza il tipo non chiama il distruttore, Garbage Collector finisce per liberare tutte le risorse gestite.  
  
 La presenza di un distruttore non implica la presenza di un finalizzatore. Tuttavia, la presenza di quest'ultimo implica la necessità di definire un distruttore e di chiamare il finalizzatore da tale distruttore. In questo modo viene effettuato il rilascio deterministico delle risorse non gestite.  
  
 La chiamata del distruttore Annulla, tramite <xref:System.GC.SuppressFinalize%2A>ovvero la finalizzazione dell'oggetto. Se il distruttore non viene chiamato, il finalizzatore del tipo verrà chiamato da Garbage Collector.  
  
 La pulizia delle risorse dell'oggetto in modo deterministico tramite la chiamata del distruttore può migliorare le prestazioni rispetto alla finalizzazione dell'oggetto da parte di CLR in modo non deterministico.  
  
 Codice scritto in Visual C++ e compilato utilizzando **/clr** esegue il distruttore del tipo se:  
  
-   Un oggetto creato mediante la semantica dello stack esce dall'ambito. Per ulteriori informazioni, vedere [semantica dello Stack C++ per i tipi riferimento](../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
-   Un'eccezione viene generata durante la costruzione dell'oggetto.  
  
-   L'oggetto è un membro di un oggetto il cui distruttore è in esecuzione.  
  
-   Si chiama il [eliminare](../cpp/delete-operator-cpp.md) operatore su un handle ([operatore Handle a oggetto (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)).  
  
-   Si chiama esplicitamente il distruttore.  
  
 Se il tipo viene utilizzato da un client scritto in un altro linguaggio, il distruttore viene chiamato come segue:  
  
-   In una chiamata a <xref:System.IDisposable.Dispose%2A>.  
  
-   In una chiamata a `Dispose(void)` sul tipo.  
  
-   Se il tipo esce dall'ambito in un'istruzione `using` di C#.  
  
 Se si crea un oggetto di un tipo di riferimento nell'heap gestito (non mediante la semantica dello stack per i tipi riferimento), utilizzare [try-finally](../cpp/try-finally-statement.md) sintassi per garantire che un'eccezione non impedisca il distruttore in esecuzione.  
  
```  
  
// compile with: /clr  
ref struct A {  
   ~A() {}  
};  
  
int main() {  
   A ^ MyA = gcnew A;  
   try {  
      // use MyA  
   }  
   finally {  
      delete MyA;  
   }  
}  
```  
  
 Se il tipo ha un distruttore, il compilatore genera un `Dispose` metodo che implementa <xref:System.IDisposable>. Se un tipo è scritto in Visual C++ e ha un distruttore utilizzato da un altro linguaggio, la chiamata di `IDisposable::Dispose` su tale tipo determina la chiamata del distruttore del tipo. Quando il tipo viene utilizzato da un client Visual C++, non è possibile chiamare direttamente `Dispose`; invece, chiamare il distruttore utilizzando l'operatore `delete`.  
  
 Se il tipo presenta un finalizzatore, il compilatore genera un `Finalize(void)` metodo che esegue l'override <xref:System.Object.Finalize%2A>.  
  
 Se un tipo ha un finalizzatore o un distruttore, il compilatore genera un metodo `Dispose(bool)`, a seconda del modello di progettazione. (Per informazioni, vedere [Modello Dispose](../Topic/Dispose%20Pattern.md)). Non è possibile creare o chiamare esplicitamente `Dispose(bool)` in Visual C++.  
  
 Se un tipo ha una classe base conforme al modello di progettazione, vengono chiamati i distruttori di tutte le classi base quando viene chiamato il distruttore della classe derivata. Se il tipo è scritto in Visual C++, il compilatore assicura che i tipi implementino questo modello. In altre parole, il distruttore di una classe di riferimento si concatena ai relativi membri e basi come specificato dal linguaggio C++ standard. Innanzitutto viene eseguito il distruttore della classe, quindi vengono eseguiti i distruttori per i relativi membri nell'ordine inverso in cui sono stati creati e infine vengono eseguiti i distruttori per le relative classi base nell'ordine inverso in cui sono stati creati.  
  
 I distruttori e i finalizzatori non sono ammessi all'interno di tipi di valore o interfacce.  
  
 Un finalizzatore può essere definito o dichiarato solo in un tipo di riferimento. Analogamente a un costruttore e a un distruttore, un finalizzatore non ha alcun tipo restituito.  
  
 Una volta eseguito il finalizzatore di un oggetto, vengono chiamati anche i finalizzatori in ogni classe base a partire dal tipo meno derivato. I finalizzatori per i membri dati non vengono automaticamente concatenati dal finalizzatore di classe.  
  
 Se un finalizzatore Elimina un puntatore nativo in un tipo gestito, è necessario assicurarsi che i riferimenti a o attraverso il puntatore nativo non vengono raccolti in anticipo; chiamare il distruttore sul tipo gestito anziché <xref:System.GC.KeepAlive%2A>.  
  
 In fase di compilazione, è possibile individuare se un tipo ha un finalizzatore o un distruttore. Per ulteriori informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 Nell'esempio seguente vengono illustrati due tipi, uno che dispone di risorse non gestite e uno che dispone di risorse gestite rilasciate in modo deterministico.  
  
```  
  
// compile with: /clr  
#include <vcclr.h>  
#include <stdio.h>  
using namespace System;  
using namespace System::IO;  
  
ref class SystemFileWriter {  
   FileStream ^ file;  
   array<Byte> ^ arr;  
   int bufLen;  
  
public:  
   SystemFileWriter(String ^ name) : file(File::Open(name, FileMode::Append)),   
                                     arr(gcnew array<Byte>(1024)) {}  
  
   void Flush() {  
      file->Write(arr, 0, bufLen);  
      bufLen = 0;  
   }  
  
   ~SystemFileWriter() {  
      Flush();  
      delete file;  
   }  
};  
  
ref class CRTFileWriter {  
   FILE * file;  
   array<Byte> ^ arr;  
   int bufLen;  
  
   static FILE * getFile(String ^ n) {  
      pin_ptr<const wchar_t> name = PtrToStringChars(n);  
      FILE * ret = 0;  
      _wfopen_s(&ret, name, L"ab");  
      return ret;  
   }  
  
public:  
   CRTFileWriter(String ^ name) : file(getFile(name)), arr(gcnew array<Byte>(1024) ) {}  
  
   void Flush() {  
      pin_ptr<Byte> buf = &arr[0];  
      fwrite(buf, 1, bufLen, file);  
      bufLen = 0;  
   }  
  
   ~CRTFileWriter() {  
      this->!CRTFileWriter();  
   }  
  
   !CRTFileWriter() {  
      Flush();  
      fclose(file);  
   }  
};  
  
int main() {  
   SystemFileWriter w("systest.txt");  
   CRTFileWriter ^ w2 = gcnew CRTFileWriter("crttest.txt");  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)   
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)