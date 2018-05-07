---
title: Classe di eccezione CNotSupportedException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CNotSupportedException
- AFX/CNotSupportedException
- AFX/CNotSupportedException::CNotSupportedException
dev_langs:
- C++
helpviewer_keywords:
- CNotSupportedException [MFC], CNotSupportedException
ms.assetid: e517391b-eb94-4c39-ae32-87b45bf7d624
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 510f9db4a7e5688df76baafa868846fd1614f584
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cnotsupportedexception-class"></a>Classe di eccezione CNotSupportedException
Rappresenta un'eccezione che è il risultato della richiesta di una funzionalità non supportata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CNotSupportedException : public CSimpleException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNotSupportedException::CNotSupportedException](#cnotsupportedexception)|Costruisce un oggetto `CNotSupportedException`.|  
  
## <a name="remarks"></a>Note  
 Nessun ulteriore qualificazione è necessaria o possibile.  
  
 Per ulteriori informazioni sull'utilizzo `CNotSupportedException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CNotSupportedException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cnotsupportedexception"></a>  CNotSupportedException::CNotSupportedException  
 Costruisce un oggetto `CNotSupportedException`.  
  
```  
CNotSupportedException();
```  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception). Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](cexception-class.md)   
 [Grafico della gerarchia](../hierarchy-chart.md)


