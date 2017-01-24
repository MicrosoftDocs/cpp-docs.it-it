---
title: "Dichiarazione di un oggetto classe di riferimento CLR | Microsoft Docs"
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
  - "tipi di riferimento, CLR"
  - "tipi [C++], tipi di riferimento"
ms.assetid: 6d64f746-3715-4948-ada3-88859f4150e4
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dichiarazione di un oggetto classe di riferimento CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sintassi per la dichiarazione e la creazione di un'istanza di un oggetto di un tipo classe di riferimento è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nelle estensioni gestite un oggetto di tipo classe di riferimento viene dichiarato mediante la sintassi dei puntatori ISO\-C\+\+, con utilizzo facoltativo della parola chiave `__gc` a sinistra dell'asterisco \(`*`\).  Di seguito vengono ad esempio fornite diverse dichiarazioni di oggetti di tipo classe di riferimento nella sintassi delle estensioni gestite:  
  
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
  
 Nella nuova sintassi un oggetto di tipo classe di riferimento viene dichiarato mediante un nuovo token dichiarativo \(`^`\) denominato formalmente *handle di rilevamento* e in modo più informale semplicemente *accento circonflesso*. La definizione "di rilevamento" indica che un tipo di riferimento è incluso nell'heap CLR e può quindi essere spostato in modo trasparente durante la compattazione dell'heap di Garbage Collection.  Un handle di rilevamento viene aggiornato in modo trasparente durante la fase di esecuzione.  Il *riferimento di rilevamento* \(`%`\) e il *puntatore interno* \(`interior_ptr<>`\) costituiscono due concetti analoghi, illustrati in [Semantica dei tipi di valore](../dotnet/value-type-semantics.md).  
  
 I motivi principali per evitare il riutilizzo della sintassi dei puntatori ISO\-C\+\+ nella sintassi dichiarativa sono i seguenti:  
  
-   L'utilizzo della sintassi dei puntatori non consente di applicare gli operatori di overload direttamente a un oggetto di riferimento.  È infatti necessario chiamare l'operatore utilizzando il relativo nome interno, ad esempio `rV1->op_Addition(rV2)`, invece del più intuitivo `rV1+rV2`.  
  
-   Alcune operazioni dei puntatori, ad esempio l'aritmetica dei puntatori e il cast, non sono consentite per oggetti archiviati in un heap sottoposto a Garbage Collection.  Il concetto di handle di rilevamento può catturare in modo più efficiente la natura di un tipo di riferimento CLR.  
  
 Il modificatore `__gc` per un handle di rilevamento non è necessario e non è supportato.  L'utilizzo dell'oggetto non è stato modificato. È comunque possibile accedere ai membri tramite l'operatore di selezione dei membri dei puntatori \(`->`\).  Di seguito è riportato l'esempio di codice delle estensioni gestite precedente convertito nella nuova sintassi:  
  
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
  
## Allocazione dinamica di un oggetto nell'heap CLR  
 Nelle estensioni gestite, l'esistenza di due espressioni `new` per l'allocazione tra heap nativo e heap gestito è in larga misura trasparente.  In quasi tutte le istanze, il compilatore è in grado di utilizzare il contesto per determinare se allocare memoria dall'heap nativo o dall'heap gestito.  Di seguito è riportato un esempio:  
  
```  
Button *button1 = new Button; // OK: managed heap  
int *pi1 = new int;           // OK: native heap  
Int32 *pi2 = new Int32;       // OK: managed heap  
```  
  
 Se non si desidera l'allocazione dell'heap contestuale, è possibile dirigere il compilatore con la parola chiave `__gc` o `__nogc`.  Nella nuova sintassi, la natura distinta delle due espressioni new è resa esplicita dall'introduzione della parola chiave `gcnew`.  Nella nuova sintassi, le tre dichiarazioni precedenti risultano come segue:  
  
```  
Button^ button1 = gcnew Button;        // OK: managed heap  
int * pi1 = new int;                   // OK: native heap  
Int32^ pi2 = gcnew Int32; // OK: managed heap  
```  
  
 Di seguito viene fornita l'inizializzazione nelle estensioni gestite dei membri di `Form1` dichiarati nella sezione precedente:  
  
```  
void InitializeComponent() {  
   components = new System::ComponentModel::Container();  
   button1 = new System::Windows::Forms::Button();  
   myDataGrid = new DataGrid();  
  
   button1->Click +=   
      new System::EventHandler(this, &Form1::button1_Click);  
}  
```  
  
 Di seguito viene riportata la stessa inizializzazione nella nuova sintassi:  Si noti che l'accento circonflesso non è necessario per il tipo di riferimento quando costituisce la destinazione di un'espressione `gcnew`.  
  
