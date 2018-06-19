---
title: 'Metodo Module:: GetClassObject | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::GetClassObject
dev_langs:
- C++
helpviewer_keywords:
- GetClassObject method
ms.assetid: 95b0de1b-f728-4f96-9f44-f6ea71ce56e4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9205b04fc27e1c6e0e6133a08c3c2f69ffdfc314
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878538"
---
# <a name="modulegetclassobject-method"></a>Metodo Module::GetClassObject
Recupera una cache di class factory.  
  
## <a name="syntax"></a>Sintassi  
  
```  
 HRESULT GetClassObject(  
   REFCLSID clsid,  
   REFIID riid,  
   _Deref_out_ void **ppv,  
   wchar_t* serverName = nullptr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `clsid`  
 ID di classe.  
  
 `riid`  
 ID di interfaccia richiesto.  
  
 `ppv`  
 Puntatore all'oggetto restituito.  
  
 `serverName`  
 Il nome del server specificato in uno di `ActivatableClassWithFactory`, `ActivatableClassWithFactoryEx`, o `ActivatableClass` macro; o `nullptr` per ottenere il nome del server predefinito.  
  
## <a name="return-value"></a>Valore restituito  
  
## <a name="remarks"></a>Note  
 Utilizzare questo metodo solo per COM, non il Runtime di Windows. Questo metodo espone solo IClassFactory metodi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)