---
title: "Struttura delle modifiche (C++/CLI) | Microsoft Docs"
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
ms.assetid: c0bbbd6b-c5c4-44cf-a6ca-c1010c377e9d
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura delle modifiche (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa struttura vengono illustrati esempi di alcune modifiche nel linguaggio da estensioni gestite di C\+\+ a [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  Per ulteriori informazioni, selezionare il collegamento fornito con ogni elemento.  
  
## Parole chiave senza doppio carattere di sottolineatura  
 Il doppio carattere di sottolineatura che precede tutte le parole chiave è stato eliminato, con un'unica eccezione.  Di conseguenza, `__value` diventa `value` e `__interface` diventa `interface` e così via.  Per evitare l'incompatibilità del nome tra parole chiave e identificatori nel codice utente, le parole chiave vengono considerate prevalentemente contestuali.  
  
 Per ulteriori informazioni, vedere [Parole chiave del linguaggio \(C\+\+\/CLI\)](../dotnet/language-keywords-cpp-cli.md).  
  
## Dichiarazioni di classe  
 Sintassi nelle estensioni gestite:  
  
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
  
 Per ulteriori informazioni, vedere [Tipi gestiti \(C\+\+\/CL\)](../dotnet/managed-types-cpp-cl.md).  
  
## Dichiarazione degli oggetti  
 Sintassi nelle estensioni gestite:  
  
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
  
 Per ulteriori informazioni, vedere [Dichiarazione di un oggetto classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md).  
  
### Allocazione per l'heap gestito  
 Sintassi nelle estensioni gestite:  
  
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
  
 Per ulteriori informazioni, vedere [Dichiarazione di un oggetto classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md).  
  
### Riferimento di rilevamento a nessun oggetto  
 Sintassi nelle estensioni gestite:  
  
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
  
 Per ulteriori informazioni, vedere [Dichiarazione di un oggetto classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md).  
  
## Dichiarazioni di matrice  
 La matrice CLR è stata riprogettata.  Sebbene sia simile alla raccolta di modelli `vector` di STL, la matrice esegue il mapping alla classe `System::Array` sottostante, quindi non si tratta dell'implementazione di un modello.  
  
 Per ulteriori informazioni, vedere [Dichiarazione di una matrice CLR](../dotnet/declaration-of-a-clr-array.md).  
  
### Matrice come parametro  
 Sintassi delle matrici nelle estensioni gestite:  
  
```  
void PrintValues( Object* myArr __gc[]);   
void PrintValues( int myArr __gc[,,]);   
```  
  
 Nuova sintassi delle matrici:  
  
```  
void PrintValues( array<Object^>^ myArr );  
void PrintValues( array<int,3>^ myArr );  
```  
  
### Matrice come tipo restituito  
 Sintassi delle matrici nelle estensioni gestite:  
  
```  
Int32 f() [];   
int GetArray() __gc[];  
```  
  
 Nuova sintassi delle matrici:  
  
```  
array<Int32>^ f();  
array<int>^ GetArray();  
```  
  
### Inizializzazione rapida della matrice CLR locale  
 Sintassi delle matrici nelle estensioni gestite:  
  
```  
int GetArray() __gc[] {  
   int a1 __gc[] = { 1, 2, 3, 4, 5 };  
   Object* myObjArray __gc[] = { __box(26), __box(27), __box(28),  
                                 __box(29), __box(30) };  
  
   return a1;  
}  
```  
  
 Nuova sintassi delle matrici:  
  
```  
array<int>^ GetArray() {  
   array<int>^ a1 = {1,2,3,4,5};  
   array<Object^>^ myObjArray = {26,27,28,29,30};  
  
   return a1;  
}  
```  
  
### Dichiarazione esplicita della matrice CLR  
 Sintassi delle matrici nelle estensioni gestite:  
  
```  
Object* myArray[] = new Object*[2];  
String* myMat[,] = new String*[4,4];  
```  
  
 Nuova sintassi delle matrici:  
  
```  
array<Object^>^ myArray = gcnew array<Object^>(2);  
array<String^,2>^ myMat = gcnew array<String^,2>(4,4);  
```  
  
 Novità del linguaggio: inizializzazione esplicita della matrice dopo gcnew  
  
```  
// explicit initialization list follow gcnew   
// is not supported in Managed Extensions  
array<Object^>^ myArray =   
   gcnew array<Object^>(4){ 1, 1, 2, 3 };  
```  
  
## Proprietà scalari  
 Sintassi delle proprietà nelle estensioni gestite:  
  
```  
public __gc __sealed class Vector {  
   double _x;  
  
public:  
   __property double get_x(){ return _x; }  
   __property void set_x( double newx ){ _x = newx; }  
};  
```  
  
 Nuova sintassi delle proprietà:  
  
```  
public ref class Vector sealed {   
   double _x;  
  
public:  
   property double x   
   {  
      double get()             { return _x; }  
      void   set( double newx ){ _x = newx; }  
   } // Note: no semi-colon …  
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
  
 Per ulteriori informazioni, vedere [Dichiarazione di proprietà](../dotnet/property-declaration.md).  
  
## Proprietà indicizzate  
 Sintassi delle proprietà indicizzate nelle estensioni gestite:  
  
```  
public __gc class Matrix {  
   float mat[,];  
  
public:   
   __property void set_Item( int r, int c, float value) { mat[r,c] = value; }  
   __property int get_Item( int r, int c ) { return mat[r,c]; }  
};  
```  
  
 Nuova sintassi delle proprietà indicizzate:  
  
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
  
 Per ulteriori informazioni, vedere [Dichiarazione degli indici di proprietà](../dotnet/property-index-declaration.md).  
  
## Operatori di overload  
 Sintassi degli operatori di overload nelle estensioni gestite:  
  
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
  
 Nuova sintassi degli operatori di overload:  
  
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
  
 Per ulteriori informazioni, vedere [Operatori di overload](../dotnet/overloaded-operators.md).  
  
## Operatori di conversione  
 Sintassi degli operatori di conversione nelle estensioni gestite:  
  
```  
__gc struct MyDouble {  
   static MyDouble* op_Implicit( int i );   
   static int op_Explicit( MyDouble* val );  
   static String* op_Explicit( MyDouble* val );   
};  
```  
  
 Nuova sintassi degli operatori di conversione:  
  
```  
ref struct MyDouble {  
public:  
   static operator MyDouble^ ( int i );  
   static explicit operator int ( MyDouble^ val );  
   static explicit operator String^ ( MyDouble^ val );  
};  
```  
  
 Per ulteriori informazioni, vedere [Modifiche agli operatori di conversione](../dotnet/changes-to-conversion-operators.md).  
  
## Override esplicito di un membro di interfaccia  
 Sintassi dell'override esplicito nelle estensioni gestite:  
  
```  
public __gc class R : public ICloneable {  
   // to be used through ICloneable  
   Object* ICloneable::Clone();  
  
   // to be used through an R  
   R* Clone();  
};  
```  
  
 Nuova sintassi dell'override esplicito:  
  
```  
public ref class R : public ICloneable {  
   // to be used through ICloneable  
   virtual Object^ InterfaceClone() = ICloneable::Clone;  
  
   // to be used through an R   
   virtual R^ Clone();  
};  
```  
  
 Per ulteriori informazioni, vedere [Override esplicito di un membro di interfaccia](../dotnet/explicit-override-of-an-interface-member.md).  
  
## Funzioni virtuali private  
 Sintassi delle funzioni virtuali private nelle estensioni gestite:  
  
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
  
 Nuova sintassi delle funzioni virtuali private  
  
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
  
 Per ulteriori informazioni, vedere [Funzioni virtuali private](../dotnet/private-virtual-functions.md).  
  
## Tipo enum di CLR  
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
  
 Oltre a questa piccola modifica sintattica, il comportamento del tipo di enumerazione CLR ha subito diverse modifiche:  
  
-   La dichiarazione con prototipo di un enum di CLR non è più supportata.  
  
-   Tra le due versioni del linguaggio è stata invertita la risoluzione dell'overload tra i tipi aritmetici incorporati e la gerarchia di classi dell'oggetto [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  Di conseguenza, gli enum di CLR non vengono più implicitamente convertiti in tipi aritmetici.  
  
-   Contrariamente a quanto accade nelle estensioni gestite, nella nuova sintassi un enum di CLR mantiene il proprio ambito.  In passato, gli enumeratori erano visibili all'interno dell'ambito che contiene l'enum, mentre adesso vi sono incapsulati.  
  
 Per ulteriori informazioni, vedere [Tipo enum di CLR](../dotnet/clr-enum-type.md).  
  
## Eliminazione della parola chiave \_\_box  
 Sintassi del boxing nelle estensioni gestite:  
  
```  
Object *o = __box( 1024 ); // explicit boxing  
```  
  
 Nuova sintassi del boxing:  
  
```  
Object ^o = 1024; // implicit boxing  
```  
  
 Per ulteriori informazioni, vedere [Handle di rilevamento a un valore boxed](../dotnet/a-tracking-handle-to-a-boxed-value.md).  
  
## Puntatore di blocco  
 Sintassi del puntatore di blocco nelle estensioni gestite:  
  
```  
__gc struct H { int j; };  
  
int main() {  
   H * h = new H;  
   int __pin * k = & h -> j;  
};  
```  
  
 Nuova sintassi del puntatore di blocco:  
  
```  
ref struct H { int j; };  
  
int main() {  
   H^ h = gcnew H;  
   pin_ptr<int> k = &h->j;  
}  
```  
  
 Per ulteriori informazioni, vedere [Semantica dei tipi di valore](../dotnet/value-type-semantics.md).  
  
## La parola chiave \_\_typeof diventa typeid  
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
  
 Per ulteriori informazioni, vedere [typeof passa a T::typeid](../dotnet/typeof-goes-to-t-typeid.md).  
  
## Vedere anche  
 [Nozioni di base della migrazione in C\+\+\/CLI](../dotnet/cpp-cli-migration-primer.md)   
 [\(NOTINBUILD\)Managed Extensions for C\+\+ Syntax Upgrade Checklist](http://msdn.microsoft.com/it-it/edbded88-7ef3-4757-bd9d-b8f48ac2aada)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)