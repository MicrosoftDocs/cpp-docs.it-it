---
title: :::no-loc(extern):::C++
description: 'Guida alla parola chiave del linguaggio C++ :::no-loc(extern)::: .'
ms.date: 01/28/2020
f1_keywords:
- ':::no-loc(extern):::'
- :::no-loc(extern):::_CPP
helpviewer_keywords:
- ':::no-loc(extern)::: keyword [C++], linkage to non-C++ functions'
- declarations, :::no-loc(extern):::al
- ':::no-loc(extern):::al linkage, :::no-loc(extern)::: modifier'
ms.assetid: 1e2f0ae3-ae98-4410-85b5-222d6abc865a
no-loc:
- ':::no-loc(extern):::'
- ':::no-loc(const):::'
- ':::no-loc(constexpr):::'
- ':::no-loc(permissive):::'
ms.openlocfilehash: 510352f9e99e513f4a426f6ef89be4474085d97c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227504"
---
# <a name="no-locextern-c"></a>:::no-loc(extern):::C++

La **`:::no-loc(extern):::`** parola chiave può essere applicata a una variabile globale, a una funzione o a una dichiarazione di modello. Specifica che il simbolo dispone del * :::no-loc(extern)::: collegamento al*. Per informazioni di carattere generale sul collegamento e sul motivo per cui l'uso di variabili globali è sconsigliato, vedere [unità di conversione e collegamento](program-and-linkage-cpp.md).

La **`:::no-loc(extern):::`** parola chiave ha quattro significati a seconda del contesto:

- In una dichiarazione di **`:::no-loc(const):::`** variabile non globale, **`:::no-loc(extern):::`** specifica che la variabile o la funzione è definita in un'altra unità di conversione. Il **`:::no-loc(extern):::`** deve essere applicato in tutti i file, ad eccezione di quello in cui è definita la variabile.

- In una **`:::no-loc(const):::`** dichiarazione di variabile, specifica che la variabile dispone del :::no-loc(extern)::: collegamento al. L'oggetto **`:::no-loc(extern):::`** deve essere applicato a tutte le dichiarazioni in tutti i file. **`:::no-loc(const):::`** Per impostazione predefinita, le variabili globali hanno un collegamento interno.

- ** :::no-loc(extern)::: "C"** specifica che la funzione è definita altrove e usa la convenzione di chiamata del linguaggio C. Il :::no-loc(extern)::: modificatore "C" può essere applicato anche a più dichiarazioni di funzione in un blocco.

- In una dichiarazione di modello, **`:::no-loc(extern):::`** specifica che il modello è già stato creato in un'altra posizione. **`:::no-loc(extern):::`** indica al compilatore che può riutilizzare l'altra creazione dell'istanza, anziché crearne una nuova nella posizione corrente. Per ulteriori informazioni su questo utilizzo di **`:::no-loc(extern):::`** , vedere [creazione di un'istanza esplicita](explicit-instantiation.md).

## <a name="no-locextern-linkage-for-non-no-locconst-globals"></a>:::no-loc(extern):::collegamento per gli elementi non :::no-loc(const)::: globali

Quando il linker vede **`:::no-loc(extern):::`** prima di una dichiarazione di variabile globale, Cerca la definizione in un'altra unità di conversione. Per impostazione predefinita, le dichiarazioni di non **`:::no-loc(const):::`** variabili nell'ambito globale sono :::no-loc(extern)::: al. Si applicano solo **`:::no-loc(extern):::`** alle dichiarazioni che non forniscono la definizione.

```cpp
//fileA.cpp
int i = 42; // declaration and definition

//fileB.cpp
:::no-loc(extern)::: int i;  // declaration only. same as i in FileA

//fileC.cpp
:::no-loc(extern)::: int i;  // declaration only. same as i in FileA

//fileD.cpp
int i = 43; // LNK2005! 'i' already has a definition.
:::no-loc(extern)::: int i = 43; // same error (:::no-loc(extern)::: is ignored on definitions)
```

## <a name="no-locextern-linkage-for-no-locconst-globals"></a>:::no-loc(extern):::collegamento per le variabili :::no-loc(const)::: globali

**`:::no-loc(const):::`** Per impostazione predefinita, una variabile globale dispone di un collegamento interno. Se si desidera che la variabile disponga del :::no-loc(extern)::: collegamento al, applicare la **`:::no-loc(extern):::`** parola chiave alla definizione e a tutte le altre dichiarazioni in altri file:

```cpp
//fileA.cpp
:::no-loc(extern)::: :::no-loc(const)::: int i = 42; // :::no-loc(extern)::: :::no-loc(const)::: definition

//fileB.cpp
:::no-loc(extern)::: :::no-loc(const)::: int i;  // declaration only. same as i in FileA
```

