---
description: 'Altre informazioni su:/Zc: alignedNew (C++ 17 allocazione over allineata)'
title: /Zc:alignedNew (allocazione sovrallineata C++17)
ms.date: 05/18/2019
f1_keywords:
- /Zc:alignedNew
helpviewer_keywords:
- /Zc:alignedNew
- Zc:alignedNew
- -Zc:alignedNew
ms.openlocfilehash: 149272e29a9b54f5b3ec7cddaaab8d3d969c0287
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114741"
---
# <a name="zcalignednew-c17-over-aligned-allocation"></a>/Zc:alignedNew (allocazione sovrallineata C++17)

Abilitare il supporto per C++ 17 allineato in modo allineato **`new`** e allocazione di memoria dinamica allineata a limiti superiori rispetto all'impostazione predefinita per il tipo allineato standard massimo, **Max \_ align \_ t**.

## <a name="syntax"></a>Sintassi

> **/Zc: alignedNew** \[ -]

## <a name="remarks"></a>Commenti

Il compilatore e la libreria MSVC supportano l'assegnazione della memoria dinamica sovrallineata standard di C++17. Quando si specifica l'opzione **/Zc: alignedNew** , un'allocazione dinamica come `new Example;` rispetta l'allineamento dell' *esempio* anche quando è maggiore di `max_align_t` , l'allineamento più grande necessario per qualsiasi tipo fondamentale. Quando l'allineamento del tipo allocato non è superiore all'allineamento garantito dall'operatore originale **`new`** , disponibile come valore della macro **\_ \_ predefinita STDCPP il \_ \_ nuovo \_ \_ \_ allineamento predefinito**, l'istruzione `new Example;` genera una chiamata a `::operator new(size_t)` come in c++ 14. Quando l'allineamento è maggiore di **\_ \_ STDCPP \_ default \_ New \_ Alignment \_ \_**, l'implementazione ottiene la memoria usando `::operator new(size_t, align_val_t)` . In modo analogo l'eliminazione dei tipi sovrallineati chiama `::operator delete(void*, align_val_t)` o la firma di eliminazione con dimensioni `::operator delete(void*, size_t, align_val_t)`.

L'opzione **/Zc:alignedNew** è disponibile solo quando è abilitata [/std:c++17](std-specify-language-standard-version.md) o [/std:c++latest](std-specify-language-standard-version.md). In **/std:c++17** o in **/std:c++latest**, **/Zc:alignedNew** è abilitata per impostazione predefinita per la conformità con lo standard ISO C++17. Se l'unico motivo per cui si implementa l'operatore **`new`** e **`delete`** è quello di supportare allocazioni iperallineate, questo codice potrebbe non essere più necessario in modalità c++ 17. Per disattivare questa opzione e ripristinare il comportamento C++ 14 di **`new`** e **`delete`** quando si usa **/std:: c++ 17** o **/std: C + + Latest**, specificare **/Zc: alignedNew-**. Se si implementa operator **`new`** e **`delete`** , ma non si è pronti per implementare l'operatore overaligned **`new`** e gli **`delete`** Overload che hanno il `align_val_t` parametro, usare l'opzione **/Zc: alignedNew-** per impedire che il compilatore e la libreria standard generino chiamate agli overload sovraallineati. L'opzione [/permissive-](permissive-standards-conformance.md) non modifica l'impostazione predefinita **/Zc:alignedNew**.

Il supporto per **/Zc: alignednew** è disponibile a partire da Visual Studio 2017 versione 15.5.

## <a name="example"></a>Esempio

In questo esempio viene illustrato **`new`** il comportamento di operator e Operator **`delete`** quando si imposta l'opzione **/Zc: alignedNew** .

```cpp
// alignedNew.cpp
// Compile by using: cl /EHsc /std:c++17 /W4 alignedNew.cpp
#include <iostream>
#include <malloc.h>
#include <new>

// "old" unaligned overloads
void* operator new(std::size_t size) {
    auto ptr = malloc(size);
    std::cout << "unaligned new(" << size << ") = " << ptr << '\n';
    return ptr ? ptr : throw std::bad_alloc{};
}

void operator delete(void* ptr, std::size_t size) {
    std::cout << "unaligned sized delete(" << ptr << ", " << size << ")\n";
    free(ptr);
}

void operator delete(void* ptr) {
    std::cout << "unaligned unsized delete(" << ptr << ")\n";
    free(ptr);
}

// "new" over-aligned overloads
void* operator new(std::size_t size, std::align_val_t align) {
    auto ptr = _aligned_malloc(size, static_cast<std::size_t>(align));
    std::cout << "aligned new(" << size << ", " <<
        static_cast<std::size_t>(align) << ") = " << ptr << '\n';
    return ptr ? ptr : throw std::bad_alloc{};
}

void operator delete(void* ptr, std::size_t size, std::align_val_t align) {
    std::cout << "aligned sized delete(" << ptr << ", " << size <<
        ", " << static_cast<std::size_t>(align) << ")\n";
    _aligned_free(ptr);
}

void operator delete(void* ptr, std::align_val_t align) {
    std::cout << "aligned unsized delete(" << ptr <<
        ", " << static_cast<std::size_t>(align) << ")\n";
    _aligned_free(ptr);
}

struct alignas(256) OverAligned {}; // warning C4324, structure is padded

int main() {
    delete new int;
    delete new OverAligned;
}
```

Questo output è tipico per le compilazioni a 32 bit. I valori del puntatore variano a seconda del punto in cui l'applicazione viene eseguita in memoria.

```Output
unaligned new(4) = 009FD0D0
unaligned sized delete(009FD0D0, 4)
aligned new(256, 256) = 009FE800
aligned sized delete(009FE800, 256, 256)
```

Per informazioni sui problemi di conformità in Visual C++, vedere [Comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc:alignedNew** o **/Zc:alignedNew-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedi anche

[/Zc (Conformità)](zc-conformance.md)
