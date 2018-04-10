---
title: Classe CAutoRevertImpersonation | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- CAutoRevertImpersonation
- ATLSECURITY/ATL::CAutoRevertImpersonation
- ATLSECURITY/ATL::CAutoRevertImpersonation::CAutoRevertImpersonation
- ATLSECURITY/ATL::CAutoRevertImpersonation::Attach
- ATLSECURITY/ATL::CAutoRevertImpersonation::Detach
- ATLSECURITY/ATL::CAutoRevertImpersonation::GetAccessToken
dev_langs:
- C++
helpviewer_keywords:
- CAutoRevertImpersonation class
ms.assetid: 43732849-1940-4bd4-9d52-7a5698bb8838
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0b1982fc3c8b0d46dfd636cab63be82509fa07f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cautorevertimpersonation-class"></a>Classe CAutoRevertImpersonation
Questa classe Ripristina [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetti in uno stato nonimpersonating quando esce dall'ambito.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAutoRevertImpersonation
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoRevertImpersonation::CAutoRevertImpersonation](#cautorevertimpersonation)|Costruisce un `CAutoRevertImpersonation` oggetto|  
|[CAutoRevertImpersonation:: ~ CAutoRevertImpersonation](#dtor)|Elimina definitivamente l'oggetto, dopodiché viene ripristinata la rappresentazione di token di accesso.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoRevertImpersonation::Attach](#attach)|Consente di automatizzare l'annullamento della rappresentazione di un token di accesso.|  
|[CAutoRevertImpersonation::Detach](#detach)|Annulla l'annullamento della rappresentazione automatica.|  
|[CAutoRevertImpersonation::GetAccessToken](#getaccesstoken)|Recupera l'oggetto corrente token di accesso associato all'oggetto.|  
  
## <a name="remarks"></a>Note  
 Un [token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909) è un oggetto che descrive il contesto di sicurezza di un processo o thread e viene allocato per ogni utente connesso a un sistema di Windows NT o Windows 2000. Questi token di accesso possono essere rappresentati con il `CAccessToken` classe.  
  
 È talvolta necessario rappresentare i token di accesso. Questa classe viene fornita per praticità, ma non esegue la rappresentazione dei token di accesso; esegue solo la reversibilità automatica in uno stato nonimpersonated. Questo avviene perché la rappresentazione di token di accesso può essere eseguita in molti modi.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in Windows SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="attach"></a>CAutoRevertImpersonation::Attach  
 Consente di automatizzare l'annullamento della rappresentazione di un token di accesso.  
  
```
void Attach(const CAccessToken* pAT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pAT`  
 L'indirizzo del [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto ripristinare automaticamente  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere utilizzato solo se il [CAutoRevertImpersonation](../../atl/reference/cautorevertimpersonation-class.md) oggetto è stato creato con un valore NULL `CAccessToken` puntatore, o se [scollegamento](#detach) è stato chiamato in precedenza. Nei casi semplici, non è necessario utilizzare questo metodo.  
  
##  <a name="cautorevertimpersonation"></a>CAutoRevertImpersonation::CAutoRevertImpersonation  
 Costruisce un oggetto `CAutoRevertImpersonation`.  
  
```
CAutoRevertImpersonation(const CAccessToken* pAT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pAT`  
 L'indirizzo del [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto ripristinare automaticamente.  
  
### <a name="remarks"></a>Note  
 La rappresentazione effettiva del token di accesso deve essere eseguita separatamente da e preferibilmente prima della creazione di un `CAutoRevertImpersonation` oggetto. Questa rappresentazione verrà annullata automaticamente quando il `CAutoRevertImpersonation` oggetto esce dall'ambito.  
  
##  <a name="dtor"></a>CAutoRevertImpersonation:: ~ CAutoRevertImpersonation  
 Elimina definitivamente l'oggetto, dopodiché viene ripristinata la rappresentazione di token di accesso.  
  
```
~CAutoRevertImpersonation() throw();
```  
  
### <a name="remarks"></a>Note  
 Ripristina qualsiasi rappresentazione attualmente in uso per il [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto fornito in fase di costruzione o tramite il [collegamento](#attach) metodo. Se nessun `CAccessToken` è associato, il distruttore non ha alcun effetto.  
  
##  <a name="detach"></a>CAutoRevertImpersonation::Detach  
 Annulla l'annullamento della rappresentazione automatica.  
  
```
const CAccessToken* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indirizzo dell'oggetto associato in precedenza [CAccessToken](../../atl/reference/caccesstoken-class.md), o NULL se non esiste già.  
  
### <a name="remarks"></a>Note  
 La chiamata **scollegamento** impedisce il `CAutoRevertImpersonation` oggetto qualsiasi rappresentazione attualmente in uso per ripristinare il [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto associato all'oggetto. `CAutoRevertImpersonation`può essere eliminato in modo permanente senza alcun effetto o associare di nuovo lo stesso o a un'altra `CAccessToken` utilizzando [collegamento](#attach).  
  
##  <a name="getaccesstoken"></a>CAutoRevertImpersonation::GetAccessToken  
 Recupera l'oggetto corrente token di accesso associato all'oggetto.  
  
```
const CAccessToken* GetAccessToken() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indirizzo dell'oggetto associato in precedenza [CAccessToken](../../atl/reference/caccesstoken-class.md), o NULL se non esiste già.  
  
### <a name="remarks"></a>Note  
 Se questo metodo viene chiamato per gli scopi che includono la reversibilità di una rappresentazione di `CAccessToken` oggetto, il [scollegamento](#detach) metodo da utilizzare in sostituzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio ATLSecurity](../../visual-cpp-samples.md)   
 [Token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
