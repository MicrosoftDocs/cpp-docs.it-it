---
title: /Zc:alignedNew (allocazione sovrallineata C++17)
ms.date: 05/18/2019
f1_keywords:
- /Zc:alignedNew
helpviewer_keywords:
- /Zc:alignedNew
- Zc:alignedNew
- -Zc:alignedNew
ms.openlocfilehash: 041f62bbbf5f7a2750960d21d1534cf6daf4b874
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335690"
---
# <a name="zcalignednew-c17-over-aligned-allocation"></a>/Zc:alignedNew (allocazione sovrallineata C++17)

Abilitare il supporto per l'allocazione di memoria dinamica sovrallineata **new** di C++17, allineata su limiti superiori all'impostazione predefinita per il tipo allineato standard di dimensioni massime, **max\_align\_t**.

## <a name="syntax"></a>Sintassi

> **/-c:alignedNew**\[-]

## <a name="remarks"></a>Osservazioni

Il compilatore e la libreria MSVC supportano l'assegnazione della memoria dinamica sovrallineata standard di C++17. Quando viene specificata l'opzione **//c:alignedNew,** un'allocazione dinamica, ad `new Example;` esempio rispetta l'allineamento di *Esempio* anche quando è maggiore di `max_align_t`, l'allineamento più grande richiesto per qualsiasi tipo fondamentale. Quando l'allineamento del tipo allocato non è superiore all'allineamento garantito dall'operatore originale **new**, `new Example;` disponibile come `::operator new(size_t)` valore della macro ** \_ \_predefinita STDCPP\_\_DEFAULT NEW\_ALIGNMENT\_**, l'istruzione genera una chiamata a come ha fatto in C. Quando l'allineamento è `::operator new(size_t, align_val_t)`maggiore di ** \_ \_STDCPP\_DEFAULT\_NEW\_ALIGNMENT\_**, l'implementazione ottiene invece la memoria utilizzando . In modo analogo l'eliminazione dei tipi sovrallineati chiama `::operator delete(void*, align_val_t)` o la firma di eliminazione con dimensioni `::operator delete(void*, size_t, align_val_t)`.

L'opzione **/Zc:alignedNew** è disponibile solo quando è abilitata [/std:c++17](std-specify-language-standard-version.md) o [/std:c++latest](std-specify-language-standard-version.md). In **/std:c++17** o in **/std:c++latest**, **/Zc:alignedNew** è abilitata per impostazione predefinita per la conformità con lo standard ISO C++17. Se l'unico motivo per cui si implementano gli operatori **new** e **delete** è il supporto delle allocazioni sovrallineate, questo codice potrebbe non essere più necessario nella modalità C++17. Per disattivare questa opzione e ripristinare il comportamento di C++14 per **new** e **delete** quando si usa **/std:c++17** o **/std:c++latest**, specificare **/Zc:alignedNew-**. Se si implementano gli operatori **new** e **delete** ma non si è pronti per l'implementazione degli overload degli operatori sovrallineati **new** e **delete** che hanno il parametro `align_val_t`, usare l'opzione **/Zc:alignedNew-** per impedire che il compilatore e la Libreria standard generino chiamate agli overload sovrallineati. L'opzione [/permissive-](permissive-standards-conformance.md) non modifica l'impostazione predefinita **/Zc:alignedNew**.

Il supporto per **/Zc: alignednew** è disponibile a partire da Visual Studio 2017 versione 15.5.

## <a name="example"></a>Esempio

Questo esempio illustra il comportamento degli operatori **new** e **delete** quando è impostata l'opzione **/Zc:alignedNew**.

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

1. Selezionare la pagina delle proprietà **Riga** > di**comando** delle proprietà di configurazione**C/C.** > 

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc:alignedNew** o **/Zc:alignedNew-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (Conformità)](zc-conformance.md)
