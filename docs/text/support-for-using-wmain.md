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
ms.openlocfilehash: 4af389c00f6065df631f891dadcb0b2f350f984d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491192"
---
# <a name="support-for-using-wmain"></a>Supporto per l'utilizzo di wmain

Visual C++ supporta la definizione di una funzione **wmain** e il passaggio di argomenti a caratteri wide all'applicazione Unicode. I parametri formali vengono dichiarati in **wmain**, usando `main`un formato simile a. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. I parametri `argv` e `envp` in **wmain** sono di tipo `wchar_t*`. Ad esempio:

```cpp
wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )
```

> [!NOTE]
> Le applicazioni Unicode MFC `wWinMain` utilizzano come punto di ingresso. In questo caso, `CWinApp::m_lpCmdLine` è una stringa Unicode. Assicurarsi di impostare `wWinMainCRTStartup` con l'opzione del linker [/entry](../build/reference/entry-entry-point-symbol.md) .

Se il programma usa una funzione **main**, l'ambiente a caratteri multibyte viene creato dalla libreria run-time all'avvio del programma. Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario, ad esempio tramite una chiamata alla funzione `_wgetenv` o `_wputenv`. Alla prima chiamata a `_wputenv`o alla prima chiamata a `_wgetenv` se un ambiente MBCS esiste già, viene creato un ambiente di stringhe di caratteri wide corrispondente. All'ambiente viene quindi fatto riferimento dalla `_wenviron` variabile globale, che è una versione a caratteri wide `_environ` della variabile globale. A questo punto, due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente e vengono gestite dal sistema di runtime per tutta la durata del programma.

In modo analogo, se il programma usa una funzione **wmain**, all'avvio del programma viene creato un ambiente a caratteri wide, a cui fa riferimento la variabile globale `_wenviron`. Viene creato un ambiente MBCS (ASCII) alla prima chiamata a `_putenv` o `getenv` a cui fa riferimento la `_environ` variabile globale.

## <a name="see-also"></a>Vedere anche

[Supporto per Unicode](../text/support-for-unicode.md)<br/>
[Riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)<br/>
[WinMain (funzione)](/windows/win32/api/winbase/nf-winbase-winmain)
