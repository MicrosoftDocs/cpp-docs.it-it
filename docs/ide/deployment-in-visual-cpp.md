---
title: Distribuzione in Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 9/21/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- deploying applications [C++]
- application deployment [C++]
ms.assetid: d4b4ffc0-d2bd-4e4a-84a6-62f1c26f6a09
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: eda9c4a1a173087688c1fd3182845d6517f27ba6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deployment-in-visual-c"></a>Distribuzione in Visual C++

Installazione dell'applicazione in un computer diverso dal computer di sviluppo è noto come *distribuzione*. Quando si distribuisce un'applicazione Visual C++ in un altro computer, è necessario installare l'applicazione e i file di libreria che dipende. Visual Studio sono disponibili tre modi distribuire le librerie di Visual C++ insieme all'applicazione: *distribuzione centrale*, *distribuzione locale*, e *collegamento statico*. Distribuzione centrale inserisce i file di libreria nella directory di Windows, in cui il servizio Windows Update aggiornarle automaticamente. Distribuzione locale i file di libreria vengono inseriti nella stessa directory dell'applicazione. È necessario ridistribuire eventuali librerie distribuite localmente per aggiornarli. Collegamento statico associa il codice di libreria nell'applicazione. È necessario ricompilare e ridistribuire l'applicazione possa sfruttare i vantaggi di tutti gli aggiornamenti alle librerie, quando si usa il collegamento statico.

## <a name="central-deployment"></a>Distribuzione centrale

Nella distribuzione centrale, il file DLL della libreria vengono installato nella cartella Windows\System32, o per i file delle librerie a 32 bit su x64 sistemi, la directory Windows\SysWow64. Microsoft aggiorna automaticamente le librerie distribuite centralmente. Per le librerie di Visual C++ che sono distribuite localmente o collegate staticamente, è necessario fornire gli aggiornamenti.

Per distribuire centralmente le librerie di Visual C++, è possibile utilizzare una di queste due origini per i file per l'installazione:

- *Pacchetto ridistribuibile* file, che possono contengono tutte le librerie di Visual C++ redistributable in formato compresso autonomi eseguibili da riga di comando, o

- *I modelli unione ridistribuibili* (file MSM), che è possibile utilizzare per distribuire librerie specifiche e includere nel file di Windows Installer (MSI) dell'applicazione.

Un file di pacchetto ridistribuibile consente di installare tutte le librerie di Visual C++ per una particolare architettura di sistema. Ad esempio, se l'applicazione viene compilato per x64, è possibile utilizzare il pacchetto ridistribuibile vcredist_x64.exe per installare tutte le librerie di Visual C++ che utilizza l'applicazione. È possibile eseguire il programma di installazione dell'applicazione per eseguire il pacchetto ridistribuibile come prerequisito prima di installare l'applicazione.

Un modulo di tipo merge consente l'inclusione della logica di installazione per una libreria di Visual C++ specifica in un file di programma di installazione dell'applicazione di Windows Installer. È possibile includere i moduli unione come numero indefinito richieste dall'applicazione. Utilizzare i modelli unione quando è necessario per ridurre al minimo le dimensioni dei file binari di distribuzione.

Poiché la distribuzione centrale tramite moduli unione o un pacchetto ridistribuibile consente a Windows Update aggiornare automaticamente le librerie Visual C++, è consigliabile utilizzare la libreria DLL dell'applicazione anziché le librerie statiche e utilizzare centrale distribuzione anziché la distribuzione locale.

## <a name="local-deployment"></a>Distribuzione locale

Nella distribuzione locale i file di libreria vengono installati nella cartella dell'applicazione insieme al file eseguibile. Versioni diverse di librerie ridistribuibili di Visual C++ possono essere installate nella stessa cartella poiché il nome del file di ogni versione include il numero di versione. Ad esempio, la versione 12 della libreria di runtime C++ è msvcp120.dll e la versione 14 è msvcp140.dll.

Poiché Microsoft non è automaticamente localmente aggiornamento distribuito librerie di Visual C++, non è consigliabile la distribuzione locale di queste librerie. Se si decide di utilizzare la distribuzione locale delle librerie ridistribuibili, è consigliabile implementare il proprio metodo di aggiornamento automatico delle librerie distribuite localmente.

## <a name="static-linking"></a>Collegamento statico

Oltre alle librerie a collegamento dinamico, Visual Studio fornisce la maggior parte delle raccolte come librerie statiche. In modo statico, è possibile collegare una libreria statica per l'applicazione, vale a dire, il codice oggetto della libreria di collegamento direttamente nell'applicazione. Verrà creato un singolo binario senza una dipendenza DLL, in modo che non è necessario distribuire separatamente i file della libreria di Visual C++. Tuttavia, non è consigliabile questo approccio perché librerie collegate in modo statico non possono essere aggiornate sul posto. Se si utilizza il collegamento statico e si desidera aggiornare una libreria collegata, è necessario ricompilare e ridistribuire l'applicazione.

## <a name="troubleshooting-deployment-issues"></a>Risoluzione dei problemi di distribuzione

L'ordine di caricamento delle librerie di Visual C++ è dipendente dal sistema. Per diagnosticare problemi relativi al caricatore, utilizzare depends.exe o where.exe. Per ulteriori informazioni, vedere [ordine di ricerca della libreria di collegamento dinamico (Windows)](http://msdn.microsoft.com/library/windows/desktop/ms682586.aspx).

## <a name="see-also"></a>Vedere anche

[Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)