```  
void InitializeComponent() {  
   components = gcnew System::ComponentModel::Container;  
   button1 = gcnew System::Windows::Forms::Button;  
   myDataGrid = gcnew DataGrid;  
  
   button1->Click +=   
      gcnew System::EventHandler( this, &Form1::button1_Click );  
}  
```  
  
## Riferimento di rilevamento a nessun oggetto  
 Nella nuova sintassi `0` non rappresenta un indirizzo con valore null, ma viene semplicemente trattato come Integer così come `1`, `10` o `100`.  Un nuovo token speciale rappresenta un valore null per un riferimento di rilevamento.  Nelle estensioni gestite, ad esempio, un tipo di riferimento viene inizializzato in modo da fare riferimento a nessun oggetto come segue:  
  
```  
// OK: we set obj to refer to no object  
Object * obj = 0;  
  
// Error: no implicit boxing  
Object * obj2 = 1;  
```  
  
 Nella nuova sintassi qualsiasi inizializzazione o assegnazione di un tipo di valore a `Object` determina il boxing implicito di tale tipo di valore.  Nella nuova sintassi sia `obj` che `obj2` vengono inizializzati sugli oggetti Int32 boxed a cui viene fatto riferimento, contenenti rispettivamente i valori 0 e 1.  Di seguito è riportato un esempio.  
  
```  
// causes the implicit boxing of both 0 and 1  
Object ^ obj = 0;  
Object ^ obj2 = 1;  
```  
  
 Per eseguire l'inizializzazione, l'assegnazione e il confronto espliciti di un handle di rilevamento a null, utilizzare la nuova parola chiave `nullptr`.  Di seguito viene fornita la revisione corretta dell'esempio originale:  
  
```  
// OK: we set obj to refer to no object  
Object ^ obj = nullptr;  
  
// OK: we initialize obj2 to a Int32^  
Object ^ obj2 = 1;  
```  
  
 Ciò complica il porting del codice esistente nella nuova sintassi.  Si consideri ad esempio la seguente dichiarazione di classe di valori:  
  
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
  
 Qui, `args` che `env` sono tipi di riferimento CLR.  L'inizializzazione di questi due membri su `0` nel costruttore non può restare invariata nella transizione alla nuova sintassi.  È infatti necessaria la modifica in `nullptr`:  
  
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
  
 Analogamente, i test su tali membri con il relativo confronto con `0` devono essere modificati in modo da confrontare i membri con `nullptr`.  Di seguito viene fornita la sintassi delle estensioni gestite:  
  
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
  
 Di seguito viene fornita la revisione, in cui ciascuna istanza di `0` viene trasformata in `nullptr`.  Lo strumento di conversione facilita questa trasformazione, automatizzando numerose o tutte le occorrenze, incluso l'utilizzo della macro `NULL`.  
  
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
  
 `nullptr` viene convertito in qualsiasi tipo di puntatore o handle di rilevamento, ma non viene promosso a tipo integrale.  Nell'insieme di inizializzazioni riportato di seguito, ad esempio, `nullptr` costituisce un valore iniziale valido solo per le prime due.  
  
```  
// OK: we set obj and pstr to refer to no object  
Object^ obj = nullptr;  
char*   pstr = nullptr; // 0 would also work here  
  
// Error: no conversion of nullptr to 0 …  
int ival = nullptr;  
```  
  
 Analogamente, si consideri il seguente insieme di metodi di overload:  
  
```  
void f( Object^ ); // (1)  
void f( char* );   // (2)  
void f( int );     // (3)  
```  
  
 Una chiamata con il valore letterale `nullptr` come la seguente  
  
```  
// Error: ambiguous: matches (1) and (2)  
f(  nullptr );  
```  
  
 risulta ambigua poiché `nullptr` corrisponde sia a un handle di rilevamento che a un puntatore e non viene attribuita alcuna preferenza a un tipo rispetto a un altro. Per risolvere l'ambiguità è necessario un cast esplicito.  
  
 Una chiamata con `0` corrisponde esattamente all'istanza \(3\)  
  
```  
// OK: matches (3)  
f( 0 );  
```  
  
 poiché `0` è di tipo integer.  Se non fosse presente `f(int)`, la chiamata corrisponderebbe senza ambiguità a `f(char*)` tramite una conversione standard.  Nelle regole di corrispondenza, una corrispondenza esatta ha la precedenza rispetto a una conversione standard.  In assenza di una corrispondenza esatta, una conversione standard ha la precedenza rispetto al boxing implicito di un tipo di valore.  Viene così esclusa qualsiasi ambiguità.  
  
## Vedere anche  
 [Tipi gestiti \(C\+\+\/CL\)](../dotnet/managed-types-cpp-cl.md)   
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)   
 [Operatore handle a oggetto \(^\)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)   
 [nullptr](../windows/nullptr-cpp-component-extensions.md)