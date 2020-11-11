---
title: /Zc:noexceptTypes (Regole noexcept C++17)
description: "Per informazioni sull'opzione del compilatore Microsoft C++/Zc: noexceptTypes, vedere la pagina relativa alla compatibilità del codice sorgente per C++ 17."
ms.date: 06/04/2020
f1_keywords:
- /Zc:noexceptTypes
helpviewer_keywords:
- /Zc:noexceptTypes
- Zc:noexceptTypes
- -Zc:noexceptTypes
ms.assetid: 1cbf7e3c-0f82-4f91-84dd-612bcf26d2c6
ms.openlocfilehash: c15d4203f343eced7c112757b2665aa71a982c7c
ms.sourcegitcommit: 25f6d52eb9e5d84bd0218c46372db85572af81da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2020
ms.locfileid: "94448503"
---
# <a name="zcnoexcepttypes-c17-noexcept-rules"></a>/Zc:noexceptTypes (Regole noexcept C++17)

Lo standard c++ 17 crea `throw()` un alias per **`noexcept`** , rimuove `throw(` *`type-list`* `)` e e `throw(...)` consente l'inclusione di determinati tipi **`noexcept`** . Questa modifica può causare numerosi problemi di compatibilità con l'origine nel codice conforme a C++ 14 o versioni precedenti. L' **`/Zc:noexceptTypes`** opzione specifica la conformità allo standard c++ 17. **`/Zc:noexceptTypes-`**  consente il comportamento C++ 14 e versioni precedenti quando il codice viene compilato in modalità C++ 17.

## <a name="syntax"></a>Sintassi

> **`/Zc:noexceptTypes`**\[**`-`** ]

## <a name="remarks"></a>Commenti

Quando **`/Zc:noexceptTypes`** si specifica l'opzione, il compilatore è conforme allo standard c++ 17 e considera [`throw()`](../../cpp/exception-specifications-throw-cpp.md) come alias per [`noexcept`](../../cpp/noexcept-cpp.md) , rimuove e e `throw(` *`type-list`* `)` consente l' `throw(...)` inclusione di determinati tipi **`noexcept`** . L' **`/Zc:noexceptTypes`** opzione è disponibile solo quando [`/std:c++17`](std-specify-language-standard-version.md) [`/std:c++latest`](std-specify-language-standard-version.md) è abilitato o. **`/Zc:noexceptTypes`** per impostazione predefinita, è abilitato per la conformità allo standard ISO C++ 17. L' [`/permissive-`](permissive-standards-conformance.md) opzione non ha effetto **`/Zc:noexceptTypes`** . Disabilitare questa opzione specificando **`/Zc:noexceptTypes-`** di ripristinare il comportamento di c++ 14 **`noexcept`** quando **`/std:c++17`** **`/std:c++latest`** viene specificato o.

A partire da Visual Studio 2017 versione 15,5, il compilatore C++ diagnostica le specifiche di eccezione più non corrispondenti nelle dichiarazioni in modalità C++ 17 o quando si specifica l' [`/permissive-`](permissive-standards-conformance.md) opzione.

In questo esempio viene illustrato il comportamento delle dichiarazioni con un identificatore di eccezione quando l' **`/Zc:noexceptTypes`** opzione è impostata o disabilitata. Per visualizzare il comportamento durante l'impostazione, compilare utilizzando `cl /EHsc /W4 noexceptTypes.cpp` . Per visualizzare il comportamento quando è disabilitato, compilare utilizzando `cl /EHsc /W4 /Zc:noexceptTypes- noexceptTypes.cpp` .

```cpp
// noexceptTypes.cpp
// Compile by using: cl /EHsc /W4 noexceptTypes.cpp
// Compile by using: cl /EHsc /W4 /Zc:noexceptTypes- noexceptTypes.cpp

void f() throw();    // equivalent to void f() noexcept;
void f() { }         // warning C5043
void g() throw(...); // warning C5040

struct A
{
    virtual void f() throw();
};

struct B : A
{
    virtual void f() { } // error C2694
};
```

Quando viene compilato usando l'impostazione predefinita **`/Zc:noexceptTypes`** , l'esempio genera gli avvisi elencati. Per aggiornare il codice, usare invece il comando seguente:

```cpp
void f() noexcept;
void f() noexcept { }
void g() noexcept(false);

struct A
{
    virtual void f() noexcept;
};

struct B : A
{
    virtual void f() noexcept { }
};
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere *`/Zc:noexceptTypes`* o *`/Zc:noexceptTypes-`* , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[`/Zc` Conformità](zc-conformance.md)\
[noexcept](../../cpp/noexcept-cpp.md)\
[Specifiche di eccezione (generazione)](../../cpp/exception-specifications-throw-cpp.md)
