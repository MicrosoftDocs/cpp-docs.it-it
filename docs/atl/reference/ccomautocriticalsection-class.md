---
title: Classe CComAutoCriticalSection | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection::CComAutoCriticalSection
dev_langs: C++
helpviewer_keywords: CComAutoCriticalSection class
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d12abfceeebeb1cac89b510c14d7a9211173406e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

  
 Il `Init` e `Term` metodi [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) non sono disponibili quando si utilizza questa classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 `CComAutoCriticalSection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore  
  
##  <a name="ccomautocriticalsection"></a>CComAutoCriticalSection::CComAutoCriticalSection  
 Costruttore.  
  
```
CComAutoCriticalSection();
```  
  
### <a name="remarks"></a>Note  
 Chiama la funzione Win32 [InitializeCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms683472), che inizializza l'oggetto sezione critica.  
  
##  <a name="dtor"></a>CComAutoCriticalSection:: ~ CComAutoCriticalSection  
 Distruttore.  
  
```
~CComAutoCriticalSection() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore chiama [DeleteCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682552), che rilascia tutte le risorse di sistema utilizzate dall'oggetto sezione critica.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)
