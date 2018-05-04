---
title: '-Zc: noexceptTypes (C++ 17 noexcept regole) | Documenti Microsoft'
ms.date: 11/14/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Zc:noexceptTypes
dev_langs:
- C++
helpviewer_keywords:
- /Zc:noexceptTypes
- Zc:noexceptTypes
- -Zc:noexceptTypes
ms.assetid: 1cbf7e3c-0f82-4f91-84dd-612bcf26d2c6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 25ad2a662af2cda49e3e8dd8c769fa75dafee94b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="zcnoexcepttypes-c17-noexcept-rules"></a>/Zc:noexceptTypes (C++ 17 noexcept regole)

Rende la standard C++ 17 `throw()` come alias per `noexcept`, rimuove `throw(<type list>)` e `throw(...)`, nonché alcuni tipi da includere `noexcept`. Ciò può causare un numero di problemi di compatibilità di origine nel codice conforme a C++ 14 o versioni precedenti. Il **/Zc:noexceptTypes** opzione è possibile specificare la conformità per la standard C++ 17 o consentire di C++ 14 e versioni precedente il comportamento durante la compilazione di codice in modalità di C++ 17.

## <a name="syntax"></a>Sintassi

> **/Zc:noexceptTypes**[-]

## <a name="remarks"></a>Note

Quando il **/Zc:noexceptTypes** è specificata l'opzione, il compilatore è conforme al standard C++ 17 e considera [throw ()](../../cpp/exception-specifications-throw-cpp.md) come alias per [noexcept](../../cpp/noexcept-cpp.md), rimuove `throw(<type list>)`e `throw(...)`, nonché alcuni tipi da includere `noexcept`. Il **/Zc:noexceptTypes** opzione è disponibile solo quando [/std:c + + 17](std-specify-language-standard-version.md) o [/std:latest](std-specify-language-standard-version.md) è abilitata. **/Zc:noexceptTypes** è abilitata per impostazione predefinita sia conforme a ISO standard c++17. Il [/ permissiva-](permissive-standards-conformance.md) opzione non influisce sul **/Zc:noexceptTypes**. Disattivare questa opzione specificando **/Zc:noexceptTypes-** per ripristinare il comportamento 14 C++ di `noexcept` quando **/std::C + + 17** o **/std::latest** specificato.

A partire da Visual Studio 2017 versione 15,5, il compilatore C++ individua più specifiche di eccezione non corrispondenti nelle dichiarazioni di C++ 17 modalità o quando il [/ permissiva-](permissive-standards-conformance.md) è specificata l'opzione.

Questo esempio viene illustrato il comportano dichiarazioni con un identificatore di eccezione quando il **/Zc:noexceptTypes** opzione è impostata o è disabilitato. Viene illustrato il comportamento quando è impostato, esegue la compilazione con `cl /EHsc /W4 noexceptTypes.cpp`. Per visualizzare il comportamento quando è disabilitata, esegue la compilazione con `cl /EHsc /W4 /Zc:noexceptTypes- noexceptTypes.cpp`.

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

Quando viene compilato utilizzando l'impostazione predefinita **/Zc:noexceptTypes**, l'esempio genera gli avvisi elencati. Per aggiornare il codice, utilizzare le operazioni seguenti:

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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc:noexceptTypes** o **/Zc:noexceptTypes-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)  
[noexcept](../../cpp/noexcept-cpp.md)  
[Specifiche di eccezione (generazione)](../../cpp/exception-specifications-throw-cpp.md)  
