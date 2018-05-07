---
title: Errore del compilatore C3728 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3728
dev_langs:
- C++
helpviewer_keywords:
- C3728
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bae204db616db9e7d7e04cfd62d53374b0793aa9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3728"></a>Errore del compilatore C3728
'event': evento privo di un metodo di generazione  
  
 I metadati creati con un linguaggio, ad esempio c#, che non consente un evento da generare dall'esterno della classe in cui è stato definito, è stato incluso il [#using](../../preprocessor/hash-using-directive-cpp.md) direttiva e un programma Visual C++ utilizza la programmazione CLR ha tentata di Genera l'evento.  
  
 Per generare un evento in un programma sviluppato in un linguaggio quale c#, la classe che contiene l'evento deve anche definire un metodo pubblico che genera l'evento.