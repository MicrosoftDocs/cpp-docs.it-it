---
title: Classe CStringElementTraitsI | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStringElementTraitsI
- ATLCOLL/ATL::CStringElementTraitsI
- ATLCOLL/ATL::CStringElementTraitsI::INARGTYPE
- ATLCOLL/ATL::CStringElementTraitsI::OUTARGTYPE
- ATLCOLL/ATL::CStringElementTraitsI::CompareElements
- ATLCOLL/ATL::CStringElementTraitsI::CompareElementsOrdered
- ATLCOLL/ATL::CStringElementTraitsI::Hash
dev_langs: C++
helpviewer_keywords: CStringElementTraitsI class
ms.assetid: c23f92b1-91e5-400f-96ed-258b02622b7a
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7803d85c7adf346a06f87d35aba7f42e47f77b2a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cstringelementtraitsi-class"></a>Classe CStringElementTraitsI
Questa classe fornisce funzioni statiche relative alle stringhe archiviate in oggetti di classe di raccolta. È simile a [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), ma consente di eseguire confronti tra maiuscole e minuscole.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T, class CharTraits = CDefaultCharTraits<T ::XCHAR>>  
class CStringElementTraitsI : public CElementTraitsBase<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringElementTraitsI::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|  
|[CStringElementTraitsI::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto della classe di raccolta.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringElementTraitsI::CompareElements](#compareelements)|Chiamare questa funzione statica per confrontare due elementi della stringa per verificarne l'uguaglianza, ignorando tra maiuscole e minuscole.|  
|[CStringElementTraitsI::CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi della stringa, ignorando tra maiuscole e minuscole.|  
|[CStringElementTraitsI::Hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento della stringa specificata.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si utilizza una classe di raccolta per archiviare i dati basati su stringa. Utilizzare [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono con trattata come riferimenti.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 `CStringElementTraitsI`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="compareelements"></a>CStringElementTraitsI::CompareElements  
 Chiamare questa funzione statica per confrontare due elementi della stringa per verificarne l'uguaglianza, ignorando tra maiuscole e minuscole.  
  
```
static bool CompareElements(INARGTYPE str1, INARGTYPE str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Il primo elemento di stringa.  
  
 `str2`  
 Il secondo elemento di stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se gli elementi sono uguali, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 I confronti viene fatta distinzione tra maiuscole e minuscole.  
  
##  <a name="compareelementsordered"></a>CStringElementTraitsI::CompareElementsOrdered  
 Chiamare questa funzione statica per confrontare due elementi della stringa, ignorando tra maiuscole e minuscole.  
  
```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Il primo elemento di stringa.  
  
 `str2`  
 Il secondo elemento di stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identiche, < 0 se `str1` è minore di `str2`, o > 0 se `str1` è maggiore di `str2`. Il [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) metodo viene utilizzato per eseguire i confronti.  

  
### <a name="remarks"></a>Note  
 I confronti viene fatta distinzione tra maiuscole e minuscole.  
  
##  <a name="hash"></a>CStringElementTraitsI::Hash  
 Chiamare questa funzione statica per calcolare un valore hash per l'elemento della stringa specificata.  
  
```
static ULONG Hash(INARGTYPE str) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 L'elemento della stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore hash, calcolato usando il contenuto della stringa.  
  
##  <a name="inargtype"></a>CStringElementTraitsI::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.  
  
```
typedef T::PCXSTR INARGTYPE;
```  
  
##  <a name="outargtype"></a>CStringElementTraitsI::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto della classe di raccolta.  
  
```
typedef T& OUTARGTYPE;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)
