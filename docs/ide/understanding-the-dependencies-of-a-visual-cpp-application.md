---
title: Informazioni sulle dipendenze di un'applicazione Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- application deployment [C++], dependencies
- Dependency Walker
- dependencies [C++], application deployment and
- deploying applications [C++], dependencies
- DUMPBIN utility
- DLLs [C++], dependencies
- depends.exe
- libraries [C++], application deployment issues
ms.assetid: 62a44c95-c389-4c5f-82fd-07d7ef09dbf9
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 94e1978c5c0188410cf8d6d6bfdfe08d9af620e0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="understanding-the-dependencies-of-a-visual-c-application"></a>Informazioni sulle dipendenze di un'applicazione Visual C++
Per determinare le librerie di Visual C++ dipende da un'applicazione, è possibile visualizzare le proprietà del progetto. (In Esplora soluzioni fare doppio clic sul progetto e scegliere **proprietà** per aprire la **pagine delle proprietà** la finestra di dialogo.) È anche possibile utilizzare lo strumento Dependency Walker (depends.exe) che offre un quadro più completo delle dipendenze.  
  
 Nel **pagine delle proprietà** nella finestra di dialogo è possibile esaminare varie pagine in **le proprietà di configurazione** per comprendere le dipendenze. Ad esempio, se il progetto utilizza le librerie MFC e si sceglie **uso di MFC**, **Usa MFC in una DLL condivisa** sul **le proprietà di configurazione**, **generali**  pagina, l'applicazione in fase di esecuzione dipende dalla DLL MFC, ad esempio mfc\<versione >. dll. Se l'applicazione non utilizza MFC, può dipendere dalla libreria CRT se si sceglie un **libreria di Runtime** valore **DLL di Debug multithread (o /MDd)** o **DLL multithread (/ MD)**sul **le proprietà di configurazione**, **C/C++**, **la generazione di codice** pagina.  
  
 Un modo più completo per determinare da quali DLL dipende l'applicazione consiste nell'utilizzare lo strumento Dependency Walker (depends.exe) per aprire l'applicazione. È possibile scaricare lo strumento di [Dependency Walker](http://go.microsoft.com/fwlink/p/?LinkId=132640) sito web.  
  
 Utilizzando depends.exe, è possibile esaminare un elenco di DLL collegate all'applicazione in fase di caricamento e un elenco di DLL a caricamento ritardato. Per ottenere un elenco completo di DLL a caricamento dinamico in fase di esecuzione, è possibile utilizzare la funzionalità di profilatura dello strumento depends.exe per testare l'applicazione fino a quando non si è sicuri che tutti i percorsi di codice siano stati esercitati. Al termine della sessione di profilatura, le DLL a caricamento dinamico verranno visualizzate in depends.exe durante l'esecuzione.  
  
 Quando si utilizza lo strumento depends.exe, tenere presente che una DLL potrebbe dipendere da un'altra DLL o da una versione specifica di una DLL. È possibile utilizzare depends.exe sia sul computer di sviluppo che su un computer di destinazione. Sul computer di sviluppo, depends.exe segnala le DLL necessarie per il supporto di un'applicazione. Se si verificano problemi nell'eseguire un'applicazione nel computer di destinazione, è possibile copiarvi lo strumento depends.exe e aprire l'applicazione nello strumento per poter determinare se le DLL necessarie sono mancanti o non corrette.  
  
 Dopo aver individuato le DLL da cui dipende l'applicazione, è possibile determinare quelle che è necessario ridistribuire con l'applicazione quando viene distribuita in un altro computer. Nella maggior parte dei casi, non è necessario ridistribuire le DLL di sistema, ma potrebbe essere necessario ridistribuire le DLL relative alle librerie di Visual C++. Per ulteriori informazioni, vedere [determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)