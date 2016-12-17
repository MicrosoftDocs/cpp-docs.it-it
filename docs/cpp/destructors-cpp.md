---
title: "Distruttori (C++) | Microsoft Docs"
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
  - "~ (operatore), specifica di distruttori"
  - "distruzione di oggetti, distruttori"
  - "distruttori, informazioni su distruttori"
  - "distruttori, C++"
  - "oggetti [C++], eliminazione"
  - "Visual C++, distruttori"
ms.assetid: afa859b0-f3bc-4c4d-b250-c68b335b6004
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Distruttori (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni distruttore sono l'opposto delle funzioni costruttore.  Vengono richiamate quando gli oggetti vengono eliminati \(rilasciati\).  Per definire una funzione come distruttore di classe, anteporre al nome della classe il carattere tilde \(`~`\).  Ad esempio, il distruttore per la classe `String` viene dichiarato con `~String()`.  
  
 In una compilazione \/clr, il distruttore ha un ruolo speciale nelle rilascio delle risorse gestite e delle risorse non gestite.  Per altre informazioni, vedere [Distruttori e finalizzatori in Visual C\+\+](../misc/destructors-and-finalizers-in-visual-cpp.md).  
  
 Il distruttore viene comunemente usato per eseguire una pulizia quando un oggetto non è più necessario.  Si consideri la dichiarazione seguente di una classe `String`:  
  
```  
// spec1_destructors.cpp  
#include <string.h>  
  
class String {  
public:  
   String( char *ch );  // Declare constructor  
   ~String();           //  and destructor.  
private:  
   char    *_text;  
   size_t  sizeOfText;  
};  
  
// Define the constructor.  
String::String( char *ch ) {  
   sizeOfText = strlen( ch ) + 1;  
  
   // Dynamically allocate the correct amount of memory.  
   _text = new char[ sizeOfText ];  
  
   // If the allocation succeeds, copy the initialization string.  
   if( _text )  
      strcpy_s( _text, sizeOfText, ch );  
}  
  
// Define the destructor.  
String::~String() {  
   // Deallocate the memory that was previously reserved  
   //  for this string.  
   if (_text)  
      delete[] _text;  
}  
  
int main() {  
   String str("The piper in the glen...");  
}  
```  
  
 Nell'esempio precedente, il distruttore `String::~String` usa l'operatore `delete` per liberare lo spazio allocato in modo dinamico per l'archiviazione di testo.  
  
## Dichiarazione di distruttori  
 I distruttori sono funzioni con lo stesso nome della classe ma preceduti da un carattere tilde \(`~`\).  
  
 Il primo formato della sintassi viene usato per i distruttori dichiarati o definiti all'interno della dichiarazione di classe; il secondo formato viene usato per i distruttori definiti all'esterno della dichiarazione di classe.  
  
 Diverse regole controllano la dichiarazione di distruttori.  I distruttori:  
  
-   Non accettano argomenti.  
  
-   Non possono specificare alcun tipo restituito \(incluso `void`\).  
  
-   Non possono restituire un valore usando l'istruzione `return`.  
  
-   Non possono essere dichiarati come **const**, `volatile` o **static**.  Tuttavia, possono essere richiamati per l'eliminazione di oggetti dichiarati come **const**, `volatile` o **static**.  
  
-   Possono essere dichiarati come **virtual**.  Usando i distruttori virtuali, è possibile eliminare gli oggetti senza conoscerne il tipo; il distruttore corretto per l'oggetto viene richiamato usando il meccanismo di funzione virtuale.  Si noti che i distruttori possono essere dichiarati come funzioni virtuali pure per classi astratte.  
  
## Uso di distruttori  
 I distruttori vengono chiamati quando si verifica uno degli eventi seguenti:  
  
-   Un oggetto allocato con l'operatore **new** viene deallocato in modo esplicito mediante l'operatore **delete**.  Quando gli oggetti vengono deallocati usando l'operatore **delete**, la memoria viene liberata per l'"oggetto più derivato" o l'oggetto che rappresenta un oggetto completo e non un oggetto secondario che rappresenta una classe base.  Il funzionamento della deallocazione dell'"oggetto più derivato" è garantito solo con i distruttori virtuali.  La deallocazione può non riuscire in situazioni di ereditarietà multipla in cui le informazioni sui tipi non corrispondono al tipo sottostante dell'oggetto effettivo.  
  
-   Un oggetto \(automatico\) locale con ambito blocco diventa esterno all'ambito.  
  
-   La durata di un oggetto temporaneo termina.  
  
-   Un programma termina e gli oggetti globali o statici sono presenti.  
  
-   Il distruttore viene chiamato in modo esplicito usando il nome completo della funzione distruttore.  Per altre informazioni, vedere la pagina relativa alle [chiamate esplicite ai distruttori](../misc/explicit-destructor-calls.md).  
  
 I casi descritti nell'elenco precedente assicurano che tutti gli oggetti possano essere eliminati con i metodi definiti dall'utente.  
  
 Se una classe base o un membro dati dispongono di un distruttore accessibile e se una classe derivata non dichiara un distruttore, il compilatore ne genera uno.  Questo distruttore generato dal compilatore chiama il distruttore della classe base e i distruttori per i membri del tipo derivato.  I distruttori predefiniti sono pubblici.  Per altre informazioni sull'accessibilità, vedere la pagina relativa agli [identificatori di accesso per le classi base](../misc/access-specifiers-for-base-classes.md).  
  
 I distruttori possono chiamare liberamente le funzioni membro di classe e accedere ai dati membro di classe.  Quando una funzione virtuale viene chiamata da un distruttore, la funzione chiamata è quella della classe attualmente in fase di eliminazione.  Per altre informazioni, vedere [Ordine di eliminazione](../misc/order-of-destruction.md).  
  
 Esistono due restrizioni relative all'utilizzo dei distruttori.  La prima restrizione è che non è possibile accettare l'indirizzo di un distruttore.  La seconda è che le classi derivate non ereditano i distruttori della relativa classe base.  Al contrario, come descritto in precedenza, tali classi eseguono sempre l'override dei distruttori della classe base.  
  
## Ordine di distruzione  
 Quando un oggetto esce dall'ambito o viene eliminato, la sequenza di eventi nella relativa distruzione completa è la seguente:  
  
1.  Il distruttore della classe viene chiamato e il corpo della funzione distruttore viene eseguito.  
  
2.  I distruttori per gli oggetti membri non statici vengono chiamati in ordine inverso in cui appaiono nella dichiarazione di classe.  L'elenco di inizializzazione dei membri facoltativo usato nella costruzione di tali membri non influisce sull'ordine di costruzione o distruzione.  \(Per altre informazioni sull'inizializzazione dei membri, vedere [Inizializzazione di basi e membri](http://msdn.microsoft.com/it-it/2f71377e-2b6b-49da-9a26-18e9b40226a1)\).  
  
3.  I distruttori per le classi base non virtuali vengono chiamati in ordine inverso di dichiarazione.  
  
4.  I distruttori per le classi base virtuali vengono chiamati in ordine inverso di dichiarazione.  
  
```  
// order_of_destruction.cpp  
#include <stdio.h>  
  
struct A1      { virtual ~A1() { printf("A1 dtor\n"); } };  
struct A2 : A1 { virtual ~A2() { printf("A2 dtor\n"); } };  
struct A3 : A2 { virtual ~A3() { printf("A3 dtor\n"); } };  
  
struct B1      { ~B1() { printf("B1 dtor\n"); } };  
struct B2 : B1 { ~B2() { printf("B2 dtor\n"); } };  
struct B3 : B2 { ~B3() { printf("B3 dtor\n"); } };  
  
int main() {  
   A1 * a = new A3;  
   delete a;  
   printf("\n");  
  
   B1 * b = new B3;  
   delete b;  
   printf("\n");  
  
   B3 * b2 = new B3;  
   delete b2;  
}  
  
Output: A3 dtor  
A2 dtor  
A1 dtor  
  
B1 dtor  
  
B3 dtor  
B2 dtor  
B1 dtor  
  
```  
  
### Classi di base virtuali  
 I distruttori delle classi base virtuali vengono chiamati in ordine inverso, rispetto a come appaiono in un grafico aciclico diretto \(prima quelli che si trovano in profondità, da sinistra a destra, attraversamento post\-ordine\).  La figura seguente rappresenta un grafico di ereditarietà.  
  
 ![Rappresentazione grafica dell'ereditarietà con classi di base virtuali](../cpp/media/vc392j1.png "vc392J1")  
Grafico dell'ereditarietà che mostra le classi di base virtuali  
  
 Di seguito vengono elencate le intestazioni di classe per le classi raffigurate nell'immagine.  
  
```  
class A  
class B  
class C : virtual public A, virtual public B  
class D : virtual public A, virtual public B  
class E : public C, public D, virtual public B  
```  
  
 Per determinare l'ordine di distruzione delle classi base virtuali di un oggetto di tipo `E`, il compilatore genera un elenco applicando l'algoritmo seguente:  
  
1.  Attraversare il grafico a sinistra, a partire dal punto più profondo nel grafico, in questo caso, `E`.  
  
2.  Eseguire attraversamenti verso sinistra, fino a che non siano stati visti tutti i nodi.  Annotare il nome del nodo corrente.  
  
3.  Rivedere il nodo precedente \(in basso a destra\) per determinare se il nodo memorizzato è una classe base virtuale.  
  
4.  Se il nodo memorizzato è una classe base virtuale, analizzare l'elenco per verificare se sia già stata inserita.  Se non è una classe base virtuale, ignorarlo.  
  
5.  Se il nodo memorizzato non è ancora nell'elenco, aggiungerlo alla fine dell'elenco.  
  
6.  Attraversare il grafico verso l'alto e lungo il successivo percorso a destra.  
  
7.  Andare al passaggio 2.  
  
8.  Quando viene esaurito l'ultimo percorso verso l'alto, annotare il nome del nodo corrente.  
  
9. Andare al passaggio 3.  
  
10. Continuare questo processo finché l'ultimo nodo non sia nuovamente il nodo corrente.  
  
 Di conseguenza, per la classe `E`, l'ordine di distruzione è:  
  
1.  Classe base non virtuale `E`.  
  
2.  Classe base non virtuale `D`.  
  
3.  Classe base non virtuale `C`.  
  
4.  Classe base virtuale `B`.  
  
5.  Classe base virtuale `A`.  
  
 Questo processo genera un elenco ordinato di voci univoche.  Nessun nome di classe viene visualizzato due volte.  Una volta costruito l'elenco, viene esaminato in ordine inverso, quindi viene chiamato il distruttore per ogni classe presente nell'elenco, dall'ultima alla prima.  
  
 L'ordine di costruzione o di distruzione è particolarmente importante quando i costruttori o i distruttori di una classe si basano sul presupposto che l'altro componente venga creato prima o persista più a lungo. Ad esempio, potrebbe accadere che il distruttore di `A` \(nella figura riportata in precedenza\) si basi sul presupposto che `B` sia ancora presente, quando il codice viene eseguito, o viceversa.  
  
 Tali interdipendenze tra le classi in un grafico di ereditarietà sono di per sé rischiose, perché le classi derivate in seguito possono modificare la nozione di percorso più a sinistra, alterando, in questo modo, l'ordine di costruzione e distruzione.  
  
### Classi base non virtuali  
 I distruttori delle classi base non virtuali vengono chiamati in ordine inverso rispetto all'ordine di dichiarazione dei nomi delle classi base.  Si consideri la seguente dichiarazione di classe:  
  
```  
class MultInherit : public Base1, public Base2  
...  
```  
  
 Nell'esempio precedente, il distruttore di `Base2` viene chiamato prima del distruttore di `Base1`.  
  
## Chiamate del distruttore esplicite  
 La chiamata di un distruttore in modo esplicito è raramente necessaria.  Tuttavia, può essere utile eseguire la pulizia di oggetti inseriti in corrispondenza di indirizzi assoluti.  Questi oggetti vengono comunemente allocati usando un operatore **new** definito dall'utente che accetta un argomento di posizione.  L'operatore **delete** non può deallocare tale memoria perché non viene allocata dall'archivio libero. Per altre informazioni, vedere [Gli operatori new e delete](../cpp/new-and-delete-operators.md).  Una chiamata al distruttore è tuttavia in grado di eseguire una pulizia appropriata.  Per chiamare in modo esplicito il distruttore di un oggetto, `s`, di classe `String`, usare una delle seguenti istruzioni:  
  
```  
s.String::~String();     // Nonvirtual call  
ps->String::~String();   // Nonvirtual call  
  
s.~String();       // Virtual call  
ps->~String();     // Virtual call  
```  
  
 La notazione per le chiamate esplicite ai distruttori, illustrata nel passaggio precedente, può essere usata indipendentemente dal fatto che il tipo definisca un distruttore.  Ciò consente di effettuare tali chiamate esplicite senza sapere se per tale tipo venga definito un distruttore.  Una chiamata esplicita a un distruttore in cui non viene definito alcun distruttore non produce alcun effetto.  
  
## Vedere anche  
 [Funzioni membro speciali](../misc/special-member-functions-cpp.md)