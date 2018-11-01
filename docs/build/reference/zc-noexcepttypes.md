---
title: '/Zc: noexcepttypes (c + + regole noexcept c++17)'
ms.date: 11/14/2017
f1_keywords:
- /Zc:noexceptTypes
helpviewer_keywords:
- /Zc:noexceptTypes
- Zc:noexceptTypes
- -Zc:noexceptTypes
ms.assetid: 1cbf7e3c-0f82-4f91-84dd-612bcf26d2c6
ms.openlocfilehash: f5f2fa3ef85e7ff15b28188e45a4ec397878873c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462231"
---
# <a name="zcnoexcepttypes-c17-noexcept-rules"></a>/Zc: noexcepttypes (c + + regole noexcept c++17)

Rende nello standard c++17 `throw()` come alias per `noexcept`, rimuove `throw(<type list>)` e `throw(...)`e consente di includere determinati tipi `noexcept`. Ciò può causare numerosi problemi di compatibilità di origine nel codice conforme a c++14 o versione precedente. Il **/Zc: noexcepttypes** opzione possa specificare la conformità a c++17 standard o consentire il C + + 14 e versioni precedente il comportamento durante la compilazione di codice in modalità c++17.

## <a name="syntax"></a>Sintassi

> **/Zc:noexceptTypes**[-]

## <a name="remarks"></a>Note

Quando la **/Zc: noexcepttypes** opzione è specificata, il compilatore conforme a c++17 standard e considera [throw ()](../../cpp/exception-specifications-throw-cpp.md) come alias per [noexcept](../../cpp/noexcept-cpp.md), rimuove `throw(<type list>)`e `throw(...)`e consente di includere determinati tipi `noexcept`. Il **/Zc: noexcepttypes** opzione è disponibile solo quando [/std: c + + 17](std-specify-language-standard-version.md) oppure [/std:latest](std-specify-language-standard-version.md) è abilitata. **/Zc: noexcepttypes** è abilitato per impostazione predefinita per essere conforme allo standard c++17 ISO. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione non riguarda **/Zc: noexcepttypes**. Disattivare questa opzione, specificando **/Zc:noexceptTypes-** per ripristinare il comportamento di c++14 dei `noexcept` quando **/std::C + + 17** oppure **/std::latest** è specificato.

A partire da Visual Studio 2017 versione 15.5, il compilatore C++ esegue la diagnostica più specifiche di eccezione non corrispondenti nelle dichiarazioni in modalità c++17 o quando la [/PERMISSIVE--](permissive-standards-conformance.md) opzione specificata.

Questo esempio vengono illustrate le dichiarazioni con un identificatore di eccezione comportano quando le **/Zc: noexcepttypes** opzione è impostata o disabilitato. Viene illustrato il comportamento quando è impostato, esegue la compilazione usando `cl /EHsc /W4 noexceptTypes.cpp`. Per mostrare il comportamento quando è disabilitata, esegue la compilazione usando `cl /EHsc /W4 /Zc:noexceptTypes- noexceptTypes.cpp`.

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

Quando viene compilato usando l'impostazione predefinita **/Zc: noexcepttypes**, l'esempio genera gli avvisi elencati. Per aggiornare il codice, utilizzare la seguente:

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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: noexcepttypes** oppure **/Zc:noexceptTypes-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
[noexcept](../../cpp/noexcept-cpp.md)<br/>
[Specifiche di eccezione (generazione)](../../cpp/exception-specifications-throw-cpp.md)
