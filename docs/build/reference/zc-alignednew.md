---
title: '/Zc: alignednew (C++ 17 eccessiva allocazione allineata)'
ms.date: 02/28/2018
f1_keywords:
- /Zc:alignedNew
helpviewer_keywords:
- /Zc:alignedNew
- Zc:alignedNew
- -Zc:alignedNew
ms.openlocfilehash: e0d850d54611579288b81a334af4abdfab6e411c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57820338"
---
# <a name="zcalignednew-c17-over-aligned-allocation"></a>/Zc: alignednew (C++ 17 eccessiva allocazione allineata)

Abilitare il supporto per c++17 sovrallineati **nuove**, allineate su limiti di dimensioni maggiori rispetto al valore predefinito per il dimensione massima standard tipo allineato, allocazione di memoria dinamica **max\_allineare\_t**.

## <a name="syntax"></a>Sintassi

> **/Zc:alignedNew**[-]

## <a name="remarks"></a>Note

Visual Studio versione 15.5 Abilita supporto del compilatore e librerie per C + + 17 standard sovrallineati allocazione dinamica della memoria. Quando la **/Zc: alignednew** opzione è specificata, un'allocazione dinamica, ad esempio `new Example;` rispetta l'allineamento del *riportato* anche se è maggiore di `max_align_t`, al maggiore allineamento obbligatorio per qualsiasi tipo fondamentale. Quando l'allineamento del tipo allocato non sia maggiore rispetto a quello garantito dall'operatore originale **nuove**, disponibile come valore della macro predefinita  **\_ \_STDCPP\_predefinito \_NEW\_allineamento\_\_**, l'istruzione `new Example;` comporta una chiamata a `::operator new(size_t)` come accadeva in c++14. Quando l'allineamento è maggiore  **\_ \_STDCPP\_DEFAULT\_NEW\_allineamento\_\_**, l'implementazione ottiene invece la memoria usando `::operator new(size_t, align_val_t)`. Analogamente, l'eliminazione dei tipi eccessivamente allineati richiama `::operator delete(void*, align_val_t)` o le dimensioni eliminazione firma `::operator delete(void*, size_t, align_val_t)`.

Il **/Zc: alignednew** opzione è disponibile solo quando [/std: c + + 17](std-specify-language-standard-version.md) o [/std: c + + più recente](std-specify-language-standard-version.md) è abilitata. Sotto **/std: c + + 17** oppure **/std: c + + più recente**, **/Zc: alignednew** è abilitato per impostazione predefinita per essere conforme allo standard c++17 ISO. Se l'unico motivo si implementa l'operatore **nuove** e **eliminare** deve supportare le allocazioni sovrallineate, potrebbe essere non è più necessario il codice in modalità c++17. Per disattivare questa opzione e ripristinare il comportamento di c++14 di **nuove** e **eliminare** quando **/std::c + + 17** o **/std: c + + più recente** viene specificato, specificare **/Zc**. Se si implementa l'operatore **nuove** e **eliminare** ma non si è pronti per implementare l'operatore sovrallineato **nuova** e **Elimina** gli overload che hanno le `align_val_t` parametro, usare il **/Zc** opzione per impedire che il compilatore e della libreria Standard di generazione di chiamate agli overload eccessivamente allineati. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione non modifica l'impostazione predefinita **/Zc: alignednew**.

## <a name="example"></a>Esempio

Questo esempio viene illustrato come operatore **nuove** e l'operatore **eliminare** comportamento quando il **/Zc: alignednew** opzione è impostata.

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

Questo output è tipico per le compilazioni a 32 bit. Il puntatore valori variano in base in cui l'applicazione viene eseguita in memoria.

```Output
unaligned new(4) = 009FD0D0
unaligned sized delete(009FD0D0, 4)
aligned new(256, 256) = 009FE800
aligned sized delete(009FE800, 256, 256)
```

Per informazioni sui problemi di conformità in Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: alignednew** oppure **/Zc** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)
