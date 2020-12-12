---
description: 'Altre informazioni su: char, wchar_t, char16_t, char32_t'
title: char, wchar_t, char16_t, char32_t
ms.date: 02/14/2018
ms.assetid: 6b33e9f5-455b-4e49-8f12-a150cbfe2e5b
ms.openlocfilehash: f8bab56bf8a2cebe8409c9dc4ceecf931ec83260
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278792"
---
# <a name="char-wchar_t-char16_t-char32_t"></a>char, wchar_t, char16_t, char32_t

I tipi **`char`** , **`wchar_t`** **`char16_t`** e **`char32_t`** sono tipi incorporati che rappresentano caratteri alfanumerici, nonché glifi non alfanumerici e caratteri non stampabili.

## <a name="syntax"></a>Sintassi

```cpp
char     ch1{ 'a' };  // or { u8'a' }
wchar_t  ch2{ L'a' };
char16_t ch3{ u'a' };
char32_t ch4{ U'a' };
```

## <a name="remarks"></a>Osservazioni

Il **`char`** tipo è il tipo di carattere originale in C e C++. Il tipo **`unsigned char`** viene spesso usato per rappresentare un *byte*, che non è un tipo incorporato in C++. Il **`char`** tipo può essere usato per archiviare caratteri dal set di caratteri ASCII o da uno qualsiasi dei set di caratteri ISO-8859 e da singoli byte di caratteri multibyte, ad esempio Shift-JIS o la codifica UTF-8 del set di caratteri Unicode. Le stringhe di **`char`** tipo sono denominate stringhe *strette* , anche quando vengono usate per codificare i caratteri multibyte. Nel compilatore Microsoft **`char`** è un tipo a 8 bit.

Il **`wchar_t`** tipo è un tipo di carattere wide definito dall'implementazione. Nel compilatore Microsoft, rappresenta un carattere wide a 16 bit utilizzato per archiviare Unicode codificato come UTF-16LE, il tipo di carattere nativo nei sistemi operativi Windows. Le versioni a caratteri wide delle funzioni della libreria di Universal C Runtime (UCRT) usano **`wchar_t`** e i relativi tipi di puntatore e matrice come parametri e valori restituiti, così come le versioni a caratteri wide dell'API Windows nativa.

I **`char16_t`** **`char32_t`** tipi e rappresentano rispettivamente caratteri wide a 16 bit e a 32 bit. Unicode codificata come UTF-16 può essere archiviato nel **`char16_t`** tipo e Unicode codificato come UTF-32 può essere archiviato nel **`char32_t`** tipo. Le stringhe di questi tipi e **`wchar_t`** sono tutte denominate stringhe *Wide* , sebbene il termine faccia spesso riferimento in modo specifico alle stringhe di **`wchar_t`** tipo.

Nella libreria standard C++, il `basic_string` tipo è specializzato per le stringhe narrow e Wide. Utilizzare `std::string` quando i caratteri sono di tipo **`char`** , `std::u16string` quando i caratteri sono di tipo **`char16_t`** , `std::u32string` quando i caratteri sono di tipo **`char32_t`** e `std::wstring` quando i caratteri sono di tipo **`wchar_t`** . Altri tipi che rappresentano testo, inclusi `std::stringstream` e `std::cout` hanno specializzazioni per le stringhe narrow e Wide.
