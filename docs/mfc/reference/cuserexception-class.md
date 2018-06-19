---
title: Classe CUserException | Documenti Microsoft
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
ms.openlocfilehash: a1701f6894ba3b44205526c59bad7ef635c1bbbd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33369473"
---
# <a name="cuserexception-class"></a>Classe CUserException
Generata per arrestare un'operazione dell'utente finale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CUserException : public CSimpleException  
```  
  
## <a name="remarks"></a>Note  
 Utilizzare `CUserException` quando si desidera utilizzare il meccanismo di eccezione throw/catch per eccezioni specifiche dell'applicazione. "Utente" nel nome della classe può essere interpretata come "dell'utente ha eseguito delle operazioni necessarie per gestire eccezionali."  
  
 Oggetto `CUserException` viene in genere generata dopo che viene chiamata la funzione globale `AfxMessageBox` per notificare all'utente che un'operazione non riuscita. Quando si scrive un gestore di eccezioni, gestire l'eccezione appositamente dall'utente in genere ha già ricevuto alcuna notifica dell'errore. In alcuni casi, il framework genera questa eccezione. Per generare un `CUserException` manualmente, avvisare l'utente e quindi chiamare la funzione globale `AfxThrowUserException`.  
  
 Nell'esempio seguente, una funzione che contiene le operazioni che potrebbero non riuscire, avvisa l'utente e genera un `CUserException`. La funzione chiamante rileva l'eccezione e viene gestita in modo speciale:  
  
 [!code-cpp[NVC_MFCExceptions#24](../../mfc/codesnippet/cpp/cuserexception-class_1.cpp)]  
  
 Per ulteriori informazioni sull'utilizzo `CUserException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CUserException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CException](../../mfc/reference/cexception-class.md)
