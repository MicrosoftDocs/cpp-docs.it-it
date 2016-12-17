---
title: "Struttura XFORM | Microsoft Docs"
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
  - "XFORM"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "XFORM (struttura)"
ms.assetid: 4fb4ef5b-05d2-4884-82d1-1cb8f7be6302
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura XFORM
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `XFORM` presenta il formato seguente:  
  
## Sintassi  
  
```  
  
      typedef struct  tagXFORM {  /* xfrm */  
    FLOAT eM11;  
    FLOAT eM12;  
    FLOAT eM21;  
    FLOAT eM22;  
    FLOAT eDx;  
    FLOAT eDy;  
} XFORM;  
```  
  
## Note  
 La struttura di `XFORM` specifica una trasformazione di pagina spazio dello spazio globale.  I membri di **eDy** e di **eDx** definiscono invece orizzontali e verticali i componenti della conversione, rispettivamente.  Nella tabella seguente mostra come gli altri membri vengono utilizzati, come l'operazione:  
  
|Operazione|eM11|eM12|eM21|eM22|  
|----------------|----------|----------|----------|----------|  
|`Rotation`|Coseno dell'angolo di rotazione|Seno dell'angolo di rotazione|Seno negativo dell'angolo di rotazione|Coseno dell'angolo di rotazione|  
|**Ridimensionamento**|Componente orizzontale di scala|Nothing|Nothing|Ambito verticale della scala|  
|**Inclinazione**|Nothing|Costante orizzontale di proporzionalità|Costante verticale di proporzionalità|Nothing|  
|**Reflection**|Componente orizzontale di reflection|Nothing|Nothing|Ambito verticale della reflection|  
  
## Requisiti  
 **File di intestazione:** wingdi.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRgn::CreateFromData](../Topic/CRgn::CreateFromData.md)