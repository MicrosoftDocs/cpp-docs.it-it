---
title: Classe CResourceException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CResourceException
dev_langs:
- C++
helpviewer_keywords:
- resource allocation exception
- resources [C++], allocating
- resource exceptions
- exceptions, resource
- CResourceException class
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
caps.latest.revision: 22
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
ms.openlocfilehash: 2013a73f91687277df9dd1e6747aba2dd02a4346
ms.lasthandoff: 02/24/2017

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
  
 Per ulteriori informazioni sull'utilizzo di `CResourceException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CResourceException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-namecresourceexceptiona--cresourceexceptioncresourceexception"></a><a name="cresourceexception"></a>CResourceException::CResourceException  
 Costruisce un oggetto `CResourceException`.  
  
```  
CResourceException();
```  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowResourceException](exception-processing.md#afxthrowresourceexception). Per ulteriori informazioni sulle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](cexception-class.md)   
 [Grafico delle gerarchie](../hierarchy-chart.md)



