---
title: Classe tile_barrier | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- tile_barrier
- AMP/tile_barrier
- AMP/Concurrency::tile_barrier::tile_barrier::tile_barrier
- AMP/Concurrency::tile_barrier::tile_barrier::wait
- AMP/Concurrency::tile_barrier::tile_barrier::wait_with_all_memory_fence
- AMP/Concurrency::tile_barrier::tile_barrier::wait_with_global_memory_fence
- AMP/Concurrency::tile_barrier::tile_barrier::wait_with_tile_static_memory_fence
dev_langs:
- C++
helpviewer_keywords:
- tile_barrier class
ms.assetid: b4ccdccb-0032-4e11-b7bd-dc9d43445dee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a91cbb816deb18d9c4cf7356faa879c09a9d276c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025204"
---
# <a name="tilebarrier-class"></a>Classe tile_barrier
Sincronizza l'esecuzione di thread che sono in esecuzione nel gruppo di thread (riquadro) utilizzando `wait` metodi. Solo il runtime può creare un'istanza di questa classe.  
  
### <a name="syntax"></a>Sintassi 
  
```  
class tile_barrier;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore tile_barrier](#ctor)|Inizializza una nuova istanza della classe `tile_barrier`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[wait](#wait)|Indica a tutti i thread nel gruppo di thread (sezione) di arrestare l'esecuzione fino a quando tutti i thread nella sezione hanno completato l'attesa.|  
|[wait_with_all_memory_fence](#wait_with_all_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria sono stati completati e tutti i thread nella sezione hanno raggiunto questa chiamata.|  
|[wait_with_global_memory_fence](#wait_with_global_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria globale sono stati completati e tutti i thread nella sezione hanno raggiunto questa chiamata.|  
|[wait_with_tile_static_memory_fence](#wait_with_tile_static_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti `tile_static` gli accessi alla memoria sono stati completati e tutti i thread nella sezione hanno raggiunto questa chiamata.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tile_barrier`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="tile_barrier__ctor"></a>  Costruttore tile_barrier  
 Inizializza una nuova istanza della classe tramite la copia di uno esistente.  
  
### <a name="syntax"></a>Sintassi 
  
```  
tile_barrier(  
    const tile_barrier& _Other ) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
*_Other*<br/>
Il `tile_barrier` oggetto da copiare.  

## <a name="wait"></a>  wait 
Indica a tutti i thread nel gruppo di thread (sezione) per arrestare l'esecuzione fino a quando tutti i thread nella sezione hanno completato l'attesa.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait() const restrict(amp);  
```    

## <a name="wait_with_all_memory_fence"></a>  wait_with_all_memory_fence   
Blocca l'esecuzione di tutti i thread in una sezione finché tutti i thread in una sezione hanno raggiunto questa chiamata. Ciò garantisce che tutti gli accessi alla memoria siano visibili agli altri thread nella sezione del thread e siano stati eseguiti nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_all_memory_fence() const restrict(amp);  
```  
  

## <a name="wait_with_global_memory_fence"></a>  wait_with_global_memory_fence   
Blocca l'esecuzione di tutti i thread in una sezione finché tutti i thread in una sezione hanno raggiunto questa chiamata. Ciò garantisce che tutti gli accessi alla memoria globale siano visibili agli altri thread nella sezione del thread e siano stati eseguiti nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_global_memory_fence() const  restrict(amp);  
```

## <a name="wait_with_tile_static_memory_fence"></a>  wait_with_tile_static_memory_fence   
Blocca l'esecuzione di tutti i thread in una sezione finché tutti i thread in una sezione hanno raggiunto questa chiamata. Ciò garantisce che `tile_static` memoria gli accessi siano visibili agli altri thread nella sezione del thread e siano stati eseguiti nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_tile_static_memory_fence() const restrict(amp);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
