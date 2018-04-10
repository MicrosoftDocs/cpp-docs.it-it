---
title: Classe tile_barrier | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
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
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e7d868b4bd677d207590de6449e3d5643001e857
ms.sourcegitcommit: 0523c88b24d963c33af0529e6ba85ad2c6ee5afb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/10/2018
---
# <a name="tilebarrier-class"></a>Classe tile_barrier
Sincronizza l'esecuzione del thread in esecuzione nel gruppo di thread (riquadro) con `wait` metodi. Solo il runtime può creare un'istanza di questa classe.  
  
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
|[wait](#wait)|Indica a tutti i thread nel gruppo di thread (riquadro) per arrestare l'esecuzione finché non termina in attesa di tutti i thread nel riquadro.|  
|[wait_with_all_memory_fence](#wait_with_all_memory_fence)|Blocca l'esecuzione di tutti i thread in un riquadro fino a quando non sono stati completati tutti gli accessi alla memoria e tutti i thread nel riquadro hanno raggiunto questa chiamata.|  
|[wait_with_global_memory_fence](#wait_with_global_memory_fence)|Blocca l'esecuzione di tutti i thread in un riquadro fino a quando non sono stati completati tutti gli accessi di memoria globale e tutti i thread nel riquadro hanno raggiunto questa chiamata.|  
|[wait_with_tile_static_memory_fence](#wait_with_tile_static_memory_fence)|Blocca l'esecuzione di tutti i thread in un riquadro finché tutti `tile_static` gli accessi alla memoria sono state completate e tutti i thread nel riquadro hanno raggiunto questa chiamata.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tile_barrier`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="tile_barrier__ctor"></a>  Costruttore tile_barrier  
 Inizializza una nuova istanza della classe copiando uno esistente.  
  
### <a name="syntax"></a>Sintassi 
  
```  
tile_barrier(  
    const tile_barrier& _Other ) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `tile_barrier` oggetto da copiare.  

## <a name="wait"></a>  wait 
Indica a tutti i thread nel gruppo di thread (riquadro) per arrestare l'esecuzione finché non termina in attesa di tutti i thread nel riquadro.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait() const restrict(amp);  
```    

## <a name="wait_with_all_memory_fence"></a>  wait_with_all_memory_fence   
Blocca l'esecuzione di tutti i thread in un riquadro fino a quando tutti i thread in un riquadro hanno raggiunto questa chiamata. In questo modo tutti gli accessi alla memoria sono visibili agli altri thread nel riquadro del thread che sono state eseguite nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_all_memory_fence() const restrict(amp);  
```  
  

## <a name="wait_with_global_memory_fence"></a>  wait_with_global_memory_fence   
Blocca l'esecuzione di tutti i thread in un riquadro fino a quando tutti i thread in un riquadro hanno raggiunto questa chiamata. In questo modo tutti gli accessi di memoria globale sono visibili agli altri thread nel riquadro del thread che sono stati eseguiti nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_global_memory_fence() const  restrict(amp);  
```

## <a name="wait_with_tile_static_memory_fence"></a>  wait_with_tile_static_memory_fence   
Blocca l'esecuzione di tutti i thread in un riquadro fino a quando tutti i thread in un riquadro hanno raggiunto questa chiamata. In questo modo `tile_static` memoria sono visibili agli altri thread nel riquadro del thread, gli accessi e sono stati eseguiti nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_tile_static_memory_fence() const restrict(amp);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
