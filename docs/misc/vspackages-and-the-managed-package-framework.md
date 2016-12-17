---
title: "Pacchetti VSPackage e framework del pacchetto gestito | Microsoft Docs"
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
  - "framework di pacchetto gestito"
  - "VSPackage, framework del pacchetto gestito"
  - "pacchetti VSPackage gestiti, framework del pacchetto gestito"
ms.assetid: e8d80e0f-6b5b-4baf-a7df-59fd808c60cd
caps.latest.revision: 16
caps.handback.revision: 16
manager: "douge"
---
# Pacchetti VSPackage e framework del pacchetto gestito
È possibile ridurre il tempo di sviluppo creando un VSPackage con le classi gestite del framework \(MPF\) del pacchetto anziché utilizzare le classi di interoperabilità COM.  
  
 Esistono due modi per creare un VSPackage gestito:  
  
-   Utilizzare il modello di progetto importa pacchetto di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]  
  
     Per ulteriori informazioni, vedere [Procedura dettagliata: Creazione di un comando di menu tramite il modello di pacchetto di Visual Studio](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md).  
  
-   Compilare il package VS senza il modello di progetto importa pacchetto di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]  
  
     Ad esempio, è possibile copiare un esempio VSPackage e modificare i GUID e i nomi.  È possibile trovare gli esempi riportati nella sezione VSX di [raccolta di codice](http://code.msdn.microsoft.com/vsx/).  
  
## In questa sezione  
 [Classi del framework di pacchetto gestito](../misc/managed-package-framework-classes.md)  
 Viene descritto ed elenca gli spazi dei nomi e i file con estensione DLL della classe di MPF.  
  
## Sezioni correlate  
 [Procedura dettagliata: Creazione di un comando di menu tramite il modello di pacchetto di Visual Studio](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md)  
 Viene illustrato come creare un VSPackage gestito.  
  
 [VSPackage gestiti](../misc/managed-vspackages.md)  
 Vengono illustrati gli aspetti di package VS che si applicano al codice gestito.