---
title: "Errore del compilatore C3850 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3850"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3850"
ms.assetid: 028f3a37-f3ad-4ebc-9168-3cdea47524d4
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C3850
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'char': uno dei nomi di caratteri universali specifica un carattere non valido  
  
 I caratteri rappresentati come nomi di caratteri universali devono rappresentare punti di codice Unicode validi nell'intervallo 0\-10FFFF. Un nome di carattere universale non può contenere un valore nell'intervallo Unicode surrogato, D800\-DFFF, né una coppia di surrogati codificata. Il compilatore genera automaticamente la coppia di surrogati da un punto di codice valido.  
  
 Nel codice compilato come C, un nome di carattere universale non può rappresentare un carattere compreso nell'intervallo 0000\-009F, inclusivo, con le eccezioni di 0024 \('$'\), 0040 \('@'\) e 0060 \('\`'\).  
  
 Nel codice compilato come C\+\+, un nome di carattere universale può usare qualsiasi punto di codice Unicode valido in un valore letterale stringa o carattere. Al di fuori di un valore letterale, un nome di carattere universale non può rappresentare un carattere di controllo negli intervalli 0000\-001F o 007F\-009F, entrambi inclusivi, o un membro del set di caratteri di origine di base.  Per altre informazioni, vedere [Set di caratteri](../../cpp/character-sets2.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3850 e mostra come risolverlo:  
  
```cpp  
// C3850.cpp int main() { int \u0019 = 0;   // C3850, not in allowed range for an identifier const wchar_t * wstr_bad  = L"\UD840DC8A"; // C3850, UCN is surrogate pair const wchar_t * wstr_good = L"\U0002008A"; // Okay, UCN is valid code point }  
```