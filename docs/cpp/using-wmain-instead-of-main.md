---
title: "Utilizzo di wmain anziché di main | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- wmain
dev_langs:
- C++
helpviewer_keywords:
- main function, vs. wmain
- wmain function
ms.assetid: 7abb1257-b85c-413a-b913-d45b1582a71d
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: ef24360507c3c58d2c0839f780062340f8d7654f
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="using-wmain-instead-of-main"></a>Utilizzo di wmain anziché di main
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Nel modello di programmazione Unicode è possibile definire una versione a caratteri wide della funzione **main**. Utilizzare **wmain** anziché **principale** se si desidera scrivere codice portabile conforme alla specifica Unicode.  
  
 I parametri formali vengono dichiarati nella funzione **wmain** in un formato simile a quello di **main**. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. I parametri `argv` e `envp` in **wmain** sono di tipo `wchar_t*`.  
  
 Se il programma utilizza una **principale** funzione, l'ambiente di caratteri multibyte verrà creato dal sistema operativo all'avvio del programma. Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario (ad esempio, da una chiamata al [wgetenv](../c-runtime-library/reference/getenv-wgetenv.md) o [wputenv](../c-runtime-library/reference/putenv-wputenv.md) funzioni). Alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa a caratteri "wide". All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri "wide" della variabile globale `_environ`. A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema operativo per tutta la durata del programma.  
  
 Analogamente, se il programma utilizza una **wmain** funzione, a cui viene creato alla prima chiamata a un ambiente MBCS (ASCII) `_putenv` o `getenv`e a cui fa riferimento il `_environ` (variabile globale).  
  
 Per ulteriori informazioni sull'ambiente MBCS, vedere [a byte singolo e set di caratteri Multibyte](../c-runtime-library/single-byte-and-multibyte-character-sets.md) nel *riferimenti alla libreria di Run-Time.*  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
