---
title: Exit (funzione) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- Exit
dev_langs:
- C++
helpviewer_keywords:
- exit function
ms.assetid: 26ce439f-81e2-431c-9ff8-a09a96f32127
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 240636bf7b6f10421c5d4ebd202a5fb3473a819d
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="exit-function"></a>Funzione exit
Il **uscire** funzione, dichiarata in un file di inclusione standard STDLIB. H, termina un programma C++.  
  
 Il valore fornito come argomento di **uscire** viene restituito al sistema operativo come codice di codice o di uscita restituito del programma. Per convenzione, un codice restituito uguale a zero indica che il programma è stato completato correttamente.  
  
> [!NOTE]
>  È possibile utilizzare costanti `EXIT_FAILURE` e `EXIT_SUCCESS`, definite in STDLIB.H, per indicare l'esito positivo o negativo del programma.  
  
 Emissione di un `return` from dell'istruzione il **principale** funzione è equivalente alla chiamata al metodo il **uscire** funzione con il valore restituito come argomento.  
  
 Per ulteriori informazioni, vedere [uscire](../c-runtime-library/reference/exit-exit-exit.md) nel *riferimenti alla libreria di Run-Time*.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiusura del programma](../cpp/program-termination.md)
