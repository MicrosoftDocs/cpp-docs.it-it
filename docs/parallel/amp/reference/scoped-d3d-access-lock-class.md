---
title: Classe scoped_d3d_access_lock | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 0ad333e6-9839-4736-a722-16d95d70c4b1
caps.latest.revision: 8
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: c5bc6183b3abc7a5598159717b0dbfa1dae2a05d
ms.lasthandoff: 02/24/2017

---
# <a name="scopedd3daccesslock-class"></a>Classe scoped_d3d_access_lock
Wrapper RAII per un blocco di accesso D3D su un oggetto accelerator_view.  
  
### <a name="syntax"></a>Sintassi  
  
```  
class scoped_d3d_access_lock;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore scoped_d3d_access_lock](#ctor)|Di overload. Costruisce un oggetto `scoped_d3d_access_lock`. Il blocco viene rilasciato quando l'oggetto esce dall'ambito.|  
|[~ Distruttore scoped_d3d_access_lock](#dtor)|Rilascia il blocco di accesso D3D su associato `accelerator_view` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore = (operatore)](#operator_eq)|Acquisisce la proprietà di un blocco da un altro `scoped_d3d_access_lock`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `scoped_d3d_access_lock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Namespace:** Concurrency:: Direct3D  

##  <a name="a-namectora-scopedd3daccesslock"></a><a name="ctor"></a>scoped_d3d_access_lock 

 Costruisce un oggetto `scoped_d3d_access_lock`. Il blocco viene rilasciato quando l'oggetto esce dall'ambito.  
 
```  
explicit scoped_d3d_access_lock(// [1] constructor  
    accelerator_view& _Av);

 
explicit scoped_d3d_access_lock(// [2] constructor  
    accelerator_view& _Av,  
    adopt_d3d_access_lock_t _T);

 
scoped_d3d_access_lock(// [3] move constructor  
    scoped_d3d_access_lock&& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 Il `accelerator_view` per il blocco di adottare.  
  
 `_T`  
 Oggetto `adopt_d3d_access_lock_t`.  
  
 `_Other`  
 Il `scoped_d3d_access_lock` oggetto da cui si desidera spostare un blocco esistente.  
  
## <a name="construction"></a>Costruzione  
 [1] costruttore  
 Acquisisce un blocco di accesso D3D sul determinato [accelerator_view](accelerator-view-class.md) oggetto. Blocchi di costruzione fino a quando non viene acquisito il blocco.  
  
 [2] costruttore  
 Un blocco di accesso D3D da adottare il determinato [accelerator_view](accelerator-view-class.md) oggetto.  
  
 [3] costruttore di spostamento  
 Accetta un blocco di accesso D3D esistente da un altro `scoped_d3d_access_lock` oggetto. Costruzione non è bloccata.  

  
##  <a name="a-namedtora-scopedd3daccesslock"></a><a name="dtor"></a>~ scoped_d3d_access_lock 

 Rilascia il blocco di accesso D3D su associato `accelerator_view` oggetto.  
  
```  
~scoped_d3d_access_lock();
```  
## <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

Acquisisce la proprietà di un blocco di accesso D3D da un altro `scoped_d3d_access_lock` oggetto, il rilascio del blocco precedente.  
 
```  
scoped_d3d_access_lock& operator= (scoped_d3d_access_lock&& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Accelerator_view dalla quale spostare il blocco di accesso D3D.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `scoped_accelerator_view_lock`.  

## <a name="see-also"></a>Vedere anche  
 [Namespace Concurrency:: Direct3D](concurrency-direct3d-namespace.md)