## <a name="no-locextern-no-locconstexpr-linkage"></a>:::no-loc(extern)::::::no-loc(constexpr):::collegamento

In Visual Studio 2017 versione 15,3 e precedenti, il compilatore assegna sempre un **`:::no-loc(constexpr):::`** collegamento interno variabile, anche quando la variabile è stata contrassegnata come **`:::no-loc(extern):::`** . In Visual Studio 2017 versione 15,5 e successive, l'opzione del compilatore [/Zc: :::no-loc(extern)::: constExpr](../build/reference/zc-:::no-loc(extern)::::::no-loc(constexpr):::.md) Abilita il comportamento corretto conforme agli standard. Infine, l'opzione diventerà il valore predefinito. L' [/:::no-loc(permissive):::-](../build/reference/:::no-loc(permissive):::-standards-conformance.md) opzione non abilita **/Zc: :::no-loc(extern)::: constExpr**.

```cpp
:::no-loc(extern)::: :::no-loc(constexpr)::: int x = 10; //error LNK2005: "int :::no-loc(const)::: x" already defined
```

Se un file di intestazione contiene una variabile dichiarata **`:::no-loc(extern):::`** **`:::no-loc(constexpr):::`** , deve essere contrassegnata `__declspec(selectany)` per la corretta combinazione delle dichiarazioni duplicate:

```cpp
:::no-loc(extern)::: :::no-loc(constexpr)::: __declspec(selectany) int x = 10;
```

## <a name="no-locextern-c-and-no-locextern-c-function-declarations"></a>:::no-loc(extern):::Dichiarazioni di funzione "C" e :::no-loc(extern)::: "C++"

In C++, se usato con una stringa, **`:::no-loc(extern):::`** specifica che le convenzioni di collegamento di un altro linguaggio vengono usate per i dichiaratori. È possibile accedere alle funzioni e ai dati c solo se sono stati precedentemente dichiarati come dotati di collegamento C. Tuttavia, devono essere definiti in una unità di conversione compilata separatamente.

Microsoft C++ supporta le stringhe **"C"** e **"c++"** nel campo *stringa-valore letterale* . Tutti i file di inclusione standard utilizzano la sintassi ** :::no-loc(extern)::: "C"** per consentire l'utilizzo delle funzioni della libreria di runtime nei programmi C++.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come dichiarare nomi con collegamento C:

```cpp
// Declare printf with C linkage.
:::no-loc(extern)::: "C" int printf(:::no-loc(const)::: char *fmt, ...);

//  Cause everything in the specified
//  header files to have C linkage.
:::no-loc(extern)::: "C" {
    // add your #include statements here
#include <stdio.h>
}

//  Declare the two functions ShowChar
//  and GetChar with C linkage.
:::no-loc(extern)::: "C" {
    char ShowChar(char ch);
    char GetChar(void);
}

//  Define the two functions
//  ShowChar and GetChar with C linkage.
:::no-loc(extern)::: "C" char ShowChar(char ch) {
    putchar(ch);
    return ch;
}

:::no-loc(extern)::: "C" char GetChar(void) {
    char ch;
    ch = getchar();
    return ch;
}

// Declare a global variable, errno, with C linkage.
:::no-loc(extern)::: "C" int errno;
```

Se una funzione ha più di una specifica di collegamento, è necessario che accettino. Si tratta di un errore per dichiarare le funzioni che hanno il collegamento C e C++. Inoltre, se due dichiarazioni per una funzione si verificano in un programma - una con una specifica di collegamento e una senza - la dichiarazione con la specifica di collegamento deve essere specificata per prima. A tutte le dichiarazioni ridondanti di funzioni che hanno già specifiche di collegamento viene fornito il collegamento specificato nella prima dichiarazione. Ad esempio:

```cpp
:::no-loc(extern)::: "C" int CFunc1();
...
int CFunc1();            // Redeclaration is benign; C linkage is
                         //  retained.

int CFunc2();
...
:::no-loc(extern)::: "C" int CFunc2(); // Error: not the first declaration of
                         //  CFunc2;  cannot contain linkage
                         //  specifier.
```

## <a name="see-also"></a>Vedere anche

[Parole](../cpp/keywords-cpp.md)\
[Unità di conversione e collegamento](program-and-linkage-cpp.md)\
[:::no-loc(extern):::Identificatore di classi di archiviazione in C](../c-language/:::no-loc(extern):::-storage-class-specifier.md)\
[Comportamento degli identificatori in C](../c-language/behavior-of-identifiers.md)\
[Collegamento in C](../c-language/linkage.md)
