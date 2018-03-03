---
title: Struttura delle modifiche (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: c0bbbd6b-c5c4-44cf-a6ca-c1010c377e9d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: fdc0015bda5f0a6678b1d274c79445aba4e4aab0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="outline-of-changes-ccli"></a>Struttura delle modifiche (C++/CLI)
Questa struttura vengono illustrati esempi di alcune delle modifiche nel linguaggio dalle estensioni gestite per C++ in Visual C++. Seguire il collegamento fornito con ogni elemento per altre informazioni.  
  
## <a name="no-double-underscore-keywords"></a>Parole chiave non doppio carattere di sottolineatura  
 È stato rimosso il doppio carattere di sottolineatura davanti a tutte le parole chiave, con un'eccezione. Di conseguenza, `__value` diventa `value`, e `__interface` diventa `interface`e così via. Per evitare conflitti di nomi tra le parole chiave e gli identificatori nel codice utente, le parole chiave vengono considerate prevalentemente contestuali.  
  
 Vedere [parole chiave del linguaggio (C + + CLI)](../dotnet/language-keywords-cpp-cli.md) per ulteriori informazioni.  
  
## <a name="class-declarations"></a>Dichiarazioni di classe  
 Sintassi delle estensioni gestite:  
  
```  
__gc class Block {};                           // reference class  
__value class Vector {};                       // value class  
__interface I {};                        // interface class  
__gc __abstract class Shape {};                // abstract class  
__gc __sealed class Shape2D : public Shape {}; // derived class  
```  
  
 Nuova sintassi:  
  
```  
ref class Block {};                // reference class  
value class Vector {};             // value class  
interface class I {};        // interface class  
ref class Shape abstract {};       // abstract class  
ref class Shape2D sealed: Shape{}; // derived class  
```  
  
 Vedere [tipi gestiti (C + + CL)](../dotnet/managed-types-cpp-cl.md) per ulteriori informazioni.  
  
## <a name="object-declaration"></a>Dichiarazione dell'oggetto  
 Sintassi delle estensioni gestite:  
  
```  
public __gc class Form1 : public System::Windows::Forms::Form {  
private:  
   System::ComponentModel::Container __gc *components;  
   System::Windows::Forms::Button   __gc *button1;  
   System::Windows::Forms::DataGrid __gc *myDataGrid;     
   System::Data::DataSet  __gc *myDataSet;  
};  
```  
  
 Nuova sintassi:  
  
```  
public ref class Form1 : System::Windows::Forms::Form {  
   System::ComponentModel::Container^ components;  
   System::Windows::Forms::Button^ button1;  
   System::Windows::Forms::DataGrid^ myDataGrid;  
   System::Data::DataSet^ myDataSet;  
};  
```  
  
 Vedere [dichiarazione di un oggetto di classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md) per ulteriori informazioni.  
  
### <a name="managed-heap-allocation"></a>Allocazione di Heap gestito  
 Sintassi delle estensioni gestite:  
  
```  
Button* button1 = new Button; // managed heap  
int *pi1 = new int;           // native heap  
Int32 *pi2 = new Int32;       // managed heap  
```  
  
 Nuova sintassi:  
  
```  
Button^ button1 = gcnew Button;        // managed heap  
int * pi1 = new int;                   // native heap  
Int32^ pi2 = gcnew Int32;              // managed heap  
```  
  
 Vedere [dichiarazione di un oggetto di classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md) per ulteriori informazioni.  
  
### <a name="a-tracking-reference-to-no-object"></a>Un riferimento di rilevamento a nessun oggetto  
 Sintassi delle estensioni gestite:  
  
```  
// OK: we set obj to refer to no object  
Object * obj = 0;  
  
// Error: no implicit boxing  
Object * obj2 = 1;  
```  
  
 Nuova sintassi:  
  
```  
// Incorrect Translation  
// causes the implicit boxing of both 0 and 1  
Object ^ obj = 0;  
Object ^ obj2 = 1;  
  
// Correct Translation  
// OK: we set obj to refer to no object  
Object ^ obj = nullptr;  
  
// OK: we initialize obj2 to an Int32^  
Object ^ obj2 = 1;  
```  
  
 Vedere [dichiarazione di un oggetto di classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md) per ulteriori informazioni.  
  
## <a name="array-declaration"></a>Dichiarazione di matrice  
 La matrice CLR è stata riprogettata. È simile a stl `vector` raccolta di modelli, ma esegue il mapping a sottostante `System::Array` classe: vale a dire non è un'implementazione del modello.  
  
 Vedere [dichiarazione di una matrice CLR](../dotnet/declaration-of-a-clr-array.md) per ulteriori informazioni.  
  
### <a name="array-as-parameter"></a>Matrice come parametro  
 Sintassi di matrice nelle estensioni gestite:  
  
```  
void PrintValues( Object* myArr __gc[]);   
void PrintValues( int myArr __gc[,,]);   
```  
  
 Nuova sintassi di matrice:  
  
```  
void PrintValues( array<Object^>^ myArr );  
void PrintValues( array<int,3>^ myArr );  
```  
  
### <a name="array-as-return-type"></a>Matrice come tipo restituito  
 Sintassi di matrice nelle estensioni gestite:  
  
```  
Int32 f() [];   
int GetArray() __gc[];  
```  
  
 Nuova sintassi di matrice:  
  
```  
array<Int32>^ f();  
array<int>^ GetArray();  
```  
  
### <a name="shorthand-initialization-of-local-clr-array"></a>Inizializzazione a sintassi abbreviata della matrice CLR locale  
 Sintassi di matrice nelle estensioni gestite:  
  
```  
int GetArray() __gc[] {  
   int a1 __gc[] = { 1, 2, 3, 4, 5 };  
   Object* myObjArray __gc[] = { __box(26), __box(27), __box(28),  
                                 __box(29), __box(30) };  
  
   return a1;  
}  
```  
  
 Nuova sintassi di matrice:  
  
```  
array<int>^ GetArray() {  
   array<int>^ a1 = {1,2,3,4,5};  
   array<Object^>^ myObjArray = {26,27,28,29,30};  
  
   return a1;  
}  
```  
  
### <a name="explicit-clr-array-declaration"></a>Dichiarazione di matrice CLR esplicita  
 Sintassi di matrice nelle estensioni gestite:  
  
```  
Object* myArray[] = new Object*[2];  
String* myMat[,] = new String*[4,4];  
```  
  
 Nuova sintassi di matrice:  
  
```  
array<Object^>^ myArray = gcnew array<Object^>(2);  
array<String^,2>^ myMat = gcnew array<String^,2>(4,4);  
```  
  
 Novità del linguaggio: inizializzazione esplicita della matrice che segue gcnew  
  
```  
// explicit initialization list follow gcnew   
// is not supported in Managed Extensions  
array<Object^>^ myArray =   
   gcnew array<Object^>(4){ 1, 1, 2, 3 };  
```  
  
## <a name="scalar-properties"></a>Proprietà scalari  
 Sintassi di proprietà nelle estensioni gestite:  
  
```  
public __gc __sealed class Vector {  
   double _x;  
  
public:  
   __property double get_x(){ return _x; }  
   __property void set_x( double newx ){ _x = newx; }  
};  
```  
  
 Nuova sintassi di proprietà:  
  
```  
public ref class Vector sealed {   
   double _x;  
  
public:  
   property double x   
   {  
      double get()             { return _x; }  
      void   set( double newx ){ _x = newx; }  
   } // Note: no semi-colon  
};  
```  
  
 Novità del linguaggio: proprietà semplici  
  
```  
public ref class Vector sealed {   
public:  
   // equivalent shorthand property syntax  
   // backing store is not accessible  
   property double x;   
};  
```  
  
 Vedere [dichiarazione di proprietà](../dotnet/property-declaration.md) per ulteriori informazioni.  
  
## <a name="indexed-properties"></a>Proprietà indicizzate  
 Sintassi di proprietà indicizzate nelle estensioni gestite:  
  
```  
public __gc class Matrix {  
   float mat[,];  
  
public:   
   __property void set_Item( int r, int c, float value) { mat[r,c] = value; }  
   __property int get_Item( int r, int c ) { return mat[r,c]; }  
};  
```  
  
 Nuova sintassi di proprietà indicizzate:  
  
```  
public ref class Matrix {  
   array<float, 2>^ mat;  
  
public:  
   property float Item [int,int] {  
      float get( int r, int c ) { return mat[r,c]; }  
      void set( int r, int c, float value ) { mat[r,c] = value; }  
   }  
};  
```  
  
 Novità del linguaggio: proprietà indicizzate a livello di classe  
  
```  
public ref class Matrix {  
   array<float, 2>^ mat;  
  
public:  
   // ok: class level indexer now  
   //     Matrix mat;  
   //     mat[ 0, 0 ] = 1;   
   //  
   // invokes the set accessor of the default indexer  
  
   property float default [int,int] {  
      float get( int r, int c ) { return mat[r,c]; }  
      void set( int r, int c, float value ) { mat[r,c] = value; }  
   }  
};  
```  
  
 Vedere [dichiarazione di proprietà indice](../dotnet/property-index-declaration.md) per ulteriori informazioni.  
  
## <a name="overloaded-operators"></a>Operatori di overload  
 Sintassi overload di operatore nelle estensioni gestite:  
  
```  
public __gc __sealed class Vector {  
public:  
   Vector( double x, double y, double z );  
  
   static bool    op_Equality( const Vector*, const Vector* );  
   static Vector* op_Division( const Vector*, double );  
};  
  
int main() {  
   Vector *pa = new Vector( 0.231, 2.4745, 0.023 );  
   Vector *pb = new Vector( 1.475, 4.8916, -1.23 );   
  
   Vector *pc = Vector::op_Division( pa, 4.8916 );  
  
   if ( Vector::op_Equality( pa, pc ))  
      ;  
}  
```  
  
 Nuova sintassi degli overload di operatori:  
  
```  
public ref class Vector sealed {  
public:  
   Vector( double x, double y, double z );  
  
   static bool    operator ==( const Vector^, const Vector^ );  
   static Vector^ operator /( const Vector^, double );  
};  
  
int main() {  
   Vector^ pa = gcnew Vector( 0.231, 2.4745, 0.023 );  
   Vector^ pb = gcnew Vector( 1.475, 4.8916, -1.23 );  
  
   Vector^ pc = pa / 4.8916;  
   if ( pc == pa )  
      ;  
}  
```  
  
 Vedere [operatori di overload](../dotnet/overloaded-operators.md) per ulteriori informazioni.  
  
## <a name="conversion-operators"></a>Operatori di conversione  
 Sintassi dell'operatore di conversione estensioni gestita:  
  
```  
__gc struct MyDouble {  
   static MyDouble* op_Implicit( int i );   
   static int op_Explicit( MyDouble* val );  
   static String* op_Explicit( MyDouble* val );   
};  
```  
  
 Nuova sintassi dell'operatore di conversione:  
  
```  
ref struct MyDouble {  
public:  
   static operator MyDouble^ ( int i );  
   static explicit operator int ( MyDouble^ val );  
   static explicit operator String^ ( MyDouble^ val );  
};  
```  
  
 Vedere [modifiche agli operatori di conversione](../dotnet/changes-to-conversion-operators.md) per ulteriori informazioni.  
  
## <a name="explicit-override-of-an-interface-member"></a>Override esplicito di un membro di interfaccia  
 Eseguire l'override esplicito nelle estensioni gestite sintassi:  
  
```  
public __gc class R : public ICloneable {  
   // to be used through ICloneable  
   Object* ICloneable::Clone();  
  
   // to be used through an R  
   R* Clone();  
};  
```  
  
 Nuova sintassi di override esplicito:  
  
```  
public ref class R : public ICloneable {  
   // to be used through ICloneable  
   virtual Object^ InterfaceClone() = ICloneable::Clone;  
  
   // to be used through an R   
   virtual R^ Clone();  
};  
```  
  
 Vedere [eseguire l'Override esplicito di un membro di interfaccia](../dotnet/explicit-override-of-an-interface-member.md) per ulteriori informazioni.  
  
## <a name="private-virtual-functions"></a>Funzioni virtuali private  
 Sintassi di funzioni virtuali private nelle estensioni gestite:  
  
```  
__gc class Base {  
private:  
   // inaccessible to a derived class  
   virtual void g();   
};  
  
__gc class Derived : public Base {  
public:  
   // ok: g() overrides Base::g()  
   virtual void g();  
};  
```  
  
 Nuova sintassi di funzioni virtuali private  
  
```  
ref class Base {  
private:  
   // inaccessible to a derived class  
   virtual void g();   
};  
  
ref class Derived : public Base {  
public:  
   // error: cannot override: Base::g() is inaccessible  
   virtual void g() override;  
};  
```  
  
 Vedere [funzioni virtuali Private](../dotnet/private-virtual-functions.md) per ulteriori informazioni.  
  
## <a name="clr-enum-type"></a>Tipo enum di CLR  
 Sintassi di enum nelle estensioni gestite:  
  
```  
__value enum e1 { fail, pass };  
public __value enum e2 : unsigned short  {   
   not_ok = 1024,   
   maybe, ok = 2048   
};    
```  
  
 Nuova sintassi di enum:  
  
```  
enum class e1 { fail, pass };  
public enum class e2 : unsigned short {   
   not_ok = 1024,  
   maybe, ok = 2048   
};  
```  
  
 Oltre a questa piccola modifica sintattica, il comportamento del tipo enum CLR ha subito in diversi modi:  
  
-   Una dichiarazione con prototipo di un'enumerazione CLR non è più supportata.  
  
-   La risoluzione dell'overload tra i tipi aritmetici incorporati e la gerarchia di classi di oggetto è invertito tra le estensioni gestite e Visual C++. Come effetto collaterale, enumerazioni CLR non è più in modo implicito vengono convertite in tipi aritmetici.  
  
-   Nella nuova sintassi, un enum di CLR mantiene il proprio ambito, che non è il caso nelle estensioni gestite. In precedenza, gli enumeratori erano visibili all'interno dell'ambito contenitore dell'enumerazione. a questo punto, gli enumeratori sono incapsulati all'interno dell'ambito dell'enumerazione.  
  
 Vedere [tipo Enum di CLR](../dotnet/clr-enum-type.md) per ulteriori informazioni.  
  
## <a name="removal-of-box-keyword"></a>Rimozione di box (parola chiave)  
 Estensioni gestite il boxing di sintassi:  
  
```  
Object *o = __box( 1024 ); // explicit boxing  
```  
  
 Nuova sintassi di conversione boxing:  
  
```  
Object ^o = 1024; // implicit boxing  
```  
  
 Vedere [A rilevamento Handle per un valore Boxed](../dotnet/a-tracking-handle-to-a-boxed-value.md) per ulteriori informazioni.  
  
## <a name="pinning-pointer"></a>Puntatore di blocco  
 Estensioni gestite sintassi dei puntatori di blocco:  
  
```  
__gc struct H { int j; };  
  
int main() {  
   H * h = new H;  
   int __pin * k = & h -> j;  
};  
```  
  
 Nuova sintassi dei puntatori di blocco:  
  
```  
ref struct H { int j; };  
  
int main() {  
   H^ h = gcnew H;  
   pin_ptr<int> k = &h->j;  
}  
```  
  
 Vedere [la semantica dei tipi di valore](../dotnet/value-type-semantics.md) per ulteriori informazioni.  
  
## <a name="typeof-keyword-becomes-typeid"></a>typeof (parola chiave) diventa typeid  
 Sintassi di typeof nelle estensioni gestite:  
  
```  
Array* myIntArray =   
   Array::CreateInstance( __typeof(Int32), 5 );  
```  
  
 Nuova sintassi di typeid:  
  
```  
Array^ myIntArray =   
   Array::CreateInstance( Int32::typeid, 5 );  
```  
  
 Vedere [typeof passa a t:: typeid](../dotnet/typeof-goes-to-t-typeid.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [C + + CLI nozioni di base della migrazione](../dotnet/cpp-cli-migration-primer.md)   
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)


