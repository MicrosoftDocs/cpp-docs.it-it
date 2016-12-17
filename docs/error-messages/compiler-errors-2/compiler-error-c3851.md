---
title: "Errore del compilatore C3851 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3851"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3851"
ms.assetid: da30c21c-33aa-4439-8fb3-2f5021ea4985
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3851
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'char': non è possibile usare nomi di caratteri universali per indicare caratteri nel set di caratteri di base  
  
 Nel codice compilato come C\+\+, non è possibile usare un nome di carattere universale che rappresenta un carattere nel set di caratteri di origine di base esterno al valore letterale di stringa o carattere. Per altre informazioni, vedere [Set di caratteri](../../cpp/character-sets2.md). Nel codice compilato come C, non è possibile usare nomi di caratteri universali per i caratteri compresi nell'intervallo 0x20\-0x7f, inclusivo, ad eccezione di 0x24 \('$'\), 0x40 \('@'\), o 0x60 \('\`'\).  
  
 Gli esempi seguenti generano l'errore C3851 e mostrano come correggerlo:  
  
```cpp  
// C3851.cpp int main() { int test1_\u0041 = 0;   // C3851, \u0041 = 'A' in basic character set int test2_A = 0;        // OK }  
```