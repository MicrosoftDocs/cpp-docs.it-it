---
title: "Classe CriticalSection | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::CriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CriticalSection (classe)"
ms.assetid: f2e0a024-71a3-4f6b-99ea-d93a4a608ac4
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CriticalSection
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un oggetto sezione critica.  
  
## Sintassi  
  
```  
class CriticalSection;  
```  
  
## Membri  
  
### Costruttore  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore CriticalSection::CriticalSection](../windows/criticalsection-criticalsection-constructor.md)|Inizializza un oggetto di sincronizzazione simile a un oggetto mutex, ma può essere utilizzato solo dai thread di singolo processo.|  
|[Distruttore CriticalSection::~CriticalSection](../windows/criticalsection-tilde-criticalsection-destructor.md)|De\-inizializza ed elimina l'oggetto CriticalSection corrente.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo CriticalSection::TryLock](../windows/criticalsection-trylock-method.md)|Tenta di entrare in una sezione critica senza bloccarsi.  Se la chiamata ha esito positivo, il thread chiamante assume la proprietà della sezione critica.|  
|[Metodo CriticalSection::Lock](../windows/criticalsection-lock-method.md)|Attendere la proprietà dell'oggetto sezione critica specificato.  La funzione termina quando il thread chiamante concede la proprietà.|  
|[Metodo CriticalSection::IsValid](../windows/criticalsection-isvalid-method.md)|Indica se la sezione critica corrente è valida.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati CriticalSection::cs\_](../windows/criticalsection-cs-data-member.md)|Dichiara un membro dati della sezione critica.|  
  
## Gerarchia di ereditarietà  
 `CriticalSection`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)