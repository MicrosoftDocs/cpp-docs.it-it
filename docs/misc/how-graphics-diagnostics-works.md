---
title: "Funzionamento della diagnostica grafica | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 2ae14497-c77c-4399-bc0c-595caba23656
caps.latest.revision: 2
caps.handback.revision: 2
ms.author: "mithom"
manager: "douge"
---
# Funzionamento della diagnostica grafica
Inserire qui l'introduzione.  
  
## Funzionamento della diagnostica grafica  
 Per usare la diagnostica grafica, è innanzitutto necessario registrare le informazioni sul modo in cui un'app usa l'API Direct3D mentre è in esecuzione, quindi esaminare il comportamento registrato.  Per i frame specificati, le informazioni registrate includono le chiamate API, ad esempio quelle che cancellano lo schermo, disegnano la geometria, inviano compute shader o modificano lo stato del dispositivo di grafica, insieme ai relativi argomenti e alle copie di buffer e oggetti a cui si fa indirettamente riferimento.  Inoltre, le chiamate API correlate all'installazione e all'inizializzazione vengono registrate prima dell'esecuzione del rendering di qualsiasi frame.  Le informazioni registrate vengono scritte in un file di *log di grafica* \(.vsglog\).  
  
 Per ricreare il comportamento di rendering registrato nel log di grafica, riprodurre gli eventi di grafica nel computer di sviluppo oppure in un computer o un dispositivo remoto.  Il computer di riproduzione può essere lo stesso computer o dispositivo in cui è stato originariamente acquisito il log di grafica, ma non necessariamente.  Per la maggior parte delle funzionalità di riproduzione, l'hardware grafico del computer di riproduzione viene usato per riprodurre gli eventi di grafica, ma se si usa il debugger HLSL il codice dello shader verrà sempre riprodotto tramite una GPU emulata nella CPU.  L'uso di una GPU emulata consente di eseguire il codice di shader istruzione per istruzione, controllare le variabili e usare altre funzionalità di debug comuni, indipendentemente dal fatto che l'hardware grafico nel computer di riproduzione supporti il debug dell'hardware.  
  
> [!NOTE]
>  Sebbene il log di grafica acquisisca la maggior parte delle informazioni pertinenti a livello interno, sono necessarie altre informazioni per usare appieno alcune funzionalità di diagnostica grafica.  Ad esempio, per sfruttare la funzionalità di stack delle chiamate di grafica, è necessario disporre anche del file di database di programma \(.pdb\) e del codice sorgente dell'app.  Per eseguire il debug del codice sorgente dello shader HLSL, è necessario disporre anche del codice sorgente dello shader.  Se lo shader viene compilato mediante il compilatore D3D11.1 e le informazioni di debug sono abilitate, il codice sorgente dello shader è incorporato nel log di grafica durante l'acquisizione.  
  
> [!NOTE]
>  Dato che certe API potrebbero non essere disponibili in versioni precedenti di Windows o di DirectX, non è possibile riprodurre log di grafica che hanno acquisito tali chiamate API in un computer di riproduzione che non le supporti.  
  
### Log di grafica  
 Un log di grafica contiene uno o più frame acquisiti da un'applicazione grafica DirectX in esecuzione.  Poiché un log di grafica è indipendente, questi frame potranno essere ricreati in un secondo momento, senza informazioni o riferimenti esterni.  Ciò significa che è possibile condividere i log di grafica con altri sviluppatori, esaminare i problemi in computer diversi e analizzare i log di grafica precedenti anche se i modelli e le trame sono stati modificati in fase di sviluppo.  È inoltre possibile caricare più file di log di grafica \(.vsglog\) contemporaneamente per confrontare i dati e i risultati di rendering.  
  
##### Per aprire un file di log di grafica \(vsglog\)  
  
1.  Nella barra dei menu di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] scegliere **File**, **Apri**, **File**.  Verrà visualizzata la finestra di dialogo **Apri file**.  
  
2.  Specificare un file di log di grafica \(.vsglog\) da aprire, quindi scegliere il pulsante **Apri**.  
  
> [!NOTE]
>  È possibile estrarre, modificare e salvare copie di mesh e trame da un log di grafica usando gli strumenti di grafica inclusi in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Tuttavia, il contenuto del log di grafica non è interessato da tali modifiche.  Per informazioni su questi strumenti di grafica, vedere [Utilizzo di risorse tridimensionali per giochi e app](../Topic/Working%20with%203-D%20Assets%20for%20Games%20and%20Apps.md).