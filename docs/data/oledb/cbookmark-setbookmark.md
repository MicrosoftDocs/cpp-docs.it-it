---
title: 'CBookmark:: SetBookmark | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CBookmark<0>::SetBookmark
- ATL.CBookmark<0>.SetBookmark
- CBookmark<0>.SetBookmark
- SetBookmark
- ATL::CBookmark::SetBookmark
- ATL::CBookmark<0>::SetBookmark
- CBookmark.SetBookmark
- ATL.CBookmark.SetBookmark
- CBookmark::SetBookmark
dev_langs: C++
helpviewer_keywords: SetBookmark method
ms.assetid: bcd26831-6045-4e69-96d6-abf8037fc18d
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4c265eaf2103f895198d029c231bf29755ea2c17
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cbookmarksetbookmark"></a>CBookmark::SetBookmark
Copia il valore del segnalibro a cui fa riferimento `pBuffer` per il `CBookmark` nel buffer e imposta le dimensioni del buffer `nSize`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT SetBookmark(  
   DBLENGTH nSize,  
   BYTE* pBuffer   
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 *nSize*  
 [in] Le dimensioni del buffer del segnalibro.  
  
 `pBuffer`  
 [in] Puntatore alla matrice di byte contenente il valore del segnalibro.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questa funzione è disponibile solo in **CBookmark\<0 >**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CBookmark](../../data/oledb/cbookmark-class.md)