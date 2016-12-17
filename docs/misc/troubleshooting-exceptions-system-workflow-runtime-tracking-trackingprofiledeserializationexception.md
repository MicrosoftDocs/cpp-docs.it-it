---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Workflow.Runtime.Tracking.TrackingProfileDeserializationException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHWRTTrackingProfileDeserialization"
helpviewer_keywords: 
  - "System.Workflow.Runtime.Tracking.TrackingProfileDeserializationException (eccezione)"
  - "TrackingProfileDeserializationException (eccezione)"
ms.assetid: ce8fe4c1-43e3-4930-947e-74b8d94f32bf
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Workflow.Runtime.Tracking.TrackingProfileDeserializationException
Un'eccezione <xref:System.Workflow.Runtime.Tracking.TrackingProfileDeserializationException> viene generata quando un oggetto <xref:System.Workflow.Runtime.Tracking.TrackingProfile> non è in grado di deserializzare un documento XML in un oggetto <xref:System.Workflow.Runtime.Tracking.TrackingProfileSerializer>.  
  
## Note  
 Quando l'oggetto <xref:System.Workflow.Runtime.Tracking.TrackingProfileSerializer> genera questa eccezione, fornisce un messaggio che descrive il motivo dell'eccezione. In alcuni casi, l'oggetto <xref:System.Workflow.Runtime.Tracking.TrackingProfileSerializer> fornisce l'elenco degli errori e degli avvisi di convalida incontrati nel tentativo di deserializzare l'oggetto <xref:System.Workflow.Runtime.Tracking.TrackingProfile>. Se tale elenco viene fornito, è contenuto nella proprietà <xref:System.Workflow.Runtime.Tracking.TrackingProfileDeserializationException.ValidationEventArgs%2A>.  
  
## Vedere anche  
 <xref:System.Workflow.Runtime.Tracking.TrackingProfileDeserializationException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)