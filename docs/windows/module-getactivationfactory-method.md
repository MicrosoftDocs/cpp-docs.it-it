---
title: 'Metodo Module:: getactivationfactory | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::GetActivationFactory
dev_langs:
- C++
helpviewer_keywords:
- GetActivationFactory method
ms.assetid: 59da8844-072e-414b-b89c-1db1cc4fd81d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 837cb68173ca1994de6bc560882d617bb3aa03e0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="modulegetactivationfactory-method"></a>Metodo Module::GetActivationFactory
Ottiene una factory di attivazione per il modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW HRESULT GetActivationFactory(  
   _In_ HSTRING pActivatibleClassId,  
   _Deref_out_ IActivationFactory **ppIFactory,  
   wchar_t* serverName = nullptr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pActivatibleClassId`  
 IID di una classe di runtime.  
  
 `ppIFactory`  
 IActivationFactory per la classe di runtime specificato.  
  
 `serverName`  
 Il nome di un subset di class factory del modulo corrente. Specificare il nome del server utilizzato nel [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) (macro), oppure specificare `nullptr` per ottenere il nome del server predefinito.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, il valore HRESULT restituito da GetActivationFactory.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
[Classe Module](../windows/module-class.md) [macro ActivatableClass](../windows/activatableclass-macros.md)