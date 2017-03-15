---
title: "Operatore new (C++) | Microsoft Docs"
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
  - "new (parola chiave) [C++]"
ms.assetid: 69fee812-1c28-4882-8fda-d1ad17860004
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore new (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Alloca la memoria per un oggetto o una matrice di oggetti di *type\-name* dall'archiviazione disponibile e restituisce all'oggetto un puntatore opportunamente tipizzato, diverso da zero.  
  
> [!NOTE]
>  Le estensioni di componenti di Microsoft C\+\+ forniscono supporto per la parola chiave `new` per aggiungere le voci dello slot vtable.  Per altre informazioni, vedere [new \(new slot in vtable\)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)  
  
## Sintassi  
  
```  
[::] new [placement] new-type-name [new-initializer]  
[::] new [placement] ( type-name ) [new-initializer]  
```  
  
## Note  
 In caso contrario, **new** restituisce zero o genera un'eccezione. Per altre informazioni vedere [Gli operatori new e delete](../cpp/new-and-delete-operators.md).  È possibile modificare questo comportamento predefinito scrivendo una routine di gestione delle eccezioni personalizzata e chiamando la funzione della libreria di runtime [\_set\_new\_handler](../c-runtime-library/reference/set-new-handler.md) con il nome di funzione come relativo argomento.  
  
 Per informazioni su come creare un oggetto nell'heap gestito, vedere [gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md).  
  
 Quando si usa **new** per allocare memoria per un oggetto della classe C\+\+, il costruttore dell'oggetto viene chiamato dopo che la memoria è stata allocata.  
  
 Usare l'operatore [delete](../cpp/delete-operator-cpp.md) per deallocare la memoria allocata con l'operatore **new**.  
  
 Nell'esempio viene allocata e successivamente liberata una matrice bidimensionale di caratteri di dimensione `dim` per 10.  Quando si alloca una matrice multidimensionale, tutte le dimensioni eccetto la prima devono essere espressioni costanti che restituiscono valori positivi; la dimensione più a sinistra della matrice può essere una qualsiasi espressione che restituisce un valore positivo.  Quando si alloca una matrice usando l'operatore **new**, la prima dimensione può essere zero e l'operatore **new** restituisce un puntatore univoco.  
  
```  
char (*pchar)[10] = new char[dim][10];  
delete [] pchar;  
```  
  
 *type\-name* non può contenere **const**, `volatile`, dichiarazioni di classi o dichiarazioni di enumerazioni.  Pertanto, la seguente espressione non è valida:  
  
```  
volatile char *vch = new volatile char[20];  
```  
  
 L'operatore **new** non alloca tipi di riferimento perché non sono oggetti.  
  
 L'operatore **new** non può essere usato per allocare una funzione, ma il relativo uso è consentito per allocare i puntatori a funzioni.  Nell'esempio seguente viene allocata e successivamente liberata una matrice di sette puntatori a funzioni che restituiscono numeri interi.  
  
```  
int (**p) () = new (int (*[7]) ());  
delete *p;  
```  
  
 Se si usa l'operatore **new** senza argomenti aggiuntivi e si esegue la compilazione con l'opzione [\/GX](../build/reference/gx-enable-exception-handling.md), [\/EHa](../build/reference/eh-exception-handling-model.md) o [\/EHs](../build/reference/eh-exception-handling-model.md), il compilatore genererà il codice per chiamare l'operatore **delete** se il costruttore genera un'eccezione.  
  
 Nell'elenco riportato di seguito sono descritti gli elementi di sintassi dell'operatore **new**:  
  
 *placement*  
 Offre un modo per passare argomenti aggiuntivi se si esegue l'overload di **new**.  
  
 *type\-name*  
 Specifica il tipo da allocare; può essere un tipo incorporato o un tipo definito dall'utente.  Se la specifica del tipo è complessa, è possibile racchiuderla tra parentesi per forzare l'ordine di associazione.  
  
 *initializer*  
 Fornisce un valore per l'oggetto inizializzato.  Gli inizializzatori non possono essere specificati per le matrici.  L'operatore **new** creerà matrici di oggetti solo se la classe dispone di un costruttore predefinito.  
  
## Esempio  
 Nell'esempio di codice che segue vengono allocati una matrice di caratteri e un oggetto della classe `CName`, quindi vengono successivamente liberati.  
  
```  
// expre_new_Operator.cpp  
// compile with: /EHsc  
#include <string.h>  
  
class CName {  
public:  
   enum {  
      sizeOfBuffer = 256  
   };  
  
   char m_szFirst[sizeOfBuffer];  
   char m_szLast[sizeOfBuffer];  
  
public:  
   void SetName(char* pszFirst, char* pszLast) {  
     strcpy_s(m_szFirst, sizeOfBuffer, pszFirst);  
     strcpy_s(m_szLast, sizeOfBuffer, pszLast);  
   }  
  
};  
  
int main() {  
   // Allocate memory for the array  
   char* pCharArray = new char[CName::sizeOfBuffer];  
   strcpy_s(pCharArray, CName::sizeOfBuffer, "Array of characters");  
  
   // Deallocate memory for the array  
   delete [] pCharArray;             
   pCharArray = NULL;  
  
   // Allocate memory for the object  
   CName* pName = new CName;  
   pName->SetName("Firstname", "Lastname");  
  
   // Deallocate memory for the object  
   delete pName;  
   pName = NULL;  
}  
```  
  
## Esempio  
 Se si usa il nuovo form di posizione dell'operatore **new**, il form con gli argomenti oltre alla dimensione dell'allocazione, il compilatore non supporta un form di posizione dell'operatore **delete** se il costruttore genera un'eccezione.  Ad esempio:  
  
```  
// expre_new_Operator2.cpp  
// C2660 expected  
class A {  
public:  
   A(int) { throw "Fail!"; }  
};  
void F(void) {  
   try {  
      // heap memory pointed to by pa1 will be deallocated  
      // by calling ::operator delete(void*).  
      A* pa1 = new A(10);  
   } catch (...) {  
   }  
   try {  
      // This will call ::operator new(size_t, char*, int).  
      // When A::A(int) does a throw, we should call  
      // ::operator delete(void*, char*, int) to deallocate  
      // the memory pointed to by pa2.  Since  
      // ::operator delete(void*, char*, int) has not been implemented,  
      // memory will be leaked when the deallocation cannot occur.  
  
      A* pa2 = new(__FILE__, __LINE__) A(20);  
   } catch (...) {  
   }  
}  
  
int main() {  
   A a;  
}  
```  
  
## Inizializzazione di oggetti allocati con new  
 Un campo *initializer* facoltativo è incluso nella grammatica dell'operatore **new**.  In questo modo i nuovi oggetti possono essere inizializzati con i costruttori definiti dall'utente.  Per altre informazioni su come viene eseguita l'inizializzazione, vedere [Inizializzatori](../cpp/initializers.md).  Nell'esempio seguente viene illustrato come usare un'espressione di inizializzazione con l'operatore **new**:  
  
```  
// expre_Initializing_Objects_Allocated_with_new.cpp  
class Acct  
{  
public:  
    // Define default constructor and a constructor that accepts  
    //  an initial balance.  
    Acct() { balance = 0.0; }  
    Acct( double init_balance ) { balance = init_balance; }  
private:  
    double balance;  
};  
  
int main()  
{  
    Acct *CheckingAcct = new Acct;  
    Acct *SavingsAcct = new Acct ( 34.98 );  
    double *HowMuch = new double ( 43.0 );  
    // ...  
}  
```  
  
 In questo esempio, l'oggetto `CheckingAcct` viene allocato usando l'operatore **new**, ma non viene specificata alcuna inizializzazione predefinita.  Viene pertanto chiamato il costruttore predefinito della classe `Acct()`.  L'oggetto `SavingsAcct` viene quindi allocato nello stesso modo, con l'eccezione che viene inizializzato in modo esplicito su 34,98.  Poiché 34,98 è di tipo **double**, viene chiamato il costruttore che accetta un argomento di tale tipo per gestire l'inizializzazione.  Infine, il tipo nonclass `HowMuch` viene inizializzato su 43,0.  
  
 Se un oggetto è di un tipo di classe e tale classe dispone di costruttori \(come nell'esempio precedente\), l'oggetto può essere inizializzato dall'operatore **new** solo se si verifica una delle seguenti condizioni:  
  
-   Gli argomenti forniti nell'inizializzatore concordano con quelli di un costruttore.  
  
-   La classe dispone di un costruttore predefinito \(un costruttore che può essere chiamato senza argomenti\).  
  
 Il controllo di accesso e il controllo dell'ambiguità vengono eseguiti su `operator new` e sui costruttori in base alle regole definite in [Ambiguità](http://msdn.microsoft.com/it-it/0b399cab-40a7-4e79-9278-05f40139a0e1) e [Inizializzazione mediante le funzioni membro speciali](http://msdn.microsoft.com/it-it/82223d73-64cb-4923-b678-78f9568ff3ca).  
  
 Durante l'assegnazione alle matrici mediante l'operatore **new** non può essere eseguita alcuna inizializzazione per elemento esplicita; viene chiamato solo il costruttore predefinito, se presente.  Per altre informazioni, vedere [Argomenti predefiniti](../cpp/default-arguments.md).  
  
 Se l'allocazione di memoria ha esito negativo \(`operator new` restituisce un valore 0\), non viene eseguita alcuna inizializzazione.  In questo modo viene garantita la protezione contro i tentativi di inizializzare dati inesistenti.  
  
 Come nel caso delle chiamate di funzione, l'ordine in cui le espressioni vengono valutate non è definito.  Non bisogna inoltre fare affidamento sul fatto che queste espressioni vengano completamente valutate prima che venga eseguita l'allocazione della memoria.  Se l'allocazione della memoria ha esito negativo e l'operatore **new** restituisce zero, alcune espressioni nell'inizializzatore non possono essere completamente valutate.  
  
## Durata di oggetti allocati con new  
 Gli oggetti allocati mediante l'operatore **new** non vengono eliminati quando non ci si trova nell'ambito in cui sono definiti.  Poiché l'operatore **new** restituisce un puntatore agli oggetti che alloca, il programma deve definire un puntatore con ambito appropriato per accedere a tali oggetti.  Ad esempio:  
  
```  
// expre_Lifetime_of_Objects_Allocated_with_new.cpp  
// C2541 expected  
int main()  
{  
    // Use new operator to allocate an array of 20 characters.  
    char *AnArray = new char[20];  
  
    for( int i = 0; i < 20; ++i )  
    {  
        // On the first iteration of the loop, allocate  
        //  another array of 20 characters.  
        if( i == 0 )  
        {  
            char *AnotherArray = new char[20];  
        }  
    }  
  
    delete [] AnotherArray; // Error: pointer out of scope.  
    delete [] AnArray;      // OK: pointer still in scope.  
}  
```  
  
 Una volta che il puntatore `AnotherArray` esce dall'ambito \(nell'esempio\), l'oggetto non può più essere eliminato.  
  
## Funzionamento di new  
 L'elemento *allocation\-expression*, che contiene l'operatore **new**, effettua tre operazioni:  
  
-   Individua e riserva uno spazio di archiviazione per l'oggetto o gli oggetti da allocare.  Una volta completata questa fase, la quantità corretta di spazio di archiviazione viene allocata, ma non è ancora un oggetto.  
  
-   Inizializza l'oggetto\/gli oggetti.  Una volta che l'inizializzazione è stata completata, vi sono informazioni sufficienti affinché l'archiviazione allocata sia un oggetto.  
  
-   Restituisce un puntatore all'oggetto o agli oggetti di un tipo di puntatore derivato da *new\-type\-name* o da *type\-name*.  Il programma usa questo puntatore per accedere all'oggetto appena allocato.  
  
 L'operatore **new** richiama la funzione `operator new`.  Per le matrici di qualsiasi tipo e per gli oggetti che non appartengono a tipi **class**, `struct` o **union**, una funzione globale, **::operator new** viene chiamata per allocare lo spazio di archiviazione.  Gli oggetti di tipo di classe possono definire la propria funzione membro statico `operator new` in base alle classi.  
  
 Quando il compilatore rileva l'operatore **new** per allocare un oggetto di tipo `type`, genera una chiamata a `type`**::operator new\( sizeof\(** `type` **\) \)** oppure, se non vi è nessun `operator new` definito dall'utente, **::operator new\( sizeof\(** `type` **\) \)**.  Di conseguenza, l'operatore **new** è in grado di allocare la quantità di memoria corretta per l'oggetto.  
  
> [!NOTE]
>  L'argomento a `operator new` è di tipo **size\_t**.  Questo tipo è definito in DIRECT.H, MALLOC.H, MEMORY.H, SEARCH.H, STDDEF.H, STDIO.H, STDLIB.H, STRING.H e TIME.H.  
  
 Un'opzione nella grammatica consente la specifica di *placement* \(vedere la grammatica per [Operatore new](../cpp/new-operator-cpp.md)\).  Il parametro *placement* può essere usato solo per le implementazioni definite dall'utente `operator new`; consente di passare informazioni aggiuntive a `operator new`.  Un'espressione con un campo *placement* come `T *TObject = new ( 0x0040 ) T;` viene convertita in `T *TObject = T::operator new( sizeof( T ), 0x0040 );` se la classe T dispone dell'operatore membro new, in caso contrario in `T *TObject = ::operator new( sizeof( T ), 0x0040 );`.  
  
 Lo scopo originale del campo *placement* era di consentire agli oggetti hardware dipendenti di essere allocati in indirizzi specificati dall'utente.  
  
> [!NOTE]
>  Sebbene nell'esempio precedente venga illustrato un solo argomento nel campo *placement*, non vi è alcuna restrizione sul numero di argomenti aggiuntivi che è possibile passare a `operator new` in questo modo.  
  
 Anche se è stato definito `operator new` per un tipo di classe, l'operatore globale può essere usato tramite il formato dell'esempio seguente:  
  
```  
T *TObject =::new TObject;  
```  
  
 Con l'operatore di risoluzione dell'ambito \(`::`\) si impone l'uso dell'operatore globale **new**.  
  
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Funzione operator new](../misc/operator-new-function.md)