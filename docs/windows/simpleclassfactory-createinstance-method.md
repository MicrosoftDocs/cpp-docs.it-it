---
title: "Metodo SimpleClassFactory::CreateInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::SimpleClassFactory::CreateInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateInstance (metodo)"
ms.assetid: 17b7947a-2608-49d9-b730-fef76501c9bc
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo SimpleClassFactory::CreateInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un'istanza dell'interfaccia specificata.  
  
## Sintassi  
  
```  
  
STDMETHOD(  
   CreateInstance  
)  
   (_Inout_opt_ IUnknown* pUnkOuter,   
   REFIID riid,   
   _Deref_out_ void** ppvObject);  
```  
  
#### Parametri  
 `pUnkOuter`  
 Deve essere `nullptr`; in caso contrario, il valore restituito è CLASS\_E\_NOAGGREGATION.  
  
 SimpleClassFactory non supporta l'aggregazione.  Se l'aggregazione è supportata e l'oggetto creato fa parte di un'aggregazione, `pUnkOuter` diventerebbe un puntatore a un'interfaccia di controllo IUnknown dell'aggregazione.  
  
 `riid`  
 ID dell'interfaccia dell'oggetto da creare.  
  
 `ppvObject`  
 Quando questa operazione viene completata, il puntatore a un'istanza dell'oggetto specificato dal parametro `riid`.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Se \_\_WRL\_STRICT è definito, un errore di asserzione viene generato se la classe base specificata dal parametro di template di classe non è derivata da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il valore di enumerazione ClassicCom o WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe SimpleClassFactory](../windows/simpleclassfactory-class.md)