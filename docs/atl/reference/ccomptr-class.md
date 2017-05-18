---
title: Classe CComPtr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 21
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: ae7bb5e85f23492bdbef4af86d9f68fa83c991e2
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccomptr-class"></a>Classe CComPtr
Una classe di puntatore intelligente per la gestione dei puntatori a interfaccia COM.  
  
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
|[CComPtr::operator =](#operator_eq)|Assegna un puntatore al puntatore di membro.|  
  
## <a name="remarks"></a>Note  
 ATL utilizza `CComPtr` e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) per gestire i puntatori a interfaccia COM. Derivano entrambi da [CComPtrBase](../../atl/reference/ccomptrbase-class.md), ed entrambi eseguire il conteggio dei riferimenti automatico.  
  
 Il **CComPtr** e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) classi consentono di eliminare le perdite di memoria eseguendo il conteggio dei riferimenti automatico.  Le funzioni seguenti entrambi eseguono le stesse operazioni logiche; Tuttavia, si noti come la seconda versione potrebbe essere meno soggetto a errori tramite il **CComPtr** classe:  
  
 [!code-cpp[NVC_ATL_Utilities&#130;](../../atl/codesnippet/cpp/ccomptr-class_1.cpp)]  
  
 [!code-cpp[&#131; NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomptr-class_2.cpp)]  
  
 Nelle build di Debug collegamento atlsd per l'analisi codice.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 `CComPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="ccomptr"></a>CComPtr::CComPtr  
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
  
##  <a name="operator_eq"></a>CComPtr::operator =  
 Operatore di assegnazione.  
  
```
T* operator= (T* lp) throw ();
T* operator= (const CComPtr<T>& lp) throw ();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore a aggiornato `CComPtr` oggetto  
  
### <a name="remarks"></a>Note  
 Questa operazione AddRefs il nuovo oggetto e rilascia l'oggetto esistente, se esiste.  
  
## <a name="see-also"></a>Vedere anche  
 [CComPtr::CComPtr](#ccomptr)   
 [CComQIPtr::CComQIPtr](../../atl/reference/ccomqiptr-class.md#ccomqiptr)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

