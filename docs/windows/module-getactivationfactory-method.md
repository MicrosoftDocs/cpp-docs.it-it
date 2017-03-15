---
title: "Metodo Module::GetActivationFactory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::GetActivationFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetActivationFactory (metodo)"
ms.assetid: 59da8844-072e-414b-b89c-1db1cc4fd81d
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Metodo Module::GetActivationFactory
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

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
 Il nome di un sottoinsieme della class factory nel modulo corrente. Specificare il nome del server utilizzato nel [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) (macro), oppure specificare `nullptr` per ottenere il nome del server predefinito.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, il valore HRESULT restituito da GetActivationFactory.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
[Classe Module](../windows/module-class.md)
 [macro ActivatableClass](../windows/activatableclass-macros.md)