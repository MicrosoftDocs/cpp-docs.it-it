---
title: WeakReference Class1 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::WeakReference
dev_langs: C++
helpviewer_keywords: WeakReference class
ms.assetid: 3f4c956b-dbbd-49b1-8cfa-9509a9956c97
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8985434365cb8144fc2ee3680ef19c5b8ed99301
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="weakreference-class1"></a>WeakReference Class1
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class WeakReference;  
```  
  
## <a name="remarks"></a>Note  
 Rappresenta un *riferimento debole* che può essere utilizzato con Windows Runtime o COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.  
  
 A `WeakReference` oggetto mantiene un *riferimento forte*, che è un puntatore a un oggetto e un *conteggio dei riferimenti forti*, ovvero il numero di copie del riferimento sicuro che sono state distribuite da il metodo Resolve. Mentre il conteggio dei riferimenti forti è diverso da zero, il riferimento sicuro è valido e l'oggetto è accessibile. Quando il conteggio dei riferimenti forti diventa zero, il riferimento sicuro non è valido e l'oggetto non è accessibile.  
  
 Un oggetto WeakReference viene in genere utilizzato per rappresentare un oggetto la cui esistenza è controllata da un thread esterno o un'applicazione. Ad esempio, creare un oggetto WeakReference da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.  
  
 I metodi di WeakReference sono thread-safe.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore WeakReference::WeakReference](../windows/weakreference-weakreference-constructor.md)|Inizializza una nuova istanza della classe WeakReference.|  
|[Distruttore WeakReference::~WeakReference](../windows/weakreference-tilde-weakreference-destructor.md)|Deinizializza (Elimina) l'istanza corrente della classe WeakReference.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo WeakReference::DecrementStrongReference](../windows/weakreference-decrementstrongreference-method.md)|Decrementa il riferimento sicuro conteggio dell'oggetto WeakReference corrente.|  
|[Metodo WeakReference::IncrementStrongReference](../windows/weakreference-incrementstrongreference-method.md)|Incrementa il conteggio dei riferimenti forti dell'oggetto WeakReference corrente.|  
|[Metodo WeakReference::Resolve](../windows/weakreference-resolve-method.md)|Imposta il puntatore specificato per il valore di riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.|  
|[Metodo WeakReference::SetUnknown](../windows/weakreference-setunknown-method.md)|Imposta il riferimento sicuro dell'oggetto WeakReference corrente del puntatore a interfaccia specificato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `WeakReference`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)