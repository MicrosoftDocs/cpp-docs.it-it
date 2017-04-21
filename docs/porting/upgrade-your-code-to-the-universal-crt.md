---
title: Aggiornare il codice a Universal CRT | Microsoft Docs
ms.custom: 
ms.date: 1/19/2017
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: eaf34c1b-da98-4058-a059-a10db693a5ce
caps.latest.revision: 1
author: corob-msft
ms.author: corob
manager: ghogen
translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 65776206add29c817f78573379bed959a008f6e6
ms.lasthandoff: 04/01/2017

---
# <a name="upgrade-your-code-to-the-universal-crt"></a>Aggiornare il codice a Universal CRT
In Visual Studio 2015 la libreria di runtime C Microsoft (CRT) è stata sottoposta a refactoring. La libreria C standard, le estensioni POSIX, le funzioni, le macro e le variabili globali specifiche di Microsoft sono state spostate in una nuova libreria, Universal CRT o UCRT. I componenti specifici del compilatore della libreria CRT sono stati spostati in una nuova libreria vcruntime.  
  
La libreria UCRT è ora un componente di Windows ed è inclusa in Windows 10. La libreria UCRT supporta un'ABI stabile basata sulle convenzioni di chiamata C ed è strettamente conforme allo standard ISO C99, con poche eccezioni. Non è più associata a una versione specifica del compilatore. È possibile usare la libreria UCRT in qualsiasi versione di Windows supportata da Visual Studio 2015 o Visual Studio 2017. Il vantaggio è che non è più necessario aggiornare le compilazioni per usare un nuova versione della libreria CRT con ogni aggiornamento di Visual Studio.  
  
Con questo refactoring sono stati modificati i nomi o percorsi di molti file di intestazione CRT, di libreria e ridistribuibili nonché i metodi di distribuzione necessari per il codice. Inoltre, molte funzioni e macro di UCRT sono stati aggiunti o modificati per migliorare la conformità agli standard. Per sfruttare i vantaggi di queste modifiche, è necessario aggiornare il codice esistente e i sistemi di compilazione dei progetti.  
  
## <a name="where-to-find-the-universal-crt-files"></a>Dove trovare i file della libreria Universal CRT
Come componente di Windows, i file e le intestazioni della libreria UCRT ora fanno parte di Windows Software Development Kit (SDK). Quando si installa Visual Studio, vengono installate anche le parti di Windows SDK richieste per l'uso della libreria UCRT. Il programma di installazione di Visual Studio aggiunge i percorsi di intestazioni UCRT, librerie e file DLL ai percorsi predefiniti usati dal sistema di compilazione del progetto di Visual Studio. Quando si aggiornano i progetti di Visual C++, se vengono usate le impostazioni di progetto predefinite, l'IDE individua automaticamente i nuovi percorsi per i file di intestazione e il linker usa automaticamente le nuove librerie UCRT e vcruntime predefinite. Analogamente, se si usa un prompt dei comandi per gli sviluppatori per le compilazioni dalla riga di comando, le variabili di ambiente che contengono i percorsi per intestazioni e librerie vengono aggiornate e funzionano automaticamente.  
  
I file di intestazione della libreria C standard sono ora disponibili in Windows SDK in una cartella di inclusione in una directory specifica della versione dell'SDK. Un percorso tipico per i file di intestazione è nella directory Programmi o Programmi (x86) in Windows Kits\\10\\Include\\_versione-sdk_\\ucrt, dove _versione-sdk_ corrisponde a una versione o un aggiornamento di Windows, ad esempio 10.0.14393.0 per l'aggiornamento dell'anniversario di Windows 10.   
  
Le librerie UCRT statiche e le librerie stub a collegamento dinamico si trovano nella directory Programmi o Programmi (x86) in Windows Kits\\10\\Lib\\_versione-sdk_\\ucrt\\_architettura_, dove _architettura_ è ARM, x86 o X64. Le librerie statiche di debug e della versione finale sono libucrt.lib e libucrtd.lib e le librerie per le DLL UCRT sono ucrt.lib e ucrtd.lib.  
  
Le DLL UCRT di debug e della versione finale si trovano in percorsi separati. Le DLL della versione finale sono ridistribuibili e sono disponibili nella directory Programmi o Programmi (x86) in Windows Kits\\10\\Redist\\ucrt\\DLLs\\_architettura_\. Le librerie UCRT di debug non sono ridistribuibili e sono disponibili nella directory Programmi o Programmi (x86) nella cartella Windows Kits\\10\\bin\\_architettura_\\ucrt.   

