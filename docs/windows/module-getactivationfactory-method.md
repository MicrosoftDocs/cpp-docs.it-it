---
title: 'Metodo Module:: getactivationfactory | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::Module::GetActivationFactory
dev_langs: C++
helpviewer_keywords: GetActivationFactory method
ms.assetid: 59da8844-072e-414b-b89c-1db1cc4fd81d
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5d5c5ca4d470f52ff9dde862cc99b10a3459cd0c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
[Classe Module](../windows/module-class.md) [macro ActivatableClass](../windows/activatableclass-macros.md)