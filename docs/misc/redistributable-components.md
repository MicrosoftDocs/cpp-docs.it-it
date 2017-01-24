---
title: "Componenti ridistribuibili | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "componenti ridistribuibili"
  - "installazione [Visual Studio SDK], componenti ridistribuibili"
ms.assetid: 5072281f-3cb3-4985-bd93-c7981233bf92
caps.latest.revision: 20
caps.handback.revision: 20
manager: "douge"
---
# Componenti ridistribuibili
[!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] include codice da distribuire agli utenti nei termini del contratto di licenza di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK.  Tali componenti ridistribuibili includono i package di Windows Installer e modelli unione che diventano parte del processo di installazione del prodotto e codice sorgente da compilare nel package VS.  
  
 In la tabella seguente vengono descritti i componenti ridistribuibili incluse in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK.  I componenti possono essere presenti in *percorso di installazione di Visual Studio SDK*\\VisualStudioIntegration\\Redistributables \\.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|VSSDKTestHost.exe|È possibile installare questo eseguibile come parte dell' installazione.|  
  
## Installare pacchetti ridistribuibili  
 Componenti ridistribuibili per l'installazione del codice eseguibile viene fornito come package di Windows Installer \(file con estensione msi\) in modo da consentire a Microsoft gli aggiornamenti se sono necessari per le vulnerabilità di sicurezza o altri bug revisori.  
  
 Poiché Windows Installer consente l'invio di un solo pacchetto è installato per volta, installare il pacchetto ridistribuibile è necessario utilizzare un programma eseguibile separato che installa diversi pacchetti in sequenza.  Tale programma viene spesso definito *un chainer* o *un programma di avvio automatico*.  
  
> [!IMPORTANT]
>  *L'installazione annidata* \(anche nota come *installazione simultanea*\) è tuttavia in Windows Installer perché un prodotto “annidato„ non può essere applicato la patch indipendente.  È possibile applicare una patch a solo dal prodotto che ha installato.  Poiché i pacchetti ridistribuibili di [!INCLUDE[vssdk_current_long](../misc/includes/vssdk_current_long_md.md)] l'installazione di file nelle directory condivise e devono supportare l'applicazione di patch indipendente, non devono essere installati tramite un'installazione annidata.  
  
## Vedere anche  
 [Rilascio di un prodotto](../misc/releasing-a-visual-studio-integration-product.md)