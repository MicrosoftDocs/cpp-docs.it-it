---
title: Panoramica delle istruzioni C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- semicolon, in C statements
- statements, C
- semicolon
- statements, about statements
- Visual C, statements
ms.assetid: 0d49837a-5399-4881-b60c-af5f4e9720de
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 473a91651e52d04dbeb15301520c6c8984808551
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overview-of-c-statements"></a>Cenni preliminari sulle istruzioni C
Le istruzioni C sono costituite da token, espressioni e altre istruzioni. Un'istruzione che costituisce parte di un'altra istruzione viene chiamata corpo dell'istruzione di inclusione. In questa sezione viene illustrato ogni tipo di istruzione indicato dalla sintassi seguente.  
  
## <a name="syntax"></a>Sintassi  
 *istruzione*:  
 [labeled-statement](../c-language/goto-and-labeled-statements-c.md)  
  
 [compound-statement](../c-language/compound-statement-c.md)  
  
 [expression-statement](../c-language/expression-statement-c.md)  
  
 [selection-statement](../c-language/if-statement-c.md)  
  
 [iteration-statement](../c-language/do-while-statement-c.md)  
  
 [jump-statement](../c-language/break-statement-c.md)  
  
 [try-except-statement](../c-language/try-except-statement-c.md)  
  
 /* Specifica di Microsoft \*/[try-finally-statement](../c-language/try-finally-statement-c.md) /\* Specifica di Microsoft \*/  
  
 Il corpo dell'istruzione è spesso un'istruzione composta costituita da altre istruzioni che possono includere parole chiave. L'istruzione composta è racchiusa tra parentesi graffe (**{ }**). Tutte le altre istruzioni in linguaggio C terminano con un punto e virgola (**;**). Il punto e virgola è un terminatore dell'istruzione.  
  
 L'istruzione di espressione include un'espressione C che può contenere gli operatori aritmetici o logici presentati in [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md). L'istruzione null è un'istruzione vuota.  
  
 Qualsiasi istruzione C può iniziare con un'etichetta di identificazione costituita da un nome e da due punti. Poiché solo l'istruzione `goto` riconosce le etichette di istruzione, queste ultime vengono discusse con `goto`. Per altre informazioni, vedere [Istruzioni goto e con etichetta](../c-language/goto-and-labeled-statements-c.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni](../c-language/statements-c.md)