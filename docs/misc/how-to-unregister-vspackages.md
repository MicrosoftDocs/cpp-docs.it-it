---
title: "Procedura: Annullare la registrazione di pacchetti VSPackage | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "applicazioni di esempio [Visual Studio SDK], disinstallazione"
  - "installazione, VSPackage"
ms.assetid: b51522f0-c033-4d93-b928-2171a953032b
caps.latest.revision: 14
caps.handback.revision: 14
manager: "douge"
---
# Procedura: Annullare la registrazione di pacchetti VSPackage
Per impostazione predefinita, quando si compilano pacchetti VSPackage, questi vengono registrati nell'hive del Registro di sistema sperimentale. L'hive sperimentale può riempirsi di pacchetti VSPackage che non si vogliono conservare dopo averli usati per dei test.  
  
 Per eliminare tutti i pacchetti registrati nell'hive sperimentale, ripristinare solo l'hive usando lo strumento CreateExpInstance con l'opzione \/Reset. Per altre informazioni, vedere [L'istanza sperimentale](../Topic/The%20Experimental%20Instance.md).  
  
## Annullamento della registrazione dei singoli pacchetti VSPackage  
  
#### Per annullare la registrazione di un pacchetto VSPackage non gestito  
  
1.  Fare clic sul pulsante **Start**, scegliere **Esegui**, digitare `regsvr32 /u` *pathToVSPackage.dll*, quindi fare clic su OK.  
  
 Dal momento che i pacchetti VSPackage non gestiti contengono codice di registrazione automatica, è possibile usare l'utilità regsvr32 per registrarli e annullarne la registrazione.  
  
#### Per annullare la registrazione di un pacchetto VSPackage gestito  
  
1.  Fare clic sul pulsante **Start**, scegliere **Esegui**, digitare il *percorso di installazione di Visual Studio SDK*`\EnvSDK\tools\bin\x86\regpkg /unregister` *pathToVSPackage.dll*, quindi fare clic su OK.  
  
 Lo strumento RegPkg legge gli attributi di registrazione che possono essere incorporati in un VSPackage gestito. Lo switch **\/unregister** istruisce RegPkg per rimuovere le informazioni dal registro di sistema.  
  
## Vedere anche  
 [Visual Studio Integration Samples](http://msdn.microsoft.com/it-it/b5dbf078-3af2-4fed-a1ea-171e4ee73a43)