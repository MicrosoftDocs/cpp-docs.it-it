---
title: 'Metodo comptr:: Asiid | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::ComPtr::AsIID
dev_langs: C++
helpviewer_keywords: AsIID method
ms.assetid: d5a3cdb2-796d-4410-966a-847c0e8fb226
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3db430114cc2346174c56f35d08dab41a1c4b01f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="comptrasiid-method"></a>Metodo ComPtr::AsIID
Restituisce un oggetto ComPtr che rappresenta l'interfaccia identificata dall'ID dell'interfaccia specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW HRESULT AsIID(  
   REFIID riid,  
   _Out_ ComPtr<IUnknown>* p  
) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 ID di interfaccia.  
  
 `p`  
 Se supportato, un puntatore indiretto doppio per l'interfaccia specificata dal `riid` parametro; in caso contrario, un puntatore a IUnknown.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)