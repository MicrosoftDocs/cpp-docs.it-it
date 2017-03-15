---
title: "Procedura: utilizzare propriet&#224; in C++/CLI | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "proprietà [C++], semplici"
  - "proprietà semplici"
ms.assetid: f5d82547-e214-4f05-9e1b-ddb6d0dc5e4c
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare propriet&#224; in C++/CLI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come utilizzare le proprietà in C\+\+\/CLI.  
  
## Proprietà di base  
 Per base di proprietà che solo assegna e recupera un membro dati privato non è necessario definire in modo esplicito accesso get e le funzioni di accesso set perché il compilatore automaticamente viene assegnata una volta fornito solo il tipo di dati della proprietà.  Questo codice viene illustrata una proprietà di base:  
  
```  
// SimpleProperties.cpp  
// compile with: /clr  
using namespace System;  
  
ref class C {  
public:  
   property int Size;  
};  
  
int main() {  
   C^ c = gcnew C;  
   c->Size = 111;  
   Console::WriteLine("c->Size = {0}", c->Size);  
}  
```  
  
 **Output**  
  
  **C\# dimensioni\>\= 111**   
## Proprietà statiche  
 In questo esempio di codice come dichiarare e utilizzare una proprietà statica.  Una proprietà statica può accedere solo membri statici della classe.  
  
```  
// mcppv2_property_3.cpp  
// compile with: /clr  
using namespace System;  
  
ref class StaticProperties {  
   static int MyInt;  
   static int MyInt2;  
  
public:  
   static property int Static_Data_Member_Property;  
  
   static property int Static_Block_Property {  
      int get() {  
         return MyInt;  
      }  
  
      void set(int value) {  
         MyInt = value;  
      }        
   }  
};  
  
int main() {  
   StaticProperties::Static_Data_Member_Property = 96;  
   Console::WriteLine(StaticProperties::Static_Data_Member_Property);  
  
   StaticProperties::Static_Block_Property = 47;  
   Console::WriteLine(StaticProperties::Static_Block_Property);  
}  
```  
  
 **Output**  
  
  **96**  
**47**   
## Proprietà indicizzate  
 Una proprietà indicizzata in genere espone una struttura di dati a cui si accede tramite un operatore di indice.  
  
 Se si utilizza una proprietà indicizzata predefinita, è possibile accedere alla struttura dei dati appena riferendoti al nome della classe, ma se si utilizza una proprietà indicizzata definita dall'utente, è necessario specificare il nome della proprietà per accedere alla struttura dei dati.  
  
 Per informazioni su come accedere a un indicizzatore predefinito tramite il puntatore di `this`, vedere [Semantica del puntatore 'this' nei tipi di valore e di riferimento](../misc/semantics-of-the-this-pointer-in-value-and-reference-types.md).  
  
 Per informazioni su come utilizzare un indicizzatore scritta in c\#, vedere [Procedura: utilizzare un indicizzatore C\#](../dotnet/how-to-consume-a-csharp-indexer-cpp-cli.md).  
  
 In questo esempio di codice seguente viene illustrato l'utilizzo impostazione predefinita e le proprietà indicizzate definite dall'utente:  
  
```  
// mcppv2_property_2.cpp  
// compile with: /clr  
using namespace System;  
public ref class C {  
   array<int>^ MyArr;  
  
public:  
   C() {  
      MyArr = gcnew array<int>(5);  
   }  
  
   // default indexer  
   property int default[int] {  
      int get(int index) {  
         return MyArr[index];  
      }  
      void set(int index, int value) {  
         MyArr[index] = value;  
      }  
   }  
  
   // user-defined indexer  
   property int indexer1[int] {  
      int get(int index) {  
         return MyArr[index];  
      }  
      void set(int index, int value) {  
         MyArr[index] = value;  
      }  
   }  
};  
  
int main() {  
   C ^ MyC = gcnew C();  
  
   // use the default indexer  
   Console::Write("[ ");  
   for (int i = 0 ; i < 5 ; i++) {  
      MyC[i] = i;  
      Console::Write("{0} ", MyC[i]);  
   }  
  
   Console::WriteLine("]");  
  
   // use the user-defined indexer  
   Console::Write("[ ");  
   for (int i = 0 ; i < 5 ; i++) {  
      MyC->indexer1[i] = i * 2;  
      Console::Write("{0} ", MyC->indexer1[i]);  
   }  
  
   Console::WriteLine("]");  
}  
```  
  
 **Output**  
  
  **\[ 0 1 2 3 4 \]**  
**\[ 0 2 4 6 8 \]** Mostrato nell'esempio seguente viene illustrato come chiamare l'indicizzatore predefinito tramite il puntatore di `this`.  
  
```  
// call_default_indexer_through_this_pointer.cpp  
// compile with: /clr /c  
value class Position {  
public:  
   Position(int x, int y) : position(gcnew array<int, 2>(100, 100)) {  
      this->default[x, y] = 1;  
   }  
  
   property int default[int, int] {  
      int get(int x, int y) {  
         return position[x, y];  
      }  
  
      void set(int x, int y, int value) {}  
   }  
  
private:  
   array<int, 2> ^ position;  
};  
```  
  
 In questo esempio viene illustrato come utilizzare <xref:System.Reflection.DefaultMemberAttribute> per specificare l'indicizzatore predefinito:  
  
