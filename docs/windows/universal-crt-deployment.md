---
title: Distribuzione di Universal CRT
description: Informazioni su come, quando e dove distribuire la libreria Universal CRT per l'app.
ms.date: 10/23/2020
helpviewer_keywords:
- deploying the CRT [C++]
- application CRT deployment [C++]
ms.openlocfilehash: 50ab23f3b0276b058685e9c9ef6634caf5a96186
ms.sourcegitcommit: bf54b407169900bb668c85a67b31dbc0f069fe65
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2020
ms.locfileid: "92497191"
---
# <a name="universal-crt-deployment"></a>Distribuzione di Universal CRT

Da Visual Studio .NET a Visual Studio 2013, ogni versione principale del compilatore e degli strumenti C++ includeva una nuova versione autonoma della libreria di runtime C (CRT) di Microsoft. Queste versioni autonome della libreria CRT erano indipendenti l'una dall'altra e, a vari livelli, erano incompatibili tra loro. La libreria CRT, ad esempio, usata da Visual Studio 2012, corrispondeva alla versione 11, denominata msvcr110.dll, e la libreria CRT usata da Visual Studio 2013 corrispondeva alla versione 12, denominata msvcr120.dll. A partire da Visual Studio 2015, non è più così. Visual Studio 2015 e le versioni successive di Visual Studio usano tutte una sola libreria Universal CRT.

Universal CRT (UCRT) è un componente del sistema operativo Microsoft Windows. È incluso come parte del sistema operativo in Windows 10 e Windows Server 2016 o versioni successive. Il UCRT è disponibile usando Windows Update nei sistemi operativi precedenti che sono ancora in supporto esteso. La distribuzione locale di Universal CRT è supportata con alcune restrizioni.

## <a name="central-deployment"></a>Distribuzione centrale

Il metodo preferito per l'installazione centrale di Universal CRT consiste nell'uso di Microsoft Windows Update. Universal CRT è un aggiornamento consigliato per tutti i sistemi operativi Microsoft Windows supportati che viene quindi installato per impostazione predefinita dalla maggior parte dei computer nell'ambito del processo di aggiornamento normale. La versione iniziale di Universal CRT era [KB2999226](https://support.microsoft.com/kb/2999226). In [KB3118401](https://support.microsoft.com/kb/3118401)è stato eseguito un aggiornamento successivo con diverse correzioni di bug e sono stati aggiunti altri aggiornamenti con ulteriori correzioni di bug e nuove funzionalità. For aggiornamenti più recenti, cercare Universal C Runtime o Universal CRT, in [support.microsoft.com](https://support.microsoft.com).

Non tutti i computer Microsoft Windows installano regolarmente gli aggiornamenti tramite Windows Update e in alcuni potrebbero non essere installati tutti gli aggiornamenti consigliati. Per supportare l'uso di applicazioni compilate con i set di strumenti C++ di Visual Studio 2015 e versioni successive in tali computer, sono disponibili file ridistribuibili Universal CRT per la distribuzione offline. I file ridistribuibili possono essere scaricati da uno dei collegamenti KB precedenti. Universal CRT Redistributable richiede che il computer sia stato aggiornato alla Service Pack corrente. Il componente ridistribuibile per Windows 7, ad esempio, può essere installato solo in Windows 7 SP1, non in Windows 7 RTM.

Poiché la libreria CRT universale è una dipendenza fondamentale delle librerie C++, il Visual C++ Redistributable (VCRedist) installa la versione iniziale di Universal CRT (Version 10.0.10240) nei computer in cui non è già installato. Questa versione è sufficiente per soddisfare le dipendenze della libreria C++. Se l'applicazione dipende da una versione più recente di Universal CRT, è necessario usare Windows Update per portare il computer completamente aggiornato oppure installare la versione in modo esplicito. È preferibile installare il runtime di C universale tramite Windows Update o un MSU prima di installare VCRedist, per evitare potenziali riavvii più richiesti.

Non tutti i sistemi operativi sono idonei per il runtime di C universale più recente tramite Windows Update. In Windows 10 la versione distribuita a livello centrale corrisponde alla versione del sistema operativo. Per aggiornare ulteriormente il runtime di C universale, è necessario aggiornare il sistema operativo. Per Windows Vista tramite Windows 8.1, il runtime C universale disponibile più recente si basa attualmente sulla versione inclusa nell'aggiornamento dell'anniversario di Windows 10, con correzioni aggiuntive (versione 10.0.14393).

## <a name="local-deployment"></a>Distribuzione locale

La distribuzione locale della libreria Universal CRT è supportata ma non consigliata per motivi di prestazioni e di sicurezza. Le DLL per la distribuzione locale sono incluse in Windows SDK, nella subdirectory Windows Kits\\10\\Redist\\ucrt\\DLLs, per architettura. Le DLL necessarie includono ucrtbase.dll e un set di DLL di inoltro APISet denominato api-ms-win-\*.dll. Il set di dll richieste in ogni sistema operativo varia. È consigliabile includere tutte le dll quando si esegue la distribuzione in locale.

Ci sono due limitazioni alla distribuzione locale da tenere presenti:

- In Windows 10, viene sempre usata la libreria Universal CRT nella directory di sistema, anche se una copia di tale libreria è inclusa in una cartella locale dell'applicazione. È vero anche quando la copia locale è più recente, perché la libreria Universal CRT è un componente del sistema operativo di base in Windows 10.

- Nelle versioni di Windows precedenti a Windows 8, non è possibile creare un pacchetto di Universal CRT localmente con un plug-in, se si trova in una directory diversa dalla directory del file eseguibile dell'app principale. In questo caso, le DLL di inoltro APISet non sono in grado di risolvere correttamente ucrtbase.dll. Ecco alcune soluzioni alternative consigliate:

  - Collegare la libreria Universal CRT in modo statico
  - Distribuire centralmente la libreria Universal CRT
  - Inserire i file della libreria Universal CRT nella stessa directory dell'app.

## <a name="deployment-on-microsoft-windows-xp"></a>Distribuzione in Microsoft Windows XP

Visual Studio 2015 e Visual Studio 2017 continuano a supportare lo sviluppo di software per Microsoft Windows XP. Per supportare questo sviluppo, una versione di Universal CRT funziona in Microsoft Windows XP. Il sistema operativo Microsoft Windows XP non gode più del supporto Mainstream né del supporto Extended. La distribuzione centrale della libreria Universal CRT in Microsoft Windows XP è pertanto diversa da altri sistemi operativi.

Quando il Visual C++ ridistribuibile viene installato in Windows XP, installa direttamente la libreria Universal CRT e tutte le relative dipendenze nella directory di sistema. Non viene installato o dipende da alcuna Windows Update. I modelli unione ridistribuibili, i file Microsoft_VC*versione*_CRT_\*.msm, si comportano allo stesso modo.

La distribuzione locale di Universal CRT in Windows XP è la stessa di altri sistemi operativi supportati.

## <a name="see-also"></a>Vedi anche

- [Distribuzione in Visual C++](deployment-in-visual-cpp.md)
