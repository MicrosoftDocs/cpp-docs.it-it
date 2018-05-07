---
title: CBookmark::CBookmark | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f7663c34fc9eea5f4262fea6b347c1b7899ace85
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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