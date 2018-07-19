---
title: Alias e typedef (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- typedef_cpp
dev_langs:
- C++
ms.assetid: af1c24d2-4bfd-408a-acfc-482e264232f5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cff0103a9debe63def6dbbcf7e3730a8e09dcbc2
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943491"
---
# <a name="aliases-and-typedefs-c"></a>Alias e typedef (C++)
È possibile usare un *dichiarazione di alias* per dichiarare un nome da utilizzare come un sinonimo per un tipo dichiarato in precedenza. (Questo meccanismo è detta anche informalmente una *alias del tipo*). È anche possibile usare questo meccanismo per creare un *modello di alias*, che può essere particolarmente utile per gli allocatori personalizzati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
using identifier = type;  
```  
  
## <a name="remarks"></a>Note  
 `identifier`  
 Nome dell'alias.  
  
 `type`  
 Identificatore di tipo per il quale si crea un alias.  
  
 Un alias non introduce un nuovo tipo e non può modificare il significato di un nome di tipo esistente.  
  
 La forma più semplice di un alias è equivalente per la **typedef** meccanismo di c++03:  
  
```cpp  
// C++11  
using counter = long;  
  
// C++03 equivalent:  
// typedef long counter;  
```  
  
 Entrambi consentono la creazione delle variabili di tipo contatore. Un'operazione particolarmente utile è un alias di tipo come questo per `std::ios_base::fmtflags`:  
  
```cpp  
// C++11  
using fmtfl = std::ios_base::fmtflags;  
  
// C++03 equivalent:  
// typedef std::ios_base::fmtflags fmtfl;  
  
fmtfl fl_orig = std::cout.flags();  
fmtfl fl_hex = (fl_orig & ~std::cout.basefield) | std::cout.showbase | std::cout.hex;  
// ...  
std::cout.flags(fl_hex);  
```  
  
 Anche gli alias di lavorare con i puntatori a funzione, ma sono molto più leggibili rispetto a equivalente typedef:  
  
```cpp  
// C++11  
using func = void(*)(int);  
  
// C++03 equivalent:  
// typedef void (*func)(int);  
  
// func can be assigned to a function pointer value  
void actual_function(int arg) { /* some code */ }  
func fptr = &actual_function;  
  
```  
  
 Una limitazione del **typedef** meccanismo è che non funziona con i modelli. Tuttavia, la sintassi di alias di tipo in C++11 consente la creazione di modelli di alias:  
  
```cpp  
template<typename T> using ptr = T*;   
  
// the name 'ptr<T>' is now an alias for pointer to T  
ptr<int> ptr_int;  
  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come usare un modello di alias con un allocatore personalizzato, in questo caso un tipo intero vettoriale. È possibile sostituire qualsiasi tipo di **int** per creare un alias conveniente per nascondere il parametro complesso sono elencati nel codice funzionale principale. Usando l'allocatore personalizzato nel codice è possibile migliorare la leggibilità e ridurre il rischio di introdurre bug causati da errori di battitura.  
  
```cpp  
#include <stdlib.h>  
#include <new>  
  
template <typename T> struct MyAlloc {  
    typedef T value_type;  
  
    MyAlloc() { }  
    template <typename U> MyAlloc(const MyAlloc<U>&) { }  
  
    bool operator==(const MyAlloc&) const { return true; }  
    bool operator!=(const MyAlloc&) const { return false; }  
  
    T * allocate(const size_t n) const {  
        if (n == 0) {  
            return nullptr;  
        }  
  
        if (n > static_cast<size_t>(-1) / sizeof(T)) {  
            throw std::bad_array_new_length();  
        }  
  
        void * const pv = malloc(n * sizeof(T));  
  
        if (!pv) {  
            throw std::bad_alloc();  
        }  
  
        return static_cast<T *>(pv);  
    }  
  
    void deallocate(T * const p, size_t) const {  
        free(p);  
    }  
};  
  
#include <vector>  
using MyIntVector = std::vector<int, MyAlloc<int>>;  
  
#include <iostream>  
  
int main ()   
{  
    MyIntVector foov = { 1701, 1764, 1664 };  
  
    for (auto a: foov) std::cout << a << " ";  
    std::cout << "\n";  
  
    return 0;  
}  
```  
  
```Output  
1701 1764 1664  
```  
  
## <a name="typedefs"></a>Definizioni typedef  
 Oggetto **typedef** dichiarazione introduce un nome che, nel relativo ambito, diventa sinonimo per il tipo specificato dalle *dichiarazione del tipo* parte della dichiarazione.  
  
 È possibile usare le dichiarazioni typedef per costruire nomi più brevi o più significativi per i tipi già definiti dal linguaggio o per i tipi dichiarati. I nomi di typedef consentono di incapsulare dettagli di implementazione che possono cambiare.  
  
 In contrasto con la **classe**, **struct**, **union**, e **enum** dichiarazioni di **typedef** le dichiarazioni di non introducono nuovi tipi: introducono nuovi nomi per i tipi esistenti.  
  
 I nomi dichiarati usando **typedef** occupano lo stesso spazio dei nomi degli altri identificatori (ad eccezione delle etichette di istruzione). Tali nomi pertanto non possono usare lo stesso identificatore di un nome dichiarato in precedenza, tranne che in una dichiarazione di tipo classe. Si consideri l'esempio seguente:  
  
```cpp 
// typedef_names1.cpp  
// C2377 expected  
typedef unsigned long UL;   // Declare a typedef name, UL.  
int UL;                     // C2377: redefined.  
```  
  
 Le regole di visualizzazione del nome che si riferiscono ad altri identificatori controllano anche la visibilità dei nomi dichiarati usando **typedef**. Di conseguenza, l'esempio seguente è valido in C++.  
  
```cpp 
// typedef_names2.cpp  
typedef unsigned long UL;   // Declare a typedef name, UL  
int main()  
{  
   unsigned int UL;   // Redeclaration hides typedef name  
}  
  
// typedef UL back in scope  
```  
 
  
```cpp 
// typedef_specifier1.cpp  
typedef char FlagType;  
  
int main()  
{  
}  
  
void myproc( int )  
{  
    int FlagType;  
}  
```  
  
 Quando si dichiara un identificatore in ambito locale dello stesso nome di un typedef o quando si dichiara un membro di una struttura o un'unione nello stesso ambito o in un ambito interno, l'identificatore di tipo deve essere specificato. Ad esempio:  
  
```cpp 
typedef char FlagType;  
const FlagType x;  
```  
  
 Per riutilizzare il nome `FlagType` per un identificatore, un membro della struttura o un membro dell'unione, deve essere fornito il tipo:  
  
```cpp 
const int FlagType;  // Type specifier required  
```  
  
 Non è sufficiente dire  
  
```cpp 
const FlagType;      // Incomplete specification  
```  
  
 perché `FlagType` viene usato per far parte del tipo e non un identificatore che viene ridichiarato. Questa dichiarazione si suppone essere una dichiarazione non consentita quale  
  
```cpp 
int;  // Illegal declaration   
```  
  
 È possibile dichiarare qualsiasi tipo con typedef, incluso il puntatore, la funzione e i tipi di matrice. È possibile dichiarare un nome di typedef per un puntatore a un tipo di unione o di struttura prima di definire il tipo di struttura o di unione, purché la definizione abbia la stessa visibilità della dichiarazione.  
  
### <a name="examples"></a>Esempi  
 Un uso del **typedef** dichiarazioni consiste nel rendere le dichiarazioni più uniformi e compatte. Ad esempio:  
  
```cpp  
typedef char CHAR;          // Character type.  
typedef CHAR * PSTR;        // Pointer to a string (char *).  
PSTR strchr( PSTR source, CHAR target );  
typedef unsigned long ulong;  
ulong ul;     // Equivalent to "unsigned long ul;"  
```  
  
 Per utilizzare **typedef** per specificare i tipi fondamentali e derivati nella stessa dichiarazione, è possibile separare i dichiaratori con virgole. Ad esempio:  
  
```cpp 
typedef char CHAR, *PSTR;  
```  
  
 L'esempio seguente fornisce il tipo `DRAWF` per una funzione che non restituisce alcun valore e accetta due argomenti int:  
  
```cpp 
typedef void DRAWF( int, int );  
```  
  
 Dopo il codice precedente **typedef** istruzione, la dichiarazione  
  
```cpp 
DRAWF box;   
```  
  
 sarà equivalente alla dichiarazione  
  
```cpp 
void box( int, int );  
```  
  
 **typedef** viene spesso combinata con **struct** per dichiarare e denominare i tipi definiti dall'utente:  
  
```cpp  
// typedef_specifier2.cpp  
#include <stdio.h>  
  
typedef struct mystructtag  
{  
    int   i;  
    double f;  
} mystruct;  
  
int main()  
{  
    mystruct ms;  
    ms.i = 10;  
    ms.f = 0.99;  
    printf_s("%d   %f\n", ms.i, ms.f);  
}  
``` 
  
```Output  
10   0.990000  
``` 
  
### <a name="re-declaration-of-typedefs"></a>Ridichiarazione di typedef  
 Il **typedef** dichiarazione può essere usata per ridichiarare lo stesso nome per fare riferimento allo stesso tipo. Ad esempio:  
  
```cpp  
// FILE1.H  
typedef char CHAR;  
  
// FILE2.H  
typedef char CHAR;  
  
// PROG.CPP  
#include "file1.h"  
#include "file2.h"   // OK  
``` 
  
 Il programma *PROG. CPP* include due file di intestazione, entrambi contenenti **typedef** dichiarazioni per il nome `CHAR`. Se entrambe le dichiarazioni si riferiscono allo stesso tipo, tale ridichiarazione è accettabile.  
  
 Oggetto **typedef** non è possibile ridefinire un nome che in precedenza è stato dichiarato come un tipo diverso. Pertanto, se *FILE2. H* contiene  
  
```cpp  
// FILE2.H  
typedef int CHAR;     // Error  
``` 
  
 il compilatore genera un errore a causa dei tentativi di ridichiarare il nome `CHAR` per fare riferimento a un tipo diverso. Questo consente di estendere i costrutti come:  
  
```cpp  
typedef char CHAR;  
typedef CHAR CHAR;      // OK: redeclared as same type  
  
typedef union REGS      // OK: name REGS redeclared  
{                       //  by typedef name with the  
    struct wordregs x;  //  same meaning.  
    struct byteregs h;  
} REGS;  
``` 
  
### <a name="typedefs-in-c-vs-c"></a>Confronto tra typedef in C++ e C  
 Usare il **typedef** identificatore con tipi di classe è ampiamente supportato a causa della procedura ANSI C di dichiarare strutture senza nome in **(typedef)** dichiarazioni. Ad esempio, molti programmatori C usano le operazioni seguenti:  
  
```cpp  
// typedef_with_class_types1.cpp  
// compile with: /c  
typedef struct {   // Declare an unnamed structure and give it the  
                   // typedef name POINT.  
   unsigned x;  
   unsigned y;  
} POINT;  
``` 
  
 Il vantaggio di questo tipo di dichiarazione è che consente dichiarazioni quali:  
  
```cpp  
POINT ptOrigin;  
``` 
  
 invece di:  
  
```cpp 
struct point_t ptOrigin;  
```  
  
 In C++, la differenza tra **typedef** nomi e i tipi reali (dichiarati con la **classe**, **struct**, **unione**e **enum** parole chiave) è più distinta. Sebbene la procedura C di dichiarare una struttura senza nome in un **typedef** istruzione funziona comunque, fornisce gli stessi vantaggi, come avviene in C.  
  
```cpp  
// typedef_with_class_types2.cpp  
// compile with: /c /W1  
typedef struct {  
   int POINT();  
   unsigned x;  
   unsigned y;  
} POINT;  
```  
  
 Nell'esempio precedente viene dichiarata una classe denominata `POINT` usando la classe senza nome **typedef** sintassi. `POINT` viene considerato come un nome di classe; tuttavia, le restrizioni seguenti vengono applicate ai nomi introdotti nel modo seguente:  
  
-   Il nome (il sinonimo) non può comparire dopo una **classe**, **struct**, o **union** prefisso.  
  
-   Il nome non può essere usato come nome del distruttore o del costruttore all'interno di una dichiarazione di classe.  
  
 In breve, questa sintassi non fornisce alcun meccanismo per l'ereditarietà, la costruzione o la distruzione.  
