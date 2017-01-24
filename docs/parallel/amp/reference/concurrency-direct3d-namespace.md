---
title: "Spazio dei nomi Concurrency::direct3d | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::direct3d"
  - "amprt/Concurrency::direct3d"
  - "amp_short_vectors/Concurrency::direct3d"
  - "amp_graphics/Concurrency::direct3d"
  - "amp_math/Concurrency::direct3d"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "spazi dei nomi direct3d"
ms.assetid: 9566a2f1-4d5f-43e4-a3ac-676643d38420
caps.latest.revision: 15
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Spazio dei nomi Concurrency::direct3d
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Lo spazio dei nomi `direct3d` fornisce funzioni che supportano l'interoperabilità D3D.  Abilita il solo utilizzo delle risorse D3D per il calcolo in codice AMP nonché consentire l'utilizzo delle risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti.  È possibile accelerare gradualmente le sezioni impegnative in termini di calcolo delle applicazioni DirectX utilizzando C\+\+ AMP e le API D3D sui dati prodotti dai calcoli AMP.  
  
## Sintassi  
  
```  
namespace direct3d;  
```  
  
## Membri  
  
### Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe scoped\_d3d\_access\_lock](../../../parallel/amp/reference/scoped-d3d-access-lock-class.md)|Wrapper RAII per un blocco accesso di D3D su un oggetto `accelerator_view`.|  
  
### Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura adopt\_d3d\_access\_lock\_t](../../../parallel/amp/reference/adopt-d3d-access-lock-t-structure.md)|Il tipo di tag per indicare il blocco di accesso di D3D dovrebbe essere adottato anziché acquisito.|  
  
### Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione abs](../Topic/abs%20Function.md)|Restituisce il valore assoluto dell'argomento|  
|[Funzione clamp](../Topic/clamp%20Function.md)|Di overload.  Associa \_X allo specifico \_Min e \_Max range|  
|[Funzione countbits](../Topic/countbits%20Function.md)|Calcola il numero di bit impostati in \_X|  
|[Funzione create\_accelerator\_view](../Topic/create_accelerator_view%20Function.md)|Crea [Classe accelerator\_view](../../../parallel/amp/reference/accelerator-view-class.md) da un puntatore a un'interfaccia del dispositivo Direct3D|  
|[Funzione d3d\_access\_lock](../Topic/d3d_access_lock%20Function.md)|Acquisisce un blocco in un accelerator\_view per eseguire in modo sicuro le operazioni D3D sulle risorse condivise con accelerator\_view|  
|[Funzione d3d\_access\_try\_lock](../Topic/d3d_access_try_lock%20Function.md)|Tentativo di acquisire il blocco di accesso di D3D su un accelerator\_view senza bloccare.|  
|[Funzione d3d\_access\_unlock](../Topic/d3d_access_unlock%20Function.md)|Rilasciare il blocco di accesso di D3D sull'oggetto accelerator\_view specificato.|  
|[Funzione firstbithigh](../Topic/firstbithigh%20Function.md)|Ottiene la posizione del primo bit impostato in \_X, a partire dal bit di ordine superiore e andando in ordine decrescente|  
|[Funzione firstbitlow](../Topic/firstbitlow%20Function.md)|Ottiene la posizione del primo bit impostato in \_X, a partire dal bit di ordine inferiore e andando in ordine crescente|  
|[Funzione get\_buffer](../Topic/get_buffer%20Function.md)|Ottiene l'interfaccia del buffer D3D sottostante a un array.|  
|[Funzione imax](../Topic/imax%20Function.md)|Confronta due valori, restituendo il valore maggiore.|  
|[Funzione imin](../Topic/imin%20Function.md)|Confronta due valori, restituendo il valore minore.|  
|[Funzione is\_timeout\_disabled](../Topic/is_timeout_disabled%20Function.md)|Restituisce un flag booleano che indica se il timeout è disabilitato per l'oggetto accelerator\_view specificato.|  
|[Funzione mad](../Topic/mad%20Function.md)|Di overload.  Esegue un'operazione aritmetica di moltiplicazione\/somma su tre argomenti: \_X \* \_Y \+ \_Z|  
|[Funzione make\_array](../Topic/make_array%20Function.md)|Crea una matrice da un puntatore all'interfaccia del buffer di D3D.|  
|[Funzione noise](../Topic/noise%20Function.md)|Genera un valore casuale utilizzando l'algoritmo Perlin noise|  
|[Funzione radians](../Topic/radians%20Function.md)|Converte \_X da gradi a radianti|  
|[Funzione rcp](../Topic/rcp%20Function.md)|Calcola un reciproco veloce e approssimativo dell'argomento|  
|[Funzione reversebits](../Topic/reversebits%20Function.md)|Inverte l'ordine dei bit in \_X|  
|[Funzione saturate](../Topic/saturate%20Function.md)|Fissa \_X nell'intervallo tra 0 e 1|  
|[Funzione sign](../Topic/sign%20Function.md)|Di overload.  Restituisce il segno dell'argomento|  
|[Funzione smoothstep](../Topic/smoothstep%20Function.md)|Restituisce un'interpolazione continua di Hermite tra 0 e 1, se \_X è nell'intervallo \[\_Min, \_Max\].|  
|[Funzione step](../Topic/step%20Function.md)|Confronta due valori, restituendo 0 o 1 in base a quale valore è maggiore|  
|[Funzione umax](../Topic/umax%20Function.md)|Confronta due valori senza segno, restituendo il valore maggiore.|  
|[Funzione umin](../Topic/umin%20Function.md)|Confronta due valori senza segno, restituendo il valore minore.|  
  
## Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)