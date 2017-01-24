---
title: "Costruttore ComPtr::ComPtr | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::ComPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ComPtr, costruttore"
ms.assetid: eaf70907-beac-458f-a503-2e5e27b0c196
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore ComPtr::ComPtr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza una nuova istanza della classe ComPtr.  Gli overload consentono l'impostazione predefinita, la copia, la possibilità di spostare e convertire costruttori.  
  
## Sintassi  
  
```  
WRL_NOTHROW ComPtr();  
WRL_NOTHROW ComPtr(  
   decltype(__nullptr)  
);  
template<  
   class U  
>  
WRL_NOTHROW ComPtr(  
   _In_opt_ U *other  
);  
WRL_NOTHROW ComPtr(  
   const ComPtr& other  
);  
template<  
   class U  
>  
WRL_NOTHROW ComPtr(  
   const ComPtr<U> &other,  
   typename ENABLE_IF<__is_convertible_to(U*,  
   T*),  
   void *>;  
WRL_NOTHROW ComPtr(  
   _Inout_ ComPtr &&other  
);  
template<  
   class U  
>  
WRL_NOTHROW ComPtr(  
   _Inout_ ComPtr<U>&& other,  
   typename ENABLE_IF<__is_convertible_to(U*,  
   T*),  
   void *>;  
```  
  
#### Parametri  
 `U`  
 Tipo del parametro `other`.  
  
 `other`  
 Oggetto di tipo `U`.  
  
## Valore restituito  
  
## Note  
 Il primo è il costruttore predefinito, che implicitamente crea un oggetto vuoto.  Il secondo costruttore specifica [\_\_nullptr](../windows/nullptr-cpp-component-extensions.md), che crea esplicitamente un oggetto vuoto.  
  
 Il terzo costruttore crea un oggetto dall'oggetto specificato da un puntatore.  
  
 Il quarto e il quinto costruttore sono costruttori di copia.  Il quinto costruttore copia un oggetto se è convertibile nel tipo corrente.  
  
 Il sesto e il settimo costruttore sono costruttori di spostamento.  Il settimo costruttore sposta un oggetto se è convertibile nel tipo corrente.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)