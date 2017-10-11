---
title: Errore del compilatore C2919 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2919
dev_langs:
- C++
helpviewer_keywords:
- C2919
ms.assetid: 140a6db9-eb48-4c5e-84a7-a09d2653605b
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a70b679d4add5fa4ad2904e3c0d103e1c8881280
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2919"></a>Errore del compilatore C2919
'type': impossibile utilizzare operatori sulla superficie pubblicata di un tipo WinRT  
  
 Il sistema di tipo Windows Runtime non supporta funzioni membro di operatore nella superficie pubblicata di un tipo. Infatti, non tutti i linguaggi possono utilizzare funzioni membro di operatore. È possibile creare funzioni membro di operatore private o interne che possono essere chiamate dal codice C++ nella stessa classe o unità di compilazione.  
  
 Per risolvere il problema, rimuovere la funzione membro di operatore dall'interfaccia pubblica o sostituirla con una funzione membro denominata. Ad esempio, invece di `operator==`, assegnare alla funzione membro il nome `Equals`.
