---
title: extern (C++)
ms.date: 04/12/2018
f1_keywords:
- extern
- extern_CPP
helpviewer_keywords:
- extern keyword [C++], linkage to non-C++ functions
- declarations, external
- external linkage, extern modifier
ms.assetid: 1e2f0ae3-ae98-4410-85b5-222d6abc865a
ms.openlocfilehash: d42a32202f7fa67751ea36757c13b2c6af4953b2
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301535"
---
# <a name="extern-c"></a>extern (C++)

La parola chiave **extern** viene applicata a una variabile globale, a una funzione o a una dichiarazione di modello per specificare che il nome di tale elemento ha un *collegamento esterno*. Per informazioni di carattere generale sul collegamento e sul motivo per cui l'uso di variabili globali è sconsigliato, vedere [unità di conversione e collegamento](program-and-linkage-cpp.md).

La parola chiave **extern** ha quattro significati a seconda del contesto:

1. in una dichiarazione di variabile globale non const, **extern** specifica che la variabile o la funzione è definita in un'altra unità di conversione. Il **extern** deve essere applicato in tutti i file, ad eccezione di quello in cui è definita la variabile.
1. in una dichiarazione di variabile const specifica che la variabile ha un collegamento esterno. Il **extern** deve essere applicato a tutte le dichiarazioni in tutti i file. Per impostazione predefinita, le variabili globali const hanno un collegamento interno.
1. **extern "C"** specifica che la funzione è definita altrove e usa la convenzione di chiamata in linguaggio C. Il modificatore extern "C" può essere applicato anche a più dichiarazioni di funzione in un blocco.
1. in una dichiarazione di modello, specifica che il modello è già stato creato in un'altra posizione. Si tratta di un'ottimizzazione che indica al compilatore che è possibile riutilizzare l'altra creazione di istanze anziché crearne una nuova nella posizione corrente. Per ulteriori informazioni su questo utilizzo di **extern**, vedere [modelli](templates-cpp.md).

## <a name="extern-linkage-for-non-const-globals"></a>collegamento extern per le variabili globali non const

Quando il linker vede **extern** prima di una dichiarazione di variabile globale, Cerca la definizione in un'altra unità di conversione. Per impostazione predefinita, le dichiarazioni di variabili non const nell'ambito globale sono esterne. applicare solo **extern** alle dichiarazioni che non forniscono la definizione.

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

## <a name="extern-linkage-for-const-globals"></a>collegamento extern per i globali const

Una variabile globale **const** dispone di un collegamento interno per impostazione predefinita. Se si desidera che la variabile disponga di un collegamento esterno, applicare la parola chiave **extern** alla definizione e a tutte le altre dichiarazioni in altri file:

```cpp
//fileA.cpp
extern const int i = 42; // extern const definition

//fileB.cpp
extern const int i;  // declaration only. same as i in FileA
```

## <a name="extern-constexpr-linkage"></a>collegamento extern constExpr

In Visual Studio 2017 versione 15,3 e precedenti, il compilatore assegna sempre un collegamento interno della variabile constExpr anche quando la variabile è contrassegnata come extern. In Visual Studio 2017 versione 15.5 una nuova opzione del compilatore ([/Zc:externConstexpr](../build/reference/zc-externconstexpr.md)) abilita il comportamento corretto conforme agli standard. Questo diventerà infine il comportamento predefinito. L'opzione/permissive-non Abilita/Zc: externConstexpr.

```cpp
extern constexpr int x = 10; //error LNK2005: "int const x" already defined
```

Se un file di intestazione contiene una variabile dichiarata come extern constExpr, è necessario contrassegnarla come **__declspec (selectany)** in modo che le dichiarazioni duplicate vengano combinate correttamente:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

## <a name="extern-c-and-extern-c-function-declarations"></a>dichiarazioni di funzione extern "C"C++ed extern ""

In C++, se usato con una stringa, **extern** specifica che le convenzioni di collegamento di un altro linguaggio vengono usate per i dichiaratori. Alle funzioni e ai dati C è possibile accedere solo se in precedenza sono stati dichiarati come dotati di collegamento a C. Tuttavia, devono essere definiti in una unità di conversione compilata separatamente.

Microsoft C++ supporta le stringhe **"C"** e **"C++"** nel campo *stringa-valore letterale* . Tutti i file di inclusione standard utilizzano la sintassi **extern** "C" per consentire l'utilizzo delle funzioni della libreria di runtime nei C++ programmi.

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

Se una funzione contiene più specifiche di collegamento, queste devono concordare; è un errore dichiarare le funzioni come dotate sia di collegamento C++ che C. Inoltre, se due dichiarazioni per una funzione si verificano in un programma - una con una specifica di collegamento e una senza - la dichiarazione con la specifica di collegamento deve essere specificata per prima. A tutte le dichiarazioni ridondanti di funzioni che hanno già specifiche di collegamento viene fornito il collegamento specificato nella prima dichiarazione. Ad esempio:

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

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Unità di conversione e collegamento](program-and-linkage-cpp.md)<br/>
[Identificatore di classi di archiviazione extern in C](../c-language/extern-storage-class-specifier.md)<br/>
[Comportamento degli identificatori in C](../c-language/behavior-of-identifiers.md)<br/>
[Collegamento in C](../c-language/linkage.md)