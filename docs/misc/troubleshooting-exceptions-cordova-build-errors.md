---
title: "Risoluzione dei problemi relativi ad eccezioni: errori di compilazione di Cordova | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BLD102"
  - "BLD10205"
  - "BLD301"
  - "BLD401"
  - "BLDErr_Build_NodeMissing"
  - "BLDErr_BLD_Win8Required"
ms.assetid: 781c09e3-0704-4b30-9230-036cbdb2dff9
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikejo5000"
ms.author: "mikejo"
---
# Risoluzione dei problemi relativi ad eccezioni: errori di compilazione di Cordova
In questo argomento vengono descritti alcuni dei messaggi di errore più comuni che possono essere visualizzati durante l'uso di Strumenti di Visual Studio per Apache Cordova.  
  
-   [MSBUILD: errore di compilazione di Cordova BLD102 - Il file o la directory 'config.xml' non esiste](#BLD102)  
  
-   [MSBUILD: errore di compilazione di Cordova BLD301 - Non è stato configurato alcun agente di compilazione iOS remota](#BLD301)  
  
-   [MSBUILD: errore di compilazione di Cordova BLD401 - Il modulo &lt;nome_modulo&gt; non è stato trovato](#BLD401)  
  
-   [MSBUILD: errore di compilazione di Cordova BLD10205 - Installare una destinazione Android](#BLD10205)  
  
-   [BLDErr_Build_NodeMissing - Non è stato possibile determinare il percorso del file eseguibile di Node.js.](#BLDErr_Build_NodeMissing)  
  
-   [BLDErr_Build_Win8Required](#BLDErr_Build_Win8Required)  
  
 Per altre informazioni generali sulla risoluzione degli errori in un'app Cordova, vedere [Risoluzione degli errori di compilazione](https://taco.visualstudio.com/en-us/docs/resolving-build-errors/).  
  
##  <a name="BLD102"></a> MSBUILD: errore di compilazione di Cordova BLD102 \- Il file o la directory 'config.xml' non esiste  
 Se viene visualizzato questo errore, assicurarsi che il progetto includa un file config.xml nella radice del progetto e verificare che il progetto sia contenuto nel computer locale e non in una condivisione di rete.  
  
 Per altre informazioni, vedere questo [post di StackOverflow](http://stackoverflow.com/questions/27134007/new-cordova-project-gives-the-error-bld00102-no-such-file-or-directory-confi).  
  
##  <a name="BLD301"></a> MSBUILD: errore di compilazione di Cordova BLD301 \- Non è stato configurato alcun agente di compilazione iOS remota  
 La stringa di errore completa è:  
  
-   MSBUILD: errore di compilazione di Cordova BLD301 \- Non è stato configurato alcun agente di compilazione iOS remota. Configurarne uno in Strumenti \> Opzioni \> Strumenti per Apache Cordova \> Configurazione agente remoto. Per dettagli e alternative, vedere http:\/\/go.microsoft.com\/fwlink\/?LinkID\=511904  
  
 Per informazioni sull'installazione e la configurazione dell'agente remotebuild per iOS, vedere la [guida all'installazione di iOS.](http://taco.visualstudio.com/en-us/docs/ios-guide/)  
  
##  <a name="BLD401"></a> MSBUILD: errore di compilazione di Cordova BLD401 \- Il modulo \<nome\_modulo\> non è stato trovato  
 La stringa di errore completa è:  
  
-   MSBUILD: errore di compilazione cordova BLD401 \- Errore: BLD00401 \- Il modulo \<nome\_modulo\> non è stato trovato. Passare a Strumenti\-\-\> Opzioni\-\-\> Strumenti per Apache Cordova\-\-\> Strumenti Cordova\-\-\> Cancella cache di Cordova e ripetere la compilazione.  
  
 Potrebbe essere necessario cancellare la cache e reinstallare vs\-tac. Per altre informazioni, vedere la pagina relativa alla [reinstallazione di vs\-tac](http://taco.visualstudio.com/en-us/docs/configure-vs-tools-apache-cordova#vstac).  
  
 Dopo aver cancellato la cache, eliminare la cartella delle piattaforme nel progetto. Quindi provare a compilare di nuovo.  
  
##  <a name="BLD10205"></a> MSBUILD: errore di compilazione di Cordova BLD10205 \- Installare una destinazione Android  
 Se viene visualizzato questo errore, assicurarsi di installare le dipendenze necessarie per il dispositivo di destinazione selezionato mediante Android SDK Manager \(SDK Manager.exe\).  
  
 Per altre informazioni sul livello dell'API richiesto e altri componenti di Android SDK, vedere la pagina relativa a come [installare manualmente le dipendenze](http://taco.visualstudio.com/en-us/docs/configure-vs-tools-apache-cordova#ThirdParty).  
  
 È inoltre necessario verificare il percorso usato da Visual Studio per individuare Android SDK. A tale scopo, vedere la pagina relativa a come [eseguire l'override delle variabili di ambiente del sistema](http://taco.visualstudio.com/en-us/docs/configure-vs-tools-apache-cordova#env-var).  
  
 Per altre informazioni sull'installazione dei componenti appropriati per l'uso degli strumenti, vedere la pagina relativa agli [strumenti di terze parti](http://taco.visualstudio.com/en-us/docs/install-vs-tools-apache-cordova#choose).  
  
##  <a name="BLDErr_Build_NodeMissing"></a> BLDErr\_Build\_NodeMissing \- Non è stato possibile determinare il percorso del file eseguibile di Node.js.  
 Se Node.js è stato installato in un percorso diverso da quello predefinito, Visual Studio potrebbe non trovarlo. Reinstallare Node.js nel percorso predefinito. Per altre informazioni, vedere questo [post di StackOverflow](http://stackoverflow.com/questions/32203992/vs2015-cordova-apps-blderr-build-nodemissing) e questo articolo su come [aggiornare in modo sicuro Node.js](http://taco.visualstudio.com/en-us/docs/change-node-version/).  
  
##  <a name="BLDErr_Build_Win8Required"></a> BLDErr\_Build\_Win8Required  
 È necessario Windows 8.1 per impostare Windows come destinazione in un'app creata con Visual Studio Tools per Apache Cordova.