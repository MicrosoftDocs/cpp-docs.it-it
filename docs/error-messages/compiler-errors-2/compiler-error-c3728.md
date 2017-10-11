---
title: Errore del compilatore C3728 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3728
dev_langs:
- C++
helpviewer_keywords:
- C3728
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 100ef8275f938406a4f6a7d3909e04f40ce1d16b
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3728"></a>Errore del compilatore C3728
'event': evento privo di un metodo di generazione  
  
 I metadati creati con un linguaggio, ad esempio c#, che non consente un evento da generare dall'esterno della classe in cui è stato definito, è stato incluso il [#using](../../preprocessor/hash-using-directive-cpp.md) direttiva e un programma Visual C++ utilizza la programmazione CLR ha tentata di Genera l'evento.  
  
 Per generare un evento in un programma sviluppato in un linguaggio quale c#, la classe che contiene l'evento deve anche definire un metodo pubblico che genera l'evento.
