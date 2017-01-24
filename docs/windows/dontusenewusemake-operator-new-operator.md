---
title: "Operatore DontUseNewUseMake::operator new | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator new (operatore)"
ms.assetid: 6af07a0d-2271-430c-9d9b-5a4223fed049
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore DontUseNewUseMake::operator new
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
void* operator new(  
   size_t,  
   _In_ void* placement  
);  
```  
  
#### Parametri  
 `__unnamed0`  
 Un parametro senza nome che specifica il numero di byte di memoria da allocare.  
  
 `placement`  
 Tipo da allocare.  
  
## Valore restituito  
 Consente di passare argomenti aggiuntivi se si esegue l'overload dell'operatore `new`.  
  
## Note  
 Esegue l'overload dell'operatore `new` e gli impedisce di essere utilizzato in RuntimeClass.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe DontUseNewUseMake](../windows/dontusenewusemake-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)