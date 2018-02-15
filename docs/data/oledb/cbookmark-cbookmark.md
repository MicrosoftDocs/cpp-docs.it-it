---
title: CBookmark::CBookmark | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CBookmark<0>.CBookmark<0>
- CBookmark::CBookmark
- ATL.CBookmark.CBookmark
- CBookmark.CBookmark
- CBookmark
- ATL::CBookmark<0>::CBookmark<0>
- ATL.CBookmark<0>.CBookmark<0>
- CBookmark<0>::CBookmark<0>
- ATL::CBookmark::CBookmark
dev_langs:
- C++
helpviewer_keywords:
- CBookmark class, constructor
ms.assetid: 84f4ad2b-67d4-4ba3-8b2b-656a66fb6298
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dd3529272031e779afdc5315d90613867dcbb823
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cbookmarkcbookmark"></a>CBookmark::CBookmark
Costruttore.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      CBookmark();   

CBookmark(DBLENGTH nSize);  
```  
  
#### <a name="parameters"></a>Parametri  
 `nSize`  
 [in] Dimensione del buffer del segnalibro, in byte.  
  
## <a name="remarks"></a>Note  
 La prima funzione imposta il buffer **NULL** e le dimensioni del buffer su 0. La seconda funzione imposta le dimensioni del buffer `nSize`e il buffer a una matrice di byte di `nSize` byte.  
  
> [!NOTE]
>  Questa funzione è disponibile solo in **CBookmark\<0 >**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CBookmark](../../data/oledb/cbookmark-class.md)