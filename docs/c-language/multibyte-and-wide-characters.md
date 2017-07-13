---
title: "Caratteri multibyte e wide | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codici carattere [C++], multibyte"
  - "codici carattere [C++], wide"
  - "dati di tipo carattere [C]"
  - "caratteri [C++], codici"
  - "caratteri [C++], wide"
  - "globalizzazione [C++], set di caratteri"
  - "applicazioni internazionali [C++], visualizzazione di caratteri"
  - "caratteri multibyte [C++]"
  - "tipi [C], carattere"
  - "Unicode [C++], set di caratteri \"wide\""
  - "caratteri wide [C++]"
ms.assetid: 1943c469-200d-4724-b18f-781d70520f9e
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Caratteri multibyte e wide
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un carattere multibyte è un carattere composto da sequenze di uno o più byte.  Ogni sequenza di byte rappresenta un singolo carattere nel set di caratteri esteso.  I caratteri multibyte vengono utilizzati nei set di caratteri, ad esempio Kanji.  
  
 I caratteri "wide" sono codici carattere multilingue costituiti sempre da 16 bit.  Il tipo per le costanti carattere è `char`, mentre per i caratteri "wide" il tipo è `wchar_t`.  Poiché i caratteri "wide" vengono sempre rappresentati con dimensione fissa, l'utilizzo di tali caratteri semplifica la programmazione con i set di caratteri internazionali.  
  
 Il valore letterale stringa a caratteri "wide" `L"hello"` diventa una matrice di sei Integer di tipo `wchar_t`.  
  
```  
{L'h', L'e', L'l', L'l', L'o', 0}  
```  
  
 La specifica Unicode è una specifica per caratteri "wide".  Le routine di libreria di runtime per la conversione tra caratteri multibyte e "wide" includono `mbstowcs`, `mbtowc`, `wcstombs` e `wctomb`.  
  
## Vedere anche  
 [Identificatori C](../c-language/c-identifiers.md)