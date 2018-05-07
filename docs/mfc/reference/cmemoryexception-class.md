---
title: Classe CMemoryException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMemoryException
- AFX/CMemoryException
- AFX/CMemoryException::CMemoryException
dev_langs:
- C++
helpviewer_keywords:
- CMemoryException [MFC], CMemoryException
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 12971af6bed7c04c6f6f214f0b583a4f7e6eb7a1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmemoryexception-class"></a>Classe CMemoryException
Rappresenta una condizione di eccezione di memoria insufficiente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMemoryException : public CSimpleException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemoryException::CMemoryException](#cmemoryexception)|Costruisce un oggetto `CMemoryException`.|  
  
## <a name="remarks"></a>Note  
 Nessun ulteriore qualificazione è necessaria o possibile. Le eccezioni di memoria vengono generate automaticamente da **nuova**. Se si scrivono funzioni di memoria, utilizzo `malloc`, ad esempio, quindi si sono responsabili della generazione di eccezioni di memoria.  
  
 Per ulteriori informazioni su `CMemoryException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CMemoryException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cmemoryexception"></a>  CMemoryException::CMemoryException  
 Costruisce un oggetto `CMemoryException`.  
  
```  
CMemoryException();  
```  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). Questa funzione globale può avere esito positivo in una situazione di memoria insufficiente perché costruisce l'oggetto exception nella memoria allocata in precedenza. Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere l'articolo [eccezioni](../exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](cexception-class.md)   
 [Grafico della gerarchia](../hierarchy-chart.md)



