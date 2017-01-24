---
title: "TN003: mapping di handle di finestre a oggetti | Microsoft Docs"
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
  - "vc.mapping"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mappe di handle"
  - "mapping, handle di Windows a oggetti"
  - "TN003"
  - "handle di Windows a oggetti [C++]"
ms.assetid: fbea9f38-992c-4091-8dbc-f29e288617d6
caps.latest.revision: 15
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN003: mapping di handle di finestre a oggetti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota vengono descritte le routine di MFC che supportano gli handle di windows del mapping agli oggetti C\+\+.  
  
## Il problema  
 Gli oggetti di windows in genere sono rappresentati da vari oggetti di [HANDLE](http://msdn.microsoft.com/library/windows/desktop/aa383751) handle di windows del wrapping delle classi MFC con C\+\+ oggetto.  Le funzioni del wrapping di handle della libreria di classi MFC consentono di trovare l'oggetto C\+\+ che esegue il wrapping delle finestre oggetti con l'handle particolari.  Tuttavia, talvolta un oggetto non ha oggetto wrapper c\+\+ e ai tempi il sistema crea un oggetto temporaneo che funga da wrapper di C\+\+.  
  
 Le finestre degli oggetti che le mappe di handle di utilizzo sono le seguenti:  
  
-   HWND \([CWnd](../mfc/reference/cwnd-class.md) e `CWnd`\- classi derivate\)  
  
-   HDC \([CDC](../mfc/reference/cdc-class.md) e `CDC`\- classi derivate\)  
  
-   HMENU \([CMenu](../mfc/reference/cmenu-class.md)\)  
  
-   HPEN \([CGdiObject](../mfc/reference/cgdiobject-class.md)\)  
  
-   HBRUSH \(`CGdiObject`\)  
  
-   HFONT \(`CGdiObject`\)  
  
-   HBITMAP \(`CGdiObject`\)  
  
-   HPALETTE \(`CGdiObject`\)  
  
-   HRGN \(`CGdiObject`\)  
  
-   HIMAGELIST \([CImageList](../mfc/reference/cimagelist-class.md)\)  
  
-   SOCKET \([CSocket](../mfc/reference/csocket-class.md)\)  
  
 Dato un handle a uno qualsiasi di questi oggetti, è possibile trovare l'oggetto MFC che esegue il wrapping di un handle chiamando il metodo statico `FromHandle`.  Ad esempio, dato un HWND ha chiamato `hWnd`, la riga seguente restituisce un puntatore a `CWnd` che esegue il wrapping `hWnd`:  
  
```  
CWnd::FromHandle(hWnd)  
```  
  
 Se `hWnd` non dispone di un oggetto specifico del wrapper, `CWnd` temporaneo viene creato per eseguire il wrapping `hWnd`.  In questo modo è possibile ottenere un oggetto C\+\+ valido da tutti gli handle.  
  
 Dopo avere un oggetto wrapper, è possibile recuperare le relative handle da una variabile membro pubblico della classe wrapper.  Nel caso di `CWnd`, `m_hWnd` contiene HWND per tale oggetto.  
  
## Associare un handle agli oggetti MFC  
 Dato un oggetto appena creato il handle\- wrapper e l'handle per le finestre oggetto, è possibile associare i due chiamando la funzione di `Attach` come nel seguente esempio:  
  
```  
CWnd myWnd;  
myWnd.Attach(hWnd);  
```  
  
 In tal modo una voce della mappa permanente che associa `myWnd` e `hWnd`.  Chiamando `CWnd::FromHandle(hWnd)` ora restituisce un puntatore a `myWnd`.  Quando `myWnd` viene eliminato, il distruttore automaticamente distrutto `hWnd` chiamando la funzione di [DestroyWindow](http://msdn.microsoft.com/library/windows/desktop/ms632682) di windows.  Se ciò non è previsto, `hWnd` deve essere rimosso da `myWnd` prima di `myWnd` eliminato in genere quando escono l'ambito a cui `myWnd` è stato definito\).  Il metodo di `Detach` tale operazione.  
  
```  
myWnd.Detach();  
```  
  
## Ulteriori informazioni sugli oggetti temporanei  
 Gli oggetti temporanei vengono creati ogni volta che `FromHandle` viene fornito un handle che dispongono già di un oggetto wrapper.  Questi oggetti temporanei vengono rimossi dal relativo handle ed eliminate da funzioni di `DeleteTempMap`.  Per impostazione predefinita [CWinThread::OnIdle](../Topic/CWinThread::OnIdle.md) chiama automaticamente `DeleteTempMap` per ogni classe che supporta le mappe temporanee handle.  Ciò significa che non è possibile presupporre un puntatore a un oggetto temporaneo è valido dopo il punto di uscita dalla funzione in cui il puntatore è stato ottenuto.  
  
## Oggetti e più thread wrapper  
 Gli oggetti temporanei che permanenti vengono gestiti per thread.  Ovvero un thread non può accedere agli oggetti wrapper di C\+\+ di un altro thread, indipendentemente dal fatto che è temporaneo o permanente.  
  
 Per passare questi oggetti da un thread a un altro, inviile sempre come rispettivo tipo nativo di `HANDLE`.  Passando l'oggetto wrapper c\+\+ da un thread a un altro determina spesso risultati imprevisti.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)