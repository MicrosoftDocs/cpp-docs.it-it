---
title: Distribuzione in Visual C++ | Microsoft Docs
ms.custom: ''
ms.date: 05/11/2018
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- deploying applications [C++]
- application deployment [C++]
ms.assetid: d4b4ffc0-d2bd-4e4a-84a6-62f1c26f6a09
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1d7e82a384e3b2e8ca446843c91984e78754d6cc
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43204060"
---
# <a name="deployment-in-visual-c"></a>Distribuzione in Visual C++

L'installazione dell'applicazione in un computer diverso dal computer di sviluppo è nota con il nome di *distribuzione*. Quando si distribuisce un'applicazione Visual C++ in un altro computer, è necessario installare sia l'applicazione che gli eventuali file di libreria da cui dipende. In Visual Studio sono disponibili tre modi per distribuire le librerie di Visual C++ insieme all'applicazione: *distribuzione centrale*, *distribuzione locale* e *collegamento statico*. Con la distribuzione centrale i file di libreria vengono inseriti nella directory di Windows, dove possono essere aggiornati automaticamente dal servizio Windows Update. Con la distribuzione locale i file di libreria vengono inseriti nella stessa directory dell'applicazione. Per aggiornarli, è necessario ridistribuire eventuali librerie distribuite localmente. Con il collegamento statico il codice di libreria viene associato all'applicazione. Quando si usa il collegamento statico, per sfruttare i vantaggi degli aggiornamenti alle librerie è necessario ricompilare e ridistribuire l'applicazione.

In Visual Studio 2015, la libreria di runtime C Microsoft è stata sottoposta a refactoring in componenti di libreria locali specifici della versione e in una nuova libreria Universal C Runtime che fa ora parte di Windows. Per informazioni dettagliate sulla distribuzione della libreria Universal CRT, vedere [Distribuzione di Universal CRT](universal-crt-deployment.md).

## <a name="central-deployment"></a>Distribuzione centrale

Nella distribuzione centrale, i file DLL di libreria vengono installati nella directory Windows\System32 o, per i file di librerie a 32 bit in x64 sistemi, nella directory Windows\SysWow64. Microsoft aggiorna automaticamente le librerie distribuite centralmente. Per le librerie di Visual C++ distribuite localmente o collegate in modo statico, è necessario fornire gli aggiornamenti.

Per distribuire centralmente le librerie di Visual C++, è possibile usare una di queste due origini per i file da installare:

- File di *pacchetto ridistribuibile*, ovvero eseguibili da riga di comando autonomi che contengono tutte le librerie ridistribuibili di Visual C++ in forma compressa, oppure

- *Modelli unione ridistribuibili* (file con estensione msm), che è possibile usare per distribuire librerie specifiche e includere nel file di Windows Installer (con estensione msi) dell'applicazione.

Un file del pacchetto ridistribuibile consente di installare tutte le librerie di Visual C++ per un'architettura di sistema specifica. Se ad esempio l'applicazione è compilata per un'architettura x64, è possibile usare il pacchetto ridistribuibile vcredist_x64.exe per installare tutte le librerie di Visual C++ usate dall'applicazione. È possibile programmare il programma di installazione dell'applicazione in modo che esegua il pacchetto ridistribuibile come prerequisito prima di installare l'applicazione.

Un modello merge consente di includere la logica di installazione per una libreria di Visual C++ specifica in un file di installazione Windows Installer. È possibile includere un qualsiasi numero (grande o piccolo) di modelli merge, a seconda delle esigenze dell'applicazione. Usare modelli unione quando è necessario ridurre al minimo le dimensioni dei file binari della distribuzione.

Poiché la distribuzione centrale tramite un pacchetto ridistribuibile o modelli unione consente a Windows Update di aggiornare automaticamente le librerie di Visual C++, è consigliabile usare nell'applicazione DLL di libreria anziché librerie statiche e usare la distribuzione centrale anziché la distribuzione locale.

## <a name="local-deployment"></a>Distribuzione locale

Nella distribuzione locale, i file di libreria vengono installati nella cartella dell'applicazione insieme al file eseguibile. È possibile installare nella stessa cartella versioni diverse di librerie ridistribuibili di Visual C++, perché il nome file di ogni versione include il numero di versione corrispondente. La versione 12 della libreria di runtime C++, ad esempio, è msvcp120.dll e la versione 14 è msvcp140.dll.

Una libreria può essere distribuita in più DLL aggiuntive, note come *librerie dot.dll*. Alcune funzionalità della libreria standard rilasciata in Visual Studio 2017 versione 15.6, ad esempio, sono state aggiunte in msvcp140_1.dll, per mantenere la compatibilità ABI di msvcp140.dll. Se si usa Visual Studio 2017 versione 15.6 (set di strumenti 14.13) o un set di strumenti successivo di Visual Studio 2017, può essere necessario distribuire localmente le librerie dot.dll, oltre alla libreria principale. Quando l'ABI cambia, le librerie dot.dll separate vengono quindi inserite nella versione principale successiva della libreria di base.

Poiché Microsoft non può aggiornare automaticamente le librerie di Visual C++ distribuite localmente, la distribuzione locale di queste librerie non è consigliabile. Se si decide di utilizzare la distribuzione locale delle librerie ridistribuibili, è consigliabile implementare il proprio metodo di aggiornamento automatico delle librerie distribuite localmente.

## <a name="static-linking"></a>Collegamento statico

Oltre alle librerie a collegamento dinamico, Visual Studio fornisce la maggior parte delle proprie librerie sotto forma di librerie statiche. È possibile collegare una libreria statica in modo statico all'applicazione, in altre parole, collegare il codice oggetto della libreria direttamente nell'applicazione. In questo modo viene creato un file binario singolo senza dipendenze da DLL. Non è quindi necessario distribuire i file delle librerie di Visual C++ separatamente. Questo approccio non è tuttavia consigliabile, perché le librerie collegate in modo statico non possono essere aggiornate sul posto. Se si utilizza il collegamento statico e si desidera aggiornare una libreria collegata, è necessario ricompilare e ridistribuire l'applicazione.

## <a name="troubleshooting-deployment-issues"></a>Risoluzione dei problemi relativi alla distribuzione

L'ordine di caricamento delle librerie di Visual C++ è dipendente dal sistema. Per diagnosticare problemi relativi al caricatore, utilizzare depends.exe o where.exe. Per altre informazioni, vedere [Dynamic-Link Library Search Order (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms682586.aspx) Ordine di ricerca delle librerie a collegamento dinamico (Windows).

## <a name="see-also"></a>Vedere anche

- [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)
- [Distribuzione Universal CRT](universal-crt-deployment.md)
