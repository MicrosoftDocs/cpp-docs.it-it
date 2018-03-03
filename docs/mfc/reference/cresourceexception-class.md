---
title: Classe CResourceException | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CResourceException
- AFXWIN/CResourceException
- AFXWIN/CResourceException::CResourceException
dev_langs:
- C++
helpviewer_keywords:
- CResourceException [MFC], CResourceException
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e2e17b859042a5712a998eaeebe9f16f81c91200
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cresourceexception-class"></a>Classe CResourceException
Generato quando Windows non trova o alloca una risorsa richiesta.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CResourceException : public CSimpleException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CResourceException::CResourceException](#cresourceexception)|Costruisce un oggetto `CResourceException`.|  
  
## <a name="remarks"></a>Note  
 Nessun ulteriore qualificazione è necessaria o possibile.  
  
 Per ulteriori informazioni sull'utilizzo `CResourceException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CResourceException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cresourceexception"></a>CResourceException::CResourceException  
 Costruisce un oggetto `CResourceException`.  
  
```  
CResourceException();
```  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowResourceException](exception-processing.md#afxthrowresourceexception). Per ulteriori informazioni sulle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](cexception-class.md)   
 [Grafico della gerarchia](../hierarchy-chart.md)


