---
title: 'TN003: Mapping di Windows handle a oggetti | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mapping
dev_langs:
- C++
helpviewer_keywords:
- TN003
- handle maps
- Windows handles to objects [MFC]
- mappings [MFC], Windows handles to objects
ms.assetid: fbea9f38-992c-4091-8dbc-f29e288617d6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bc8658868c36008c5ed6b9db9747eb63ae37e4d2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33382973"
---
# <a name="tn003-mapping-of-windows-handles-to-objects"></a>TN003: mapping di handle di finestre a oggetti
Questa nota viene descritto il MFC routine che supportano il mapping di Windows dell'oggetto handle di oggetti C++.  
  
## <a name="the-problem"></a>Il problema  
 Gli oggetti di Windows in genere vengono rappresentati da vari [gestire](http://msdn.microsoft.com/library/windows/desktop/aa383751) oggetti classi MFC di eseguire il wrapping di handle di oggetto di Windows con gli oggetti C++. L'handle di wrapping delle funzioni della libreria di classi MFC consentono di trovare l'oggetto di C++ che esegue il wrapping l'oggetto di Windows che dispone di un handle specifico. Tuttavia, in alcuni casi un oggetto non dispone di un oggetto wrapper C++ e nei seguenti casi, il sistema crea un oggetto temporaneo come il wrapper di C++.  
  
 Gli oggetti di Windows che utilizzano mappe di handle sono i seguenti:  
  
-   HWND ([CWnd](../mfc/reference/cwnd-class.md) e `CWnd`-classi derivate)  
  
-   HDC ([CDC](../mfc/reference/cdc-class.md) e `CDC`-classi derivate)  
  
-   HMENU ([CMenu](../mfc/reference/cmenu-class.md))  
  
-   HPEN ([CGdiObject](../mfc/reference/cgdiobject-class.md))  
  
-   HBRUSH (`CGdiObject`)  
  
-   HFONT (`CGdiObject`)  
  
-   HBITMAP (`CGdiObject`)  
  
-   HPALETTE (`CGdiObject`)  
  
-   HRGN (`CGdiObject`)  
  
-   HIMAGELIST ([CImageList](../mfc/reference/cimagelist-class.md))  
  
-   SOCKET ([CSocket](../mfc/reference/csocket-class.md))  
  
 Ottiene un handle di uno di questi oggetti, è possibile trovare l'oggetto MFC che include l'handle chiamando il metodo statico `FromHandle`. Ad esempio, dato un HWND chiamato `hWnd`, la riga seguente verrà restituito un puntatore per il `CWnd` che esegue il wrapping `hWnd`:  
  
```  
CWnd::FromHandle(hWnd)  
```  
  
 Se `hWnd` non dispone di un oggetto wrapper specifico, una password temporanea `CWnd` viene creato per eseguire il wrapping `hWnd`. Questo rende possibile ottenere un oggetto C++ valido da un handle qualsiasi.  
  
 Dopo aver creato un oggetto wrapper, è possibile recuperare il relativo handle da una variabile membro pubblico della classe wrapper. In caso di un `CWnd`, `m_hWnd` contiene l'HWND per tale oggetto.  
  
## <a name="attaching-handles-to-mfc-objects"></a>Associare gli handle di oggetti MFC  
 Dato un oggetto wrapper handle appena creato e un handle a un oggetto di Windows, è possibile associare i due chiamando il `Attach` funzionare come nel seguente esempio:  
  
```  
CWnd myWnd;  
myWnd.Attach(hWnd);
```  
  
 In questo modo una voce nell'associazione di mappa permanente `myWnd` e `hWnd`. La chiamata `CWnd::FromHandle(hWnd)` ora restituisce un puntatore a `myWnd`. Quando `myWnd` viene eliminato, il distruttore automaticamente elimineranno `hWnd` chiamando Windows [DestroyWindow](http://msdn.microsoft.com/library/windows/desktop/ms632682) (funzione). Se non si desidera, `hWnd` deve essere disconnesso da `myWnd` prima `myWnd` viene eliminato definitivamente (in genere quando l'uscita dall'ambito in cui `myWnd` è stata definita). Il `Detach` operazione eseguita dal metodo.  
  
```  
myWnd.Detach();
```  
  
## <a name="more-about-temporary-objects"></a>Ulteriori informazioni su oggetti temporanei  
 Oggetti temporanei vengono creati ogni volta che `FromHandle` viene fornito un handle che non dispone già di un oggetto wrapper. Questi oggetti temporanei vengono scollegati da loro handle ed eliminati dal `DeleteTempMap` funzioni. Per impostazione predefinita [CWinThread::OnIdle](../mfc/reference/cwinthread-class.md#onidle) chiama automaticamente `DeleteTempMap` per ogni classe che supporta mappe di handle temporaneo. Ciò significa che non è possibile presupporre che un puntatore a un oggetto temporaneo saranno valido dopo il punto di uscita dalla funzione in cui è stato ottenuto il puntatore del mouse.  
  
## <a name="wrapper-objects-and-multiple-threads"></a>Oggetti wrapper e più thread  
 Gli oggetti di gestione delle eccezioni temporanei e permanenti vengono gestiti in base al thread. Ovvero, un thread non può accedere oggetti wrapper C++ di un altro thread, indipendentemente dal fatto che sia temporaneo o permanente.  
  
 Per passare questi oggetti da un thread a altro, sempre inviarli come nativa `HANDLE` tipo. Passando un oggetto wrapper C++ da un thread a un'altra causa spesso risultati imprevisti.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

