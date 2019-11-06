---
title: /Zc:noexceptTypes (Regole noexcept C++17)
ms.date: 11/14/2017
f1_keywords:
- /Zc:noexceptTypes
helpviewer_keywords:
- /Zc:noexceptTypes
- Zc:noexceptTypes
- -Zc:noexceptTypes
ms.assetid: 1cbf7e3c-0f82-4f91-84dd-612bcf26d2c6
ms.openlocfilehash: 35bea7c2c629c615c60a6136f289b6b11926c054
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73624857"
---
# <a name="zcnoexcepttypes-c17-noexcept-rules"></a>/Zc:noexceptTypes (Regole noexcept C++17)

Lo standard C++ 17 rende `throw()` un alias per `noexcept`, rimuove `throw(<type list>)` e `throw(...)`e consente a determinati tipi di includere `noexcept`. Questa modifica può causare numerosi problemi di compatibilità con l'origine nel codice conforme a C++ 14 o versioni precedenti. L'opzione **/Zc: noexceptTypes** specifica la conformità allo standard c++ 17. **/Zc: noexceptTypes-** consente il comportamento di c++ 14 e versioni precedenti quando il codice viene compilato in modalità c++ 17.

## <a name="syntax"></a>Sintassi

> **/Zc: noexceptTypes**[-]

## <a name="remarks"></a>Note

Quando si specifica l'opzione **/Zc: noexceptTypes** , il compilatore è conforme allo standard c++ 17 e considera [throw ()](../../cpp/exception-specifications-throw-cpp.md) come alias per [noexcept](../../cpp/noexcept-cpp.md), rimuove `throw(<type list>)` e `throw(...)`e consente a determinati tipi di includere `noexcept`. L'opzione **/Zc: noexceptTypes** è disponibile solo quando è abilitato [/std: c++ 17](std-specify-language-standard-version.md) o [/std: Latest](std-specify-language-standard-version.md) . **/Zc: noexceptTypes** è abilitato per impostazione predefinita per la conformità allo standard ISO c++ 17. L'opzione [/permissive-](permissive-standards-conformance.md) non influisce su **/Zc: noexceptTypes**. Disabilitare questa opzione specificando **/Zc: noexceptTypes-** per ripristinare il comportamento c++ 14 di `noexcept` quando si specifica **/std: c++ 17** o **/std: Latest** .

A partire da Visual Studio 2017 versione 15,5, C++ il compilatore diagnostica le specifiche di eccezione più non corrispondenti nelle dichiarazioni in modalità c++ 17 o quando si specifica l'opzione [/permissive-](permissive-standards-conformance.md) .

In questo esempio viene illustrato il comportamento delle dichiarazioni con un identificatore di eccezione quando l'opzione **/Zc: noexceptTypes** è impostata o disabilitata. Per visualizzare il comportamento durante l'impostazione, compilare utilizzando `cl /EHsc /W4 noexceptTypes.cpp`. Per visualizzare il comportamento quando è disabilitato, compilare utilizzando `cl /EHsc /W4 /Zc:noexceptTypes- noexceptTypes.cpp`.

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

Quando viene compilato usando l'impostazione predefinita **/Zc: noexceptTypes**, l'esempio genera gli avvisi elencati. Per aggiornare il codice, usare invece il comando seguente:

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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc: noexceptTypes** o **/Zc: noexceptTypes,** quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)\
\ [noexcept](../../cpp/noexcept-cpp.md)
[Specifiche di eccezione (throw)](../../cpp/exception-specifications-throw-cpp.md)
