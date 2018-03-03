---
title: Uso di wmain | Documenti Microsoft
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
- wmain function
ms.assetid: d0300812-adc4-40c6-bba3-b2da25468c80
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 47340642a8c18adfe5e371baca8daca7bd22f28d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-wmain"></a>Utilizzo di wmain
**Sezione specifica Microsoft**  
  
 Nel modello di programmazione Unicode è possibile definire una versione a caratteri wide della funzione **main**. Usare **wmain** anziché **main** se si vuole scrivere codice portabile conforme al modello di programmazione Unicode.  
  
## <a name="syntax"></a>Sintassi  
  
```  
wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )  
```  
  
## <a name="remarks"></a>Note  
 I parametri formali vengono dichiarati nella funzione **wmain** in un formato simile a quello di **main**. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. I parametri `argv` e `envp` in **wmain** sono di tipo `wchar_t*`. Ad esempio:  
  
 Se il programma usa una funzione **main**, l'ambiente a caratteri multibyte viene creato dalla libreria run-time all'avvio del programma. Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario, ad esempio tramite una chiamata alla funzione `_wgetenv` o `_wputenv`. Alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa a caratteri "wide". All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri "wide" della variabile globale `_environ`. A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema operativo per tutta la durata del programma.  
  
 In modo analogo, se il programma usa una funzione **wmain**, all'avvio del programma viene creato un ambiente a caratteri wide, a cui fa riferimento la variabile globale `_wenviron`. Alla prima chiamata a `_putenv` o `getenv` viene creato un ambiente MBCS (ASCII) a cui fa riferimento la variabile globale `_environ`.  
  
 Per altre informazioni sull'ambiente MBCS, vedere [Internazionalizzazione](../c-runtime-library/internationalization.md) in *Informazioni di riferimento per la libreria run-time*.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)