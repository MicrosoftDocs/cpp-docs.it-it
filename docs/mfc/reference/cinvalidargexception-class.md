---
title: Classe CInvalidArgException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CInvalidArgException
- AFX/CInvalidArgException
- AFX/CInvalidArgException::CInvalidArgException
dev_langs:
- C++
helpviewer_keywords:
- CInvalidArgException class
ms.assetid: e43d7c67-1157-47f8-817a-804083e8186e
caps.latest.revision: 19
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
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 4091c0e8a35320482eba193c89c90982c7e4fca9
ms.lasthandoff: 02/24/2017

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
  
##  <a name="cinvalidargexception"></a>CInvalidArgException::CInvalidArgException  
 Costruttore.  
  
```  
CInvalidArgException();
```  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente. chiamare la funzione globale **AfxThrowInvalidArgException**.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CSimpleException](../../mfc/reference/csimpleexception-class.md)

