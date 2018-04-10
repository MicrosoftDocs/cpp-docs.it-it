---
title: Errore del compilatore C2632 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: error-reference
f1_keywords:
- C2632
dev_langs:
- C++
helpviewer_keywords:
- C2632
ms.assetid: b15a6b1b-42d2-4e1b-8660-e6bfde61052d
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 03a6d75ab9af6cd45ef982ff9d2e12640266c1b7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2632"></a>Errore del compilatore C2632
'type1' seguito da 'type2' non è valido  
  
 Questo errore può essere causato mancanza di codice tra due identificatori di tipo.  
  
 L'esempio seguente genera l'errore C2632:  
  
```  
// C2632.cpp  
int float i;   // C2632  
```  
  
 Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003. `bool`è ora un tipo corretto. Nelle versioni precedenti, `bool` era un typedef ed è possibile creare gli identificatori con lo stesso nome.  
  
 L'esempio seguente genera l'errore C2632:  
  
```  
// C2632_2.cpp  
// compile with: /LD  
void f(int bool);   // C2632  
```  
  
 Per correggere l'errore in modo che il codice è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rinominare l'identificatore.