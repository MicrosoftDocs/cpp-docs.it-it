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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d20a0772a38dadc5956e1d174a23ecb0a8593647
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3728"></a>Errore del compilatore C3728
'event': evento privo di un metodo di generazione  
  
 I metadati creati con un linguaggio, ad esempio c#, che non consente un evento da generare dall'esterno della classe in cui è stato definito, è stato incluso il [#using](../../preprocessor/hash-using-directive-cpp.md) direttiva e un programma Visual C++ utilizza la programmazione CLR ha tentata di Genera l'evento.  
  
 Per generare un evento in un programma sviluppato in un linguaggio quale c#, la classe che contiene l'evento deve anche definire un metodo pubblico che genera l'evento.