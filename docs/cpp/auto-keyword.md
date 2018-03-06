---
title: auto Keyword | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 744a41c0-2510-4140-a1be-96257e722908
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 48c21ec8304fa5c56bb29f07eea4bec169fbda83
ms.sourcegitcommit: 4e01d36ffa64ea11bacf589f79d2f1df947e2510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2018
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