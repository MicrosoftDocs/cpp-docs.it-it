---
title: Classe CAtlFileMapping | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlFileMapping
- atlfile/ATL::CAtlFileMapping
dev_langs: C++
helpviewer_keywords: CAtlFileMapping class
ms.assetid: 899fc058-e05e-48b5-aca9-340403bb9e26
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a028c2458b0a5085a1f46bf31f377e6ed9e4d346
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="catlfilemapping-class"></a>Classe CAtlFileMapping
Questa classe rappresenta un file mappato alla memoria, l'aggiunta di un operatore di cast per i metodi di [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T = char>  
class CAtlFileMapping : public CAtlFileMappingBase
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati utilizzati per l'operatore di cast.  
  
## <a name="members"></a>Membri  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFileMapping::operator T *](#operator_t_star)|Consente la conversione implicita di `CAtlFileMapping` oggetti `T`  **\*** .|  
  
## <a name="remarks"></a>Note  
 Questa classe aggiunge un operatore di cast singolo per consentire la conversione implicita di `CAtlFileMapping` oggetti `T`  **\*** . Altri membri vengono forniti dalla classe di base, [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)  
  
 `CAtlFileMapping`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlfile.h  
  
##  <a name="operator_t_star"></a>CAtlFileMapping::operator T *  
 Consente la conversione implicita di `CAtlFileMapping` oggetti `T`  **\*** .  
  
```  
operator T*() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `T`  **\***  puntatore all'inizio del file mappato alla memoria.  
  
### <a name="remarks"></a>Note  
 Chiamate [CAtlFileMappingBase::GetData](../../atl/reference/catlfilemappingbase-class.md#getdata) e reinterpreta il puntatore restituito come un `T`  **\***  in *T* è il tipo utilizzato come modello parametro di questa classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
