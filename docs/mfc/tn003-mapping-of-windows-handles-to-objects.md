---
description: 'Altre informazioni su: TN003: mapping degli handle di Windows agli oggetti'
title: 'TN003: mapping di handle di finestre a oggetti'
ms.date: 11/04/2016
f1_keywords:
- vc.mapping
helpviewer_keywords:
- TN003
- handle maps
- Windows handles to objects [MFC]
- mappings [MFC], Windows handles to objects
ms.assetid: fbea9f38-992c-4091-8dbc-f29e288617d6
ms.openlocfilehash: e4a0bfa2315ec2b9d67d884d4fdebe314599f454
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216041"
---
# <a name="tn003-mapping-of-windows-handles-to-objects"></a>TN003: mapping di handle di finestre a oggetti

Questa nota descrive le routine MFC che supportano il mapping di handle di oggetti Windows a oggetti C++.

## <a name="the-problem"></a>Problema

Gli oggetti di Windows sono in genere rappresentati da vari oggetti [handle](/windows/win32/WinProg/windows-data-types) . le classi MFC eseguono il wrapping degli handle di oggetti Windows con gli oggetti C++. Le funzioni di wrapping dell'handle della libreria di classi MFC consentono di trovare l'oggetto C++ che esegue il wrapping dell'oggetto Windows con un handle specifico. Tuttavia, a volte un oggetto non dispone di un oggetto wrapper C++ e, in questi casi, il sistema crea un oggetto temporaneo che funge da wrapper C++.

Gli oggetti di Windows che usano le mappe di handle sono i seguenti:

- HWND ([](../mfc/reference/cwnd-class.md) `CWnd` classi derivate da CWnd e)

- HDC ([](../mfc/reference/cdc-class.md) `CDC` classi derivate da CDC e)

- HMENU ([CMenu](../mfc/reference/cmenu-class.md))

- HPEN ([CGdiObject](../mfc/reference/cgdiobject-class.md))

- HBRUSH ( `CGdiObject` )

- HFONT ( `CGdiObject` )

- HBITMAP ( `CGdiObject` )

- HPALETTE ( `CGdiObject` )

- HRGN ( `CGdiObject` )

- HIMAGELIST ([CImageList](../mfc/reference/cimagelist-class.md))

- SOCKET ([CSocket](../mfc/reference/csocket-class.md))

Dato un handle a uno di questi oggetti, è possibile trovare l'oggetto MFC che esegue il wrapping dell'handle chiamando il metodo statico `FromHandle` . Dato un HWND denominato *HWND*, ad esempio, la riga seguente restituirà un puntatore all'oggetto `CWnd` che esegue il wrapping di *HWND*:

```
CWnd::FromHandle(hWnd)
```

Se *HWND* non dispone di un oggetto wrapper specifico, viene creato un oggetto temporaneo `CWnd` per eseguire il wrapping di *HWND*. In questo modo è possibile ottenere un oggetto C++ valido da qualsiasi handle.

Quando si dispone di un oggetto wrapper, è possibile recuperare il relativo handle da una variabile membro pubblica della classe wrapper. Nel caso di un `CWnd` oggetto, *M_HWND* contiene HWND per l'oggetto.

## <a name="attaching-handles-to-mfc-objects"></a>Associazione di handle a oggetti MFC

Dato un oggetto wrapper handle appena creato e un handle a un oggetto di Windows, è possibile associare i due chiamando la `Attach` funzione come nell'esempio seguente:

```
CWnd myWnd;
myWnd.Attach(hWnd);
```

In questo modo si crea una voce nella mappa permanente che associa *myWnd* e *HWND*. La chiamata a restituirà `CWnd::FromHandle(hWnd)` ora un puntatore a *myWnd*. Quando *myWnd* viene eliminato, il distruttore eliminerà automaticamente *HWND* chiamando la funzione [DestroyWindow](/windows/win32/api/winuser/nf-winuser-destroywindow) di Windows. Se questa operazione non è necessaria, *HWND* deve essere scollegato da *MyWnd* prima che *myWnd* venga eliminato definitivamente, in genere quando si esce dall'ambito in cui è stato definito *myWnd* . Il `Detach` metodo esegue questa operazione.

```
myWnd.Detach();
```

## <a name="more-about-temporary-objects"></a>Altre informazioni sugli oggetti temporanei

Gli oggetti temporanei vengono creati ogni volta `FromHandle` che viene assegnato un handle che non dispone già di un oggetto wrapper. Questi oggetti temporanei vengono scollegati dal relativo handle ed eliminati dalle `DeleteTempMap` funzioni. Per impostazione predefinita, [CWinThread:: OnIdle](../mfc/reference/cwinthread-class.md#onidle) chiama automaticamente `DeleteTempMap` per ogni classe che supporta le mappe di handle temporanee. Ciò significa che non è possibile presupporre che un puntatore a un oggetto temporaneo sarà valido oltre il punto di uscita dalla funzione in cui è stato ottenuto il puntatore.

## <a name="wrapper-objects-and-multiple-threads"></a>Oggetti wrapper e più thread

Sia gli oggetti temporanei che quelli permanenti vengono mantenuti in base ai singoli thread. Ovvero, un thread non può accedere agli oggetti wrapper C++ di un altro thread, indipendentemente dal fatto che sia temporaneo o permanente.

Per passare questi oggetti da un thread a un altro, inviarli sempre come `HANDLE` tipo nativo. Il passaggio di un oggetto wrapper C++ da un thread a un altro comporta spesso risultati imprevisti.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
