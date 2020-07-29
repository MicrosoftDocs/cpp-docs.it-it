---
title: Classi e struct di valore (C++/CX)
ms.date: 12/30/2016
helpviewer_keywords:
- value struct
- value class
ms.assetid: 262a0992-9721-4c02-8297-efc07d90e5a4
ms.openlocfilehash: 3350af722993d6b23efa3dc9dbd5a7c33ee5165b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214945"
---
# <a name="value-classes-and-structs-ccx"></a>Classi e struct di valore (C++/CX)

Uno *struct di valore* o una *classe di valore* è un pod compatibile con Windows Runtime ("struttura di dati Plain Old"). con una dimensione fissa e costituita solo da campi; a differenza di una classe di riferimento, non dispone di proprietà.

Gli esempi seguenti mostrano come dichiarare e inizializzare struct di valore.

```

// in mainpage.xaml.h:
    value struct TestStruct
    {
        Platform::String^ str;
        int i;
    };

    value struct TestStruct2
    {
        TestStruct ts;
        Platform::String^ str;
        int i;
    };

// in mainpage.cpp:
    // Initialize a value struct with an int and String
    TestStruct ts = {"I am a TestStruct", 1};

    // Initialize a value struct that contains
    // another value struct, an int and a String
    TestStruct2 ts2 = {{"I am a TestStruct", 1}, "I am a TestStruct2", 2};

    // Initialize value struct members individually.
    TestStruct ts3;
    ts3.i = 108;
    ts3.str = "Another way to init a value struct.";
```

Quando una variabile di un tipo di valore viene assegnata a un'altra variabile, il valore viene copiato. In tal modo ciascuna delle due variabili dispone di una propria copia dei dati. Uno *struct di valore* è una struttura a dimensione fissa che contiene solo campi di dati pubblici e viene dichiarata tramite la **`value struct`** parola chiave.

Una *classe di valori* è simile a **`value struct`** , ad eccezione del fatto che ai campi deve essere assegnata in modo esplicito l'accessibilità pubblica. Viene dichiarata usando la **`value class`** parola chiave.

Uno struct di valore o una classe di valore può contenere come campi solo tipi numerici fondamentali, classi di enumerazione, `Platform::String^` o [Platform:: \<T> ^ iBox](../cppcx/platform-ibox-interface.md) dove T è un tipo numerico o una classe di enumerazione o una classe di valore o uno struct. Un `IBox<T>^` campo può avere un valore **`nullptr`** : questo è il modo in cui C++ implementa il concetto di *tipi di valore Nullable*.

Uno struct o una classe di valori che contiene un tipo `Platform::String^` o `IBox<T>^` come membro non supporta `memcpy`.

Poiché tutti i membri di un oggetto **`value class`** o **`value struct`** sono pubblici e vengono emessi nei metadati, i tipi C++ standard non sono consentiti come membri. Questa operazione è diversa dalle classi di riferimento che possono **`private`** contenere **`internal`** tipi C++ standard o.

Nel frammento di codice riportato di seguito i tipi `Coordinates` e `City` vengono dichiarati come struct di valore. Nota che uno dei membri dati `City` è un tipo `GeoCoordinates` . Un oggetto **`value struct`** può contenere altri struct di valore come membri.

[!code-cpp[cx_classes#07](../cppcx/codesnippet/CPP/classesstructs/class1.h#07)]

## <a name="parameter-passing-for-value-types"></a>Passaggio dei parametri per i tipi valore

Se si ha un tipo valore come parametro di funzione o di metodo, normalmente viene passato per valore. Per gli oggetti di grandi dimensioni, tuttavia, questo può causare un problema di prestazioni. In Visual Studio2013 e versioni precedenti, i tipi valore in C++/CX vengono sempre passati per valore. In Visual Studio 2015 e versioni successive, è possibile passare i tipi valore per riferimento oppure per valore.

Per dichiarare un parametro che passa un tipo valore per valore, usare codice simile al seguente:

```cpp
void Method1(MyValueType obj);
```

Per dichiarare un parametro che passa un tipo valore per riferimento, usa il simbolo di riferimento (&), come illustrato di seguito:

```cpp
void Method2(MyValueType& obj);
```

Il tipo in Method2 è un riferimento a MyValueType e funziona esattamente come un tipo di riferimento nel linguaggio C++ standard.

Quando si chiama Method1 da un altro linguaggio, ad esempio C#, non è necessario usare la parola chiave `ref` o `out` . Quando si chiama Method2, usare la parola chiave `ref` .

```
Method2(ref obj);
```

Per passare un tipo valore per riferimento è possibile usare anche un simbolo puntatore (*). Il comportamento rispetto ai chiamanti in altri linguaggi è lo stesso (i chiamanti in C# usano la parola chiave `ref` ), ma nel metodo il tipo è un puntatore al tipo valore.

## <a name="nullable-value-types"></a>Tipi valore nullable

Come indicato in precedenza, una classe valore o uno struct di valore può avere un campo di tipo [Platform \<T> ^ :: iBox](../cppcx/platform-ibox-interface.md), ad esempio `IBox<int>^` . Tale campo può avere qualsiasi valore numerico valido per il **`int`** tipo oppure può avere un valore **`nullptr`** . È possibile passare un campo nullable come argomento a un metodo il cui parametro è dichiarato come facoltativo o qualsiasi altra posizione in cui un tipo di valore non deve necessariamente avere un valore.

L'esempio seguente mostra come inizializzare uno struct con un campo nullable.

```
public value struct Student
{
    Platform::String^ Name;
    int EnrollmentYear;
    Platform::IBox<int>^ GraduationYear; // Null if not yet graduated.
};
//To create a Student struct, one must populate the nullable type.
MainPage::MainPage()
{
    InitializeComponent();

    Student A;
    A.Name = "Alice";
    A.EnrollmentYear = 2008;
    A.GraduationYear = ref new Platform::Box<int>(2012);

    Student B;
    B.Name = "Bob";
    B.EnrollmentYear = 2011;
    B.GraduationYear = nullptr;

    IsCurrentlyEnrolled(A);
    IsCurrentlyEnrolled(B);
}
bool MainPage::IsCurrentlyEnrolled(Student s)
{
    if (s.GraduationYear == nullptr)
    {
        return true;
    }
    return false;
}
```

Uno struct di valori può essere reso nullable in modo analogo, come illustrato di seguito:

```

public value struct MyStruct
{
public:
    int i;
    Platform::String^ s;
};

public ref class MyClass sealed
{
public:
    property Platform::IBox<MyStruct>^ myNullableStruct;
};
```

## <a name="see-also"></a>Vedere anche

[Sistema di tipi (C++/CX)](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti agli spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)<br/>
[Classi e struct di riferimento (C++/CX)](../cppcx/ref-classes-and-structs-c-cx.md)
