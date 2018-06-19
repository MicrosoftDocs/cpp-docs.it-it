---
title: Errore del compilatore C2919 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2919
dev_langs:
- C++
helpviewer_keywords:
- C2919
ms.assetid: 140a6db9-eb48-4c5e-84a7-a09d2653605b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5e2eb2a32f1a906814f5b347ba1ebf13eba71ff
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33245802"
---
# <a name="compiler-error-c2919"></a>Errore del compilatore C2919
'type': impossibile utilizzare operatori sulla superficie pubblicata di un tipo WinRT  
  
 Il sistema di tipo Windows Runtime non supporta funzioni membro di operatore nella superficie pubblicata di un tipo. Infatti, non tutti i linguaggi possono utilizzare funzioni membro di operatore. È possibile creare funzioni membro di operatore private o interne che possono essere chiamate dal codice C++ nella stessa classe o unità di compilazione.  
  
 Per risolvere il problema, rimuovere la funzione membro di operatore dall'interfaccia pubblica o sostituirla con una funzione membro denominata. Ad esempio, invece di `operator==`, assegnare alla funzione membro il nome `Equals`.