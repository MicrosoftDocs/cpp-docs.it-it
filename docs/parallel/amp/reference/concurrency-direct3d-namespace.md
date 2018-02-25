---
title: 'Concurrency:: Direct3D Namespace | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 607a3f25c2dfea5eee833f3608021547d8cd7c44
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="concurrencydirect3d-namespace"></a>Spazio dei nomi Concurrency::direct3d
Il `direct3d` dello spazio dei nomi sono disponibili funzioni che supportano l'interoperabilità D3D. Consente l'utilizzo diretto di D3D risorse per il calcolo in codice AMP nonché consentire l'utilizzo di risorse creati in AMP in codice D3D, senza creare le copie ridondanti intermedi. È possibile accelerare le sezioni con utilizzo intensivo di calcolo delle applicazioni DirectX con C++ AMP e usano l'API di D3D su dati ottenuti da calcoli AMP in modo incrementale.  
  
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
|[abs](concurrency-direct3d-namespace-functions-amp.md#abs)|Restituisce il valore assoluto dell'argomento|  
|[clamp](concurrency-direct3d-namespace-functions-amp.md#clamp)|Di overload. x nell'intervallo specificato di Min e massimo fissa|  
|[countbits](concurrency-direct3d-namespace-functions-amp.md#countbits)|Conta il numero di bit impostati in x|  
|[create_accelerator_view](concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view)|Crea un [classe accelerator_view](accelerator-view-class.md) da un puntatore a un'interfaccia del dispositivo Direct3D|  
|[d3d_access_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_lock)|Acquisisce un blocco su un accelerator_view per eseguire in modo sicuro le operazioni di D3D su risorse condivise con il accelerator_view|  
|[d3d_access_try_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_try_lock)|Tentativo di acquisire il blocco di accesso D3D su un accelerator_view senza bloccare.|  
|[d3d_access_unlock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_unlock)|Rilasciare il blocco accesso D3D il accelerator_view specificato.|  
|[firstbithigh](concurrency-direct3d-namespace-functions-amp.md#firstbithigh)|Ottiene la posizione del primo set di bit nel x, iniziando dal bit di ordine più elevato e procedendo verso il basso|  
|[firstbitlow](concurrency-direct3d-namespace-functions-amp.md#firstbitlow)|Ottiene la posizione del primo set di bit nel x, iniziando dal bit di ordine più basso e procedendo verso l'alto|  
|[get_buffer](concurrency-direct3d-namespace-functions-amp.md#get_buffer)|Ottenere l'interfaccia di buffer D3D sottostante di una matrice.|  
|[imax](concurrency-direct3d-namespace-functions-amp.md#imax)|Confronta due valori, restituendo il valore maggiore.|  
|[imin](concurrency-direct3d-namespace-functions-amp.md#imin)|Confronta due valori, restituendo il valore inferiore.|  
|[is_timeout_disabled](concurrency-direct3d-namespace-functions-amp.md#is_timeout_disabled)|Restituisce un flag booleano che indica se i timeout è disabilitato per il accelerator_view specificato.|  
|[mad](concurrency-direct3d-namespace-functions-amp.md#mad)|Di overload. Esegue un'operazione aritmetica multiply/Aggiungi su tre argomenti: x * y + _Z|  
|[make_array](concurrency-direct3d-namespace-functions-amp.md#make_array)|Creare una matrice da un puntatore a interfaccia buffer D3D.|  
|[Noise](concurrency-direct3d-namespace-functions-amp.md#noise)|Genera un valore casuale usando l'algoritmo di disturbo Perlin|  
|[radianti](concurrency-direct3d-namespace-functions-amp.md#radians)|Converte x gradi in radianti|  
|[rcp](concurrency-direct3d-namespace-functions-amp.md#rcp)|Calcola un reciproco veloce, approssimativo dell'argomento|  
|[reversebits](concurrency-direct3d-namespace-functions-amp.md#reversebits)|Inverte l'ordine dei bit in x|  
|[saturate](concurrency-direct3d-namespace-functions-amp.md#saturate)|Fissa x all'interno dell'intervallo da 0 a 1|  
|[sign](concurrency-direct3d-namespace-functions-amp.md#sign)|Di overload. Restituisce il segno dell'argomento|  
|[smoothstep](concurrency-direct3d-namespace-functions-amp.md#smoothstep)|Restituisce un'interpolazione Hermite smooth compreso tra 0 e 1, se è compreso nell'intervallo [ min, massimo] x.|  
|[step](concurrency-direct3d-namespace-functions-amp.md#step)|Confronta due valori, restituisce 0 o 1, in base a cui valore è maggiore di|  
|[umax](concurrency-direct3d-namespace-functions-amp.md#umax)|Confronta due valori unsigned, restituendo il valore maggiore.|  
|[umin](concurrency-direct3d-namespace-functions-amp.md#umin)|Confronta due valori unsigned, restituendo il valore inferiore.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
