---
description: "Altre informazioni su: informazioni sulle dipendenze di un'applicazione Visual C++"
title: Informazioni sulle dipendenze di un'applicazione Visual C++
ms.date: 11/04/2016
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
ms.openlocfilehash: ff18d594edf6d35541655075de6f6e951ea42b88
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336569"
---
# <a name="understanding-the-dependencies-of-a-visual-c-application"></a>Informazioni sulle dipendenze di un'applicazione Visual C++

Per trovare la libreria Visual C++ dalla quale dipende un'applicazione, è possibile visualizzare le proprietà del progetto. (In Esplora soluzioni, fare clic con il pulsante destro del mouse sul progetto e scegliere **Proprietà** per aprire la finestra di dialogo **pagine delle proprietà** ). In Windows 8 e versioni precedenti è inoltre possibile utilizzare Dependency Walker (depends.exe), che offre un quadro più completo delle dipendenze. Per le versioni più recenti di Windows, lo strumento [lucasg/dipendenze](https://github.com/lucasg/Dependencies) offre funzionalità simili (si tratta di uno strumento di terze parti non garantito da Microsoft).

Nella finestra di dialogo **Pagine delle proprietà** è possibile esaminare varie pagine in **Proprietà di configurazione** per comprendere le dipendenze. Se, ad esempio, il progetto utilizza le librerie MFC e si sceglie **di utilizzare MFC**, **utilizzare MFC in una DLL condivisa** nella pagina **proprietà di configurazione**, **generale** , l'applicazione in fase di esecuzione dipende da DLL MFC come MFC \<version> . dll. Se l'applicazione non usa MFC, potrebbe dipendere dalla libreria CRT se si imposta **Libreria di runtime** su **DLL di debug multithread (/MDd)** o **DLL multithread (/MD)** nella pagina **Proprietà di configurazione**, **C/C++**, **Generazione codice**.

Utilizzando depends.exe, è possibile esaminare un elenco di DLL collegate all'applicazione in fase di caricamento e un elenco di DLL a caricamento ritardato. Per ottenere un elenco completo di DLL a caricamento dinamico in fase di esecuzione, è possibile utilizzare la funzionalità di profilatura dello strumento depends.exe per testare l'applicazione fino a quando non si è sicuri che tutti i percorsi di codice siano stati esercitati. Al termine della sessione di profilatura, le DLL a caricamento dinamico verranno visualizzate in depends.exe durante l'esecuzione.

Quando si utilizza lo strumento depends.exe, tenere presente che una DLL potrebbe dipendere da un'altra DLL o da una versione specifica di una DLL. È possibile utilizzare depends.exe sia sul computer di sviluppo che su un computer di destinazione. Sul computer di sviluppo, depends.exe segnala le DLL necessarie per il supporto di un'applicazione. Se si verificano problemi nell'eseguire un'applicazione nel computer di destinazione, è possibile copiarvi lo strumento depends.exe e aprire l'applicazione nello strumento per poter determinare se le DLL necessarie sono mancanti o non corrette.

Dopo aver individuato le DLL da cui dipende l'applicazione, è possibile determinare quelle che è necessario ridistribuire con l'applicazione quando viene distribuita in un altro computer. In molti casi non è necessario ridistribuire le DLL di sistema, ma potrebbe essere necessario ridistribuire quelle relative alle librerie Visual C++. Per altre informazioni, vedere [Determinazione delle DLL da ridistribuire](determining-which-dlls-to-redistribute.md).

## <a name="see-also"></a>Vedi anche

[Distribuzione di applicazioni desktop](deploying-native-desktop-applications-visual-cpp.md)
