---
title: "Tipi di valore (C++ moderno) | Microsoft Docs"
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
ms.assetid: f63bb62c-60da-40d5-ac14-4366608fe260
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi di valore (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi C\+\+ sono per impostazione predefinita tipi di valore.  In questo argomento vengono forniti cenni preliminari su introduttivi i tipi di valore e problemi relativi al relativo utilizzo.  
  
## Valore o tipi di riferimento  
 Come dichiarato in precedenza, le classi C\+\+ sono per impostazione predefinita tipi di valore.  È possibile specificare quali tipi di riferimento, che consentono al comportamento polimorfico per supportare la programmazione orientata a oggetti.  I tipi di valore sono talvolta visualizzati dal punto di vista del controllo del layout e di memoria, mentre i tipi di riferimento sono illustrate le classi base e le funzioni virtuali per scopi polimorfici.  Per impostazione predefinita, i tipi di valore sono copiabile, che indica che non esiste sempre un costruttore di copia e un operatore di assegnazione di copia.  Per i tipi di riferimento, è possibile rendere la classe non copiabile \(disable il costruttore di copia e l'operatore di assegnazione di copia\) e si utilizza un distruttore virtuale, che supporta il polimorfismo desiderato.  I tipi di valore sono anche sul contenuto, che, quando vengono copiati, sempre forniscono due valori non modificabili separatamente.  I tipi di riferimento sono relative all'identità \- il tipo di oggetto è?  Per questo motivo, "i tipi di riferimento" vengono definite anche "tipi polimorfici".  
  
 Se si desidera effettivamente un tipo di riferimento \(classe di base, funzioni virtuali\), è necessario disabilitare in modo esplicito la copia, come illustrato nella classe di `MyRefType` nel codice seguente.  
  
```cpp  
  
// cl /EHsc /nologo /W4  
  
class MyRefType {  
private:  
    MyRefType & operator=(const MyRefType &);  
    MyRefType(const MyRefType &);  
public:  
    MyRefType () {}  
};  
  
int main()  
{  
    MyRefType Data1, Data2;  
    // ...  
    Data1 = Data2;  
}  
```  
  
 La compilazione del codice precedente genererà l'errore seguente:  
  
  **test.cpp \(15\): errore C2248: "MyRefType::operator \=": impossibile accedere al membro dichiarato private nelle classi MyRefType"**  
 **meow.cpp \(5\): vedere la dichiarazione di MyRefType::operator "\="**  
 **meow.cpp \(3\): vedere la dichiarazione "di MyRefType"**   
## Tipi di valore e efficienza di spostamento  
 Il sovraccarico di allocazione copy è consigliabile a causa delle nuove ottimizzazioni di copia.  Ad esempio, quando si inserisce una stringa in corso un vettore delle stringhe, non verrà sovraccarico di nuovo stanziamento copia, solo un movimento anche se restituisce uno sviluppo del vettore stesso.  Ciò si applica anche alle altre operazioni, ad esempio eseguendo un'operazione di addizione su due oggetti molto grandi.  Come si abilitano queste ottimizzazioni delle operazioni di valore?  In alcuni compilatori C\+\+, il compilatore attiva questo automaticamente in modo implicito, come i costruttori di copia può essere generato automaticamente dal compilatore.  Tuttavia, in Visual C\+\+, la classe dovrà scegliere "in" spostare l'assegnazione e costruttori dichiarandolo nella definizione di classe.  Questa operazione viene eseguita tramite il doppio riferimento rvalue e commerciale \(&&\) nelle dichiarazioni di funzione membro appropriate e la definizione di metodi del costruttore di spostamento e di assegnazione di spostamento.  È inoltre necessario inserire codice corretto "rubate le budella" dall'oggetto di origine.  
  
 Come stabilire se è necessario un movimento attivato?  Se già si è necessaria la costruzione abilitata, si copia è probabile che si move abilitato se può essere più conveniente di una copia completa.  Tuttavia, se si sa è necessario il supporto di spostamento, non significa necessariamente che si copia abilitata.  In questo caso indietro viene chiamato "un tipo di spostamento".  Un esempio è già nella libreria standard è `unique_ptr`.  Nota come rapida, `auto_ptr` precedente è deprecato ed è stato sostituito da `unique_ptr` con precisione a causa della mancanza di supporto della semantica di spostamento nella versione precedente di C\+\+.  
  
 Mediante la semantica di spostamento è possibile ritorno\-da\- valore o inserzione\-in\- medio.  L'operazione di spostamento viene un'ottimizzazione di copia.  Vi è alcuna necessità di allocazione heap come soluzione alternativa.  Si consideri il frammento di codice:  
  
```cpp  
  
#include <set>  
#include <vector>  
#include <string>  
using namespace std;  
  
//...  
set<widget> LoadHugeData() {  
    set<widget> ret;  
    // ... load data from disk and populate ret  
    return ret;  
}  
//...  
widgets = LoadHugeData();   // efficient, no deep copy  
  
vector<string> v = IfIHadAMillionStrings();  
v.insert( begin(v)+v.size()/2, "scott" );   // efficient, no deep copy-shuffle  
v.insert( begin(v)+v.size()/2, "Andrei" );  // (just 1M ptr/len assignments)  
//...  
HugeMatrix operator+(const HugeMatrix& , const HugeMatrix& );  
HugeMatrix operator+(const HugeMatrix& ,       HugeMatrix&&);  
HugeMatrix operator+(      HugeMatrix&&, const HugeMatrix& );  
HugeMatrix operator+(      HugeMatrix&&,       HugeMatrix&&);  
//...  
hm5 = hm1+hm2+hm3+hm4+hm5;   // efficient, no extra copies  
```  
  
### Abilitare spostamento per i tipi di valore appropriato  
 Per una classe del tipo di valore in cui lo spostamento può essere più conveniente di una copia completa, abilitare la costruzione di spostamento e assegnazione di spostamento per maggiore efficienza.  Si consideri il frammento di codice:  
  
```cpp  
  
#include <memory>  
#include <stdexcept>  
using namespace std;  
// ...  
class my_class {  
    unique_ptr<BigHugeData> data;  
public:  
    my_class( my_class&& other )   // move construction  
        : data( move( other.data ) ) { }  
    my_class& operator=( my_class&& other )   // move assignment  
    { data = move( other.data ); return *this; }  
    // ...  
    void method() {   // check (if appropriate)  
        if( !data )   
            throw std::runtime_error("RUNTIME ERROR: Insufficient resources!");  
    }  
};  
  
```  
  
 Se si abilita la costruzione o assegnazione di copia, anche abilitare la costruzione o assegnazione di spostamento se può essere più economica di una copia completa.  
  
 Alcuni tipi *di valore non* sono solo spostamento, ad esempio quando non è possibile usare una risorsa, solo proprietà di output.  Esempio: `unique_ptr`.  
  
## Sezione  
 Contenuto  
  
## Vedere anche  
 [Sistema di tipi C\+\+](../cpp/cpp-type-system-modern-cpp.md)   
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)