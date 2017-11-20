---
title: Compilatore avviso (livello 1) C4215 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4215
dev_langs: C++
helpviewer_keywords: C4215
ms.assetid: f2aab64d-1bab-4f75-95ee-89e1263047b1
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: bc8c33b8bdce09817923d905daafbf589c8a7885
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4215"></a>Avviso del compilatore (livello 1) C4215
utilizzata estensione non standard: long float  
  
 Nelle estensioni di Microsoft (/Ze) predefinito **long float** come **double**. La compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) non. Utilizzare **doppie** per mantenere la compatibilità.  
  
 L'esempio seguente genera l'errore C4215:  
  
```  
// C4215.cpp  
// compile with: /W1 /LD  
long float a;   // C4215  
  
// use the line below to resolve the warning  
// double a;  
```