La libreria di supporto runtime specifica del compilatore C e C++, **vcruntime**, contiene il codice necessario per supportare l'avvio del programma e funzionalità come la gestione delle eccezioni e gli intrinseci. La libreria e i relativi file di intestazione sono ancora disponibili nella cartella specifica della versione di Microsoft Visual Studio nella directory Programmi o Programmi (x86). In Visual Studio 2017 le intestazioni si trovano in Microsoft Visual Studio\\2017\\_versione_\\VC\\Tools\\MSVC\\_versione-lib_\\include e le librerie di collegamento sono disponibili in Microsoft Visual Studio\\2017\\_versione_\\VC\\Tools\\MSVC\\_versione-lib_\\lib\\_architettura_, dove _versione_ è la versione di Visual Studio installata, _versione-lib_ è la versione delle librerie e _architettura_ è l'architettura del processore. Anche le librerie di collegamento per OneCore e archivio si trovano nella cartella delle librerie. Le versioni di debug e per la versione finale della libreria statica sono libvcruntime.lib e libvcruntimed.lib. Le librerie stub a collegamento dinamico di debug e della versione finale sono rispettivamente vcruntime.lib e vcruntimed.lib.  
  
Quando si aggiornano i progetti Visual C++, se è stata impostata la proprietà **Linker** del progetto **Ignora tutte le librerie predefinite** su **Sì** o si usa l'opzione del linker /NODEFAULTLIB sulla riga di comando, è necessario aggiornare l'elenco delle librerie per includere le nuove librerie di refactoring. Sostituire la libreria CRT precedente, ad esempio libcmt.lib, libcmtd.lib, msvcrt.lib o msvcrtd.lib, con le librerie di refactoring equivalenti. Per informazioni sulle librerie specifiche da usare, vedere [Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md).  
  
## <a name="deployment-and-redistribution-of-the-universal-crt"></a>Distribuzione e ridistribuzione della libreria Universal CRT  
Poiché la libreria UCRT ora è un componente del sistema operativo Microsoft Windows, è inclusa come parte del sistema operativo in Windows 10 ed è disponibile in Windows Update per i sistemi operativi precedenti, da Windows Vista a Windows 8.1. Una versione ridistribuibile è disponibile per Windows XP. Come componente del sistema operativo, gli aggiornamenti e la manutenzione della libreria UCRT vengono gestiti da Windows Update indipendentemente dalle versioni del compilatore di Visual Studio e Visual C++. Poiché la libreria UCRT è un componente di Windows, per migliorare la sicurezza e semplificare gli aggiornamenti, riducendo la dimensione dell'immagine, è consigliabile usare una distribuzione centrale della libreria UCRT per l'applicazione.  
  
È possibile usare la libreria UCRT in qualsiasi versione di Windows supportata da Visual Studio 2015 o Visual Studio 2017. La libreria può essere ridistribuita usando un pacchetto vcredist per le versioni supportate di Windows diverse da Windows 10. I pacchetti vcredist includono i componenti UCRT e li installano automaticamente nei sistemi operativi Windows su cui non sono installati per impostazione predefinita. Per altre informazioni, vedere [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md).  
  
La distribuzione app-local della libreria UCRT è supportata, anche se non è consigliabile per motivi di prestazioni e di sicurezza. Le DLL per la distribuzione app-local e sono incluse come parte di Windows SDK, nella sottodirectory **redist**. Le DLL necessarie includono ucrtbase.dll e un set di DLL di **inoltro APISet** denominato api-ms-win-_subset_.dll. Il set di DLL necessarie in ogni sistema operativo varia, quindi si consiglia di includere tutte le DLL quando si usa la distribuzione app-local. Per altri dettagli e suggerimenti relativi alla distribuzione app-local, vedere [Distribuzione in Visual C++](../ide/deployment-in-visual-cpp.md).  
  
## <a name="changes-to-the-universal-crt-functions-and-macros"></a>Modifiche a funzioni e macro di Universal CRT  
Molte funzioni sono state aggiunte o aggiornate nella libreria UCRT per migliorare la conformità ISO C99 e risolvere i problemi relativi alla qualità e alla sicurezza del codice. In alcuni casi è stato necessario apportare modifiche significative alla libreria. Se il codice viene compilato correttamente quando si usa una versione precedente della libreria CRT ma si interrompe se viene compilato con UCRT, è necessario modificare il codice per poter usufruire di funzionalità e aggiornamenti. Per un elenco dettagliato delle modifiche e degli aggiornamenti importanti della libreria CRT rilevati nella libreria Universal CRT, vedere la sezione [Libreria di runtime C (CRT)](visual-cpp-change-history-2003-2015.md#BK_CRT) della cronologia delle modifiche di Visual C++. La sezione contiene un elenco di intestazioni e funzioni interessate che è possibile usare per identificare le modifiche necessarie nel codice.  
  
## <a name="see-also"></a>Vedere anche  
[Guida al porting e aggiornamento in Visual C++](visual-cpp-porting-and-upgrading-guide.md)  
[Panoramica dei potenziali problemi di aggiornamento (Visual C++)](overview-of-potential-upgrade-issues-visual-cpp.md)  
[Aggiornamento di progetti da versioni precedenti di Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)  
[Cronologia delle modifiche di Visual C++ dal 2003 al 2015](visual-cpp-change-history-2003-2015.md)  
[Miglioramenti della conformità di C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md)  