```  
// specify_default_indexer.cpp  
// compile with: /LD /clr  
using namespace System;  
[Reflection::DefaultMember("XXX")]  
public ref struct Squares {  
   property Double XXX[Double] {  
      Double get(Double data) {  
         return data*data;  
      }  
   }  
};  
```  
  
 Nell'esempio seguente vengono utilizzati i metadati creato nell'esempio precedente.  
  
```  
// consume_default_indexer.cpp  
// compile with: /clr  
#using "specify_default_indexer.dll"  
int main() {  
   Squares ^ square = gcnew Squares();  
   System::Console::WriteLine("{0}", square[3]);  
}  
```  
  
 **Output**  
  
 **9**   
## Proprietà virtuali  
 In questo esempio di codice come dichiarare e utilizzare le proprietà virtuali:  
  
```  
// mcppv2_property_4.cpp  
// compile with: /clr  
using namespace System;  
interface struct IEFace {  
public:  
   property int VirtualProperty1;  
   property int VirtualProperty2 {  
      int get();  
      void set(int i);  
   }  
};  
  
// implement virtual events  
ref class PropImpl : public IEFace {  
   int MyInt;  
public:  
   virtual property int VirtualProperty1;  
  
   virtual property int VirtualProperty2 {  
      int get() {  
         return MyInt;  
      }  
      void set(int i) {  
         MyInt = i;  
      }  
   }  
};  
  
int main() {  
   PropImpl ^ MyPI = gcnew PropImpl();  
   MyPI->VirtualProperty1 = 93;  
   Console::WriteLine(MyPI->VirtualProperty1);  
  
   MyPI->VirtualProperty2 = 43;  
   Console::WriteLine(MyPI->VirtualProperty2);  
}  
```  
  
 **Output**  
  
  **93**  
**43**   
## Proprietà astratte e sealed  
 Sebbene le parole chiave di [sealed](../windows/sealed-cpp-component-extensions.md) e di [abstract](../windows/abstract-cpp-component-extensions.md) siano specificate come valido nella specifica ECMA C\+\+\/CLI, per il compilatore di Visual C\+\+, non è possibile specificarli sulle proprietà semplici, né nella dichiarazione di proprietà di una proprietà non complesso.  
  
 Per dichiarare una proprietà o astratta sealed, è necessario definire una proprietà non semplice e quindi specificare la parola chiave di `sealed` o di `abstract` su ottenere e le funzioni di accesso set.  
  
```  
// properties_abstract_sealed.cpp  
// compile with: /clr  
ref struct A {  
protected:  
   int m_i;  
  
public:  
   A() { m_i = 87; }  
  
   // define abstract property  
   property int Prop_1 {  
      virtual int get() abstract;  
      virtual void set(int i) abstract;  
   }  
};  
  
ref struct B : A {  
private:  
   int m_i;  
  
public:  
   B() { m_i = 86; }  
  
   // implement abstract property  
   property int Prop_1 {  
      virtual int get() override { return m_i; }  
      virtual void set(int i) override { m_i = i; }  
   }  
};  
  
ref struct C {  
private:  
   int m_i;  
  
public:  
   C() { m_i = 87; }  
  
   // define sealed property  
   property int Prop_2 {  
      virtual int get() sealed { return m_i; }  
      virtual void set(int i) sealed { m_i = i; };  
   }  
};  
  
int main() {  
   B b1;  
   // call implementation of abstract property  
   System::Console::WriteLine(b1.Prop_1);  
  
   C c1;  
   // call sealed property  
   System::Console::WriteLine(c1.Prop_2);  
}  
```  
  
 **Output**  
  
  **86**  
**87**   
## Proprietà multidimensionali  
 È possibile utilizzare le proprietà multidimensionali per definire i metodi di accesso della proprietà che accettano un numero di parametri non standard.  
  
```  
// mcppv2_property_5.cpp  
// compile with: /clr  
ref class X {  
   double d;  
public:  
   X() : d(0) {}  
   property double MultiDimProp[int, int, int] {  
      double get(int, int, int) {  
         return d;  
      }  
      void set(int i, int j, int k, double l) {  
         // do something with those ints  
         d = l;  
      }  
   }  
  
   property double MultiDimProp2[int] {  
      double get(int) {  
         return d;  
      }  
      void set(int i, double l) {  
         // do something with those ints  
         d = l;  
      }  
   }  
  
};  
  
int main() {  
   X ^ MyX = gcnew X();  
   MyX->MultiDimProp[0,0,0] = 1.1;  
   System::Console::WriteLine(MyX->MultiDimProp[0, 0, 0]);  
}  
```  
  
 **Output**  
  
  **1.1**   
## Funzioni di accesso alle proprietà di overload  
 Nell'esempio seguente viene illustrato come eseguire l'overload di proprietà indicizzate.  
  
```  
// mcppv2_property_6.cpp  
// compile with: /clr  
ref class X {  
   double d;  
public:  
   X() : d(0.0) {}  
   property double MyProp[int] {  
      double get(int i) {  
         return d;  
      }  
  
      double get(System::String ^ i) {  
         return 2*d;  
      }  
  
      void set(int i, double l) {  
         d = i * l;  
      }  
   }   // end MyProp definition  
};  
  
int main() {  
   X ^ MyX = gcnew X();  
   MyX->MyProp[2] = 1.7;  
   System::Console::WriteLine(MyX->MyProp[1]);  
   System::Console::WriteLine(MyX->MyProp["test"]);  
}  
```  
  
 **Output**  
  
  **3.4**  
**6.8**   
## Vedere anche  
 [property](../windows/property-cpp-component-extensions.md)