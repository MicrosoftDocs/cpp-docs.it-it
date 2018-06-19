---
title: Errore irreversibile C1019 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1019
dev_langs:
- C++
helpviewer_keywords:
- C1019
ms.assetid: c4f8968b-bc62-4200-b3ca-69d06c163236
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 119ff2df1554467762c0b960e80ad4c241517628
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33198677"
---
# <a name="fatal-error-c1019"></a>Errore irreversibile C1019
#else imprevisto  
  
 La direttiva `#else` viene visualizzata all'esterno di un costrutto `#if`, `#ifdef`o `#ifndef` . Usare `#else` solo all'interno di uno di questi costrutti.  
  
 L'esempio seguente genera l'errore C1019:  
  
```  
// C1019.cpp  
#else   // C1019  
#endif  
  
int main() {}  
```  
  
 Possibile soluzione:  
  
```  
// C1019b.cpp  
#if 1  
#else  
#endif  
  
int main() {}  
```