---
title: Errore del compilatore C2081 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2081
dev_langs:
- C++
helpviewer_keywords:
- C2081
ms.assetid: 7db9892d-364d-4178-a49d-f8398ece09a0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 165217b3ea4d50dc965927419786a01a6cc92af3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33166861"
---
# <a name="compiler-error-c2081"></a>Errore del compilatore C2081
'identifier': nome di parametro formale non valido nell'elenco  
  
 L'identificatore ha causato un errore di sintassi.  
  
 Questo errore può essere causato dall'utilizzo di vecchio stile per l'elenco di parametri formali. È necessario specificare il tipo di parametri formali nell'elenco di parametri formali.  
  
 L'esempio seguente genera l'errore C2081:  
  
```  
// C2081.c  
void func( int i, j ) {}  // C2081, no type specified for j  
```  
  
 Possibile soluzione:  
  
```  
// C2081b.c  
// compile with: /c  
void func( int i, int j ) {}  
```