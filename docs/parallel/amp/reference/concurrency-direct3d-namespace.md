---
title: 'Concurrency:: Direct3D Namespace | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp/Concurrency::direct3d
- amprt/Concurrency::direct3d
- amp_short_vectors/Concurrency::direct3d
- amp_graphics/Concurrency::direct3d
- amp_math/Concurrency::direct3d
dev_langs:
- C++
helpviewer_keywords:
- direct3d namespace
ms.assetid: 9566a2f1-4d5f-43e4-a3ac-676643d38420
caps.latest.revision: 15
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: fe9121d6e054446d3adb70da9f78884f4198517e
ms.lasthandoff: 02/24/2017

---
# <a name="concurrencydirect3d-namespace"></a>Spazio dei nomi Concurrency::direct3d
Il `direct3d` dello spazio dei nomi fornisce funzioni che supportano l'interoperabilità D3D. Consente l'utilizzo diretto di D3D risorse per il calcolo nel codice AMP nonché consentire l'utilizzo di risorse create in AMP D3D codice, senza creare copie ridondanti intermedi. In modo incrementale, è possibile accelerare le sezioni con utilizzo intensivo di calcolo delle applicazioni DirectX con C++ AMP e utilizzare l'API D3D su dati ottenuti da calcoli AMP.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace direct3d;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe scoped_d3d_access_lock](scoped-d3d-access-lock-class.md)|Un wrapper RAII per un blocco di accesso D3D su un `accelerator_view` oggetto.|  
  
### <a name="structures"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura adopt_d3d_access_lock_t](adopt-d3d-access-lock-t-structure.md)|Tipo di tag per indicare il blocco di accesso D3D deve essere adottato anziché acquisito.|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Abs (funzione)](concurrency-direct3d-namespace-functions-amp.md#abs)|Restituisce il valore assoluto dell'argomento|  
|[Clamp (funzione)](concurrency-direct3d-namespace-functions-amp.md#clamp)|Di overload. Applica x nell'intervallo specificato min e massimo|  
|[Funzione countbits](concurrency-direct3d-namespace-functions-amp.md#countbits)|Conta il numero di bit impostati in x|  
|[Funzione create_accelerator_view](concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view)|Crea un [classe accelerator_view](accelerator-view-class.md) da un puntatore a un'interfaccia del dispositivo Direct3D|  
|[Funzione d3d_access_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_lock)|Acquisisce un blocco su un accelerator_view per eseguire in modo sicuro D3D operazioni sulle risorse condivise con il accelerator_view|  
|[Funzione d3d_access_try_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_try_lock)|Tenta di acquisire il blocco di accesso D3D su un accelerator_view senza bloccare.|  
|[Funzione d3d_access_unlock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_unlock)|Rilasciare il blocco accesso D3D accelerator_view specificato.|  
|[Funzione firstbithigh](concurrency-direct3d-namespace-functions-amp.md#firstbithigh)|Ottiene la posizione del primo bit impostato in x, iniziando dal bit di ordine più elevato e procedendo verso il basso|  
|[Funzione firstbitlow](concurrency-direct3d-namespace-functions-amp.md#firstbitlow)|Ottiene la posizione del primo bit impostato in x, iniziando dal bit di ordine più basso e procedendo verso l'alto|  
|[Funzione get_buffer](concurrency-direct3d-namespace-functions-amp.md#get_buffer)|Ottenere l'interfaccia di buffer D3D sottostante di una matrice.|  
|[Funzione IMAX](concurrency-direct3d-namespace-functions-amp.md#imax)|Confronta due valori, restituendo il valore è maggiore.|  
|[Funzione imin](concurrency-direct3d-namespace-functions-amp.md#imin)|Confronta due valori, restituendo il valore inferiore.|  
|[Funzione is_timeout_disabled](concurrency-direct3d-namespace-functions-amp.md#is_timeout_disabled)|Restituisce un flag booleano che indica se i timeout è disabilitato per accelerator_view specificato.|  
|[MAD (funzione)](concurrency-direct3d-namespace-functions-amp.md#mad)|Di overload. Esegue un'operazione aritmetica multiply/aggiungere su tre argomenti: x * y + _Z|  
|[Funzione make_array](concurrency-direct3d-namespace-functions-amp.md#make_array)|Creare una matrice da un puntatore a interfaccia buffer D3D.|  
|[Funzione Noise](concurrency-direct3d-namespace-functions-amp.md#noise)|Genera un valore casuale utilizzando l'algoritmo di disturbo Perlin|  
|[Funzione RADIANS](concurrency-direct3d-namespace-functions-amp.md#radians)|Converte i x da gradi in radianti|  
|[RCP (funzione)](concurrency-direct3d-namespace-functions-amp.md#rcp)|Calcola un reciproco veloce, approssimativo dell'argomento|  
|[Funzione reversebits](concurrency-direct3d-namespace-functions-amp.md#reversebits)|Inverte l'ordine dei bit in x|  
|[saturate (funzione)](concurrency-direct3d-namespace-functions-amp.md#saturate)|Applica x all'interno dell'intervallo da 0 a 1|  
|[Sign (funzione)](concurrency-direct3d-namespace-functions-amp.md#sign)|Di overload. Restituisce il segno dell'argomento|  
|[Funzione smoothstep](concurrency-direct3d-namespace-functions-amp.md#smoothstep)|Restituisce un'interpolazione Hermite smooth compreso tra 0 e 1, se x è compreso nell'intervallo [ min, massimo].|  
|[Funzione Step](concurrency-direct3d-namespace-functions-amp.md#step)|Confronta due valori, restituisce 0 o 1 in base alla quale valore maggiore|  
|[Funzione UMAX](concurrency-direct3d-namespace-functions-amp.md#umax)|Confronta due valori unsigned, restituendo il valore è maggiore.|  
|[Funzione umin](concurrency-direct3d-namespace-functions-amp.md#umin)|Confronta due valori unsigned, restituendo il valore inferiore.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

