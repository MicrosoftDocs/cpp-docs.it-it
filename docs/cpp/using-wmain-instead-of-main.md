---
title: Utilizzo di wmain anziché di main | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- wmain
dev_langs:
- C++
helpviewer_keywords:
- main function, vs. wmain
- wmain function
ms.assetid: 7abb1257-b85c-413a-b913-d45b1582a71d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1f8f916fd6716678218b1b9b3d5d8b2e21a37c29
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32422203"
---
# <a name="using-wmain-instead-of-main"></a>Utilizzo di wmain anziché di main
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Nel modello di programmazione Unicode è possibile definire una versione a caratteri wide della funzione **main**. Utilizzare **wmain** anziché **principale** se si desidera scrivere codice portabile conforme alla specifica Unicode.  
  
 I parametri formali vengono dichiarati nella funzione **wmain** in un formato simile a quello di **main**. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. I parametri `argv` e `envp` in **wmain** sono di tipo `wchar_t*`.  
  
 Se il programma utilizza una **principale** funzione, l'ambiente di caratteri multibyte verrà creato dal sistema operativo all'avvio del programma. Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario (ad esempio, da una chiamata al [wgetenv](../c-runtime-library/reference/getenv-wgetenv.md) o [wputenv](../c-runtime-library/reference/putenv-wputenv.md) funzioni). Alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa a caratteri "wide". All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri "wide" della variabile globale `_environ`. A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema operativo per tutta la durata del programma.  
  
 Analogamente, se il programma utilizza una **wmain** funzione, a cui viene creato alla prima chiamata a un ambiente MBCS (ASCII) `_putenv` o `getenv`e a cui fa riferimento il `_environ` (variabile globale).  
  
 Per ulteriori informazioni sull'ambiente MBCS, vedere [set di caratteri Multibyte e a byte singolo](../c-runtime-library/single-byte-and-multibyte-character-sets.md) nel *riferimenti alla libreria di Run-Time.*  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)