---
title: Char, wchar_t, char16_t, char32_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- char_cpp
- char16_t_cpp
- wchar_t_cpp
- char32_t_cpp
dev_langs: C++
ms.assetid: 6b33e9f5-455b-4e49-8f12-a150cbfe2e5b
caps.latest.revision: "2"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c01d4718bbc1781ea4705945bb90874384e09058
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="char-wchart-char16t-char32t"></a>char, wchar_t, char16_t, char32_t
I tipi char, wchar_t, char16_t e char32_t vengono compilati in tipi che rappresentano caratteri alfanumerici, glifi non alfanumerici e caratteri non stampabili. char ha dimensioni pari a otto bit, wchar_t e char16_t pari a 16 bit e char32_t a 32 bit.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
char     ch1{ 'a' };    
wchar_t  ch2{ 'a' }; // or {L'a'}    
char16_t ch3{ L'a' };// or {L'a'}    
char32_t ch4{ L'a' };// or {L'a'}  
```  
  
## <a name="remarks"></a>Note  
 Il tipo `char` è il tipo di carattere originale in C e C++. Può essere usato per archiviare caratteri dal set di caratteri ASCII, da qualsiasi set di caratteri ISO-8859 o dal set di caratteri UTF-8. Il tipo `unsigned char` viene spesso utilizzato per rappresentare un *byte* che non è un tipo incorporato in C++. Il tipo char non è adatto per il testo in molte lingue. In generale, è consigliabile che i programmi moderni usino uno dei tipi di caratteri "wide" per rappresentare il testo. Unicode è  
  
 Nella libreria standard C++ il tipo basic_string è specializzato per stringhe "narrow" e "wide". Usare std::string quando i caratteri sono di tipo char e std::wstring quando i caratteri sono di tipo wchar_t. Altri tipi che rappresentano il testo, inclusi std::stringstream e std::cout, sono specializzati per stringhe "narrow" e "wide".  
  
