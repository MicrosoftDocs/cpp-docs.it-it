---
title: "CObject Class | Microsoft Docs"
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
  - "CObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi base, oggetti MFC"
  - "CObject class"
  - "object classes"
  - "oggetti [C++], base class for MFC"
ms.assetid: 95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base principale della libreria MFC.  
  
## Sintassi  
  
```  
class AFX_NOVTABLE CObject  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObject::CObject](../Topic/CObject::CObject.md)|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObject::AssertValid](../Topic/CObject::AssertValid.md)|Convalida l'integrità di questo oggetto.|  
|[CObject::Dump](../Topic/CObject::Dump.md)|Esegue il dump di diagnostica questo oggetto.|  
|[CObject::GetRuntimeClass](../Topic/CObject::GetRuntimeClass.md)|Restituisce la struttura `CRuntimeClass` che corrisponde alla classe dell'oggetto.|  
|[CObject::IsKindOf](../Topic/CObject::IsKindOf.md)|Verifica la relazione di questo oggetto a una classe specificata.|  
|[CObject::IsSerializable](../Topic/CObject::IsSerializable.md)|Test per verificare se questo oggetto può essere serializzato.|  
|[CObject::Serialize](../Topic/CObject::Serialize.md)|Carica o archivi un oggetto da\/verso un archivio.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObject::operator delete](../Topic/CObject::operator%20delete.md)|Operatore delete speciale.|  
|[CObject::operator new](../Topic/CObject::operator%20new.md)|Operatore **new** speciale.|  
  
## Note  
 Funge da radice non solo per le librerie di classi quali `CFile` e `CObList`, ma anche per le classi da scrivere.  `CObject` fornisce servizi di base, tra cui  
  
-   Supporto della serializzazione  
  
-   Informazioni sulla classe di runtime  
  
-   Output di diagnostica dell'oggetto  
  
-   Compatibilità con le classi di raccolte  
  
 Si noti che `CObject` non supporta l'ereditarietà multipla.  Le classi derivate possono avere una sola classe di base `CObject` e quella `CObject` deve essere più a sinistra nella gerarchia.  È consentito, tuttavia, presenta le strutture e`CObject`non di classi derivate in branch div di ereditarietà multipla.  
  
 Realizzerete importanti vantaggi della derivazione `CObject` se utilizzate alcune delle macro facoltative nell'implementazione della classe e dichiarazioni.  
  
 Le macro di primo livello, [DECLARE\_DYNAMIC](../Topic/DECLARE_DYNAMIC.md) e [IMPLEMENT\_DYNAMIC](../Topic/IMPLEMENT_DYNAMIC.md), accesso di runtime di uscita nel nome della classe e la relativa posizione nella gerarchia.  Questo, a sua volta, consente di eseguire il dump di diagnostica significativi.  
  
 Le macro di secondo livello, [DECLARE\_SERIAL](../Topic/DECLARE_SERIAL.md) e [IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md), includono tutte le funzionalità delle macro di primo livello e consentono a un oggetto per essere serializzati "a" e "da un archivio."  
  
 Per informazioni sulla derivazione delle classi MFC \(Microsoft Foundation e le classi C\+\+ in generale e utilizzando `CObject`, vedere [Utilizzando CObject](../../mfc/using-cobject.md) e [serializzazione](../../mfc/serialization-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 `CObject`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)