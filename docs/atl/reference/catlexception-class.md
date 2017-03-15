---
title: Classe CAtlException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlException
- ATL::CAtlException
- ATL.CAtlException
dev_langs:
- C++
helpviewer_keywords:
- CAtlException class
ms.assetid: 3fd7b041-f70d-4292-b947-0d70781d95a8
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 30c9235f16581c86ab5612522909dc366b1ce17e
ms.lasthandoff: 02/24/2017

---
# <a name="catlexception-class"></a>Classe CAtlException
Questa classe definisce un'eccezione di ATL.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlException
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlException::CAtlException](#catlexception)|Costruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlException::operator HRESULT](#operator_hresult)|Esegue il cast l'oggetto corrente con un valore HRESULT.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlException::m_hr](#m_hr)|La variabile di tipo HRESULT creato dall'oggetto e utilizzato per archiviare la condizione di errore.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CAtlException` oggetto rappresenta una condizione di eccezione correlata a un'operazione di ATL. La `CAtlException` classe include un membro dati pubblico che archivia il codice di stato che indica il motivo dell'eccezione e un operatore cast che consente di considerare l'eccezione come se fosse un valore HRESULT.  
  
 In generale, si chiamerà `AtlThrow` invece di creare un `CAtlException` direttamente l'oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlexcept.h  
  
##  <a name="a-namecatlexceptiona--catlexceptioncatlexception"></a><a name="catlexception"></a>CAtlException::CAtlException  
 Costruttore.  
  
```
CAtlException(HRESULT hr) throw();
CAtlException() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hr`  
 Il `HRESULT` codice di errore.  
  
##  <a name="a-nameoperatorhresulta--catlexceptionoperator-hresult"></a><a name="operator_hresult"></a>CAtlException::operator HRESULT 
 Esegue il cast l'oggetto corrente con un valore HRESULT.  
  
```  
operator HRESULT() const throw ();
```  
  
##  <a name="a-namemhra--catlexceptionmhr"></a><a name="m_hr"></a>CAtlException::m_hr  
 Il `HRESULT` (membro dati).  
  
```
HRESULT m_hr;
```  
  
### <a name="remarks"></a>Note  
 Il membro dati che archivia la condizione di errore. Il valore HRESULT è impostato dal costruttore [CAtlException::CAtlException](#catlexception).  
  
## <a name="see-also"></a>Vedere anche  
 [AtlThrow](http://msdn.microsoft.com/library/2bd111da-8170-488d-914a-c9bf6b6765f7)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

