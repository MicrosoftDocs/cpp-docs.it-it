---
title: "Informazioni sulle dipendenze di un&#39;applicazione Visual C++ | Microsoft Docs"
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
  - "distribuzione di applicazioni [C++], dipendenze"
  - "dipendenze [C++], distribuzione di applicazioni"
  - "Dependency Walker"
  - "depends.exe"
  - "distribuzione di applicazioni [C++], dipendenze"
  - "DLL [C++], dipendenze"
  - "DUMPBIN (utilità)"
  - "librerie [C++], problemi relativi alla distribuzione di applicazioni"
ms.assetid: 62a44c95-c389-4c5f-82fd-07d7ef09dbf9
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Informazioni sulle dipendenze di un&#39;applicazione Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per determinare da quale libreria [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] dipende un'applicazione, è possibile visualizzare le proprietà del progetto.  In Esplora soluzioni, fare clic con il pulsante destro del mouse sul progetto e scegliere **Proprietà** per aprire la finestra di dialogo **Pagine delle proprietà**. È anche possibile utilizzare lo strumento Dependency Walker \(depends.exe\) che offre un quadro più completo delle dipendenze.  
  
 Nella finestra di dialogo **Pagine delle proprietà** è possibile esaminare varie pagine in **Proprietà di configurazione** per comprendere le dipendenze.  Se, ad esempio, il progetto utilizza le librerie MFC e si sceglie **Uso di MFC**, **Usa MFC in una DLL condivisa** nella pagina **Proprietà di configurazione**, **Generale**, in fase di esecuzione l'applicazione dipenderà dalle DLL MFC come mfc\<version\>.dll.  Se l'applicazione non utilizza MFC, potrebbe dipendere dalla libreria CRT se si imposta **Libreria di runtime** su **DLL di debug multithread \(\/MDd\)** o **DLL multithread \(\/MD\)** nella pagina **Proprietà di configurazione**, **C\/C\+\+**, **Generazione codice**.  
  
 Un modo più completo per determinare da quali DLL dipende l'applicazione consiste nell'utilizzare lo strumento Dependency Walker \(depends.exe\) per aprire l'applicazione.  È possibile scaricare lo strumento dal sito Web [Dependency Walker](http://go.microsoft.com/fwlink/p/?LinkId=132640).  
  
 Utilizzando depends.exe, è possibile esaminare un elenco di DLL collegate all'applicazione in fase di caricamento e un elenco di DLL a caricamento ritardato.  Per ottenere un elenco completo di DLL a caricamento dinamico in fase di esecuzione, è possibile utilizzare la funzionalità di profilatura dello strumento depends.exe per testare l'applicazione fino a quando non si è sicuri che tutti i percorsi di codice siano stati esercitati.  Al termine della sessione di profilatura, le DLL a caricamento dinamico verranno visualizzate in depends.exe durante l'esecuzione.  
  
 Quando si utilizza lo strumento depends.exe, tenere presente che una DLL potrebbe dipendere da un'altra DLL o da una versione specifica di una DLL.  È possibile utilizzare depends.exe sia sul computer di sviluppo che su un computer di destinazione.  Sul computer di sviluppo, depends.exe segnala le DLL necessarie per il supporto di un'applicazione.  Se si verificano problemi nell'eseguire un'applicazione nel computer di destinazione, è possibile copiarvi lo strumento depends.exe e aprire l'applicazione nello strumento per poter determinare se le DLL necessarie sono mancanti o non corrette.  
  
 Dopo aver individuato le DLL da cui dipende l'applicazione, è possibile determinare quelle che è necessario ridistribuire con l'applicazione quando viene distribuita in un altro computer.  In molti casi, non è necessario ridistribuire le DLL di sistema, ma potrebbe essere necessario ridistribuire quelle relative alle librerie [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  Per altre informazioni, vedere [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md).  
  
## Vedere anche  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)