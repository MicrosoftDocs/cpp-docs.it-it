---
title: Supporto per l'utilizzo di wmain | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- wWinMain
dev_langs:
- C++
helpviewer_keywords:
- wide characters [C++], wmain function
- wWinMain function
- wmain function
ms.assetid: 41213c41-668c-40a4-8a1e-77d9eded720d
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c8b82b9f13da1b7c4884001fed5afce832147714
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33856488"
---
# <a name="support-for-using-wmain"></a>Supporto per l'utilizzo di wmain
Visual C++ supporta la definizione di un **wmain** funzione e per passare argomenti a caratteri wide a un'applicazione Unicode. Dichiarare parametri formali per **wmain**, utilizzando un formato simile a **principale**. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. I parametri `argv` e `envp` in **wmain** sono di tipo `wchar_t*`. Ad esempio:  
  
```  
wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )  
```  
  
> [!NOTE]
>  Le applicazioni Unicode MFC utilizzano **wWinMain** come punto di ingresso. In questo caso, `CWinApp::m_lpCmdLine` è una stringa Unicode. Assicurarsi di impostare **wWinMainCRTStartup** con il [/ENTRY](../build/reference/entry-entry-point-symbol.md) l'opzione del linker.  
  
 Se il programma usa una funzione **main**, l'ambiente a caratteri multibyte viene creato dalla libreria run-time all'avvio del programma. Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario, ad esempio tramite una chiamata alla funzione `_wgetenv` o `_wputenv`. La prima chiamata a `_wputenv`, o la prima chiamata a `_wgetenv` se esiste già un ambiente MBCS, viene creato un ambiente corrispondente alla stringa di caratteri "wide". L'ambiente farà quindi riferimento per il `_wenviron` variabile globale, che è una versione a caratteri wide del `_environ` (variabile globale). A questo punto, due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente e sono gestite dal sistema in fase di esecuzione per tutta la durata del programma.  
  
 In modo analogo, se il programma usa una funzione **wmain**, all'avvio del programma viene creato un ambiente a caratteri wide, a cui fa riferimento la variabile globale `_wenviron`. Un ambiente MBCS (ASCII) viene creato la prima chiamata a `_putenv` o `getenv` e a cui fa riferimento il `_environ` (variabile globale).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per Unicode](../text/support-for-unicode.md)   
 [Riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)   
 [Funzione WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559)