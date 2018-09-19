---
title: Char, wchar_t, char16_t, char32_t | Microsoft Docs
ms.custom: ''
ms.date: 02/14/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- char_cpp
- char16_t_cpp
- wchar_t_cpp
- char32_t_cpp
dev_langs:
- C++
ms.assetid: 6b33e9f5-455b-4e49-8f12-a150cbfe2e5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9855dc406c56f82eb3ed87248316103397e44007
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112655"
---
# <a name="char-wchart-char16t-char32t"></a>char, wchar_t, char16_t, char32_t

I tipi **char**, **wchar_t**, **char16_t** e **char32_t** sono tipi predefiniti che rappresentano caratteri alfanumerici, nonché glifi non alfanumerici e caratteri non stampabili.

## <a name="syntax"></a>Sintassi

```cpp
char     ch1{ 'a' };  // or { u8'a' }
wchar_t  ch2{ L'a' };
char16_t ch3{ u'a' };
char32_t ch4{ U'a' };
```

## <a name="remarks"></a>Note

Il **char** tipo era il tipo di carattere originale in C e C++. Il tipo **unsigned char** viene spesso utilizzata per rappresentare un *byte*, che non è un tipo incorporato in C++. Il **char** tipo può essere utilizzato per archiviare caratteri dal set di caratteri ASCII o uno qualsiasi dei set di caratteri ISO-8859 e singoli byte di caratteri multibyte, ad esempio Shift-JIS o la codifica UTF-8 del set di caratteri Unicode. Le stringhe dei **char** tipo sono dette *restringere* stringhe, anche quando si usa per codificare i caratteri multibyte. Nel compilatore Microsoft, **char** è un tipo a 8 bit.

Il **wchar_t** tipo è un tipo definito dall'implementazione di caratteri "wide". Rappresenta un carattere wide a 16 bit usato per archiviare codificata come UTF-16LE, Unicode nel compilatore Microsoft, il tipo di caratteri nativi nei sistemi operativi Windows. Le versioni a caratteri wide dell'utilizzo di funzioni della libreria di Universal C Runtime (UCRT) **wchar_t** e relativo puntatore e la matrice dei tipi come parametri e valori restituiti, come eseguire le versioni a caratteri "wide" dell'API Windows native.

Il **char16_t** e **char32_t** tipi rappresentano caratteri wide a 16 bit e a 32 bit, rispettivamente. Unicode codificato come UTF-16 possono essere archiviati nel **char16_t** tipo e Unicode codificato come UTF-32 possono essere archiviati nel **char32_t** tipo. Le stringhe di questi tipi e **wchar_t** sono tutti indicati come *wide* stringhe, anche se spesso il termine si riferisce in modo specifico per le stringhe dei **wchar_t** tipo.

Nella libreria standard C++, il `basic_string` tipo specializzato per stringhe "narrow" e wide. Uso `std::string` quando i caratteri sono di tipo **char**, `std::u16string` quando i caratteri sono di tipo **char16_t**, `std::u32string` quando i caratteri sono di tipo **char32_t** , e `std::wstring` quando i caratteri sono di tipo **wchar_t**. Altri tipi che rappresentano il testo, inclusi `std::stringstream` e `std::cout` sono specializzati per stringhe narrow e "wide".