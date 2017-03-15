---
title: "Metodo CriticalSectionTraits::Unlock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unlock (metodo)"
ms.assetid: 8fb382f5-6eda-407e-9673-71d77bda4962
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo CriticalSectionTraits::Unlock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specializza un modello di CriticalSection in modo che supporti il rilascio dell'oggetto sezione critica specificato.  
  
## Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type cs  
);  
```  
  
#### Parametri  
 `cs`  
 Un puntatore a un oggetto della sezione critica.  
  
## Osservazioni  
 Il modificatore di *Type* viene definito come `typedef CRITICAL_SECTION* Type;`.  
  
 Per ulteriori informazioni, vedere "funzione di LeaveCriticalSection" nella sezione di funzioni di sincronizzazione" nella documentazione delle API di Windows.  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)