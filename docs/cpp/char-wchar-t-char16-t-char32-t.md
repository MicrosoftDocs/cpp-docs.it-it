---
title: "char, wchar_t, char16_t, char32_t | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "char_cpp"
  - "char16_t_cpp"
  - "whchar_t_cpp"
  - "char32_t_cpp"
dev_langs: 
  - "C++"
ms.assetid: 6b33e9f5-455b-4e49-8f12-a150cbfe2e5b
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# char, wchar_t, char16_t, char32_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I tipi char, wchar\_t, char16\_t e char32\_t vengono compilati in tipi che rappresentano caratteri alfanumerici, glifi non alfanumerici e caratteri non stampabili.  char ha dimensioni pari a otto bit, wchar\_t e char16\_t pari a 16 bit e char32\_t a 32 bit.  
  
## Sintassi  
  
```vb  
char     ch1{ 'a' };  
wchar_t  ch2{ 'a' }; // or {L'a'}  
char16_t ch3{ L'a' };// or {L'a'}  
char32_t ch4{ L'a' };// or {L'a'}  
```  
  
## Note  
 Il tipo `char` è il tipo di carattere originale in C e C\+\+.  Può essere usato per archiviare caratteri dal set di caratteri ASCII, da qualsiasi set di caratteri ISO\-8859 o dal set di caratteri UTF\-8.  Il tipo `unsigned char` viene spesso usato per rappresentare un *byte*, che non è un tipo incorporato in C\+\+.  Il tipo char non è adatto per il testo in molte lingue.  In generale, è consigliabile che i programmi moderni usino uno dei tipi di caratteri "wide" per rappresentare il testo.  Unicode è  
  
 Nella libreria standard C\+\+ il tipo basic\_string è specializzato per stringhe "narrow" e "wide".  Usare std::string quando i caratteri sono di tipo char e std::wstring quando i caratteri sono di tipo wchar\_t.  Altri tipi che rappresentano il testo, inclusi std::stringstream e std::cout, sono specializzati per stringhe "narrow" e "wide".  
  
## Requisiti