---
description: 'Altre informazioni su: file di intestazione (C++)'
title: File di intestazione (C++)
ms.date: 12/11/2019
helpviewer_keywords:
- header files [C++]
ms.openlocfilehash: 22ef05c723368f0456ee880729031610b34876d6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332521"
---
# <a name="header-files-c"></a>File di intestazione (C++)

Prima di poter utilizzare i nomi degli elementi di programma, ad esempio variabili, funzioni, classi e così via, devono essere dichiarati. Ad esempio, non è possibile scrivere semplicemente `x = 42` senza prima dichiarare ' x '.

```cpp
int x; // declaration
x = 42; // use x
```

La dichiarazione indica al compilatore se l'elemento è un oggetto **`int`** , un oggetto, una **`double`** **funzione** **`class`** o un'altra operazione.  Ogni nome, inoltre, deve essere dichiarato (direttamente o indirettamente) in ogni file con estensione cpp in cui viene usato. Quando si compila un programma, ogni file con estensione cpp viene compilato in modo indipendente in un'unità di compilazione. Il compilatore non conosce i nomi dichiarati in altre unità di compilazione. Ciò significa che se si definisce una classe o una funzione o una variabile globale, è necessario fornire una dichiarazione di tale elemento in ogni file con estensione cpp aggiuntivo che lo utilizza. Ogni dichiarazione di tale elemento deve essere esattamente identica in tutti i file. Una lieve incoerenza provocherà errori, o comportamento imprevisto, quando il linker tenta di unire tutte le unità di compilazione in un unico programma.

Per ridurre al minimo il rischio di errori, C++ ha adottato la convenzione di utilizzo dei *file di intestazione* per contenere le dichiarazioni. Le dichiarazioni vengono apportate in un file di intestazione, quindi si utilizza la direttiva #include in ogni file con estensione cpp o in un altro file di intestazione che richiede la dichiarazione. La direttiva #include inserisce una copia del file di intestazione direttamente nel file con estensione cpp prima della compilazione.

> [!NOTE]
> In Visual Studio 2019 la funzionalità *moduli* c++ 20 è stata introdotta come miglioramento e sostituzione finale per i file di intestazione. Per ulteriori informazioni, vedere [Cenni preliminari sui moduli in C++](modules-cpp.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un modo comune per dichiarare una classe e quindi utilizzarla in un file di origine diverso. Si inizierà con il file di intestazione `my_class.h` . Contiene una definizione di classe, ma si noti che la definizione è incompleta; la funzione membro `do_something` non è definita:

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

Successivamente, creare un file di implementazione (in genere con estensione cpp o simile). Si chiamerà il file my_class. cpp e si fornirà una definizione per la dichiarazione del membro. Viene aggiunta una `#include` direttiva per il file "my_class. h" per fare in modo che la dichiarazione di my_class venga inserita in questo punto nel file con estensione cpp e includa per `<iostream>` eseguire il pull della dichiarazione per `std::cout` . Si noti che le virgolette vengono usate per i file di intestazione nella stessa directory del file di origine e le parentesi angolari vengono usate per le intestazioni della libreria standard. Inoltre, molte intestazioni della libreria standard non hanno. h o qualsiasi altra estensione di file.

Nel file di implementazione, è possibile usare facoltativamente un' **`using`** istruzione per evitare di dover qualificare ogni menzione di "my_class" o "cout" con "N::" o "STD::".  Non inserire **`using`** istruzioni nei file di intestazione.

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

A questo punto è possibile usare `my_class` in un altro file cpp. Si #include il file di intestazione in modo che il compilatore estraa la dichiarazione. È necessario che tutto il compilatore sappia che my_class è una classe che dispone di una funzione membro pubblica denominata `do_something()` .

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

Al termine della compilazione di ogni file con estensione cpp in file obj, il compilatore passa i file con estensione obj al linker. Quando il linker unisce i file oggetto, trova esattamente una definizione per my_class; si trova nel file con estensione obj prodotto per my_class. cpp e la compilazione ha esito positivo.

## <a name="include-guards"></a>Includi protezioni

In genere, i file di intestazione *includono un GUARD* o una `#pragma once` direttiva per assicurarsi che non vengano inseriti più volte in un unico file con estensione cpp.

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

## <a name="what-to-put-in-a-header-file"></a>Elementi da inserire in un file di intestazione

Poiché un file di intestazione potrebbe essere potenzialmente incluso in più file, non può contenere definizioni che potrebbero produrre più definizioni con lo stesso nome. Le operazioni seguenti non sono consentite o sono considerate procedure non valide:

- definizioni di tipo predefinite nello spazio dei nomi o nell'ambito globale
- definizioni di funzioni non inline
- definizioni di variabili non const
- definizioni di aggregazione
- spazi dei nomi senza nome
- Direttive using

L'utilizzo della **`using`** direttiva non causa necessariamente un errore, ma può causare un problema perché riporta lo spazio dei nomi nell'ambito di ogni file con estensione cpp che include direttamente o indirettamente tale intestazione.

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
