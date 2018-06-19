---
title: Compilatore avviso (livello 4) C4235 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4235
dev_langs:
- C++
helpviewer_keywords:
- C4235
ms.assetid: d4214799-d62c-4674-b4e2-9e201c303303
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc63640bc58caefa281b9207b9796ffdf387a7a8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33292542"
---
# <a name="compiler-warning-level-4-c4235"></a>Avviso del compilatore (livello 4) C4235
utilizzata estensione non standard: parola chiave' keyword ' non è supportata in questa architettura  
  
 Il compilatore non supporta la parola chiave che è utilizzata.  
  
 Questo avviso viene promossa automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, rendere C4235 un avviso di livello 2, utilizzare la seguente riga di codice  
  
```  
#pragma warning(2:4235)  
```  
  
 nel file del codice sorgente.