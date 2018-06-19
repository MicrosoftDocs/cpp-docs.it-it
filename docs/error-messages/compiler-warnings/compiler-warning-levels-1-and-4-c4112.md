---
title: Compilatore avviso (livelli 1 e 4) C4112 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4112
dev_langs:
- C++
helpviewer_keywords:
- C4112
ms.assetid: aff64897-bb79-4a67-9b6f-902c6d44f3dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 43718511af0d85f0c9026fe70b4749c4e3d4b1e4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299279"
---
# <a name="compiler-warning-levels-1-and-4-c4112"></a>Avviso del compilatore (livelli 1 e 4) C4112
\#riga richiede un numero intero compreso tra 1 e numero  
  
 La direttiva [#line](../../preprocessor/hash-line-directive-c-cpp.md) specifica un parametro Integer che non rientra nell'intervallo consentito.  
  
 Se il parametro specificato è minore di 1, il contatore di righe viene reimpostato su 1. Se il parametro specificato è maggiore di *numero*, che rappresenta il limite definito dal compilatore, il contatore di righe non viene modificato. L'avviso è di livello 1 in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) e di livello 4 con le estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).  
  
 L'esempio seguente genera l'errore C4112:  
  
```  
// C4112.cpp  
// compile with: /W4  
#line 0   // C4112, value must be between 1 and number  
  
int main() {  
}  
```