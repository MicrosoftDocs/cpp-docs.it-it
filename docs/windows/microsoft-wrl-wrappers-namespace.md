---
title: Namespace Microsoft::WRL::Wrappers | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers
dev_langs: C++
helpviewer_keywords: Wrappers namespace
ms.assetid: 36ac38c7-1fc3-42da-a879-5c68661dc9e1
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f7633bcd784fa7b9b5f7255e25e8ddc52c5b93db
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="microsoftwrlwrappers-namespace"></a>Metodo Microsoft::WRL::Wrappers
Definisce i tipi di risorsa acquisizione è inizializzazione (RAII) wrapper che consentono di semplificare la gestione della durata di oggetti, stringhe e gli handle.  
  
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
|[Classe CriticalSection](../windows/criticalsection-class.md)|Rappresenta una sezione critica.|  
|[Classe di eventi (Libreria modelli C++ per Windows Runtime)](../windows/event-class-windows-runtime-cpp-template-library.md)|Rappresenta un evento.|  
|[Classe HandleT](../windows/handlet-class.md)|Rappresenta un handle a un oggetto.|  
|[Classe HString](../windows/hstring-class.md)|Fornisce il supporto per la modifica handle HSTRING.|  
|[Classe HStringReference](../windows/hstringreference-class.md)|Rappresenta un HSTRING creato da una stringa esistente.|  
|[Mutex (classe)](../windows/mutex-class1.md)|Rappresenta un oggetto di sincronizzazione che controlla esclusivamente una risorsa condivisa.|  
|[Classe RoInitializeWrapper](../windows/roinitializewrapper-class.md)|Inizializza il Runtime di Windows.|  
|[Classe Semaphore](../windows/semaphore-class.md)|Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa in grado di supportare un numero limitato di utenti.|  
|[Classe SRWLock](../windows/srwlock-class.md)|Rappresenta un blocco in lettura/scrittura.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)