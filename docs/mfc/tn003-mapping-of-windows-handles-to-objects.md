---
title: 'TN003: Mapping degli handle di Windows agli oggetti'
ms.date: 11/04/2016
f1_keywords:
- vc.mapping
helpviewer_keywords:
- TN003
- handle maps
- Windows handles to objects [MFC]
- mappings [MFC], Windows handles to objects
ms.assetid: fbea9f38-992c-4091-8dbc-f29e288617d6
ms.openlocfilehash: 45492963e1b686e03eb59c320fdc3d52d1534f7d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513532"
---
# <a name="tn003-mapping-of-windows-handles-to-objects"></a>TN003: Mapping degli handle di Windows agli oggetti

Questa nota descrive le routine MFC che supportano il mapping degli handle di oggetti C++ di Windows agli oggetti.

## <a name="the-problem"></a>Il problema

Gli oggetti di Windows sono in genere rappresentati da vari oggetti [handle](/windows/win32/WinProg/windows-data-types) . le classi MFC C++ eseguono il wrapping degli handle di oggetti Windows con gli oggetti Le funzioni di wrapping dell'handle della libreria di classi MFC consentono di C++ trovare l'oggetto che esegue il wrapping dell'oggetto Windows con un handle specifico. Tuttavia, a volte un oggetto non dispone di C++ un oggetto wrapper e, in questi casi, il sistema crea un oggetto temporaneo che C++ funge da wrapper.

Gli oggetti di Windows che usano le mappe di handle sono i seguenti:

- HWND (classi derivate da[CWnd](../mfc/reference/cwnd-class.md) e `CWnd`)

- HDC (classi derivate da[CDC](../mfc/reference/cdc-class.md) e `CDC`)

- HMENU ([CMenu](../mfc/reference/cmenu-class.md))

- HPEN ([CGdiObject](../mfc/reference/cgdiobject-class.md))

- HBRUSH (`CGdiObject`)

- HFONT (`CGdiObject`)

- HBITMAP (`CGdiObject`)

- HPALETTE (`CGdiObject`)

- HRGN (`CGdiObject`)

- HIMAGELIST ([CImageList](../mfc/reference/cimagelist-class.md))

- SOCKET ([CSocket](../mfc/reference/csocket-class.md))

Dato un handle a uno di questi oggetti, è possibile trovare l'oggetto MFC che esegue il wrapping dell'handle chiamando il metodo `FromHandle`statico. Dato un HWND denominato *HWND*, ad esempio, la riga seguente restituirà un puntatore all'oggetto `CWnd` che esegue il wrapping di *HWND*:

```
CWnd::FromHandle(hWnd)
```

Se *HWND* non dispone di un oggetto wrapper specifico, viene creato `CWnd` un oggetto temporaneo per eseguire il wrapping di *HWND*. In questo modo è possibile ottenere un oggetto C++ valido da qualsiasi handle.

Quando si dispone di un oggetto wrapper, è possibile recuperare il relativo handle da una variabile membro pubblica della classe wrapper. Nel caso di un `CWnd`oggetto, *m_hWnd* contiene l'HWND per l'oggetto.

## <a name="attaching-handles-to-mfc-objects"></a>Associazione di handle a oggetti MFC

Dato un oggetto wrapper handle appena creato e un handle a un oggetto di Windows, è possibile associare i due chiamando la `Attach` funzione come nell'esempio seguente:

```
CWnd myWnd;
myWnd.Attach(hWnd);
```

In questo modo si crea una voce nella mappa permanente che associa *myWnd* e *HWND*. La `CWnd::FromHandle(hWnd)` chiamata a restituirà ora un puntatore a *myWnd*. Quando *myWnd* viene eliminato, il distruttore eliminerà automaticamente *HWND* chiamando la funzione [DestroyWindow](/windows/win32/api/winuser/nf-winuser-destroywindow) di Windows. Se questa operazione non è necessaria, *HWND* deve essere scollegato da *MyWnd* prima che *myWnd* venga eliminato definitivamente, in genere quando si esce dall'ambito in cui è stato definito *myWnd* . Il `Detach` metodo esegue questa operazione.

```
myWnd.Detach();
```

## <a name="more-about-temporary-objects"></a>Altre informazioni sugli oggetti temporanei

Gli oggetti temporanei vengono `FromHandle` creati ogni volta che viene assegnato un handle che non dispone già di un oggetto wrapper. Questi oggetti temporanei vengono scollegati dal relativo handle ed eliminati dalle `DeleteTempMap` funzioni. Per impostazione predefinita, [CWinThread::](../mfc/reference/cwinthread-class.md#onidle) OnIdle `DeleteTempMap` chiama automaticamente per ogni classe che supporta le mappe di handle temporanee. Ciò significa che non è possibile presupporre che un puntatore a un oggetto temporaneo sarà valido oltre il punto di uscita dalla funzione in cui è stato ottenuto il puntatore.

## <a name="wrapper-objects-and-multiple-threads"></a>Oggetti wrapper e più thread

Sia gli oggetti temporanei che quelli permanenti vengono mantenuti in base ai singoli thread. Ovvero, un thread non può accedere agli oggetti C++ wrapper di un altro thread, indipendentemente dal fatto che sia temporaneo o permanente.

Per passare questi oggetti da un thread a un altro, inviarli sempre come tipo `HANDLE` nativo. Il passaggio C++ di un oggetto wrapper da un thread a un altro spesso provocherà risultati imprevisti.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
