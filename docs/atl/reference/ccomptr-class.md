---
title: Classe CComPtr | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComPtr
- ATLBASE/ATL::CComPtr
- ATLBASE/ATL::CComPtr::CComPtr
dev_langs:
- C++
helpviewer_keywords:
- CComPtr class
ms.assetid: 22d9ea8d-ed66-4c34-940f-141db11e83bd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5254e463050d685840ff90334ecbdb94372f27ef
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ccomptr-class"></a>Classe CComPtr
Una classe del puntatore intelligente per la gestione dei puntatori a interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class CComPtr
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Un'interfaccia COM che specifica il tipo di puntatore da archiviare.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtr::CComPtr](#ccomptr)|Costruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtr::operator =](#operator_eq)|Assegna un puntatore al puntatore a membro.|  
  
## <a name="remarks"></a>Note  
 Utilizza ATL `CComPtr` e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) per gestire i puntatori a interfaccia COM. Entrambe sono derivate da [CComPtrBase](../../atl/reference/ccomptrbase-class.md), ed entrambi eseguire il conteggio dei riferimenti automatico.  
  
 Il **CComPtr** e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) classi possono contribuire a evitare perdite di memoria eseguendo il conteggio dei riferimenti automatico.  Le funzioni seguenti entrambi eseguono le stesse operazioni logiche; Si noti, tuttavia, come la seconda versione potrebbe essere meno soggetto a errori tramite il **CComPtr** classe:  
  
 [!code-cpp[NVC_ATL_Utilities#130](../../atl/codesnippet/cpp/ccomptr-class_1.cpp)]  
  
 [!code-cpp[NVC_ATL_Utilities#131](../../atl/codesnippet/cpp/ccomptr-class_2.cpp)]  
  
 Nelle build di Debug, collegare atlsd.lib per l'analisi codice.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 `CComPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="ccomptr"></a>  CComPtr::CComPtr  
 Costruttore.  
  
```
CComPtr() throw ();
CComPtr(T* lp) throw ();
CComPtr (const CComPtr<T>& lp) throw ();
```  
  
### <a name="parameters"></a>Parametri  
 `lp`  
 Utilizzato per inizializzare il puntatore di interfaccia.  
  
 `T`  
 Un'interfaccia COM.  
  
##  <a name="operator_eq"></a>  CComPtr::operator =  
 Operatore di assegnazione.  
  
```
T* operator= (T* lp) throw ();
T* operator= (const CComPtr<T>& lp) throw ();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore a aggiornato `CComPtr` oggetto  
  
### <a name="remarks"></a>Note  
 Questa operazione AddRefs il nuovo oggetto e le versioni l'oggetto esistente, se presente.  
  
## <a name="see-also"></a>Vedere anche  
 [CComPtr::CComPtr](#ccomptr)   
 [CComQIPtr::CComQIPtr](../../atl/reference/ccomqiptr-class.md#ccomqiptr)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
