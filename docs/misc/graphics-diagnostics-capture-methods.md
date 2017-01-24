---
title: "Metodi di acquisizione di diagnostica grafica | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: ea21995d-0241-412e-8f62-600c3794247f
caps.latest.revision: 2
caps.handback.revision: 2
ms.author: "mithom"
manager: "douge"
---
# Metodi di acquisizione di diagnostica grafica
Inserire qui l'introduzione.  
  
## Metodi di acquisizione  
 In [!INCLUDE[win81](../misc/includes/win81_md.md)], il runtime di DirectX 11.2 può acquisire informazioni grafiche internamente per conto di strumenti di debug come quelli di diagnostica grafica. Questa tecnica è nota come *acquisizione affidabile*.  Prima che questo supporto fosse aggiunto al runtime di DirectX, le informazioni grafiche venivano acquisite mediante l'intercettazione di determinate chiamate di funzione di DirectX per registrare argomenti e altre informazioni prima del completamento dell'inoltro della chiamata a DirectX. Questo metodo è noto come *acquisizione legacy*.  
  
 Dato che il runtime di DirectX ha la responsabilità esclusiva per l'acquisizione delle informazioni grafiche in [!INCLUDE[win81](../misc/includes/win81_md.md)], non è necessario aggiornare l'acquisizione legacy per supportare DirectX 11.2 e tale metodo di acquisizione è quindi deprecato.  Dato che il runtime di DirectX 11.2 non supporta versioni di Windows precedenti a [!INCLUDE[win81](../misc/includes/win81_md.md)], tuttavia, [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] supporta ancora l'acquisizione legacy per applicazioni destinate a [!INCLUDE[win8](../build/includes/win8_md.md)] e [!INCLUDE[win7](../build/includes/win7_md.md)].  
  
 Entrambi i metodi registrano informazioni simili e non modificano la modalità di acquisizione delle informazioni grafiche o quella di uso degli strumenti di diagnostica grafica.  
  
### Acquisizione affidabile  
 L'acquisizione affidabile supporta la diagnostica grafica di [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] in [!INCLUDE[win81](../misc/includes/win81_md.md)], [!INCLUDE[winblue_winrt_2](../misc/includes/winblue_winrt_2_md.md)] e Windows Phone 8.1.  Supporta anche da DirectX 10.0 a DirectX 11.2 e consente l'acquisizione di informazioni grafiche relative a nuove funzionalità di Direct3D 11.2, ad esempio le risorse allocate dinamicamente.  L'acquisizione affidabile non fornisce tuttavia supporto completo per tutte le funzionalità di Direct3D 11.2. Non è ad esempio possibile eseguire il debug di uno shader HLSL creato usando la funzionalità di collegamento per gli shader HLSL.  L'acquisizione affidabile usa una nuova API di acquisizione per supportare i propri scenari di acquisizione a livello di codice.  
  
### Acquisizione legacy  
 L'acquisizione legacy supporta la diagnostica grafica di [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] e [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] in [!INCLUDE[win8](../build/includes/win8_md.md)], Windows RT 8 e [!INCLUDE[win7](../build/includes/win7_md.md)].  Supporta anche da DirectX 10.0 a DirectX 11.1.  L'acquisizione legacy non supporta alcuna funzionalità di Direct3D 11.2 ed è deprecata salvo per quegli scenari in cui l'acquisizione affidabile non è disponibile.  L'acquisizione legacy usa l'API di acquisizione definita nel file di intestazione `vsgcapture.h` per il supporto dei propri scenari di acquisizione a livello di codice.  Questo tipo di acquisizione a livello di codice è anch'esso deprecato salvo per quegli scenari in cui l'acquisizione affidabile non è disponibile.  
  
## Vedere anche  
 [Cattura informazioni grafica](../Topic/Capturing%20Graphics%20Information.md)   
 [Procedura dettagliata: cattura delle informazioni grafica](../Topic/Walkthrough:%20Capturing%20Graphics%20Information.md)