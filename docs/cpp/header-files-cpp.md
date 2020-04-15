---
title: File di intestazione (C
ms.date: 12/11/2019
helpviewer_keywords:
- header files [C++]
ms.openlocfilehash: 4ab6a2b2626cde94f35678bc9ec789b80d493b8f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367235"
---
# <a name="header-files-c"></a>File di intestazione (C

I nomi degli elementi di programma, ad esempio variabili, funzioni, classi e così via, devono essere dichiarati prima di poter essere utilizzati. Ad esempio, non è `x = 42` possibile scrivere semplicemente senza prima dichiarare 'x'.

```cpp
int x; // declaration
x = 42; // use x
```

La dichiarazione indica al compilatore se l'elemento è **un int**, un **double**, una **funzione**, una **classe** o un'altra cosa.  Inoltre, ogni nome deve essere dichiarato (direttamente o indirettamente) in ogni file con estensione cpp in cui viene utilizzato. Quando si compila un programma, ogni file con estensione cpp viene compilato in modo indipendente in un'unità di compilazione. Il compilatore non è a conoscenza di quali nomi vengono dichiarati in altre unità di compilazione. Ciò significa che se si definisce una classe o una funzione o una variabile globale, è necessario fornire una dichiarazione di tale cosa in ogni file cpp aggiuntivo che lo utilizza. Ogni dichiarazione di tale cosa deve essere esattamente identica in tutti i file. Una leggera incoerenza causerà errori, o comportamenti imprevisti, quando il linker tenta di unire tutte le unità di compilazione in un unico programma.

Per ridurre al minimo il rischio di errori, c'è adottato la convenzione di utilizzare i file di *intestazione* per contenere le dichiarazioni. Apportare le dichiarazioni in un file di intestazione, quindi utilizzare il #include direttiva in ogni file con estensione cpp o altro file di intestazione che richiede tale dichiarazione. La direttiva #include inserisce una copia del file di intestazione direttamente nel file con estensione cpp prima della compilazione.

> [!NOTE]
> In Visual Studio 2019, la funzionalità di *moduli* di C- 20 è stato introdotto come un miglioramento e l'eventuale sostituzione per i file di intestazione. Per ulteriori informazioni, vedere [Panoramica dei moduli in C.](modules-cpp.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un modo comune per dichiarare una classe e quindi utilizzarla in un file di origine diverso. Inizieremo con il file `my_class.h`di intestazione, . Contiene una definizione di classe, ma si noti che la definizione è incompleta; la funzione `do_something` membro non è definita:

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

Successivamente, creare un file di implementazione (in genere con estensione cpp o simile). Chiameremo il file my_class.cpp e forniremo una definizione per la dichiarazione del membro. Aggiungiamo una `#include` direttiva per il file "my_class.h" per inserire la dichiarazione my_class a `<iostream>` questo punto nel `std::cout`file cpp e includiamo la dichiarazione per . Si noti che le virgolette vengono utilizzate per i file di intestazione nella stessa directory del file di origine e le parentesi angolari vengono utilizzate per le intestazioni di libreria standard. Inoltre, molte intestazioni di libreria standard non hanno .h o qualsiasi altra estensione di file.

Nel file di implementazione, è possibile utilizzare facoltativamente **un'istruzione using** per evitare di dover qualificare ogni menzione di "my_class" o "cout" con "N::" o "std::".  Non inserire istruzioni **using** nei file di intestazione!

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

Ora possiamo `my_class` usare in un altro file .cpp. Viene #include il file di intestazione in modo che il compilatore estrae la dichiarazione. Tutto ciò che il compilatore deve sapere è che `do_something()`my_class è una classe con una funzione membro pubblica denominata .

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

Dopo che il compilatore ha completato la compilazione di ogni file con estensione cpp in file obj, passa i file obj al linker. Quando il linker unisce i file oggetto trova esattamente una definizione per my_class; si trova nel file obj prodotto per my_class.cpp e la compilazione ha esito positivo.

## <a name="include-guards"></a>Includi guardie

In genere, i file di `#pragma once` intestazione hanno un protezione di *inclusione* o una direttiva per garantire che non vengano inseriti più volte in un singolo file con estensione cpp.

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

## <a name="what-to-put-in-a-header-file"></a>Cosa inserire in un file di intestazione

Poiché un file di intestazione potrebbe essere potenzialmente incluso da più file, non può contenere definizioni che potrebbero produrre più definizioni con lo stesso nome. I seguenti elementi non sono ammessi o sono considerati una pratica molto cattiva:

- definizioni di tipo predefinito nello spazio dei nomi o nell'ambito globale
- definizioni di funzioni non inline
- definizioni di variabili non const
- definizioni di aggregazione
- spazi dei nomi senza nome
- Direttive using

L'uso della direttiva **using** non causerà necessariamente un errore, ma potrebbe potenzialmente causare un problema perché inserisce lo spazio dei nomi nell'ambito in ogni file con estensione cpp che include direttamente o indirettamente tale intestazione.

## <a name="sample-header-file"></a>File di intestazione di esempio

Nell'esempio seguente vengono illustrati i vari tipi di dichiarazioni e definizioni consentiti in un file di intestazione:

```cpp
// sample.h
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
