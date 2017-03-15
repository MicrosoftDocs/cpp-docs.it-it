---
title: Classe CStringRefElementTraits | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStringRefElementTraits
- ATL.CStringRefElementTraits
- ATL::CStringRefElementTraits
dev_langs:
- C++
helpviewer_keywords:
- CStringRefElementTraits class
ms.assetid: cc15062d-5627-46cc-ac2b-1744afdc2dbd
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
ms.openlocfilehash: 3709a5d4aac02651e5b6fafd441499fea1f8eabc
ms.lasthandoff: 02/24/2017

---
# <a name="cstringrefelementtraits-class"></a>Classe CStringRefElementTraits
Questa classe fornisce funzioni statiche relative alle stringhe archiviate negli oggetti di classe di raccolta. Gli oggetti stringa sono trattati come riferimenti.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T>  
class CStringRefElementTraits : public CElementTraitsBase<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringRefElementTraits::CompareElements](#compareelements)|Chiamare questa funzione per confrontare due elementi della stringa per verificarne l'uguaglianza statica.|  
|[CStringRefElementTraits::CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi della stringa.|  
|[CStringRefElementTraits::Hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si utilizza una classe di raccolta per archiviare i dati basati su stringa. A differenza di [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md) e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md), `CStringRefElementTraits` fa sì che il `CString` argomenti da passare come **const CString /** riferimenti.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 `CStringRefElementTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="a-namecompareelementsa--cstringrefelementtraitscompareelements"></a><a name="compareelements"></a>CStringRefElementTraits::CompareElements  
 Chiamare questa funzione per confrontare due elementi della stringa per verificarne l'uguaglianza statica.  
  
```
static bool CompareElements(INARGTYPE element1, INARGTYPE element2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `element1`  
 Il primo elemento di stringa.  
  
 `element2`  
 Il secondo elemento di stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se gli elementi sono uguali, false in caso contrario.  
  
##  <a name="a-namecompareelementsordereda--cstringrefelementtraitscompareelementsordered"></a><a name="compareelementsordered"></a>CStringRefElementTraits::CompareElementsOrdered  
 Chiamare questa funzione statica per confrontare due elementi della stringa.  
  
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
  
##  <a name="a-namehasha--cstringrefelementtraitshash"></a><a name="hash"></a>CStringRefElementTraits::Hash  
 Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.  
  
```
static ULONG Hash(INARGTYPE str) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 L'elemento della stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore hash, calcolato usando i contenuti della stringa.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

