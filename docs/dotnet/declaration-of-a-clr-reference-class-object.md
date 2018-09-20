---
title: Dichiarazione di un oggetto di classe di riferimento CLR | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- types [C++], reference types
- reference types, CLR
ms.assetid: 6d64f746-3715-4948-ada3-88859f4150e4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f3e8ec6407e12d0c26331d45dc1659277feed016
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444580"
---
# <a name="declaration-of-a-clr-reference-class-object"></a>Dichiarazione di un oggetto classe di riferimento CLR

La sintassi per dichiarare e creare un oggetto di un tipo di classe di riferimento è stato modificato dalle estensioni gestite per C++ in Visual C++.

Nelle estensioni gestite, un oggetto di tipo classe di riferimento viene dichiarato usando la sintassi di puntatore ISO-c, con un utilizzo facoltativo del `__gc` (parola chiave) a sinistra della stella (`*`). Ad esempio, ecco un'ampia gamma di riferimento a dichiarazioni di oggetti di tipo di classe nella sintassi delle estensioni gestite:

```
public __gc class Form1 : public System::Windows::Forms::Form {
private:
   System::ComponentModel::Container __gc *components;
   Button __gc *button1;
   DataGrid __gc *myDataGrid;
   DataSet __gc *myDataSet;

   void PrintValues( Array* myArr ) {
      System::Collections::IEnumerator* myEnumerator =
         myArr->GetEnumerator();

      Array *localArray;
      myArr->Copy(myArr, localArray, myArr->Length);
   }
};
```

