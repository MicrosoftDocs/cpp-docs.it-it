---
title: "Registrazione di servizi | Microsoft Docs"
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
  - "servizi, registrazione"
ms.assetid: c4ebac40-0374-4dda-948e-06fdda0e9c81
caps.latest.revision: 8
caps.handback.revision: 8
manager: "douge"
---
# Registrazione di servizi
Per supportare il caricamento su richiesta, un provider di servizi deve registrare i suoi servizi globali con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 Durante lo sviluppo, i provider di servizi gestiti registrano servizi e sostituzioni dei servizi aggiungendo attributi al codice sorgente dei pacchetti e quindi compilando i pacchetti nell'IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Questo consente di eseguire l'utility RegPkg.exe sull'assembly risultante, registrare il pacchetto e prepararlo per la distribuzione. Per altre informazioni, vedere [Procedura: Registrare un servizio](../misc/how-to-register-a-service.md).  
  
 I provider di servizi non gestiti devono registrare i servizi forniti con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] nella sezione del Registro di sistema dedicata ai servizi o alle sostituzioni dei servizi. Il frammento seguente del file REG mostra come potrebbe essere registrato il servizio SVsTextManager:  
  
```  
[HKEY_LOCAL_MACHINE\Software\Microsoft\VisualStudio\<version number>\Services\{F5E7E71D-1401-11d1-883B-0000F87579D2}] @="{F5E7E720-1401-11d1-883B-0000F87579D2}" "Name"="SVsTextManager"  
```  
  
 Nell'esempio precedente, il numero di versione è la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio 7.1 o 8.0, la chiave {F5E7E71D\-1401\-11d1\-883B\-0000F87579D2} è l'identificatore del servizio \(SID\), SVsTextManager, e il valore predefinito {F5E7E720\-1401\-11d1\-883B\-0000F87579D2} è il GUID della gestione testo VSPackage, che fornisce il servizio.  
  
## Servizi remoti e i thread in background  
 I servizi forniti non sono automaticamente disponibili in modalità remota o per i thread in background. Per renderli disponibili, è necessario compilare e registrare una libreria dei tipi.  
  
 Dal codice non gestito che usa la Libreria di Visual Studio \(VSL\), è possibile registrare la libreria dei tipi come nell'esempio che segue:  
  
```  
#define VSL_REGISTER_TYPE_LIB TRUE #include <VSLPackageDllEntryPoints.cpp>  
```  
  
 Dal codice gestito, è possibile aggiungere un passaggio post\-compilazione come segue:  
  
```  
regasm /tlb MyAssembly.dll  
```  
  
## Vedere anche  
 [Utilizzo e servizi](../Topic/Using%20and%20Providing%20Services.md)   
 [Funzionalità fondamentali del servizio](../Topic/Service%20Essentials.md)