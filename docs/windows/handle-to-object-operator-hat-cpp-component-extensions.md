---
title: "Operatore handle a oggetto (^) (Estensioni del componente C++) | Microsoft Docs"
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
  - "^ handle per l'oggetto [C++]"
ms.assetid: 70c411e6-be57-4468-a944-6ea7be89f392
caps.latest.revision: 26
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore handle a oggetto (^) (Estensioni del componente C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il *dichiaratore di handle* \(segno `^`\) modifica l'[identificatore](../cpp/overview-of-declarators.md) di tipo per indicare che l'oggetto dichiarato deve essere eliminato automaticamente quando il sistema determina che l'oggetto non è più accessibile.  
  
## Accesso all'oggetto dichiarato  
 Una variabile dichiarata con il dichiaratore di handle si comporta come un puntatore all'oggetto.  Tuttavia, la variabile punta all'intero oggetto, non può puntare a un membro dell'oggetto e non supporta l'aritmetica dei puntatori.  Utilizzare l'operatore di riferimento indiretto \(`*`\) per accedere all'oggetto e l'operatore freccia di accesso ai membri \(`->`\) per accedere a un membro dell'oggetto.  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Il compilatore utilizza il meccanismo di *conteggio dei riferimenti* COM per determinare se l'oggetto non è più in uso e può essere eliminato.  Ciò è possibile perché un oggetto derivato da un'interfaccia di Windows Runtime è in realtà un oggetto COM.  Il conteggio dei riferimenti viene incrementato quando l'oggetto viene creato o copiato e diminuisce quando l'oggetto è impostato su null o diventa esterno all'ambito.  Se il conteggio dei riferimenti arriva a zero, l'oggetto viene eliminato automaticamente e immediatamente.  
  
 Il vantaggio del dichiaratore di handle sta nel fatto che in COM è necessario gestire in modo esplicito il conteggio dei riferimenti per un oggetto, un processo noioso e a rischio di errori.  Per incrementare o decrementare il conteggio dei riferimenti è quindi necessario chiamare i metodi AddRef\(\) e Release\(\) dell'oggetto.  Tuttavia, se si dichiara un oggetto con il dichiaratore di handle, il compilatore di Visual C\+\+ genera il codice che regola automaticamente il conteggio dei riferimenti.  
  
 Per informazioni su come creare l'istanza di un oggetto, vedere [ref new](../windows/ref-new-gcnew-cpp-component-extensions.md).  
  
## Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 Il sistema utilizza il meccanismo *Garbage Collector* CLR per determinare se l'oggetto non è più in uso e può essere eliminato.  Common Language Runtime gestisce un heap in cui alloca gli oggetti e utilizza i riferimenti gestiti \(variabili\) nel programma per indicare la posizione degli oggetti nell'heap.  Quando un oggetto non è più utilizzato, la memoria che occupava nell'heap viene liberata.  Periodicamente, il Garbage Collector comprime l'heap per migliorare l'utilizzo della memoria liberata.  La compressione dell'heap può comportare lo spostamento degli oggetti nell'heap invalidando le posizioni indicate dai riferimenti gestiti.  Tuttavia, il Garbage Collector conosce la posizione di tutti i riferimenti gestiti e li aggiorna automaticamente per indicare la posizione corrente degli oggetti nell'heap.  
  
 Dal momento che i puntatori nativi C\+\+ \(`*`\) e i riferimenti \(`&`\) non sono riferimenti gestiti, il Garbage Collector non può aggiornare automaticamente gli indirizzi a cui puntano.  Per risolvere questo problema, utilizzare il dichiaratore di handle per specificare una variabile che il Garbage Collector riconosce e che consente l'aggiornamento automatico.  
  
 In Visual C\+\+ 2002 e Visual C\+\+ 2003, si utilizzava `__gc *` per dichiarare un oggetto nell'heap gestito.  `^` sostituisce `__gc *` nella nuova sintassi.  
  
 Per ulteriori informazioni, vedere [Procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md).  
  
### Esempi  
 **Esempio**  
  
 In questo esempio viene illustrato come creare un'istanza di un tipo di riferimento nell'heap gestito.  Viene inoltre spiegato che è possibile inizializzare un handle con un altro, ottenendo due riferimenti allo stesso oggetto dell'heap gestito e sottoposto a Garbage Collection.  Si noti che l'assegnazione di [nullptr](../windows/nullptr-cpp-component-extensions.md) a un handle non contrassegna l'oggetto per Garbage Collection.  
  
```  
// mcppv2_handle.cpp  
// compile with: /clr  
ref class MyClass {  
public:  
   MyClass() : i(){}  
   int i;  
   void Test() {  
      i++;  
      System::Console::WriteLine(i);  
   }  
};  
  
int main() {  
   MyClass ^ p_MyClass = gcnew MyClass;  
   p_MyClass->Test();  
  
   MyClass ^ p_MyClass2;  
   p_MyClass2 = p_MyClass;  
  
   p_MyClass = nullptr;  
   p_MyClass2->Test();     
}  
```  
  
 **Output**  
  
 **1**   
**2** **Esempio**  
  
 Nel seguente esempio viene illustrato come dichiarare un handle a un oggetto nell'heap gestito in cui il tipo di oggetto è un tipo di valore boxed.  Nell'esempio viene inoltre spiegato come ottenere il tipo di valore dall'oggetto boxed.  
  
```  
// mcppv2_handle_2.cpp  
// compile with: /clr  
using namespace System;  
  
void Test(Object^ o) {  
   Int32^ i = dynamic_cast<Int32^>(o);  
  
   if(i)  
      Console::WriteLine(i);  
   else  
      Console::WriteLine("Not a boxed int");  
}  
  
int main() {  
   String^ str = "test";  
   Test(str);  
  
   int n = 100;  
   Test(n);  
}  
```  
  
 **Output**  
  
  **Not a boxed int**  
 **100** **Esempio**  
  
 In questo esempio viene mostrato che il linguaggio comune C\+\+ dell'utilizzo di un puntatore void\* per puntare a un oggetto arbitrario viene sostituito da Object^ che può contenere un handle a una classe di riferimento.  Viene inoltre mostrato che tutti i tipi, ad esempio matrici e delegati, possono essere convertiti in un handle di oggetto.  
  
```  
// mcppv2_handle_3.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Collections;  
public delegate void MyDel();  
ref class MyClass {  
public:  
   void Test() {}  
};  
  
void Test(Object ^ x) {  
   Console::WriteLine("Type is {0}", x->GetType());  
}  
  
int main() {  
   // handle to Object can hold any ref type  
   Object ^ h_MyClass = gcnew MyClass;  
  
   ArrayList ^ arr = gcnew ArrayList();  
   arr->Add(gcnew MyClass);  
  
   h_MyClass = dynamic_cast<MyClass ^>(arr[0]);  
   Test(arr);  
  
   Int32 ^ bi = 1;  
   Test(bi);  
  
   MyClass ^ h_MyClass2 = gcnew MyClass;  
  
   MyDel^ DelInst = gcnew MyDel(h_MyClass2, &MyClass::Test);  
   Test(DelInst);  
}  
```  
  
 **Output**  
  
  **Type is System.Collections.ArrayList**  
 **Type is System.Int32**  
 **Type is MyDel** **Esempio**  
  
 In questo esempio viene mostrato che un handle può essere dereferenziato e che un membro è accessibile tramite un handle dereferenziato.  
  
```  
// mcppv2_handle_4.cpp  
// compile with: /clr  
using namespace System;  
value struct DataCollection {  
private:  
   int Size;  
   array<String^>^ x;  
  
public:  
   DataCollection(int i) : Size(i) {  
      x = gcnew array<String^>(Size);  
      for (int i = 0 ; i < Size ; i++)  
         x[i] = i.ToString();  
   }  
  
   void f(int Item) {  
      if (Item >= Size)  
      {  
         System::Console::WriteLine("Cannot access array element {0}, size is {1}", Item, Size);  
         return;  
      }  
      else  
         System::Console::WriteLine("Array value: {0}", x[Item]);  
   }  
};  
  
void f(DataCollection y, int Item) {  
   y.f(Item);  
}  
  
int main() {  
   DataCollection ^ a = gcnew DataCollection(10);  
   f(*a, 7);   // dereference a handle, return handle's object  
   (*a).f(11);   // access member via dereferenced handle  
}  
```  
  
 **Output**  
  
  **Array value: 7**  
 **Cannot access array element 11, size is 10** **Esempio**  
  
 In questo esempio viene mostrato che un riferimento nativo \(`&`\) non può essere associato a un membro `int` di un tipo gestito poiché `int` potrebbe essere archiviato nell'heap sottoposto a Garbage Collection e i riferimenti nativi non tengono traccia dello spostamento di un oggetto nell'heap gestito.  Per correggere è necessario utilizzare una variabile locale o modificare `&` in `%`, rendendolo un riferimento di traccia.  
  
```  
// mcppv2_handle_5.cpp  
// compile with: /clr  
ref struct A {  
   void Test(unsigned int &){}  
   void Test2(unsigned int %){}  
   unsigned int i;  
};  
  
int main() {  
   A a;  
   a.i = 9;  
   a.Test(a.i);   // C2664  
   a.Test2(a.i);   // OK  
  
   unsigned int j = 0;  
   a.Test(j);   // OK  
}  
```  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)   
 [Tracking Reference Operator](../windows/tracking-reference-operator-cpp-component-extensions.md)