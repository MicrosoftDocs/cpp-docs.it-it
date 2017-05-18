---
title: Classe CUserException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CUserException
dev_langs:
- C++
helpviewer_keywords:
- operations [C++], stopping
- exceptions, throwing
- CUserException class
- errors [C++], trapping
- operations [C++]
- throwing exceptions, stopping user operations
ms.assetid: 2156ba6d-2cce-415a-9000-6f02c26fcd7d
caps.latest.revision: 23
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: 8548ffa7ad9032e174d650e210a70a29b0e3f19d
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cuserexception-class"></a>Classe CUserException
Generata per arrestare un'operazione dell'utente finale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CUserException : public CSimpleException  
```  
  
## <a name="remarks"></a>Note  
 Utilizzare `CUserException` quando si desidera utilizzare il meccanismo di eccezione throw/catch per eccezioni specifiche dell'applicazione. "Utente" nel nome della classe può essere interpretata come "l'utente ha eseguito un'operazione eccezionali che si desidera gestire."  
  
 Oggetto `CUserException` normalmente, viene generata dopo la chiamata la funzione globale `AfxMessageBox` per notificare all'utente che un'operazione non riuscita. Quando si scrive un gestore di eccezioni, gestire l'eccezione appositamente dall'utente in genere ha già ricevuto alcuna notifica dell'errore. In alcuni casi, il framework genera questa eccezione. Per generare un `CUserException` autonomamente, avvisare l'utente e quindi chiamare la funzione globale `AfxThrowUserException`.  
  
 Nell'esempio seguente, una funzione che contiene le operazioni che potrebbero avere esito negativo, avvisa l'utente e genera un `CUserException`. La funzione chiamante rileva l'eccezione e viene gestita in modo specifico:  
  
 [!code-cpp[NVC_MFCExceptions&#24;](../../mfc/codesnippet/cpp/cuserexception-class_1.cpp)]  
  
 Per ulteriori informazioni sull'utilizzo di `CUserException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CUserException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CException (classe)](../../mfc/reference/cexception-class.md)

