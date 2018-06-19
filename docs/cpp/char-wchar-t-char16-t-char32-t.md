---
title: Char, wchar_t, char16_t, char32_t | Documenti Microsoft
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
ms.openlocfilehash: 2dc38eb9742459139747578a8227bdfaee8bb8a2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32413895"
---
# <a name="char-wchart-char16t-char32t"></a>char, wchar_t, char16_t, char32_t
I tipi di **char**, **wchar_t**, **char16_t** e **char32_t** tipi incorporati che rappresentano caratteri alfanumerici così come glifi non alfanumerici e caratteri non stampabili.

## <a name="syntax"></a>Sintassi

```cpp  
char     ch1{ 'a' };  // or { u8'a' }   
wchar_t  ch2{ L'a' };    
char16_t ch3{ u'a' };    
char32_t ch4{ U'a' };  
```  
  
## <a name="remarks"></a>Note

Il **char** tipo è il tipo di carattere originale in C e C++. Il tipo **unsigned char** viene spesso utilizzato per rappresentare un *byte*, che non è un tipo incorporato in C++. Il **char** tipo può essere utilizzato per archiviare i caratteri del set di caratteri ASCII o uno dei set di caratteri ISO-8859 e singoli byte di caratteri multibyte, ad esempio Shift-JIS o la codifica UTF-8 del set di caratteri Unicode. Stringhe di **char** tipo sono dette *restringere* stringhe, anche quando utilizzato per codificare i caratteri multibyte. Nel compilatore Microsoft, **char** è un tipo a 8 bit.

Il **wchar_t** è un tipo definito dall'implementazione di caratteri wide. Rappresenta un carattere wide a 16 bit utilizzato per archiviare la codifica come UTF-16LE, Unicode nel compilatore Microsoft, il tipo di carattere nativo nei sistemi operativi Windows. Le versioni a caratteri "wide" di utilizzo di funzioni della libreria di Universal C Runtime (UCRT) **wchar_t** e il relativo puntatore e una matrice di tipi come parametri e valori restituiti, come le versioni a caratteri "wide" dell'API Windows native.

Il **char16_t** e **char32_t** tipi rappresentano caratteri wide a 16 bit e a 32 bit, rispettivamente. Unicode codificati come UTF-16 possono essere archiviati nel **char16_t** tipo e Unicode codificato come UTF-32 possono essere archiviati nel **char32_t** tipo. Stringhe di questi tipi e **wchar_t** sono tutti indicati come *wide* stringhe, anche se spesso il termine si riferisce in modo specifico per le stringhe di **wchar_t** tipo.

Nella libreria C++ standard, il `basic_string` tipo è specializzato per stringhe "narrow" e "wide". Utilizzare `std::string` quando i caratteri sono di tipo **char**, `std::u16string` quando i caratteri sono di tipo **char16_t**, `std::u32string` quando i caratteri sono di tipo **char32_t** , e `std::wstring` quando i caratteri sono di tipo **wchar_t**. Altri tipi che rappresentano il testo, inclusi `std::stringstream` e `std::cout` sono specializzati per stringhe "narrow" e "wide".  
  
