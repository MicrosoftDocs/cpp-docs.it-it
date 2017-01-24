---
title: "Metodo Microsoft::WRL::Wrappers | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Wrappers (spazio dei nomi)"
ms.assetid: 36ac38c7-1fc3-42da-a879-5c68661dc9e1
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo Microsoft::WRL::Wrappers
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce i tipi di wrapper Resource Acquisition è inizializzazione (RAII) che consentono di semplificare la gestione della durata di oggetti, stringhe e handle.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace Microsoft::WRL::Wrappers;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`FileHandle`|`HandleT<HandleTraits::FileHandleTraits>`|  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CriticalSection (classe)](../windows/criticalsection-class.md)|Rappresenta una sezione critica.|  
|[Classe di evento (libreria modelli C++ di Windows Runtime)](../windows/event-class-windows-runtime-cpp-template-library.md)|Rappresenta un evento.|  
|[HandleT (classe)](../windows/handlet-class.md)|Rappresenta un handle a un oggetto.|  
|[Classe HString](../windows/hstring-class.md)|Fornisce supporto per la modifica handle HSTRING.|  
|[Classe HStringReference](../windows/hstringreference-class.md)|Rappresenta un HSTRING creata da una stringa esistente.|  
|[Mutex (classe)](../windows/mutex-class1.md)|Rappresenta un oggetto di sincronizzazione che controlli esclusivamente una risorsa condivisa.|  
|[Classe RoInitializeWrapper](../windows/roinitializewrapper-class.md)|Inizializza [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].|  
|[Semaphore (classe)](../windows/semaphore-class.md)|Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa che può supportare un numero limitato di utenti.|  
|[SRWLock (classe)](../windows/srwlock-class.md)|Rappresenta un blocco in lettura/scrittura.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft:: wrl](../windows/microsoft-wrl-namespace.md)