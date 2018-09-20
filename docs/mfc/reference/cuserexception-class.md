---
title: Classe CUserException | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CUserException
dev_langs:
- C++
helpviewer_keywords:
- operations [MFC], stopping
- exceptions [MFC], throwing
- CUserException class [MFC]
- errors [MFC], trapping
- operations [MFC]
- throwing exceptions [MFC], stopping user operations
ms.assetid: 2156ba6d-2cce-415a-9000-6f02c26fcd7d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 71d2be1c00e518597a5d5121d7a53544bd29067f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46419659"
---
# <a name="cuserexception-class"></a>Classe CUserException

Generata per arrestare un'operazione dell'utente finale.

## <a name="syntax"></a>Sintassi

```
class CUserException : public CSimpleException
```

## <a name="remarks"></a>Note

Usare `CUserException` quando si desidera utilizzare il meccanismo delle eccezioni catch/throw per eccezioni specifiche dell'applicazione. "User" nel nome della classe può essere interpretato come "l'utente ha eseguito un'operazione che devo gestire eccezionali."

Oggetto `CUserException` viene solitamente generato dopo la chiamata la funzione globale `AfxMessageBox` per notificare all'utente che un'operazione non riuscita. Quando si scrive un gestore di eccezioni, gestire l'eccezione in modo speciale in quanto l'utente in genere ha già ricevuto alcuna notifica dell'errore. In alcuni casi, il framework genera questa eccezione. Per generare una `CUserException` manualmente, avvisa l'utente e quindi chiamare la funzione globale `AfxThrowUserException`.

Nell'esempio seguente, una funzione che contiene le operazioni che possono generare errori avvisa l'utente e genera un `CUserException`. La funzione chiamante rileva l'eccezione e viene gestita in modo speciale:

[!code-cpp[NVC_MFCExceptions#24](../../mfc/codesnippet/cpp/cuserexception-class_1.cpp)]

Per altre informazioni sull'uso `CUserException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CUserException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)
