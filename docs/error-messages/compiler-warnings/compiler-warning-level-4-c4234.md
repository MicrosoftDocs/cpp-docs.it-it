---
title: Compilatore avviso (livello 4) C4234 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4234
dev_langs:
- C++
helpviewer_keywords:
- C4234
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b8d5b7a2999b77c0b34ee925f5dd85a0a27c63f5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4234"></a>Avviso del compilatore (livello 4) C4234
utilizzata estensione non standard: parola chiave' keyword ' riservato per utilizzi futuri  
  
 Il compilatore non ancora implementata la parola chiave che è utilizzata.  
  
 Questo avviso viene promossa automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4234 un problema di avviso di livello 4.  
  
```  
#pragma warning(2:4234)  
```  
  
 nel file del codice sorgente.