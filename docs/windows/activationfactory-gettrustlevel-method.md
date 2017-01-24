---
title: "Metodo ActivationFactory::GetTrustLevel | Microsoft Docs"
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
  - "module/Microsoft::WRL::ActivationFactory::GetTrustLevel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetTrustLevel (metodo)"
ms.assetid: 31547ae6-d2ab-4039-923c-154d53fb1a8b
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo ActivationFactory::GetTrustLevel
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il livello di attendibilità dell'oggetto che l'ActivationFactory corrente istanzia.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetTrustLevel  
)(_Out_ TrustLevel* trustLvl);  
```  
  
#### Parametri  
 `trustLvl`  
 Quando questa operazione viene completata, il livello di attendibilità della classe runtime che ActivationFactory istanzia.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, verrà generato un errore di asserzione e `trustLvl` verrà impostato su FullTrust.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ActivationFactory](../windows/activationfactory-class.md)