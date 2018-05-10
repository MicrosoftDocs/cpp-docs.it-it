---
title: Classe scoped_d3d_access_lock | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- scoped_d3d_access_lock
- AMPRT/scoped_d3d_access_lock
- AMPRT/concurrency::direct3d::scoped_d3d_access_lock::scoped_d3d_access_lock
dev_langs:
- C++
ms.assetid: 0ad333e6-9839-4736-a722-16d95d70c4b1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0053fa89139ac806a3d8ae0572cd053dd6bec72c
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
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
|[operator=](#operator_eq)|Acquisisce la proprietà di un blocco da un altro `scoped_d3d_access_lock`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `scoped_d3d_access_lock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Namespace:** Concurrency:: Direct3D  

##  <a name="ctor"></a> scoped_d3d_access_lock 

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

  
##  <a name="dtor"></a> ~scoped_d3d_access_lock 

 Rilascia il blocco di accesso D3D su associato `accelerator_view` oggetto.  
  
```  
~scoped_d3d_access_lock();
```  
## <a name="operator_eq"></a> operator= 

Acquisisce la proprietà di un blocco di accesso D3D da un altro `scoped_d3d_access_lock` oggetto, il rilascio del blocco precedente.  
 
```  
scoped_d3d_access_lock& operator= (scoped_d3d_access_lock&& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Accelerator_view da cui si desidera spostare il blocco di accesso D3D.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `scoped_accelerator_view_lock`.  

## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)
