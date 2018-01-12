---
title: Dichiarazione di un oggetto di classe di riferimento CLR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- types [C++], reference types
- reference types, CLR
ms.assetid: 6d64f746-3715-4948-ada3-88859f4150e4
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0e026855abef535e0ca58662335772e49dc5fa1f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="declaration-of-a-clr-reference-class-object"></a>Dichiarazione di un oggetto classe di riferimento CLR
La sintassi per dichiarare e creare un'istanza di un oggetto di un tipo di classe di riferimento è stata modificata dalle estensioni gestite per C++ a Visual C++.  
  
 Nelle estensioni gestite, un oggetto di tipo classe di riferimento viene dichiarato utilizzando la sintassi del puntatore C++ ISO, con un utilizzo facoltativo del `__gc` (parola chiave) a sinistra della stella (`*`). Ad esempio, ecco un'ampia gamma di riferimento le dichiarazioni di oggetti di tipo classe nella sintassi di estensioni gestite:  
  
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
  
 Nella nuova sintassi, si dichiara un oggetto di tipo classe di riferimento utilizzando un nuovo token dichiarativo (`^`) denominato formalmente un *handle di rilevamento* e più informale come un *hat*. (L'aggettivo rilevamento significa che un tipo di riferimento si trova nell'heap di Common Language Runtime e può quindi essere spostato in modo trasparente durante la compattazione dell'heap di garbage collection. Un handle di rilevamento viene aggiornato in modo trasparente durante il runtime. Sono due concetti simili di *riferimento di rilevamento* (`%`) e *puntatore interno* (`interior_ptr<>`), illustrati in [la semantica dei tipi di valore](../dotnet/value-type-semantics.md).  
  
 Come indicato di seguito sono riportati i motivi principali per spostare la sintassi dichiarativa per il riutilizzo della sintassi del puntatore C++ ISO:  
  
-   Gli operatori di overload per essere applicate direttamente a un oggetto di riferimento non consente l'utilizzo della sintassi del puntatore. Invece di chiamare l'operatore tramite il relativo nome interno, ad esempio fossero `rV1->op_Addition(rV2)` anziché più intuitiva `rV1+rV2`.  
  
-   Un numero di operazioni di puntatore, ad esempio cast e operazioni aritmetiche, non è consentito per gli oggetti archiviati in un'operazione di garbage collection heap. La nozione di un handle di rilevamento migliorato acquisisce la natura di un tipo di riferimento CLR.  
  
 Il `__gc` modificatore su un handle di rilevamento, è necessario e non è supportata. L'utilizzo dell'oggetto stesso non è stata modificata; comunque possibile accedere ai membri tramite l'operatore di selezione puntatore a membro (`->`). Ad esempio, ecco l'esempio di codice estensioni gestite precedente convertito nella nuova sintassi:  
  
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
  
## <a name="dynamic-allocation-of-an-object-on-the-clr-heap"></a>Allocazione dinamica di un oggetto nell'heap di Common Language Runtime  
 Nelle estensioni gestite, l'esistenza di due `new` espressioni per l'allocazione tra l'heap gestito e nativo è trasparente. In quasi tutte le istanze, il compilatore è in grado di utilizzare il contesto per determinare se eseguire l'allocazione della memoria dall'heap nativo o gestito. Ad esempio,  
  
```  
Button *button1 = new Button; // OK: managed heap  
int *pi1 = new int;           // OK: native heap  
Int32 *pi2 = new Int32;       // OK: managed heap  
```  
  
 Quando non si desidera l'allocazione dell'heap contestuale, è possibile indirizzare il compilatore con il `__gc` o `__nogc` (parola chiave). Nella nuova sintassi, la natura distinta delle due espressioni new è resa esplicita con l'introduzione del `gcnew` (parola chiave). Ad esempio, le tre dichiarazioni precedenti: come indicato di seguito nella nuova sintassi  
  
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
  
 Di seguito è la stessa inizializzazione per la nuova sintassi. Si noti che l'handle non è richiesto per il tipo di riferimento quando è la destinazione di un `gcnew` espressione.  
  
```  
void InitializeComponent() {  
   components = gcnew System::ComponentModel::Container;  
   button1 = gcnew System::Windows::Forms::Button;  
   myDataGrid = gcnew DataGrid;  
  
   button1->Click +=   
      gcnew System::EventHandler( this, &Form1::button1_Click );  
}  
```  
  
## <a name="a-tracking-reference-to-no-object"></a>Un riferimento di rilevamento a nessun oggetto  
 Nella nuova sintassi, `0` non rappresenta un indirizzo null ma viene considerato come un numero intero, identico `1`, `10`, o `100`. Un nuovo token speciale rappresenta un valore null per un riferimento di rilevamento. Nelle estensioni gestite, ad esempio, si inizializza un tipo di riferimento per non risolvere alcun oggetto, come indicato di seguito:  
  
```  
// OK: we set obj to refer to no object  
Object * obj = 0;  
  
// Error: no implicit boxing  
Object * obj2 = 1;  
```  
  
 Nella nuova sintassi, qualsiasi inizializzazione o assegnazione di un valore di tipo a un `Object` determina il boxing implicito di quel tipo di valore. Nella nuova sintassi, entrambe `obj` e `obj2` vengono inizializzati su Int32 oggetti boxed i valori 0 e 1, rispettivamente. Ad esempio:  
  
```  
// causes the implicit boxing of both 0 and 1  
Object ^ obj = 0;  
Object ^ obj2 = 1;  
```  
  
 Pertanto, per eseguire l'inizializzazione esplicita, l'assegnazione e confronto di un handle di rilevamento a null, utilizzare la nuova parola chiave `nullptr`.  La revisione corretta dell'esempio originale è simile al seguente:  
  
```  
// OK: we set obj to refer to no object  
Object ^ obj = nullptr;  
  
// OK: we initialize obj2 to a Int32^  
Object ^ obj2 = 1;  
```  
  
 Ciò complica il porting del codice esistente nella nuova sintassi. Ad esempio, si consideri la dichiarazione di classe di valore seguenti:  
  
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
  
 In questo caso, entrambi `args` e `env` sono tipi di riferimento CLR. L'inizializzazione di questi due membri su `0` nel costruttore non può restare invariata in transizione verso la nuova sintassi. Invece, deve essere modificati in `nullptr`:  
  
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
  
 Analogamente, test su tali membri confrontarli per `0` devono essere modificati per confrontare i membri con `nullptr`. Di seguito è riportata la sintassi di estensioni gestite:  
  
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
  
 Ecco la revisione, in ogni `0` istanza con un `nullptr`. Lo strumento di conversione facilita questa trasformazione, automatizzando numerose o tutte le occorrenze, incluso l'utilizzo del `NULL` (macro).  
  
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
  
 Il `nullptr` viene convertito in qualsiasi tipo puntatore o rilevamento handle ma non viene promosso a un tipo integrale. Ad esempio, nella procedura riportata di inizializzazioni di `nullptr` è valida solo come un valore iniziale per i primi due.  
  
```  
// OK: we set obj and pstr to refer to no object  
Object^ obj = nullptr;  
char*   pstr = nullptr; // 0 would also work here  
  
// Error: no conversion of nullptr to 0  
int ival = nullptr;  
```  
  
 Analogamente, dato un set di overload di metodi quali i seguenti:  
  
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
  
 è ambiguo perché il `nullptr` corrisponde a un handle di rilevamento e a un puntatore ed è presente alcuna preferenza assegnato a un tipo per l'altro. (Questa situazione richiede un cast esplicito per evitare ambiguità tra).  
  
 Una chiamata con `0` corrisponde esattamente all'istanza (3):  
  
```  
// OK: matches (3)  
f( 0 );  
```  
  
 Poiché `0` è di tipo integer. Sono stati `f(int)` non è presente, la chiamata in modo non ambiguo corrisponderebbe `f(char*)` tramite una conversione standard. Le regole di corrispondenza ha la precedenza di una corrispondenza esatta su una conversione standard. In assenza di una corrispondenza esatta, una conversione standard ha la precedenza rispetto a un conversione boxing implicita di un tipo valore. Che è il motivo per cui l'assenza di ambiguità.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi gestiti (C + + CL)](../dotnet/managed-types-cpp-cl.md)   
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)   
 [Operatore handle a oggetto (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)   
 [nullptr](../windows/nullptr-cpp-component-extensions.md)