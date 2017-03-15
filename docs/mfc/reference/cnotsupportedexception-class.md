---
title: Classe di eccezione CNotSupportedException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CNotSupportedException
dev_langs:
- C++
helpviewer_keywords:
- CNotSupportedException class
- unsupported features
- exceptions, not supported
ms.assetid: e517391b-eb94-4c39-ae32-87b45bf7d624
caps.latest.revision: 20
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
ms.openlocfilehash: 6cb66448d0dadaf1f70c3606bc1b9027bd217a38
ms.lasthandoff: 02/24/2017

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
  
 Per ulteriori informazioni sull'utilizzo di `CNotSupportedException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CNotSupportedException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="a-namecnotsupportedexceptiona--cnotsupportedexceptioncnotsupportedexception"></a><a name="cnotsupportedexception"></a>CNotSupportedException::CNotSupportedException  
 Costruisce un oggetto `CNotSupportedException`.  
  
```  
CNotSupportedException();
```  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception). Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](cexception-class.md)   
 [Grafico delle gerarchie](../hierarchy-chart.md)



