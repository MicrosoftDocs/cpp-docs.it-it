---
title: Classe CMemoryException | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 18947e40aefd2820816abd419440ff929feca2a2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
##  <a name="cmemoryexception"></a>CMemoryException::CMemoryException  
 Costruisce un oggetto `CMemoryException`.  
  
```  
CMemoryException();  
```  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). Questa funzione globale può avere esito positivo in una situazione di memoria insufficiente perché costruisce l'oggetto exception nella memoria allocata in precedenza. Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere l'articolo [eccezioni](../exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](cexception-class.md)   
 [Grafico della gerarchia](../hierarchy-chart.md)



