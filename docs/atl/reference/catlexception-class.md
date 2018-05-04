---
title: Classe CAtlException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAtlException
- ATLEXCEPT/ATL::CAtlException
- ATLEXCEPT/ATL::CAtlException::CAtlException
- ATLEXCEPT/ATL::CAtlException::m_hr
dev_langs:
- C++
helpviewer_keywords:
- CAtlException class
ms.assetid: 3fd7b041-f70d-4292-b947-0d70781d95a8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: aaafdf42d218e2c3bca1e8ee28c27898f80bcf40
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
|[CAtlException::operator HRESULT](#operator_hresult)|Esegue il cast l'oggetto corrente e un valore HRESULT.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlException::m_hr](#m_hr)|La variabile di tipo creato dall'oggetto e utilizzato per archiviare la condizione di errore HRESULT.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CAtlException` oggetto rappresenta una condizione di eccezione correlata a un'operazione di ATL. La `CAtlException` classe include un membro dati pubblico che archivia il codice di stato che indica il motivo dell'eccezione e un operatore di cast che consente di gestire l'eccezione, come se fosse un valore HRESULT.  
  
 In generale, si chiamerà `AtlThrow` invece di creare un `CAtlException` direttamente l'oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlexcept.h  
  
##  <a name="catlexception"></a>  CAtlException::CAtlException  
 Costruttore.  
  
```
CAtlException(HRESULT hr) throw();
CAtlException() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hr`  
 Il `HRESULT` codice di errore.  
  
##  <a name="operator_hresult"></a>  CAtlException::operator HRESULT 
 Esegue il cast l'oggetto corrente e un valore HRESULT.  
  
```  
operator HRESULT() const throw ();
```  
  
##  <a name="m_hr"></a>  CAtlException::m_hr  
 Il `HRESULT` (membro dati).  
  
```
HRESULT m_hr;
```  
  
### <a name="remarks"></a>Note  
 Il membro dati che archivia la condizione di errore. Il valore HRESULT viene impostato dal costruttore, [CAtlException::CAtlException](#catlexception).  
  
## <a name="see-also"></a>Vedere anche  
 [AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
