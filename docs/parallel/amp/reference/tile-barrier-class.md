---
title: Classe tile_barrier | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp/Concurrency::tile_barrier
dev_langs:
- C++
helpviewer_keywords:
- tile_barrier class
ms.assetid: b4ccdccb-0032-4e11-b7bd-dc9d43445dee
caps.latest.revision: 17
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 7ace6bb366881f9e5a9678b3a005f3079542c9cd
ms.lasthandoff: 02/24/2017

---
# <a name="tilebarrier-class"></a>Classe tile_barrier
Sincronizza l'esecuzione di thread in esecuzione nel gruppo di thread (riquadro) utilizzando `wait` metodi. Solo il runtime può creare un'istanza di questa classe.  
  
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
|[Wait (metodo)](#wait)|Indica tutti i thread nel gruppo di thread (riquadro) di arrestare l'esecuzione fino al completamento di tutti i thread nel tile in attesa.|  
|[wait_with_all_memory_fence (metodo)](#wait_with_all_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione fino a quando non sono stati completati tutti gli accessi alla memoria e tutti i thread nel tile hanno raggiunto questa chiamata.|  
|[wait_with_global_memory_fence (metodo)](#wait_with_global_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione fino a quando non sono stati completati tutti gli accessi alla memoria globale e tutti i thread nel tile hanno raggiunto questa chiamata.|  
|[wait_with_tile_static_memory_fence (metodo)](#wait_with_tile_static_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti `tile_static` gli accessi alla memoria sono state completate e tutti i thread nel tile hanno raggiunto questa chiamata.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tile_barrier`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="a-nametilebarrierctora--tilebarrier-constructor"></a><a name="tile_barrier__ctor"></a>Costruttore tile_barrier  
 Inizializza una nuova istanza della classe copiando uno esistente.  
  
### <a name="syntax"></a>Sintassi 
  
```  
tile_barrier(  
    const tile_barrier& _Other ) restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `tile_barrier` oggetto da copiare.  

## <a name="a-namewaita--wait"></a><a name="wait"></a>attesa 
Indica tutti i thread nel gruppo di thread (riquadro) per arrestare l'esecuzione fino al completamento di tutti i thread nel tile in attesa.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait() const restrict(amp);  
```    

## <a name="a-namewaitwithallmemoryfencea--waitwithallmemoryfence"></a><a name="wait_with_all_memory_fence"></a>wait_with_all_memory_fence   
Blocca l'esecuzione di tutti i thread in una sezione fino a quando tutti i thread in un riquadro hanno raggiunto questa chiamata. In questo modo tutti gli accessi alla memoria sono visibili agli altri thread nel tile thread che sono state eseguite nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_all_memory_fence() const restrict(amp);  
```  
  

## <a name="a-namewaitwithglobalmemoryfencea--waitwithglobalmemoryfence"></a><a name="wait_with_global_memory_fence"></a>wait_with_global_memory_fence   
Blocca l'esecuzione di tutti i thread in una sezione fino a quando tutti i thread in un riquadro hanno raggiunto questa chiamata. In questo modo tutti gli accessi alla memoria globale sono visibili agli altri thread nel tile thread che sono state eseguite nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_global_memory_fence() const  restrict(amp);  
```

## <a name="a-namewaitwithtilestaticmemoryfencea--waitwithtilestaticmemoryfence"></a><a name="wait_with_tile_static_memory_fence"></a>wait_with_tile_static_memory_fence   
Blocca l'esecuzione di tutti i thread in una sezione fino a quando tutti i thread in un riquadro hanno raggiunto questa chiamata. In questo modo `tile_static`memoria accessi sono visibili agli altri thread nel tile thread e sono stati eseguiti nell'ordine del programma.  
  
### <a name="syntax"></a>Sintassi 
  
```  
void wait_with_tile_static_memory_fence() const restrict(amp);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

