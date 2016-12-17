---
title: "Distribuzione in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distribuzione di applicazioni [C++]"
  - "distribuzione di applicazioni [C++]"
ms.assetid: d4b4ffc0-d2bd-4e4a-84a6-62f1c26f6a09
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Distribuzione in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si distribuisce un'applicazione [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] in un altro computer, è necessario installare l'applicazione e gli eventuali file di libreria da cui dipende.  Se viene aggiornata una libreria, ad esempio durante la correzione di una vulnerabilità di sicurezza, è opportuno applicare l'aggiornamento nella destinazione in cui viene distribuita l'applicazione.  
  
 In Visual Studio sono disponibili tre modi per distribuire le librerie di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] insieme all'applicazione: distribuzione centrale, distribuzione locale e collegamento statico.  Microsoft aggiorna automaticamente le librerie distribuite centralmente.  Per le librerie di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] distribuite localmente o collegate staticamente, il writer dell'applicazione deve fornire gli aggiornamenti.  
  
## Distribuzione centrale  
 Nella distribuzione centrale, i file di libreria di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] vengono installati nella directory %windir%\\system32\\.  Per distribuire centralmente le librerie di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)], è possibile utilizzare uno degli elementi seguenti:  
  
-   *File del pacchetto ridistribuibile*, ovvero eseguibili autonomi della riga di comando che è possibile utilizzare per installare le librerie ridistribuibili di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  
  
-   *Modelli unione ridistribuibili \(file MSM\)* che è possibile utilizzare per distribuire librerie specifiche e includere nel file di Windows Installer \(MSI\) dell'applicazione.  
  
 Un file del pacchetto ridistribuibile consente di installare le librerie di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] per una particolare architettura di sistema.  È possibile programmare il programma di installazione dell'applicazione per eseguirlo come prerequisito prima di installare l'applicazione.  Un modello unione consente l'inclusione della logica di installazione per una libreria di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] in un file di installazione dell'applicazione Windows Installer.  È possibile includere il numero di modelli unione richiesto dall'applicazione.  
  
 Poiché la distribuzione centrale delle librerie di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] eseguita tramite il pacchetto ridistribuibile consente l'aggiornamento automatico da Microsoft, è consigliabile utilizzare il collegamento dinamico e i pacchetti ridistribuibili per l'applicazione.  
  
## Distribuzione locale  
 Nella distribuzione locale i file di libreria vengono installati nella cartella dell'applicazione insieme al file eseguibile.  È possibile installare nella stessa cartella versioni diverse di librerie perché il nome file di ogni versione viene reso univoco dall'inclusione del relativo numero di versione.  Ad esempio, la versione 12 del runtime C è msvcr120.dll.  
  
 Poiché Microsoft non può aggiornare automaticamente le librerie di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] distribuite localmente, è consigliabile usare cautela nell'eseguire la distribuzione locale di queste librerie.  Se si decide di utilizzare la distribuzione locale delle librerie ridistribuibili, è consigliabile implementare il proprio metodo di aggiornamento automatico delle librerie distribuite localmente.  
  
## Collegamento statico  
 È possibile collegare in modo statico una libreria di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] a un'applicazione, ovvero compilarla nell'applicazione in modo da non dover distribuire separatamente i file di libreria di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  È tuttavia consigliabile usare cautela se si decide di adottare questo approccio perché le librerie collegate in modo statico non possono essere aggiornate sul posto.  Se si utilizza il collegamento statico e si desidera aggiornare una libreria collegata, è necessario ricompilare e ridistribuire l'applicazione.  
  
## Risoluzione dei problemi  
 L'ordine di caricamento delle librerie di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] è dipendente dal sistema.  Per diagnosticare problemi relativi al caricatore, utilizzare depends.exe o where.exe.  Per ulteriori informazioni, vedere [Ordine di ricerca delle librerie a collegamento dinamico \(Windows\)](http://msdn.microsoft.com/library/windows/desktop/ms682586.aspx).  
  
## Vedere anche  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)