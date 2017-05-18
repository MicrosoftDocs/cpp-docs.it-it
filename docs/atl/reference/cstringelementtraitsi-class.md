---
title: Classe CStringElementTraitsI | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
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
dev_langs:
- C++
helpviewer_keywords:
- CStringElementTraitsI class
ms.assetid: c23f92b1-91e5-400f-96ed-258b02622b7a
caps.latest.revision: 18
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 995c4798f92db3b3f065bf2176ab52ff53d282b0
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cstringelementtraitsi-class"></a>Classe CStringElementTraitsI
Questa classe fornisce funzioni statiche relative alle stringhe archiviate negli oggetti di classe di raccolta. È simile a [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), ma esegue confronti tra maiuscole e minuscole.  
  
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
|[CStringElementTraitsI::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringElementTraitsI::CompareElements](#compareelements)|Chiamare questa funzione statica per confrontare due elementi della stringa per verificarne l'uguaglianza, ignorando tra maiuscole e minuscole.|  
|[CStringElementTraitsI::CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi della stringa, ignorando tra maiuscole e minuscole.|  
|[CStringElementTraitsI::Hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si utilizza una classe di raccolta per archiviare i dati basati su stringa. Utilizzare [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono essere con affrontati come riferimenti.  
  
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
 Zero se le stringhe sono identiche, < 0="" if=""> `str1` è minore di `str2`, > 0 o se `str1` è maggiore di `str2`. Il [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) metodo viene utilizzato per eseguire i confronti.  

  
### <a name="remarks"></a>Note  
 I confronti viene fatta distinzione tra maiuscole e minuscole.  
  
##  <a name="hash"></a>CStringElementTraitsI::Hash  
 Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.  
  
```
static ULONG Hash(INARGTYPE str) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 L'elemento della stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore hash, calcolato usando i contenuti della stringa.  
  
##  <a name="inargtype"></a>CStringElementTraitsI::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.  
  
```
typedef T::PCXSTR INARGTYPE;
```  
  
##  <a name="outargtype"></a>CStringElementTraitsI::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.  
  
```
typedef T& OUTARGTYPE;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)

