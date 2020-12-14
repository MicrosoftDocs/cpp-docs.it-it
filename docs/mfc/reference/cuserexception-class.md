---
description: 'Altre informazioni su: classe CUserException'
title: Classe CUserException
ms.date: 11/04/2016
f1_keywords:
- CUserException
helpviewer_keywords:
- operations [MFC], stopping
- exceptions [MFC], throwing
- CUserException class [MFC]
- errors [MFC], trapping
- operations [MFC]
- throwing exceptions [MFC], stopping user operations
ms.assetid: 2156ba6d-2cce-415a-9000-6f02c26fcd7d
ms.openlocfilehash: 6104aa2883a80f88aed03634f09ad1947e9c6794
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344965"
---
# <a name="cuserexception-class"></a>Classe CUserException

Generata per arrestare un'operazione dell'utente finale.

## <a name="syntax"></a>Sintassi

```
class CUserException : public CSimpleException
```

## <a name="remarks"></a>Osservazioni

Utilizzare `CUserException` quando si desidera utilizzare il meccanismo di eccezione throw/catch per le eccezioni specifiche dell'applicazione. "User" nel nome della classe può essere interpretato come "l'utente ha fatto qualcosa di eccezionale che devo gestire".

Un oggetto `CUserException` viene in genere generato dopo aver chiamato la funzione globale `AfxMessageBox` per notificare all'utente che un'operazione non è riuscita. Quando si scrive un gestore di eccezioni, gestire l'eccezione in modo specifico perché l'utente in genere ha già ricevuto una notifica dell'errore. In alcuni casi, il Framework genera questa eccezione. Per generare un `CUserException` utente, avvisare l'utente e quindi chiamare la funzione globale `AfxThrowUserException` .

Nell'esempio riportato di seguito, una funzione che contiene operazioni che potrebbero non essere in grado di avvisare l'utente e genera un'eccezione `CUserException` . La funzione chiamante intercetta l'eccezione e la gestisce in modo specifico:

[!code-cpp[NVC_MFCExceptions#24](../../mfc/codesnippet/cpp/cuserexception-class_1.cpp)]

Per ulteriori informazioni sull'utilizzo di `CUserException` , vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CUserException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)
