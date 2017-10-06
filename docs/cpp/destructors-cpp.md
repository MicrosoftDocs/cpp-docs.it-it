---
title: Distruttori (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- objects [C++], destroying
- Visual C++, destructors
- destroying objects, destructors
- ~ operator [C++], specifying destructors
- destructors, about destructors
- destructors, C++
ms.assetid: afa859b0-f3bc-4c4d-b250-c68b335b6004
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 043143cc0a0a200f83642180b59b9576fefc4975
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="destructors-c"></a>Distruttori (C++)
Un distruttore è una funzione membro che viene richiamata automaticamente quando l'oggetto esce dall'ambito o viene eliminato in modo esplicito da una chiamata a `delete`. Un distruttore è lo stesso nome di classe, preceduto da una tilde (`~`). Ad esempio, il distruttore per la classe `String` viene dichiarato con `~String()`. Se non si definisce un distruttore, il compilatore fornirà un valore predefinito. Per molte classi di ciò è sufficiente. È necessario definire un distruttore personalizzato quando la classe archivia l'handle di risorse di sistema che devono essere rilasciate o puntatori che possiedono la memoria facciano riferimento.

Si consideri la dichiarazione seguente di una classe `String`:  
  
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
  
## <a name="delcaring-destructors"></a>Dichiarazione di distruttori  
 I distruttori sono funzioni con lo stesso nome della classe ma preceduti da un carattere tilde (`~`).  
  
 Diverse regole controllano la dichiarazione di distruttori. I distruttori:  
  
-   Non accettano argomenti.  
  
-   Restituisce il valore (o `void`).  
  
-   Non può essere dichiarato come **const**, `volatile`, o **statico**. Tuttavia, può essere richiamati per l'eliminazione di oggetti dichiarati come **const**, `volatile`, o **statico**.  
  
-   Può essere dichiarato come **virtuale**. Usando i distruttori virtuali, è possibile eliminare definitivamente gli oggetti senza conoscerne il tipo; il distruttore corretto per l'oggetto viene richiamato usando il meccanismo di funzione virtuale. Si noti che i distruttori possono essere dichiarati come funzioni virtuali pure per classi astratte.  
  
## <a name="using-destructors"></a>Uso di distruttori  
 I distruttori vengono chiamati quando si verifica uno degli eventi seguenti:  

-   Un oggetto (automatico) locale con ambito del blocco diventa esterno all'ambito.  

-   Un oggetto allocato con il **nuova** operatore viene deallocato in modo esplicito utilizzando **eliminare**.   
  
-   La durata di un oggetto temporaneo termina.  
  
-   Un programma termina e gli oggetti globali o statici sono presenti.  
  
-   Il distruttore viene chiamato in modo esplicito usando il nome completo della funzione distruttore.
  
 I distruttori possono chiamare liberamente le funzioni membro di classe e accedere ai dati membro di classe.
  
 Esistono due restrizioni relative all'utilizzo dei distruttori:
 - non è possibile accettare l'indirizzo
-  le classi derivate non ereditano il distruttore della classe di base.
  
## <a name="order-of-destruction"></a>Ordine di distruzione  
 Quando un oggetto esce dall'ambito o viene eliminato, la sequenza di eventi nella relativa distruzione completa è la seguente:  
  
1.  Il distruttore della classe viene chiamato e il corpo della funzione distruttore viene eseguito.  
  
2.  I distruttori per gli oggetti membri non statici vengono chiamati in ordine inverso in cui appaiono nella dichiarazione di classe. Elenco di inizializzazione dei membri facoltativo usato nella costruzione di tali membri non influisce sull'ordine di costruzione o distruzione.   
  
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
  
### <a name="virtual-base-classes"></a>Classi di base virtuali  
 I distruttori delle classi base virtuali vengono chiamati in ordine inverso, rispetto a come appaiono in un grafico aciclico diretto (prima quelli che si trovano in profondità, da sinistra a destra, attraversamento post-ordine). La figura seguente rappresenta un grafico di ereditarietà.  
  
 ![Rappresentazione grafica dell'ereditarietà che mostra classi base virtuali](../cpp/media/vc392j1.gif "vc392J1")  
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
  
2.  Eseguire attraversamenti verso sinistra, fino a che non siano stati visti tutti i nodi. Annotare il nome del nodo corrente.  
  
3.  Rivedere il nodo precedente (in basso a destra) per determinare se il nodo memorizzato è una classe base virtuale.  
  
4.  Se il nodo memorizzato è una classe base virtuale, analizzare l'elenco per verificare se sia già stata inserita. Se non è una classe base virtuale, ignorarlo.  
  
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
  
 Questo processo genera un elenco ordinato di voci univoche. Nessun nome di classe viene visualizzato due volte. Una volta costruito l'elenco, viene esaminato in ordine inverso, quindi viene chiamato il distruttore per ogni classe presente nell'elenco, dall'ultima alla prima.  
  
 L'ordine di costruzione o di distruzione è particolarmente importante quando i costruttori o i distruttori di una classe si basano sul presupposto che l'altro componente venga creato prima o persista più a lungo. Ad esempio, potrebbe accadere che il distruttore di `A` (nella figura riportata in precedenza) si basi sul presupposto che `B` sia ancora presente, quando il codice viene eseguito, o viceversa.  
  
 Tali interdipendenze tra le classi in un grafico di ereditarietà sono di per sé rischiose, perché le classi derivate in seguito possono modificare la nozione di percorso più a sinistra, alterando, in questo modo, l'ordine di costruzione e distruzione.  
  
### <a name="nonvirtual-base-classes"></a>Classi base non virtuali  
 I distruttori delle classi base non virtuali vengono chiamati in ordine inverso rispetto all'ordine di dichiarazione dei nomi delle classi base. Si consideri la seguente dichiarazione di classe:  
  
```  
class MultInherit : public Base1, public Base2  
...  
```  
  
 Nell'esempio precedente, il distruttore di `Base2` viene chiamato prima del distruttore di `Base1`.  
  
## <a name="explicit-destructor-calls"></a>Chiamate del distruttore esplicite  
 La chiamata di un distruttore in modo esplicito è raramente necessaria. Tuttavia, può essere utile eseguire la pulizia di oggetti inseriti in corrispondenza di indirizzi assoluti. Questi oggetti vengono comunemente allocati usando definito dall'utente **nuova** operatore che accetta un argomento di posizione. Il **eliminare** operatore non può deallocare tale memoria perché non viene allocata dall'archivio libero (per ulteriori informazioni, vedere [nuovo ed eliminare operatori](../cpp/new-and-delete-operators.md)). Una chiamata al distruttore è tuttavia in grado di eseguire una pulizia appropriata. Per chiamare in modo esplicito il distruttore di un oggetto, `s`, di classe `String`, usare una delle seguenti istruzioni:  
  
```  
s.String::~String();     // Nonvirtual call  
ps->String::~String();   // Nonvirtual call  
  
s.~String();       // Virtual call  
ps->~String();     // Virtual call  
```  
  
 La notazione per le chiamate esplicite ai distruttori, illustrata nel passaggio precedente, può essere usata indipendentemente dal fatto che il tipo definisca un distruttore. Ciò consente di effettuare tali chiamate esplicite senza sapere se per tale tipo venga definito un distruttore. Una chiamata esplicita a un distruttore in cui non viene definito alcun distruttore non produce alcun effetto.  

