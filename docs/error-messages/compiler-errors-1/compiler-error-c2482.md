---
title: Errore del compilatore C2482 | Documenti Microsoft
ms.custom: 
ms.date: 09/15/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2482
dev_langs: C++
helpviewer_keywords: C2482
ms.assetid: 98c87da2-625c-4cc2-9bf7-78d15921e779
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3106e9610bc1c58651bf7be5e58af44429bceb74
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2482"></a>Errore del compilatore C2482

>'*identificatore*': l'inizializzazione dinamica dei dati 'thread' non consentiti

Questo messaggio di errore è obsoleto in Visual Studio 2015 e versioni successive. Nelle versioni precedenti, le variabili dichiarate utilizzando il `thread` attributo non può essere inizializzato con un'espressione che richiede la valutazione in fase di esecuzione. È necessaria un'espressione statica per inizializzare `thread` dati.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2482 in Visual Studio 2013 e versioni precedenti:

```cpp
// C2482.cpp
// compile with: /c
#define Thread __declspec( thread )
Thread int tls_i = tls_i;   // C2482

int j = j;   // OK in C++; C error
Thread int tls_i = sizeof( tls_i );   // Okay in C and C++
```
