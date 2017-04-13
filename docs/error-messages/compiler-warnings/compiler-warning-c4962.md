---
title: Avviso del compilatore C4962 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4962
dev_langs:
- C++
helpviewer_keywords:
- C4962
ms.assetid: 62b156fe-04e5-4a6e-9339-6ab148185f87
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 9daeb42e0a6b0eea6d0f3e98656e3b0bd2416142
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-c4962"></a>Avviso del compilatore C4962
'function': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati di profilo"  
  
 Una funzione non è stata compilata con /LTCG:PGO perché i dati del conteggio (profilo) per la funzione non erano affidabili. Ripetere la profilatura per rigenerare il file PGC che contiene i dati del profilo non affidabili per tale funzione.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per ulteriori informazioni, vedere [gli avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
