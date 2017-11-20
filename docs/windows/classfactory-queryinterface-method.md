---
title: 'Metodo ClassFactory:: QueryInterface | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::ClassFactory::QueryInterface
dev_langs: C++
helpviewer_keywords: QueryInterface method
ms.assetid: 9593881f-4585-4d70-8ca6-b328918d4d6b
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: df452908cfaf8526a8a0e50dc628674e199f6e60
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="classfactoryqueryinterface-method"></a>Metodo ClassFactory::QueryInterface
Recupera un puntatore a interfaccia specificato dal parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   QueryInterface  
)(REFIID riid, _Deref_out_ void **ppvObject);  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 ID di interfaccia.  
  
 `ppvObject`  
 Al termine di questa operazione, un puntatore a interfaccia specificato dal parametro `riid`.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ClassFactory](../windows/classfactory-class.md)