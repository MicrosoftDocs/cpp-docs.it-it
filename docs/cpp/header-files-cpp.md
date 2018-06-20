---
title: File di intestazione (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 04/20/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- header files [C++]
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b571cd2836e66ebef21898af27cf2a6d7082e0e5
ms.sourcegitcommit: d06966efce25c0e66286c8047726ffe743ea6be0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/19/2018
ms.locfileid: "36261067"
---
# <a name="header-files-c"></a>File di intestazione (C++)

I nomi degli elementi di programma, ad esempio variabili, funzioni, classi e così via devono essere dichiarati prima di poter essere usati. Ad esempio, non è semplicemente scrivere `x = 42` senza prima dichiarazione 'x'. 

```cpp
int x; // declaration
x = 42; // use x
```

 La dichiarazione indica al compilatore che è un **int**, un **doppie**, un **funzione**, un **classe** o un altro elemento.  Inoltre, ogni nome deve essere dichiarato (direttamente o indirettamente) in ogni file con estensione cpp in cui viene utilizzato. Quando si compila un programma, ogni file con estensione cpp viene compilato in modo indipendente in un'unità di compilazione. Il compilatore ha alcuna conoscenza di quali nomi vengono dichiarati in altre unità di compilazione. Ciò significa che se si definisce una classe o una funzione o variabile globale, è necessario fornire una dichiarazione di tale operazione in ogni file con estensione cpp aggiuntive che lo utilizza. Ogni dichiarazione di tale operazione deve essere identico in tutti i file. Un'inconsistenza leggera causerà errori o un comportamento imprevisto, quando il linker tenterà di unire tutte le unità di compilazione in un unico programma.

Per ridurre al minimo il rischio di errori, C++ ha adottato la convenzione di utilizzo *file di intestazione* per contenere le dichiarazioni. Rendere le dichiarazioni in un file di intestazione, quindi usare il #include (direttiva) in ogni file con estensione cpp o altri file di intestazione richiede la dichiarazione. Il #include consente di inserire una copia del file di intestazione direttamente nel file con estensione cpp prima della compilazione. 

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un modo comune per dichiarare una classe e quindi usarlo in un file di origine diversa. Si inizierà con il file di intestazione **my_class.h**. Contiene una definizione di classe, ma si noti che la definizione è incompleta. la funzione membro `do_something` non è definito:

```cpp
// my_class.h
namespace N
{
    class my_class
    {
    public:
        void do_something();
    };

}
```

Successivamente, creare un file di implementazione (in genere con un'estensione cpp o simile). Si sarà chiamare my_class.cpp il file e fornire una definizione per la dichiarazione di membro. Viene aggiunta un' `#include` direttiva per il file "my_class.h" per avere la dichiarazione my_class inserita a questo punto nel cpp file e si includono  **\<iostream >** per effettuare il pull nella dichiarazione per `std::cout`. Si noti che le virgolette vengono utilizzate per i file di intestazione nella stessa directory del file di origine e le parentesi angolari vengono utilizzate per le intestazioni della libreria standard. Inoltre, molte delle intestazioni della libreria standard non sono con estensione h o un'altra estensione di file.

Nel file di implementazione, è possibile usare facoltativamente un **utilizzando** istruzione per evitare di dover qualificare ogni indicazione di "my_class" o "cout" con "n:" o "std::".  Non è opportuno inserire **utilizzando** istruzioni nel file di intestazione.

```cpp
// my_class.cpp
#include "my_class.h" // header in local directory
#include <iostream> // header in standard library

using namespace N;
using namespace std;

void my_class::do_something()
{
    cout << "Doing something!" << endl;
}
```

A questo punto è possibile usare `my_class` in un altro file con estensione cpp. Abbiamo #include il file di intestazione in modo che il compilatore effettua il pull nella dichiarazione. Tutte le esigenze del compilatore sapere è che my_class è una classe che ha una funzione membro pubblica denominata `do_something()`.

```cpp
// my_program.cpp
#include "my_class.h"

using namespace N;

int main()
{
    my_class mc;
    mc.do_something();
    return 0;
}
```

Al termine il compilatore la compilazione di ogni file con estensione cpp nel file obj, passa al linker i file obj. Quando il linker unisce i file oggetto trova esattamente una definizione per my_class; è presente nel file obj per my_class.cpp prodotta e la compilazione ha esito positivo.

## <a name="include-guards"></a>Include Guard

In genere, i file di intestazione sono un *guard includono* o una **#pragma una volta** direttiva per garantire che essi non vengono inseriti più volte in un file con estensione cpp singolo. 

my_class.h
#<a name="ifndef-myclassh--include-guard"></a>ifndef MY_CLASS_H / / includono guard
#<a name="define-myclassh"></a>definire MY_CLASS_H


spazio dei nomi N {classe my_class {pubblico: void do_something();};

}

#<a name="endif--myclassh-"></a>endif / * MY_CLASS_H * /

## <a name="what-to-put-in-a-header-file"></a>Gli elementi da inserire in un file di intestazione

Poiché un file di intestazione potrebbe potenzialmente essere incluso da più file, non può contenere definizioni che potrebbero produrre più definizioni con lo stesso nome. Di seguito non è consentiti, oppure è considerate pratiche molto:

- definizioni dei tipi incorporati nell'ambito globale o dello spazio dei nomi
- definizioni di funzione non inline 
- definizioni di variabili non const
- definizioni di aggregazione
- spazi dei nomi senza nome
- Direttive using

Utilizzare la **utilizzando** direttiva non necessariamente si verificherà un errore, ma può causare un problema perché offre lo spazio dei nomi nell'ambito di ogni file con estensione cpp che direttamente o indirettamente include l'intestazione. 

## <a name="sample-header-file"></a>File di intestazione di esempio

L'esempio seguente mostra i diversi tipi di dichiarazioni e definizioni che sono consentite in un file di intestazione:

```cpp
#pragma once 
#include <vector> // #include directive
#include <string>

namespace N  // namespace declaration
{

    inline namespace P
    {
        //...
    }

    enum class colors : short { red, blue, purple, azure };


    const double PI = 3.14;  // const and constexpr definitions
    constexpr int MeaningOfLife{ 42 };
    constexpr int get_meaning()
    {
        static_assert(MeaningOfLife == 42, "unexpected!"); // static_assert
        return MeaningOfLife;
    }
    using vstr = std::vector<int>;  // type alias
    extern double d; // extern variable

#define LOG   // macro definition

#ifdef LOG   // conditional compilation directive
    void print_to_log();
#endif


    class my_class   // regular class definition, 
    {                // but no non-inline function definitions

        friend class other_class;
    public:
        void do_something();   // definition in my_class.cpp
        inline void put_value(int i) { vals.push_back(i); } // inline OK

    private:
        vstr vals;
        int i;
    };

    struct RGB
    {
        short r{ 0 };  // member initialization
        short g{ 0 };
        short b{ 0 };
    };

    template <typename T>  // template definition
    class value_store
    {
    public:
        value_store<T>() = default;
        void write_value(T val)
        {
            //... function definition OK in template
        }
    private:
        std::vector<T> vals;
    };

    template <typename T>  // template declaration
    class value_widget;

}
