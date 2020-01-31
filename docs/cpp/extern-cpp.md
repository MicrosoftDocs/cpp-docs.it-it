---
title: extern (C++)
description: Guida alla parola C++ chiave extern della lingua.
ms.date: 01/28/2020
f1_keywords:
- extern
- extern_CPP
helpviewer_keywords:
- extern keyword [C++], linkage to non-C++ functions
- declarations, external
- external linkage, extern modifier
ms.assetid: 1e2f0ae3-ae98-4410-85b5-222d6abc865a
no-loc:
- extern
- const
- constexpr
- permissive
ms.openlocfilehash: 422b6960802c59f1c45e0c22a4a85988c808a5b3
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821766"
---
# <a name="opno-locextern-c"></a>extern (C++)

La parola chiave **extern** può essere applicata a una variabile globale, a una funzione o a una dichiarazione di modello. Specifica che il simbolo ha un *collegamento esterno*. Per informazioni di carattere generale sul collegamento e sul motivo per cui l'uso di variabili globali è sconsigliato, vedere [unità di conversione e collegamento](program-and-linkage-cpp.md).

La parola chiave **extern** ha quattro significati a seconda del contesto:

- In una dichiarazione di variabile globale non **const** **extern** specifica che la variabile o la funzione è definita in un'altra unità di conversione. Il **extern** deve essere applicato in tutti i file, ad eccezione di quello in cui è definita la variabile.

- In una dichiarazione di variabile **const** specifica che la variabile ha un collegamento esterno. Il **extern** deve essere applicato a tutte le dichiarazioni in tutti i file. Per impostazione predefinita, le variabili **const** globali hanno un collegamento interno.

- **extern "C"** specifica che la funzione è definita altrove e utilizza la convenzione di chiamata del linguaggio C. Il modificatore extern "C" può essere applicato anche a più dichiarazioni di funzione in un blocco.

- In una dichiarazione di modello **extern** specifica che il modello è già stato creato in un'altra posizione. **extern** indica al compilatore che può riutilizzare l'altra creazione dell'istanza, anziché crearne una nuova nella posizione corrente. Per ulteriori informazioni sull'utilizzo di **extern** , vedere [creazione di un'istanza esplicita](explicit-instantiation.md).

## <a name="opno-locextern-linkage-for-non-opno-locconst-globals"></a>collegamento extern per le globali nonconst

Quando il linker vede **extern** prima di una dichiarazione di variabile globale, Cerca la definizione in un'altra unità di conversione. Per impostazione predefinita, le dichiarazioni di variabili non **const** in ambito globale sono esterne. Applicare **extern** solo alle dichiarazioni che non forniscono la definizione.

```cpp
//fileA.cpp
int i = 42; // declaration and definition

//fileB.cpp
extern int i;  // declaration only. same as i in FileA

//fileC.cpp
extern int i;  // declaration only. same as i in FileA

//fileD.cpp
int i = 43; // LNK2005! 'i' already has a definition.
extern int i = 43; // same error (extern is ignored on definitions)
```

## <a name="opno-locextern-linkage-for-opno-locconst-globals"></a>collegamento extern per const Globals

Per impostazione predefinita, un **const** variabile globale dispone di un collegamento interno. Se si desidera che la variabile disponga di un collegamento esterno, applicare la parola chiave **extern** alla definizione e a tutte le altre dichiarazioni in altri file:

```cpp
//fileA.cpp
extern const int i = 42; // extern const definition

//fileB.cpp
extern const int i;  // declaration only. same as i in FileA
```

## <a name="opno-locextern-opno-locconstexpr-linkage"></a>collegamento extern constexpr

In Visual Studio 2017 versione 15,3 e versioni precedenti, il compilatore dava sempre un collegamento interno della variabile **constexpr** , anche quando la variabile è stata contrassegnata come **extern** . In Visual Studio 2017 versione 15,5 e successive, l'opzione del compilatore [/Zc: externConstexpr](../build/reference/zc-externconstexpr.md) Abilita il comportamento corretto conforme agli standard. Infine, l'opzione diventerà il valore predefinito. L'opzione [/permissive-](../build/reference/permissive-standards-conformance.md) non abilita **/Zc: externConstexpr**.

```cpp
extern constexpr int x = 10; //error LNK2005: "int const x" already defined
```

Se un file di intestazione contiene una variabile dichiarata **extern** **constexpr** , è necessario contrassegnarla `__declspec(selectany)` in modo che le relative dichiarazioni duplicate vengano combinate:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

## <a name="opno-locextern-c-and-opno-locextern-c-function-declarations"></a>extern le dichiarazioni di funzione "CC++" e extern ""

In C++, se usato con una stringa, **extern** specifica che le convenzioni di collegamento di un altro linguaggio vengono usate per i dichiaratori. È possibile accedere alle funzioni e ai dati c solo se sono stati precedentemente dichiarati come dotati di collegamento C. Tuttavia, devono essere definiti in una unità di conversione compilata separatamente.

Microsoft C++ supporta le stringhe **"C"** e **"C++"** nel campo *stringa-valore letterale* . Tutti i file di inclusione standard utilizzano la sintassi **extern "C"** per consentire l'utilizzo delle funzioni della libreria di runtime nei C++ programmi.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come dichiarare nomi con collegamento C:

```cpp
// Declare printf with C linkage.
extern "C" int printf(const char *fmt, ...);

//  Cause everything in the specified
//  header files to have C linkage.
extern "C" {
    // add your #include statements here
#include <stdio.h>
}

//  Declare the two functions ShowChar
//  and GetChar with C linkage.
extern "C" {
    char ShowChar(char ch);
    char GetChar(void);
}

//  Define the two functions
//  ShowChar and GetChar with C linkage.
extern "C" char ShowChar(char ch) {
    putchar(ch);
    return ch;
}

extern "C" char GetChar(void) {
    char ch;
    ch = getchar();
    return ch;
}

// Declare a global variable, errno, with C linkage.
extern "C" int errno;
```

Se una funzione ha più di una specifica di collegamento, è necessario che accettino. Si tratta di un errore per dichiarare funzioni come avere sia C C++ che collegamento. Inoltre, se due dichiarazioni per una funzione si verificano in un programma - una con una specifica di collegamento e una senza - la dichiarazione con la specifica di collegamento deve essere specificata per prima. A tutte le dichiarazioni ridondanti di funzioni che hanno già specifiche di collegamento viene fornito il collegamento specificato nella prima dichiarazione. Ad esempio:

```cpp
extern "C" int CFunc1();
...
int CFunc1();            // Redeclaration is benign; C linkage is
                         //  retained.

int CFunc2();
...
extern "C" int CFunc2(); // Error: not the first declaration of
                         //  CFunc2;  cannot contain linkage
                         //  specifier.
```

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)\
[Unità di conversione e collegamento](program-and-linkage-cpp.md)\
[identificatore di classe di archiviazioneextern in C](../c-language/extern-storage-class-specifier.md)\
[Comportamento degli identificatori in C](../c-language/behavior-of-identifiers.md)\
[Collegamento in C](../c-language/linkage.md)
