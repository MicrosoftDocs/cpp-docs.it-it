---
title: 'Metodo runtimeclass:: QueryInterface | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass::QueryInterface
dev_langs:
- C++
helpviewer_keywords:
- QueryInterface method
ms.assetid: 8f01f4a1-3fa2-4a8e-88c6-03629236cb9f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d76e2e7041948021cb36e563acef7ca712e73842
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40015195"
---
# <a name="runtimeclassqueryinterface-method"></a>Metodo RuntimeClass::QueryInterface
Recupera un puntatore all'ID di interfaccia specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHOD(  
   QueryInterface  
)  
   (REFIID riid,   
   _Deref_out_ void **ppvObject);  
```  
  
### <a name="parameters"></a>Parametri  
 *riid*  
 ID di interfaccia.  
  
 *ppvObject*  
 Al termine di questa opereation, un puntatore all'interfaccia specificata dal *riid* parametro.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)