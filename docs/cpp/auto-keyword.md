---
title: parola chiave Auto | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- auto_cpp
dev_langs:
- C++
helpviewer_keywords:
- automatic storage class, auto keyword
- auto keyword
ms.assetid: 744a41c0-2510-4140-a1be-96257e722908
caps.latest.revision: 14
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 0413fd47b486cf1613b7c249b93e6a3507a5577c
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="auto-keyword"></a>Parola chiave auto
La parola chiave `auto` è un identificatore di dichiarazione. Tuttavia, lo standard C++ definisce per tale parola chiave un significato originale e uno rivisto. Prima di Visual C++ 2010, il `auto` parola chiave dichiara una variabile nel *automatica* classe di archiviazione, vale a dire una variabile con durata locale. A partire da Visual C++ 2010, il `auto` parola chiave dichiara una variabile il cui tipo viene dedotto dall'espressione di inizializzazione nella relativa dichiarazione. Il [/Zc: auto &#91;-&#93;](../build/reference/zc-auto-deduce-variable-type.md) l'opzione del compilatore controlla il significato del `auto` (parola chiave).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
auto declarator ;  
auto declarator initializer;  
```  
  
## <a name="remarks"></a>Note  
 Definizione delle modifiche apportate alle parole chiave `auto` nel linguaggio di programmazione C++, ma non nel linguaggio di programmazione C.  
  
 Negli argomenti seguenti viene descritta la parola chiave `auto` e l'opzione del compilatore corrispondente:  
  
-   [Auto](../cpp/auto-cpp.md) descrive la nuova definizione del `auto` (parola chiave).  
  
  
-   [/Zc: auto (deduzione del tipo di variabile)](../build/reference/zc-auto-deduce-variable-type.md) descrive l'opzione del compilatore che indica al compilatore la definizione di `auto` parola chiave da usare.  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)
