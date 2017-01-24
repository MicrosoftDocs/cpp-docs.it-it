---
title: "Funzione di callback (Libreria modelli C++ per Windows Runtime) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Callback"
dev_langs: 
  - "C++"
ms.assetid: afb15d25-3230-44f7-b321-e17c54872943
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione di callback (Libreria modelli C++ per Windows Runtime)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un oggetto la cui funzione membro è un metodo di callback.  
  
## Sintassi  
  
```  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
ComPtr<TDelegateInterface> Callback(  
   TCallbackcallback  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)()  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1)  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1,  
   typename TArg2  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1,  
   TArg2)  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1,  
   TArg2,  
   TArg3)  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1,  
   TArg2,  
   TArg3,  
   TArg4)  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1,  
   TArg2,  
   TArg3,  
   TArg4,  
   TArg5)  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1,  
   TArg2,  
   TArg3,  
   TArg4,  
   TArg5,  
   TArg6)  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1,  
   TArg2,  
   TArg3,  
   TArg4,  
   TArg5,  
   TArg6,  
   TArg7)  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1,  
   TArg2,  
   TArg3,  
   TArg4,  
   TArg5,  
   TArg6,  
   TArg7,  
   TArg8)  
);  
template<  
   typename TDelegateInterface,  
   typename TCallbackObject,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8,  
   typename TArg9  
>  
ComPtr<TDelegateInterface> Callback(  
   _In_ TCallbackObject *object,  
   _In_ HRESULT (TCallbackObject::* method)(TArg1,  
   TArg2,  
   TArg3,  
   TArg4,  
   TArg5,  
   TArg6,  
   TArg7,  
   TArg8,  
   TArg9)  
);  
```  
  
#### Parametri  
 `TDelegateInterface`  
 Parametro di modello che specifica l'interfaccia del delegato da chiamare quando si verifica un evento.  
  
 `TCallback`  
 Parametro di modello che specifica il tipo di oggetto che rappresenta un oggetto e la relativa funzione membro di callback.  
  
 `TCallbackObject`  
 Parametro di modello che specifica l'oggetto di cui la funzione membro è il metodo da chiamare quando si verifica un evento.  
  
 `TArg1`  
 Parametro di modello che specifica il tipo del primo argomento del metodo di callback.  
  
 `TArg2`  
 Parametro di modello che specifica il tipo del secondo argomento del metodo di callback.  
  
 `TArg3`  
 Parametro di modello che specifica il tipo del terzo argomento del metodo di callback.  
  
 `TArg4`  
 Parametro di modello che specifica il tipo del quarto argomento del metodo di callback.  
  
 `TArg5`  
 Parametro di modello che specifica il tipo del quinto argomento del metodo di callback.  
  
 `TArg6`  
 Parametro di modello che specifica il tipo del sesto argomento del metodo di callback.  
  
 `TArg7`  
 Parametro di modello che specifica il tipo del settimo argomento del metodo di callback.  
  
 `TArg8`  
 Parametro di modello che specifica il tipo dell'ottavo argomento del metodo di callback.  
  
 `TArg9`  
 Parametro di modello che specifica il tipo del nono argomento del metodo di callback.  
  
 `callback`  
 Oggetto che rappresenta l'oggetto di callback e la relativa funzione membro.  
  
 `object`  
 L'oggetto di cui la funzione membro viene chiamata quando si verifica un evento.  
  
 `method`  
 La funzione membro da chiamare quando si verifica un evento.  
  
## Valore restituito  
 Oggetto la cui funzione membro è il metodo di callback specificato.  
  
## Note  
 La base di un oggetto delegato deve essere IUnknown, non IInspectable.  
  
## Requisiti  
 **Intestazione:** event.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)