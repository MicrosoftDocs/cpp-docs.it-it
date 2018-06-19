---
title: Compilatore avviso (livello 1) C4216 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4216
dev_langs:
- C++
helpviewer_keywords:
- C4216
ms.assetid: 211079dc-59d0-42a7-801c-2ddab21d7232
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2de645b2d036e7ed696a8065bbb9f8212ec5c596
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33279610"
---
# <a name="compiler-warning-level-1-c4216"></a>Avviso del compilatore (livello 1) C4216
utilizzata estensione non standard: float long  
  
 Nelle estensioni di Microsoft (/Ze) predefinito **float long** come **double**. La compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) non. Utilizzare **doppie** per mantenere la compatibilità. L'esempio seguente genera l'errore C4216:  
  
```  
// C4216.cpp  
// compile with: /W1  
float long a;   // C4216  
  
// use the line below to resolve the warning  
// double a;  
  
int main() {  
}  
```