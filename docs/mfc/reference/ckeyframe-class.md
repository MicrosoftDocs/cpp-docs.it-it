---
title: "Classe CKeyFrame | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CKeyFrame"
  - "CKeyFrame"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CKeyFrame (classe)"
ms.assetid: d050a562-20f6-4c65-8ce5-ccb3aef1a20e
caps.latest.revision: 18
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CKeyFrame
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un fotogramma chiave di animazione.  
  
## Sintassi  
  
```  
class CKeyFrame : public CBaseKeyFrame;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CKeyFrame::CKeyFrame](../Topic/CKeyFrame::CKeyFrame.md)|Di overload.  Costruisce un fotogramma chiave che dipende da un altro fotogramma chiave.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CKeyFrame::AddToStoryboard](../Topic/CKeyFrame::AddToStoryboard.md)|Aggiunge un fotogramma chiave a uno storyboard.  \(Esegue l'override di [CBaseKeyFrame::AddToStoryboard](../Topic/CBaseKeyFrame::AddToStoryboard.md)\).|  
|[CKeyFrame::AddToStoryboardAfterTransition](../Topic/CKeyFrame::AddToStoryboardAfterTransition.md)|Aggiunge un fotogramma chiave allo storyboard dopo la transizione.|  
|[CKeyFrame::AddToStoryboardAtOffset](../Topic/CKeyFrame::AddToStoryboardAtOffset.md)|Aggiunge un fotogramma chiave allo storyboard all'offset.|  
|[CKeyFrame::GetExistingKeyframe](../Topic/CKeyFrame::GetExistingKeyframe.md)|Restituisce un puntatore a un fotogramma chiave dal quale dipende questo fotogramma.|  
|[CKeyFrame::GetOffset](../Topic/CKeyFrame::GetOffset.md)|Restituisce un offset da un altro fotogramma chiave.|  
|[CKeyFrame::GetTransition](../Topic/CKeyFrame::GetTransition.md)|Restituisce un puntatore a una transizione dalla quale dipende questo fotogramma chiave.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CKeyFrame::m\_offset](../Topic/CKeyFrame::m_offset.md)|Specifica offset di questo fotogramma chiave da un fotogramma chiave archiviato in m\_pExistingKeyFrame.|  
|[CKeyFrame::m\_pExistingKeyFrame](../Topic/CKeyFrame::m_pExistingKeyFrame.md)|Archivia un puntatore a un fotogramma chiave esistente.  Questo fotogramma chiave viene aggiunto allo storyboard con m\_offset al fotogramma chiave esistente.|  
|[CKeyFrame::m\_pTransition](../Topic/CKeyFrame::m_pTransition.md)|Archivia un puntatore a una transizione che inizia in questo fotogramma chiave.|  
  
## Note  
 Questa classe implementa un fotogramma chiave di animazione.  Un fotogramma chiave rappresenta un momento all'interno di uno storyboard e può essere utilizzato per specificare l'ora di inizio e l'ora di fine delle transizioni.  Un fotogramma chiave può essere basato su un altro fotogramma chiave e disporre di un offset \(in secondi\) da esso oppure può essere basato su una transizione e rappresentare un momento di quando la transizione termina.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseKeyFrame](../../mfc/reference/cbasekeyframe-class.md)  
  
 [CKeyFrame](../../mfc/reference/ckeyframe-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)