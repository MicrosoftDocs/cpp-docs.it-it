---
title: Classe CInvalidArgException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CInvalidArgException
- AFX/CInvalidArgException
- AFX/CInvalidArgException::CInvalidArgException
dev_langs:
- C++
helpviewer_keywords:
- CInvalidArgException [MFC], CInvalidArgException
ms.assetid: e43d7c67-1157-47f8-817a-804083e8186e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a71802a4544ae238474a0747d879d29c69f6ba19
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cinvalidargexception-class"></a>Classe CInvalidArgException
Questa classe rappresenta una condizione di eccezione di argomento non valido.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CInvalidArgException : public CSimpleException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInvalidArgException::CInvalidArgException](#cinvalidargexception)|Costruttore.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CInvalidArgException` oggetto rappresenta una condizione di eccezione di argomento non valido.  
  
 Per ulteriori informazioni sulla gestione delle eccezioni, vedere il [CException (classe)](../../mfc/reference/cexception-class.md) argomento e [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CInvalidArgException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cinvalidargexception"></a>  CInvalidArgException::CInvalidArgException  
 Costruttore.  
  
```  
CInvalidArgException();
```  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente. chiamare la funzione globale **AfxThrowInvalidArgException**.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CSimpleException](../../mfc/reference/csimpleexception-class.md)
