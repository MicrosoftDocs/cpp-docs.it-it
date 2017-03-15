---
title: Classe CComAutoCriticalSection | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CComAutoCriticalSection
- ATL::CComAutoCriticalSection
- CComAutoCriticalSection
dev_langs:
- C++
helpviewer_keywords:
- CComAutoCriticalSection class
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
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
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: 9f58a4cfd02af09a05b625a7e02b574b672adade
ms.lasthandoff: 02/24/2017

---
# <a name="ccomautocriticalsection-class"></a>Classe CComAutoCriticalSection
`CComAutoCriticalSection`fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComAutoCriticalSection : public CComCriticalSection
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAutoCriticalSection::CComAutoCriticalSection](#ccomautocriticalsection)|Costruttore.|  
|[CComAutoCriticalSection:: ~ CComAutoCriticalSection](#dtor)|Distruttore.|  
  
## <a name="remarks"></a>Note  
 `CComAutoCriticalSection`è simile alla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md), ad eccezione di `CComAutoCriticalSection` automaticamente Inizializza l'oggetto sezione critica nel costruttore.  
  
 In genere, si utilizza `CComAutoCriticalSection` tramite il `typedef` nome [AutoCriticalSection](ccommultithreadmodel-class.md#autocriticalsection). Questo nome fa riferimento a `CComAutoCriticalSection` quando [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) è in uso.  

  
 Il `Init` e `Term` metodi da [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) non sono disponibili quando si utilizza questa classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 `CComAutoCriticalSection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore. h  
  
##  <a name="a-nameccomautocriticalsectiona--ccomautocriticalsectionccomautocriticalsection"></a><a name="ccomautocriticalsection"></a>CComAutoCriticalSection::CComAutoCriticalSection  
 Costruttore.  
  
```
CComAutoCriticalSection();
```  
  
### <a name="remarks"></a>Note  
 Chiama la funzione Win32 [InitializeCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms683472), che inizializza l'oggetto sezione critica.  
  
##  <a name="a-namedtora--ccomautocriticalsectionccomautocriticalsection"></a><a name="dtor"></a>CComAutoCriticalSection:: ~ CComAutoCriticalSection  
 Distruttore.  
  
```
~CComAutoCriticalSection() throw();
```  
  
### <a name="remarks"></a>Note  
 Le chiamate di distruttore [DeleteCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682552), che rilascia tutte le risorse di sistema utilizzate dall'oggetto sezione critica.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

