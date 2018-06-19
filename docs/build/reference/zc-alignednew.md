---
title: /Zc:alignedNew (C++ 17 eccessiva allocazione allineata) | Documenti Microsoft
ms.date: 02/28/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Zc:alignedNew
dev_langs:
- C++
helpviewer_keywords:
- /Zc:alignedNew
- Zc:alignedNew
- -Zc:alignedNew
author: corob-msft
ms.author: corob
ms.openlocfilehash: 5f9527d63a9843bd4df90520e5b4759126d72fe1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378388"
---
# <a name="zcalignednew-c17-over-aligned-allocation"></a>/Zc:alignedNew (C++ 17 eccessiva allocazione allineata)

Abilitare il supporto per C++ 17 eccessiva allineato **nuova**, allocazione dinamica della memoria allineate su limiti di dimensioni maggiori rispetto al valore predefinito per il dimensione massima standard tipo allineato, **max\_allineare\_t**.

## <a name="syntax"></a>Sintassi

> **/Zc:alignedNew**[-]

## <a name="remarks"></a>Note

Visual Studio versione 15,5 Abilita supporto del compilatore e librerie per C++ 17 standard eccessiva allineato allocazione dinamica della memoria. Quando il **/Zc:alignedNew** opzione è specificata, un'allocazione dinamica, ad esempio `new Example;` rispetta l'allineamento del *esempio* anche quando è maggiore di `max_align_t`, al maggiore allineamento obbligatorio per qualsiasi tipo fondamentale. Quando l'allineamento del tipo allocato è non più di cui è garantita dall'operatore originale **nuova**, disponibile come valore della macro predefinita  **\_ \_STDCPP\_predefinito \_NEW\_allineamento\_\_**, l'istruzione `new Example;` comporta una chiamata a `::operator new(size_t)` come avveniva in C++ 14. Quando l'allineamento è maggiore di  **\_ \_STDCPP\_predefinito\_NEW\_allineamento\_\_**, l'implementazione ottiene invece la memoria utilizzando `::operator new(size_t, align_val_t)`. Analogamente, l'eliminazione di tipi eccessivamente allineati richiama `::operator delete(void*, align_val_t)` o eliminare le dimensioni firma `::operator delete(void*, size_t, align_val_t)`.

Il **/Zc:alignedNew** opzione è disponibile solo quando [/std:c + + 17](std-specify-language-standard-version.md) o [/std:c + + più recente](std-specify-language-standard-version.md) è abilitata. In **/std:c + + 17** o **/std:c + + più recente**, **/Zc:alignedNew** è abilitata per impostazione predefinita per renderlo conforme allo standard C++ 17 ISO. Se l'unico motivo si implementa l'operatore **nuova** e **eliminare** per supportare l'eccesso allineate allocazioni, potrebbe essere necessario non è più il codice in modalità di C++ 17. Per disattivare questa opzione e ripristinare il comportamento 14 C++ di **nuova** e **eliminare** quando **/std::c + + 17** o **/std:c + + più recente** viene specificato, specificare **/Zc:alignedNew-**. Se si implementa l'operatore **nuova** e **eliminare** ma non si è pronti per implementare l'operatore eccessiva allineato **nuova** e **eliminare** gli overload che hanno il `align_val_t` parametro, utilizzare il **/Zc:alignedNew-** opzione per impedire il compilatore e la libreria Standard di generazione di chiamate a overload eccessiva allineati. Il [/ permissiva-](permissive-standards-conformance.md) opzione non modifica l'impostazione predefinita **/Zc:alignedNew**.

## <a name="example"></a>Esempio

Questo esempio viene illustrato come operatore **nuova** e operatore **eliminare** comportamento quando il **/Zc:alignedNew** opzione è impostata.

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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc:alignedNew** o **/Zc:alignedNew-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)  
