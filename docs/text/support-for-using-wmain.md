---
title: "Supporto per l&#39;utilizzo di wmain | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "wWinMain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "caratteri wide [C++], wmain (funzione)"
  - "wmain (funzione)"
  - "wWinMain (funzione)"
ms.assetid: 41213c41-668c-40a4-8a1e-77d9eded720d
caps.latest.revision: 9
caps.handback.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Supporto per l&#39;utilizzo di wmain
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ supporta la definizione di una funzione **wmain** e l'utilizzo di argomenti a caratteri estesi da passare a un'applicazione Unicode.  I parametri formali vengono dichiarati nella funzione **wmain** utilizzando un formato simile a quello di **main**.  È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi.  I parametri `argv` ed `envp` in **wmain** sono di tipo `wchar_t*`,  Di seguito è riportato un esempio.  
  
```  
wmain( int argc, wchar_t *argv[ ], wchar_t *envp[ ] )  
```  
  
> [!NOTE]
>  Le applicazioni Unicode MFC utilizzano **wWinMain** come punto di ingresso.  In questo caso, `CWinApp::m_lpCmdLine` è una stringa Unicode.  Impostare **wWinMainCRTStartup** con l'opzione del linker [\/ENTRY](../build/reference/entry-entry-point-symbol.md).  
  
 Se il programma utilizza una funzione **main**, l'ambiente con caratteri multibyte verrà creato dalla libreria di runtime all'avvio del programma.  Una copia a caratteri estesi dell'ambiente viene creata solo quando è necessario, ad esempio tramite una chiamata alla funzione `_wgetenv` o `_wputenv`.  Alla prima chiamata a `_wputenv` oppure alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa con caratteri estesi.  All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri estesi della variabile globale `_environ`.  A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema in fase di esecuzione per tutta la durata del programma.  
  
 In modo analogo, se il programma utilizza una funzione **wmain**, all'avvio del programma viene creato un ambiente a caratteri estesi, a cui fa riferimento la variabile globale `_wenviron`.  Alla prima chiamata a `_putenv` o `getenv` viene creato un ambiente MBCS \(ASCII\), a cui fa riferimento la variabile globale `_environ`.  
  
## Vedere anche  
 [Supporto per Unicode](../text/support-for-unicode.md)   
 [Riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)   
 [WinMain Function \(informazioni in lingua inglese\)](http://msdn.microsoft.com/library/windows/desktop/ms633559)