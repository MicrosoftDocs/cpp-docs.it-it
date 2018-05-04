---
title: Exit (funzione) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- Exit
dev_langs:
- C++
helpviewer_keywords:
- exit function
ms.assetid: 26ce439f-81e2-431c-9ff8-a09a96f32127
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5767f6b08b4adcd3d1a8d367c6286a746eeecec3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="exit-function"></a>Funzione exit
Il **uscire** funzione, dichiarata in un file di inclusione standard \<STDLIB. h >, termina un programma C++.  
  
 Il valore fornito come argomento di **uscire** viene restituito al sistema operativo come codice di codice o di uscita restituito del programma. Per convenzione, un codice restituito uguale a zero indica che il programma è stato completato correttamente.  
  
> [!NOTE]
>  È possibile utilizzare le costanti `EXIT_FAILURE` e `EXIT_SUCCESS`, definito in \<STDLIB. h >, per indicare esito positivo o negativo del programma.  
  
 Emissione di un `return` from dell'istruzione il **principale** funzione è equivalente alla chiamata al metodo il **uscire** funzione con il valore restituito come argomento.  
  
 Per ulteriori informazioni, vedere [uscire](../c-runtime-library/reference/exit-exit-exit.md) nel *riferimenti alla libreria di Run-Time*.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiusura del programma](../cpp/program-termination.md)