---
title: "Moniker asincroni in Internet | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], asincrono"
  - "moniker asincroni [C++]"
  - "download di risorse Internet e moniker asincroni"
  - "Internet [C++], download asincrono"
  - "MFC [C++], moniker asincroni"
  - "ottimizzazione [C++], download asincrono da Internet"
  - "applicazioni Web [C++], asincrono"
ms.assetid: 418b0c64-0046-4dae-8118-c9c762b5822e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Moniker asincroni in Internet
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Internet richiede nuovi approcci a progetto di applicazione a causa del relativo accesso alla rete lenta.  Le applicazioni devono eseguire l'accesso alla rete in modo asincrono per evitare il blocco dell'interfaccia utente.  La classe MFC [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) fornisce supporto asincrono di scaricare i file.  
  
 Con i moniker asincroni, è possibile estendere l'applicazione COM scaricare in modo asincrono tramite internet e fornire il rendering progressivo di oggetti grandi quali bitmap e oggetti di VRML.  I moniker asincroni consentono una proprietà del controllo ActiveX o un file in internet venga scaricato senza bloccare la risposta dell'interfaccia utente.  
  
## Vantaggi dei moniker asincroni  
 È possibile utilizzare i moniker asincroni:  
  
-   Codice e file scaricati senza blocco.  
  
-   Proprietà di download in controlli ActiveX senza blocco.  
  
-   Ricezione di notifiche dello stato di avanzamento di download.  
  
-   Lo stato di avanzamento e informazioni sullo stato pronta.  
  
-   Immettere le informazioni sullo stato all'utente sullo stato di avanzamento.  
  
-   Consente di annullare un download in qualsiasi momento.  
  
## Classi MFC per i moniker asincroni  
 [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) è derivato da [CMonikerFile](../mfc/reference/cmonikerfile-class.md), che a sua volta deriva da [COleStreamFile](../mfc/reference/colestreamfile-class.md).  Un oggetto di `COleStreamFile` rappresenta un flusso di dati; un oggetto di `CMonikerFile` utilizza `IMoniker` per ottenere i dati e un oggetto di `CAsyncMonikerFile` esegue questa operazione in modo asincrono.  
  
 I moniker asincroni vengono utilizzati principalmente in applicazioni e controlli ActiveX ma abilitati fornire un'interfaccia utente inalterata i trasferimenti di file.  Un esempio tipico è rappresentato dall'utilizzo di [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md) fornire proprietà asincrone per i controlli ActiveX.  
  
## Classi MFC per i percorsi di dati nei controlli ActiveX  
 Le classi MFC `CDataPathProperty` e [CCachedDataPathProperty](../mfc/reference/ccacheddatapathproperty-class.md) implementano proprietà del controllo ActiveX che possono essere caricati in modo asincrono.  Le proprietà asincrone vengono caricati dopo l'avvio sincrono.  I controlli ActiveX asincroni avviano ripetutamente un callback per indicare la disponibilità di nuovi dati durante il processo lungo di scambio di proprietà.  
  
 `CDataPathProperty` è derivata da `CAsyncMonikerFile`.  `CCachedDataPathProperty` è derivata da `CDataPathProperty`.  Per implementare le proprietà asincrone nei controlli ActiveX, derivare una classe da `CDataPathProperty` o da `CCachedDataPathProperty` ed eseguire l'override di [OnDataAvailable](../Topic/CAsyncMonikerFile::OnDataAvailable.md) e altre notifiche che si desidera ricevere.  
  
#### Per scaricare un file utilizzando i moniker asincroni  
  
1.  Dichiarare una classe derivata da [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md).  
  
2.  Override [OnDataAvailable](../Topic/CAsyncMonikerFile::OnDataAvailable.md) per visualizzare i dati.  
  
3.  Eseguire l'override di altre funzioni membro, inclusi [OnProgress](../Topic/CAsyncMonikerFile::OnProgress.md), [OnStartBinding](../Topic/CAsyncMonikerFile::OnStartBinding.md) e [OnStopBinding](../Topic/CAsyncMonikerFile::OnStopBinding.md).  
  
4.  Dichiarare un'istanza di questa classe e utilizzarlo per aprire gli URL.  
  
 Per informazioni sul download in modo asincrono in un controllo ActiveX, vedere [Controlli ActiveX in internet](../mfc/activex-controls-on-the-internet.md).  
  
## Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)