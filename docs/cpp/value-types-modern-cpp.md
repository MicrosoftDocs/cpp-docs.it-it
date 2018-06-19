---
title: Valore di tipi (C++ moderno) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: f63bb62c-60da-40d5-ac14-4366608fe260
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e7e49c97bca86b8d2debde2f5b132f7dde16998e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32423418"
---
# <a name="value-types-modern-c"></a>Tipi di valore (C++ moderno)
Le classi C++ sono tipi di valore predefinito. In questo argomento viene fornita una panoramica introduttiva dei tipi di valore e dei problemi relativi all'utilizzo.  
  
## <a name="value-vs-reference-types"></a>Valore e tipi di riferimento  
 Come già indicato, le classi C++ sono tipi di valore predefinito. Possono essere specificate come tipi di riferimento, che consentono il comportamento polimorfico supportare la programmazione orientata a. Tipi di valore a volte vengono visualizzati dalla prospettiva di controllo di layout e della memoria, mentre i tipi di riferimento sulle classi di base e funzioni virtuali per scopi polimorfici. Per impostazione predefinita, i tipi di valore sono copiabili, ovvero non esiste sempre un costruttore di copia e un operatore di assegnazione di copia. Per i tipi di riferimento, si rendono la classe non copiabile (disattivare il costruttore di copia e l'operatore di assegnazione di copia) e utilizzare un distruttore virtuale, che supporta il polimorfismo desiderato. Tipi di valore riguardano anche il contenuto, che, quando vengono copiati, sempre forniscono due valori indipendenti che possono essere modificati separatamente. Tipi di riferimento sono sull'identità - è il tipo di oggetto? Per questo motivo, "tipi di riferimento" definiti anche come "tipi polimorfici".  
  
 Se si vuole un tipo di riferimento simile (classe di base, funzioni virtuali), è necessario disabilitare in modo esplicito la copia, come illustrato nella `MyRefType` classe nel codice seguente.  
  
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
  
 Compilazione del codice precedente restituirà l'errore seguente:  
  
```Output  
test.cpp(15) : error C2248: 'MyRefType::operator =' : cannot access private member declared in class 'MyRefType'  
        meow.cpp(5) : see declaration of 'MyRefType::operator ='  
        meow.cpp(3) : see declaration of 'MyRefType'  
  
```  
  
## <a name="value-types-and-move-efficiency"></a>I tipi di valore e spostare l'efficienza  
 Copia allocazione sovraccarico viene evitato a causa di nuove ottimizzazioni di copia. Ad esempio, quando si inserisce una stringa all'interno di un vettore di stringhe, non vi sarà alcun overhead di riallocazione di copia, solo un move - anche se ciò comporta un aumento del vettore di se stesso. Questo vale anche per altre operazioni, ad esempio eseguire un'operazione di aggiunta su due oggetti di dimensioni molto grandi. La procedura per attivare queste ottimizzazioni operazione valore? In alcuni compilatori C++, il compilatore abiliterà questo automaticamente in modo implicito, proprio come i costruttori di copia possono essere generati automaticamente dal compilatore. Tuttavia, in Visual C++, la classe dovrà "opt-in" per spostare i costruttori e assegnazione dichiarandola nella definizione della classe. Questa operazione viene eseguita tramite la doppia e commerciale (& &) dichiarazioni e il costruttore di spostamento definizione di funzione e i metodi di assegnazione spostamento di riferimento rvalue nel membro appropriato.  È anche necessario inserire il codice corretto per "rubare descritto il" dell'oggetto di origine.  
  
 Come decidere se è necessario spostare abilitato? Se si conosce già, che è necessario copiare costruzione abilitata, si potrebbe essere necessario spostare abilitato se può essere più economica rispetto a una copia completa. Tuttavia, se si conosce, che è necessario spostare il supporto, non significa necessariamente che si desidera copia abilitato. In questo caso quest'ultimo deve essere chiamato "tipo di solo spostamento". Un esempio già nella libreria standard è `unique_ptr`. Si ricordi, il vecchio `auto_ptr` è deprecata ed è stato sostituito da `unique_ptr` esattamente a causa della mancanza di supporto di semantica di spostamento nella versione precedente di C++.  
  
 Utilizzando la semantica di spostamento, è possibile dal valore restituito o insert-in-middle. Spostamento è ottimizzazione delle operazioni di copia. È necessario per l'allocazione di heap come soluzione alternativa. Si consideri lo pseudocodice seguente:  
  
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
  
### <a name="enabling-move-for-appropriate-value-types"></a>Abilitazione di spostamento per i tipi di valore appropriato  
 Per una classe di valore simili in cui spostare può essere più economica rispetto a una copia completa, consentono la costruzione di spostamento e l'assegnazione per una maggiore efficienza di spostamento. Si consideri lo pseudocodice seguente:  
  
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
  
 Se si abilita la costruzione/assegnazione di copia, abilitare la costruzione/assegnazione di spostamento se può essere più economica rispetto a una copia completa.  
  
 Alcuni *non valore* tipi sono di solo spostamento, ad esempio quando non è possibile clonare una risorsa, solo trasferire la proprietà. Esempio: `unique_ptr`.  
  
## <a name="section"></a>Sezione  
 Content  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi C++](../cpp/cpp-type-system-modern-cpp.md)   
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)