Sotto la nuova sintassi, si dichiara un oggetto di tipo classe di riferimento con un nuovo token dichiarativo (`^`) denominato formalmente come un *rilevamento handle* e più informale come una *hat*. (L'aggettivo rilevamento indica che un tipo di riferimento si trova nell'heap di Common Language Runtime e può quindi essere spostato in modo trasparente durante la compattazione dell'heap di garbage collection. Handle di rilevamento viene aggiornato in modo trasparente durante la fase di esecuzione. Due concetti simili sono le *riferimento di rilevamento* (`%`) e il *puntatore interno* (`interior_ptr<>`), illustrati in [semantica dei tipi valore](../dotnet/value-type-semantics.md).

Come indicato di seguito sono riportati i motivi principali per spostare la sintassi dichiarativa per il riutilizzo della sintassi del puntatore ISO-c + +:

- L'uso della sintassi del puntatore non consentivano gli operatori di overload per essere applicate direttamente a un oggetto di riferimento. Ma uno era necessario chiamare l'operatore tramite il relativo nome interno, ad esempio `rV1->op_Addition(rV2)` anziché il più intuitivo `rV1+rV2`.

- Un numero di operazioni di puntatore, ad esempio il cast e il puntatore aritmetico, non è consentito per gli oggetti archiviati in un'operazione di garbage collection heap. La nozione di un handle di rilevamento migliorato acquisisce la natura di un tipo di riferimento CLR.

Il `__gc` modificatore su un handle di rilevamento non è necessaria e non è supportato. L'uso dell'oggetto stesso non è stato modificato; comunque possibile accedere ai membri tramite l'operatore di selezione puntatore a membro (`->`). Ad esempio, ecco le estensioni gestite codice di esempio precedente convertiti nella nuova sintassi:

```
public ref class Form1: public System::Windows::Forms::Form {
private:
   System::ComponentModel::Container^ components;
   Button^ button1;
   DataGrid^ myDataGrid;
   DataSet^ myDataSet;

   void PrintValues( Array^ myArr ) {
      System::Collections::IEnumerator^ myEnumerator =
         myArr->GetEnumerator();

      Array ^localArray;
      myArr->Copy(myArr, localArray, myArr->Length);   }
};
```

## <a name="dynamic-allocation-of-an-object-on-the-clr-heap"></a>Allocazione dinamica di un oggetto sull'Heap di Common Language Runtime

Nelle estensioni gestite, l'esistenza di due `new` espressioni per l'allocazione tra l'heap nativo e gestito è stato in gran parte trasparente. In quasi tutti i casi, il compilatore è in grado di utilizzare il contesto per determinare se si desidera allocare memoria dall'heap nativo o gestito. Ad esempio,

```
Button *button1 = new Button; // OK: managed heap
int *pi1 = new int;           // OK: native heap
Int32 *pi2 = new Int32;       // OK: managed heap
```

Quando non si desidera l'allocazione di heap contestuali, è possibile indirizzare il compilatore con la `__gc` o `__nogc` (parola chiave). Nella nuova sintassi, la natura separata delle due espressioni new è resa esplicita con l'introduzione del `gcnew` (parola chiave). Ad esempio, le tre dichiarazioni precedenti aspetto come indicato di seguito nella nuova sintassi:

```
Button^ button1 = gcnew Button;        // OK: managed heap
int * pi1 = new int;                   // OK: native heap
Int32^ pi2 = gcnew Int32; // OK: managed heap
```

Ecco l'inizializzazione di estensioni gestite del `Form1` i membri dichiarati nella sezione precedente:

```
void InitializeComponent() {
   components = new System::ComponentModel::Container();
   button1 = new System::Windows::Forms::Button();
   myDataGrid = new DataGrid();

   button1->Click +=
      new System::EventHandler(this, &Form1::button1_Click);
}
```

Di seguito è la stessa inizializzazione per la nuova sintassi. Si noti che l'accento circonflesso non è richiesto per il tipo di riferimento quando si tratta della destinazione di un `gcnew` espressione.

```
void InitializeComponent() {
   components = gcnew System::ComponentModel::Container;
   button1 = gcnew System::Windows::Forms::Button;
   myDataGrid = gcnew DataGrid;

   button1->Click +=
      gcnew System::EventHandler( this, &Form1::button1_Click );
}
```

## <a name="a-tracking-reference-to-no-object"></a>Un riferimento di traccia di alcun oggetto

Nella nuova sintassi `0` non rappresenta un indirizzo null ma viene considerato come un numero intero, identico `1`, `10`, o `100`. Un nuovo token speciali rappresenta un valore null per un riferimento di traccia. Ad esempio, nelle estensioni gestite, si inizializza un tipo di riferimento per non risolvere alcun oggetto, come indicato di seguito:

```
// OK: we set obj to refer to no object
Object * obj = 0;

// Error: no implicit boxing
Object * obj2 = 1;
```

Nella nuova sintassi, qualsiasi inizializzazione o l'assegnazione di un valore di tipo a un `Object` causa un conversione boxing implicita di tale tipo di valore. Nella nuova sintassi, entrambe `obj` e `obj2` vengono inizializzati a Int32 oggetti boxed i valori 0 e 1, rispettivamente. Ad esempio:

```
// causes the implicit boxing of both 0 and 1
Object ^ obj = 0;
Object ^ obj2 = 1;
```

Pertanto, per eseguire l'inizializzazione esplicita, l'assegnazione e il confronto di un handle di rilevamento su null, usare la nuova parola chiave `nullptr`.  La revisione corretta dell'esempio originale si presenta come segue:

```
// OK: we set obj to refer to no object
Object ^ obj = nullptr;

// OK: we initialize obj2 to a Int32^
Object ^ obj2 = 1;
```

Ciò complica il porting del codice esistente nella nuova sintassi. Ad esempio, si consideri la dichiarazione di classe di valore seguente:

```
__value struct Holder {
   Holder( Continuation* c, Sexpr* v ) {
      cont = c;
      value = v;
      args = 0;
      env = 0;
   }

private:
   Continuation* cont;
   Sexpr * value;
   Environment* env;
   Sexpr * args __gc [];
};
```

In questo caso, entrambe `args` e `env` sono tipi riferimento CLR. L'inizializzazione di questi due membri ai `0` nel costruttore non può rimanere invariato in transizione verso la nuova sintassi. Invece, devono essere modificate in `nullptr`:

```
value struct Holder {
   Holder( Continuation^ c, Sexpr^ v )
   {
      cont = c;
      value = v;
      args = nullptr;
      env = nullptr;
   }

private:
   Continuation^ cont;
   Sexpr^ value;
   Environment^ env;
   array<Sexpr^>^ args;
};
```

Analogamente, esegue i test su quei membri per il confronto `0` devono essere modificati per confrontare i membri da `nullptr`. Di seguito è riportata la sintassi di estensioni gestite:

```
Sexpr * Loop (Sexpr* input) {
   value = 0;
   Holder holder = Interpret(this, input, env);

   while (holder.cont != 0) {
      if (holder.env != 0) {
         holder=Interpret(holder.cont,holder.value,holder.env);
      }
      else if (holder.args != 0) {
         holder =
         holder.value->closure()->
         apply(holder.cont,holder.args);
      }
   }

   return value;
}
```

Ecco la revisione, in cui ciascuna `0` dell'istanza con un `nullptr`. Lo strumento di traduzione facilita questa trasformazione grazie all'automazione molte o tutte le occorrenze, tra cui l'utilizzo del `NULL` macro.

```
Sexpr ^ Loop (Sexpr^ input) {
   value = nullptr;
   Holder holder = Interpret(this, input, env);

   while ( holder.cont != nullptr ) {
      if ( holder.env != nullptr ) {
         holder=Interpret(holder.cont,holder.value,holder.env);
      }
      else if (holder.args != nullptr ) {
         holder =
         holder.value->closure()->
         apply(holder.cont,holder.args);
      }
   }

   return value;
}
```

Il `nullptr` viene convertito in qualsiasi tipo di handle di rilevamento o puntatore, ma non viene alzata di livello a un tipo integrale. Ad esempio, nel seguente set di inizializzazioni di `nullptr` è valida solo come un valore iniziale per i primi due.

```
// OK: we set obj and pstr to refer to no object
Object^ obj = nullptr;
char*   pstr = nullptr; // 0 would also work here

// Error: no conversion of nullptr to 0
int ival = nullptr;
```

Analogamente, dato un set di overload di metodi simile al seguente:

```
void f( Object^ ); // (1)
void f( char* );   // (2)
void f( int );     // (3)
```

Una chiamata con `nullptr` letterale, ad esempio il comando seguente,

```
// Error: ambiguous: matches (1) and (2)
f(  nullptr );
```

è ambiguo perché il `nullptr` corrisponde a un handle di rilevamento sia un puntatore e non vi è alcuna preferenza assegnato al tipo di uno rispetto a altro. (Questa situazione richiede un cast esplicito per distinguere tra).

Una chiamata con `0` corrisponde esattamente all'istanza (3):

```
// OK: matches (3)
f( 0 );
```

Poiché `0` è di tipo integer. Sono stati `f(int)` non è presente, la chiamata in modo non ambiguo corrisponderebbe `f(char*)` tramite una conversione standard. Le regole di corrispondenza assegnare la priorità di una corrispondenza esatta su una conversione standard. In assenza di una corrispondenza esatta, una conversione standard si ha la precedenza sulla boxing implicito di un tipo di valore. Ecco perché non è presente alcuna ambiguità.

## <a name="see-also"></a>Vedere anche

[Tipi gestiti (C + + / CL)](../dotnet/managed-types-cpp-cl.md)<br/>
[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)<br/>
[Operatore handle a oggetto (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)<br/>
[nullptr](../windows/nullptr-cpp-component-extensions.md)