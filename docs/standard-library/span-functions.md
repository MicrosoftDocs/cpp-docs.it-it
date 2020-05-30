---
title: '&lt;&gt;funzioni span'
ms.date: 05/28/2020
f1_keywords:
- span/std::span::as_bytes
- span/std::as_writable_bytes
helpviewer_keywords:
- std::span [C++], as_writable_bytes
- std::as_bytes [C++]
ms.openlocfilehash: 6573ea061673091113244ada0ab0cd84bdd7db75
ms.sourcegitcommit: 1a8fac06478da8bee1f6d70e25afbad94144af1a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/30/2020
ms.locfileid: "84226118"
---
# <a name="ltspangt-functions"></a>&lt;&gt;funzioni span

L' \<span> intestazione include le funzioni non membro seguenti che operano su oggetti **span** .

| **Funzioni non membro** | **Descrizione** |
|-|-|
|[as_bytes](#as_bytes) | Ottiene una visualizzazione di sola lettura della rappresentazione dell'oggetto degli elementi nell'intervallo. |
|[as_writable_bytes](#as_writable_bytes) | Ottenere una visualizzazione di lettura/scrittura della rappresentazione dell'oggetto degli elementi nell'intervallo. |

## <a name="as_bytes"></a>`as_bytes`

Ottiene una visualizzazione di sola lettura della rappresentazione dell'oggetto degli elementi nell'intervallo.

```cpp
template <class T, size_t Extent>
auto as_bytes(span<T, Extent> s) noexcept;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo degli elementi nell'intervallo.

*Extent*\
Numero di elementi nell'intervallo (se noto in fase di compilazione), in caso contrario `dynamic_extent` indicante che il numero di elementi non è noto fino al runtime.

*s*\
Intervallo per il quale ottenere la rappresentazione non elaborata di.

### <a name="return-value"></a>Valore restituito

Oggetto `span<const byte, S>` al primo elemento archiviato nell'intervallo in cui `S` è`{reinterpret_cast<const std::byte*>(s.data()), s.size_bytes()}`

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = std::as_bytes(mySpan);
}
```

## <a name="as_writable_bytes"></a>`as_writable_bytes`

Se `T` non è `const` , ottiene una visualizzazione di lettura/scrittura della rappresentazione di byte non elaborati degli elementi nell'intervallo.

```cpp
template <class T, size_t Extent>
auto as_writable_bytes(span<T, Extent> s) noexcept;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo degli elementi nell'intervallo.

*Extent*\
Numero di elementi nell'intervallo (se noto in fase di compilazione), in caso contrario `dynamic_extent` indicante che il numero di elementi non è noto fino al runtime.

*s*\
Intervallo per il quale ottenere la rappresentazione non elaborata di.

### <a name="return-value"></a>Valore restituito

Oggetto `span<byte, S>` al primo elemento archiviato nell'intervallo in cui `S` è`{reinterpret_cast<std::byte*>(s.data()), s.size_bytes()}`

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = as_writable_bytes(mySpan);
}
```

## <a name="see-also"></a>Vedere anche

[\<span>](span.md)
