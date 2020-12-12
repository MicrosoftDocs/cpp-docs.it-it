---
description: 'Altre informazioni su: uso di wmain'
title: Utilizzo di wmain
ms.date: 11/04/2016
helpviewer_keywords:
- wmain function
ms.assetid: d0300812-adc4-40c6-bba3-b2da25468c80
ms.openlocfilehash: 575637700924876ffb3b54a4ea23dc2b62e5feb6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198934"
---
# <a name="using-wmain"></a>Utilizzo di wmain

**Specifico di Microsoft**

Nel modello di programmazione Unicode è possibile definire una versione a caratteri wide della funzione **main**. Usare **wmain** anziché **main** se si vuole scrivere codice portabile conforme al modello di programmazione Unicode.

## <a name="syntax"></a>Sintassi

```
wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )
```

## <a name="remarks"></a>Osservazioni

I parametri formali vengono dichiarati nella funzione **wmain** in un formato simile a quello di **main**. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. I parametri `argv` e `envp` in **wmain** sono di tipo `wchar_t*`. Ad esempio:

Se il programma usa una funzione **main**, l'ambiente a caratteri multibyte viene creato dalla libreria run-time all'avvio del programma. Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario, ad esempio tramite una chiamata alla funzione `_wgetenv` o `_wputenv`. Alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa a caratteri "wide". All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri "wide" della variabile globale `_environ`. A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema operativo per tutta la durata del programma.

In modo analogo, se il programma usa una funzione **wmain**, all'avvio del programma viene creato un ambiente a caratteri wide, a cui fa riferimento la variabile globale `_wenviron`. Alla prima chiamata a `_putenv` o `getenv` viene creato un ambiente MBCS (ASCII) a cui fa riferimento la variabile globale `_environ`.

Per altre informazioni sull'ambiente MBCS, vedere [Internazionalizzazione](../c-runtime-library/internationalization.md) in *Informazioni di riferimento per la libreria run-time*.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Funzione principale ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)
