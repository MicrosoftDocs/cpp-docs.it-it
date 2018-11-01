---
title: Supporto per l'utilizzo di wmain
ms.date: 11/04/2016
f1_keywords:
- wWinMain
helpviewer_keywords:
- wide characters [C++], wmain function
- wWinMain function
- wmain function
ms.assetid: 41213c41-668c-40a4-8a1e-77d9eded720d
ms.openlocfilehash: 06ec38abb97088f1364a4370efdebb67a04d9294
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50583781"
---
# <a name="support-for-using-wmain"></a>Supporto per l'utilizzo di wmain

Visual C++ supporta la definizione di un **wmain** (funzione) e passare argomenti a caratteri estesi a un'applicazione Unicode. Si dichiarano i parametri formali **wmain**, usando un formato simile a `main`. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. I parametri `argv` e `envp` in **wmain** sono di tipo `wchar_t*`. Ad esempio:

```cpp
wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )
```

> [!NOTE]
>  Applicazioni Unicode MFC utilizzano `wWinMain` come punto di ingresso. In questo caso, `CWinApp::m_lpCmdLine` è una stringa Unicode. Assicurarsi di impostare `wWinMainCRTStartup` con il [/ENTRY](../build/reference/entry-entry-point-symbol.md) l'opzione del linker.

Se il programma Usa una `main` (funzione), l'ambiente a caratteri multibyte viene creato dalla libreria run-time all'avvio del programma. Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario, ad esempio tramite una chiamata alla funzione `_wgetenv` o `_wputenv`. La prima chiamata a `_wputenv`, o alla prima chiamata a `_wgetenv` se esiste già un ambiente MBCS, viene creato un ambiente corrispondente alla stringa di caratteri "wide". L'ambiente farà quindi riferimento al `_wenviron` variabile globale, ovvero una versione a caratteri wide del `_environ` (variabile globale). A questo punto, due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente e vengono gestite dal sistema in fase di esecuzione per tutta la durata del programma.

In modo analogo, se il programma usa una funzione **wmain**, all'avvio del programma viene creato un ambiente a caratteri wide, a cui fa riferimento la variabile globale `_wenviron`. Viene creato un ambiente MBCS (ASCII) alla prima chiamata a `_putenv` oppure `getenv` a cui fa riferimento il `_environ` (variabile globale).

## <a name="see-also"></a>Vedere anche

[Supporto per Unicode](../text/support-for-unicode.md)<br/>
[Riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)<br/>
[Funzione WinMain](https://msdn.microsoft.com/library/windows/desktop/ms633559)