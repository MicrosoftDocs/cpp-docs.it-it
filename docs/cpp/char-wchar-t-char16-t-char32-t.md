---
title: char, wchar_t, char16_t, char32_t
ms.date: 02/14/2018
ms.assetid: 6b33e9f5-455b-4e49-8f12-a150cbfe2e5b
ms.openlocfilehash: a518f24973aaddff59b97f104d9d912e4a2bedce
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447160"
---
# <a name="char-wchar_t-char16_t-char32_t"></a>char, wchar_t, char16_t, char32_t

I tipi **char**, **wchar_t**, **char16_t** e **char32_t** sono tipi incorporati che rappresentano caratteri alfanumerici, oltre a glifi non alfanumerici e caratteri non stampabili.

## <a name="syntax"></a>Sintassi

```cpp
char     ch1{ 'a' };  // or { u8'a' }
wchar_t  ch2{ L'a' };
char16_t ch3{ u'a' };
char32_t ch4{ U'a' };
```

## <a name="remarks"></a>Osservazioni

Il tipo **char** è il tipo di carattere originale in C C++e. Il tipo **unsigned char** viene spesso usato per rappresentare un *byte*, che non è un tipo incorporato in C++. Il tipo **char** può essere usato per archiviare caratteri dal set di caratteri ASCII o da uno qualsiasi dei set di caratteri ISO-8859 e da singoli byte di caratteri multibyte come Shift-JIS o la codifica UTF-8 del set di caratteri Unicode. Le stringhe di tipo **char** sono denominate stringhe *strette* , anche quando vengono usate per codificare i caratteri multibyte. Nel compilatore Microsoft **char** è un tipo a 8 bit.

Il tipo di **wchar_t** è un tipo di carattere wide definito dall'implementazione. Nel compilatore Microsoft, rappresenta un carattere wide a 16 bit utilizzato per archiviare Unicode codificato come UTF-16LE, il tipo di carattere nativo nei sistemi operativi Windows. Le versioni a caratteri wide delle funzioni della libreria UCRT (Universal C Runtime) usano **wchar_t** e i relativi tipi di puntatore e matrice come parametri e valori restituiti, così come le versioni a caratteri wide dell'API Windows nativa.

I tipi **char16_t** e **char32_t** rappresentano rispettivamente caratteri wide a 16 bit e a 32 bit. Il formato Unicode codificato come UTF-16 può essere archiviato nel tipo di **char16_t** e il formato Unicode codificato come utf-32 può essere archiviato nel tipo di **char32_t** . Le stringhe di questi tipi e **wchar_t** sono tutte denominate stringhe *Wide* , sebbene il termine faccia spesso riferimento in modo specifico alle stringhe di tipo **wchar_t** .

Nella libreria C++ standard, il tipo di `basic_string` è specializzato per le stringhe narrow e Wide. Utilizzare `std::string` quando i caratteri sono di tipo **char**, `std::u16string` quando i caratteri sono di tipo **char16_t**, `std::u32string` quando i caratteri sono di tipo **char32_t**e `std::wstring` quando i caratteri sono di tipo **wchar_t**. Altri tipi che rappresentano testo, inclusi `std::stringstream` e `std::cout` hanno specializzazioni per le stringhe narrow e Wide.