---
title: 'TN003: Mapping di Windows gestisce oggetti | Microsoft Docs'
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
ms.openlocfilehash: a7dbd74a8f216efb64d220747155a619d2084b3b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43211762"
---
# <a name="tn003-mapping-of-windows-handles-to-objects"></a>TN003: mapping di handle di finestre a oggetti
Questa nota descrive le MFC le routine che supportano il mapping di Windows dell'oggetto handle di oggetti C++.  
  
## <a name="the-problem"></a>Il problema  
 Gli oggetti di Windows in genere vengono rappresentati da vari [gestire](/windows/desktop/WinProg/windows-data-types) oggetti classi MFC di eseguire il wrapping di handle dell'oggetto Windows con gli oggetti C++. L'handle di wrapping delle funzioni della libreria di classi MFC è possibile trovare l'oggetto di C++ che esegue il wrapping l'oggetto di Windows che dispone di un handle specifico. Tuttavia, in alcuni casi un oggetto non è un oggetto wrapper C++ e in questi casi il sistema crea un oggetto temporaneo come wrapper C++.  
  
 Gli oggetti di Windows che usano le mappe di handle sono i seguenti:  
  
-   HWND ([CWnd](../mfc/reference/cwnd-class.md) e `CWnd`-le classi derivate)  
  
-   HDC ([CDC](../mfc/reference/cdc-class.md) e `CDC`-le classi derivate)  
  
-   HMENU ([CMenu](../mfc/reference/cmenu-class.md))  
  
-   HPEN ([CGdiObject](../mfc/reference/cgdiobject-class.md))  
  
-   HBRUSH (`CGdiObject`)  
  
-   HFONT (`CGdiObject`)  
  
-   HBITMAP (`CGdiObject`)  
  
-   HPALETTE (`CGdiObject`)  
  
-   HRGN (`CGdiObject`)  
  
-   HIMAGELIST ([CImageList](../mfc/reference/cimagelist-class.md))  
  
-   SOCKET ([CSocket](../mfc/reference/csocket-class.md))  
  
 Ottiene un handle di uno di questi oggetti, è possibile trovare l'oggetto MFC che esegue il wrapping l'handle chiamando il metodo statico `FromHandle`. Ad esempio, dato un oggetto HWND chiamato *hWnd*, la riga seguente restituisce un puntatore per il `CWnd` che esegue il wrapping *hWnd*:  
  
```  
CWnd::FromHandle(hWnd)  
```  
  
 Se *hWnd* non dispone di un oggetto wrapper specifico, una password temporanea `CWnd` viene creato per eseguire il wrapping *hWnd*. Questo rende possibile ottenere un oggetto C++ valido da un handle qualsiasi.  
  
 Dopo aver creato un oggetto wrapper, è possibile recuperare il relativo handle da una variabile membro pubblico della classe wrapper. Nel caso di un `CWnd`, *m_hWnd* contiene l'oggetto HWND per quell'oggetto.  
  
## <a name="attaching-handles-to-mfc-objects"></a>Collegare gli handle di oggetti MFC  
 Dato un oggetto wrapper handle appena creato e un handle a un oggetto di Windows, è possibile associare i due chiamando il `Attach` funzionare come in questo esempio:  
  
```  
CWnd myWnd;  
myWnd.Attach(hWnd);
```  
  
 In questo modo una voce di associazione delle mappa permanente *myWnd* e *hWnd*. La chiamata `CWnd::FromHandle(hWnd)` ora restituisce un puntatore a *myWnd*. Quando *myWnd* viene eliminata, il distruttore automaticamente eliminerà *hWnd* chiamando il Windows [DestroyWindow](https://msdn.microsoft.com/library/windows/desktop/ms632682) (funzione). Se non si desidera, *hWnd* deve essere disconnesso da *myWnd* prima *myWnd* viene eliminato definitivamente (in genere all'uscita dall'ambito in corrispondenza del quale *myWnd*è stata definita). Il `Detach` esegue questa operazione (metodo).  
  
```  
myWnd.Detach();
```  
  
## <a name="more-about-temporary-objects"></a>Informazioni su oggetti temporanei  
 Gli oggetti temporanei vengono creati ogni volta che `FromHandle` viene assegnato un handle che non dispone già di un oggetto wrapper. Questi oggetti temporanei sono scollegati dalla loro handle ed eliminati dal `DeleteTempMap` funzioni. Per impostazione predefinita [CWinThread::OnIdle](../mfc/reference/cwinthread-class.md#onidle) chiama automaticamente `DeleteTempMap` per ogni classe che supporta mappe di handle temporaneo. Ciò significa che non è possibile presupporre che un puntatore a un oggetto temporaneo saranno valido oltre il punto di uscita dalla funzione in cui è stato ottenuto il puntatore del mouse.  
  
## <a name="wrapper-objects-and-multiple-threads"></a>Oggetti wrapper e in più thread  
 Gli oggetti sia temporanei e permanenti vengono gestiti in un singolo thread. Vale a dire, un thread non può accedere a oggetti wrapper C++ di un altro thread, indipendentemente dal fatto che è temporaneo o permanente.  
  
 Per passare questi oggetti da un thread a altro, sempre inviarli in formato nativa `HANDLE` tipo. Il passaggio di un oggetto wrapper C++ da un thread a altro spesso causerà risultati imprevisti.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

