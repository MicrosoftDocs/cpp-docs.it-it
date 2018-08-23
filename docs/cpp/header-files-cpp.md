---
title: File di intestazione (C++) | Microsoft Docs
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
ms.workload:
- cplusplus
ms.openlocfilehash: be194095b6461eaedd9e814c6130801b431fef5d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42602413"
---
# <a name="header-files-c"></a>File di intestazione (C++)

I nomi degli elementi di programma, ad esempio variabili, funzioni, classi e così via devono essere dichiarati prima di poter essere usati. Ad esempio, non è possibile scrivere semplicemente `x = 42` senza prima dichiarare 'x'. 

```cpp
int x; // declaration
x = 42; // use x
```

 La dichiarazione indica al compilatore che è un **int**, un **double**, una **funzione**, un **classe** o un altro aspetto.  Inoltre, ogni nome deve essere dichiarato (direttamente o indirettamente) in ogni file con estensione cpp in cui viene utilizzata. Quando si compila un programma, ogni file con estensione cpp viene compilato in modo indipendente in un'unità di compilazione. Il compilatore non dispone di alcuna conoscenza di quali i nomi vengono dichiarati in altre unità di compilazione. Ciò significa che se si definisce una classe o una funzione o variabile globale, è necessario fornire una dichiarazione di tale operazione in ogni file con estensione cpp aggiuntive che lo utilizza. Ogni dichiarazione di tale operazione deve essere identico in tutti i file. Un'inconsistenza lieve causerà errori o un comportamento imprevisto, quando il linker tenta di unire tutte le unità di compilazione in un unico programma.

Per ridurre al minimo il rischio di errori, C++ ha adottato la convenzione dell'uso *file di intestazione* per contenere le dichiarazioni. Rendere le dichiarazioni in un file di intestazione, quindi usare il #include (direttiva) in ogni file con estensione cpp o altri file di intestazione richiede tale dichiarazione. Il #include consente di inserire una copia del file di intestazione direttamente nel file con estensione cpp prima della compilazione. 

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un modo comune per dichiarare una classe e quindi usarlo in un file di origine diversi. Si inizierà con il file di intestazione, `my_class.h`. Contiene una definizione di classe, ma si noti che la definizione è incompleta. la funzione membro `do_something` non è definito:

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

Successivamente, creare un file di implementazione (in genere con un'estensione cpp o simile). Verrà chiamata my_class.cpp i file e fornire una definizione per la dichiarazione di membro. Aggiungiamo un `#include` direttiva per il file "my_class.h" per avere la dichiarazione my_class inserita a questo punto nel cpp file e si includono `<iostream>` per inserire la dichiarazione per `std::cout`. Si noti che le virgolette sono usate per i file di intestazione nella stessa directory del file di origine e parentesi quadre vengono utilizzati per le intestazioni della libreria standard. Inoltre, molte delle intestazioni della libreria standard non è con estensione h o un'altra estensione di file.

Nel file di implementazione, è possibile usare facoltativamente un **usando** istruzione da evitare di dover qualificare ogni menzione di "my_class" o "cout" con "n::" o "std::".  Non inserire **usando** istruzioni nel file di intestazione.

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

A questo punto è possibile usare `my_class` in un altro file con estensione cpp. Abbiamo #include il file di intestazione, in modo che il compilatore esegue il pull nella dichiarazione. Tutte le esigenze del compilatore conoscere è una classe che dispone di una funzione membro pubblico chiamata tale my_class `do_something()`.

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

Al termine il compilatore la compilazione di ogni file con estensione cpp nel file con estensione obj, i file con estensione obj viene passato al linker. Quando il linker unisce i file oggetto trova esattamente una definizione per my_class; è nel file con estensione obj generato per my_class.cpp e la compilazione ha esito positivo.

## <a name="include-guards"></a>Guard include

In genere, i file di intestazione sono un *guard includono* o un `#pragma once` direttiva per garantire che non vengono inseriti più volte in un file con estensione cpp singolo. 

```cpp
// my_class.h
#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H

namespace N
{
    class my_class
    {
    public:
        void do_something();
    };
}

#endif /* MY_CLASS_H */
```

## <a name="what-to-put-in-a-header-file"></a>Gli elementi da inserire in un file di intestazione

Perché un file di intestazione potrebbe potenzialmente essere inclusa da più file, non può contenere definizioni che potrebbero produrre più definizioni con lo stesso nome. Di seguito non è consentiti, o è considerate pratiche non molto corrette:

- definizioni dei tipi incorporati in ambito globale o dello spazio dei nomi
- definizioni di funzione non inline 
- definizioni delle variabili non const
- definizioni di aggregazione
- spazi dei nomi senza nome
- Direttive using

Usare la **usando** direttiva non necessariamente genera un errore, ma può potenzialmente causare un problema in quanto introduce lo spazio dei nomi nell'ambito di ogni file con estensione cpp che direttamente o indirettamente include l'intestazione. 

## <a name="sample-header-file"></a>File di intestazione di esempio

L'esempio seguente illustra i diversi tipi di dichiarazioni e definizioni che sono consentite in un file di intestazione:

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
```