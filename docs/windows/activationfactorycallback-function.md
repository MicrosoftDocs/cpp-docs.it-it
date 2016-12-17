---
title: "Funzione ActivationFactoryCallback | Microsoft Docs"
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
  - "module/Microsoft::WRL::Details::ActivationFactoryCallback"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActivationFactoryCallback (funzione)"
ms.assetid: dd40c79b-1273-4f2a-8c24-ae9926fb4fd9
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione ActivationFactoryCallback
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
inline HRESULT STDAPICALLTYPE ActivationFactoryCallback(  
   HSTRING activationId,  
   IActivationFactory **ppFactory  
);  
```  
  
#### Parametri  
 `activationId`  
 Handle a una stringa che specifica un nome di classe di runtime.  
  
 `ppFactory`  
 Quando questa operazione viene completata, una factory di attivazione corrispondente al parametro `activationId`.  
  
## Valore restituito  
 S\_OK se ha avuto successo, in caso contrario un HRESULT ,che descrive perché l'operazione è fallita.  Probabili errori HRESULT sono CLASS\_E\_CLASSNOTAVAILABLE e E\_INVALIDARG.  
  
## Osservazioni  
 Ottiene la factory di attivazione dell'ID di attivazione specificato.  
  
 Windows Runtime chiama la funzione di callback per richiedere un oggetto specificato dal nome di classe di runtime.  
  
## Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)