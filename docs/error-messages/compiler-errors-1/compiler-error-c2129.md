---
title: Errore del compilatore C2129 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2129
dev_langs:
- C++
helpviewer_keywords:
- C2129
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: e2c5bd1b79960f83ef6effeb064375d6b49e8f20
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2129"></a>Errore del compilatore C2129
funzione statica 'function' è dichiarata ma non definita  
  
 Viene fatto riferimento in avanti a un `static` funzione che non viene mai definita.  
  
 Oggetto `static` funzione deve essere definita nell'ambito file. Se la funzione viene definita in un altro file, deve essere dichiarato `extern`.
