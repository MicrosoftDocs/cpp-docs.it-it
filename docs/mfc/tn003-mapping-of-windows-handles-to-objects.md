---
title: 'TN003: Mapping di Windows handle agli oggetti | Documenti Microsoft'
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
ms.openlocfilehash: b2be47da802fd1168ec7b43c2f7701351b3c88d8
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951508"
---
# <a name="tn003-mapping-of-windows-handles-to-objects"></a>TN003: mapping di handle di finestre a oggetti
Questa nota viene descritto il MFC routine che supportano il mapping di Windows dell'oggetto handle di oggetti C++.  
  
## <a name="the-problem"></a>Il problema  
 Gli oggetti di Windows in genere vengono rappresentati da vari [gestire](http://msdn.microsoft.com/library/windows/desktop/aa383751) oggetti classi MFC di eseguire il wrapping di handle dell'oggetto Windows con oggetti C++. L'handle di wrapping delle funzioni della libreria di classi MFC consentono di trovare l'oggetto di C++ che esegue il wrapping l'oggetto di Windows che dispone di un handle specifico. Tuttavia, in alcuni casi un oggetto non dispone di un oggetto di wrapper C++ e orari il sistema crea un oggetto temporaneo come il wrapper di C++.  
  
 Gli oggetti di Windows che usano le mappe di handle sono i seguenti:  
  
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
  
 Specificato un handle a una qualsiasi di questi oggetti, è possibile trovare l'oggetto MFC che esegue il wrapping l'handle chiamando il metodo statico `FromHandle`. Si consideri ad esempio un HWND chiamato *hWnd*, la riga seguente restituirà un puntatore per il `CWnd` che esegue il wrapping *hWnd*:  
  
```  
CWnd::FromHandle(hWnd)  
```  
  
 Se *hWnd* non dispone di un oggetto wrapper specifico, una password temporanea `CWnd` viene creata per eseguire il wrapping *hWnd*. Questo rende possibile ottenere un oggetto C++ valido da un handle qualsiasi.  
  
 Dopo aver ottenuto un oggetto wrapper, è possibile recuperare il relativo handle da una variabile membro pubblico della classe wrapper. Nel caso di un `CWnd`, *m_hWnd* contiene l'HWND per quell'oggetto.  
  
## <a name="attaching-handles-to-mfc-objects"></a>Associare gli handle di oggetti MFC  
 Dato un oggetto wrapper handle appena creato e un handle a un oggetto di Windows, è possibile associare i due chiamando il `Attach` funzionare come nel seguente esempio:  
  
```  
CWnd myWnd;  
myWnd.Attach(hWnd);
```  
  
 In questo modo una voce nell'associazione mappa permanente *myWnd* e *hWnd*. La chiamata `CWnd::FromHandle(hWnd)` ora verrà restituito un puntatore a *myWnd*. Quando si *myWnd* viene eliminato, il distruttore comporta automaticamente la distruzione *hWnd* chiamando le finestre [DestroyWindow](http://msdn.microsoft.com/library/windows/desktop/ms632682) (funzione). Se ciò non si desidera, *hWnd* deve essere disconnesso da *myWnd* prima *myWnd* viene eliminato definitivamente (in genere quando si esce dall'ambito in cui *myWnd*è stata definita). Il `Detach` metodo esegue questa operazione.  
  
```  
myWnd.Detach();
```  
  
## <a name="more-about-temporary-objects"></a>Informazioni su oggetti temporanei  
 Oggetti temporanei vengono creati ogni volta che `FromHandle` è specificato un handle che non dispone già di un oggetto wrapper. Questi oggetti temporanei sono scollegati dal relativo handle ed eliminati dal `DeleteTempMap` funzioni. Per impostazione predefinita [CWinThread::OnIdle](../mfc/reference/cwinthread-class.md#onidle) chiama automaticamente `DeleteTempMap` per ogni classe che supporta mappe di handle temporaneo. Ciò significa che non possono presupporre che un puntatore a un oggetto temporaneo saranno valido oltre il punto di uscita dalla funzione in cui è stato ottenuto il puntatore.  
  
## <a name="wrapper-objects-and-multiple-threads"></a>Oggetti wrapper e più thread  
 Gli oggetti temporanei e permanenti vengono gestiti in base al thread. Vale a dire, un thread non è possibile accedere a oggetti del wrapper C++ un altro thread, indipendentemente dal fatto che sia temporaneo o permanente.  
  
 Per passare questi oggetti da un thread a altro, sempre inviarli come nativa `HANDLE` tipo. Passare un oggetto wrapper C++ da un thread spesso causerà risultati imprevisti.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

