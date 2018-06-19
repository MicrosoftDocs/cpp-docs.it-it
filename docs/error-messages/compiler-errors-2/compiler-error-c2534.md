---
title: Errore del compilatore C2534 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2534
dev_langs:
- C++
helpviewer_keywords:
- C2534
ms.assetid: 481f9f54-5b51-4aa0-8eea-218f10807705
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bae52374e09852ffb68c5807353155d9928924eb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33228246"
---
# <a name="compiler-error-c2534"></a>Errore del compilatore C2534
'identifier': costruttore non può restituire un valore  
  
 Un costruttore non può restituire un valore o di un tipo restituito (nemmeno un `void` tipo restituito).  
  
 Questo errore può essere risolto rimuovendo il `return` istruzione dalla definizione del costruttore.  
  
 L'esempio seguente genera l'errore C2534:  
  
```  
// C2534.cpp  
class A {  
public:  
   int i;  
   A() { return i; }   // C2534  
};  
```