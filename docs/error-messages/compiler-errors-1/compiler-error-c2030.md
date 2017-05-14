---
title: Errore del compilatore C2030 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2030
dev_langs:
- C++
helpviewer_keywords:
- C2030
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
caps.latest.revision: 7
author: corob-msft
ms.author: corob
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 128bd124c2536d86c8b673b54abc4b5505526b41
ms.openlocfilehash: c76a4fc5de139c2cc9f6802fc66526f291b862a2
ms.contentlocale: it-it
ms.lasthandoff: 05/10/2017

---
# <a name="compiler-error-c2030"></a>Errore del compilatore C2030
un distruttore con accessibilità 'protected private' non può essere membro di una classe dichiarata 'sealed'  
  
 Una classe di Windows Runtime dichiarata `sealed` non può avere un distruttore privato protetto. Nei tipi sealed sono consentiti solo distruttori pubblici virtuali e privati non virtuali. Per ulteriori informazioni, vedere [le classi e struct](../../cppcx/ref-classes-and-structs-c-cx.md).  
  
 Per correggere l'errore, modificare l'accessibilità del distruttore.
