---
title: "Errore MSB8031 di MSBuild | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSB8031"
ms.assetid: ebfaca51-fd91-4b04-8194-b4fdededd5fe
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Errore MSB8031 di MSBuild
MSB8031  
  
 Per utilizzare la codifica MBCS nei progetti MFC, è necessario scaricare e installare una libreria supplementare.  
  
 Le versioni MBCS delle DLL MFC non sono incluse in Visual Studio, ma sono disponibili nel componente aggiuntivo della DLL MFC MBCS che può essere scaricato se si è un cliente di Visual Studio.  Se non si installa il componente aggiuntivo e si tenta di compilare un progetto MFC in cui viene utilizzato il set di caratteri MBCS, tramite il linker non verranno individuate le DLL e la compilazione avrà esito negativo.  
  
### Per correggere l'errore  
  
1.  [Scaricare il componente aggiuntivo della DLL MBCS MFC](http://go.microsoft.com/fwlink/?LinkId=299009) dall'area download di MSDN o, se è pratico, convertire il progetto nel set di caratteri UNICODE.  
  
## Vedere anche  
 [Componente aggiuntivo DLL MBCS MFC](../mfc/mfc-mbcs-dll-add-on.md)