---
title: Distribuzione di Universal CRT
ms.date: 05/11/2018
helpviewer_keywords:
- deploying the CRT [C++]
- application CRT deployment [C++]
ms.openlocfilehash: 1f6e685cca65c4b31ac2e6147341c4b5a3fe8228
ms.sourcegitcommit: 6cf0c67acce633b07ff31b56cebd5de3218fd733
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/24/2019
ms.locfileid: "67344463"
---
# <a name="universal-crt-deployment"></a>Distribuzione di Universal CRT

Da Visual Studio .NET a Visual Studio 2013, ogni versione principale del compilatore e degli strumenti C++ includeva una nuova versione autonoma della libreria di runtime C (CRT) di Microsoft. Queste versioni autonome della libreria CRT erano indipendenti l'una dall'altra e, a vari livelli, erano incompatibili tra loro. La libreria CRT, ad esempio, usata da Visual Studio 2012, corrispondeva alla versione 11, denominata msvcr110.dll, e la libreria CRT usata da Visual Studio 2013 corrispondeva alla versione 12, denominata msvcr120.dll. Non è partire da Visual Studio 2015, più il case. Visual Studio 2015 e le versioni successive di Visual Studio usano tutte una sola libreria Universal CRT.

La libreria Universal CRT è un componente del sistema operativo Microsoft Windows incluso come parte del sistema operativo in Windows 10. È disponibile per i sistemi operativi precedenti, Windows Vista a Windows 8.1, tramite Windows Update. Distribuzione locale di Universal CRT è supportata, con alcune restrizioni.

## <a name="central-deployment"></a>Distribuzione centrale

Il metodo preferito per l'installazione centrale di Universal CRT consiste nell'uso di Microsoft Windows Update. Universal CRT è un aggiornamento consigliato per tutti i sistemi operativi Microsoft Windows supportati che viene quindi installato per impostazione predefinita dalla maggior parte dei computer nell'ambito del processo di aggiornamento normale. La versione iniziale di Universal CRT è stata [KB2999226](https://support.microsoft.com/kb/2999226). Cui è stato effettuato un aggiornamento successivo con varie correzioni di bug [KB3118401](https://support.microsoft.com/kb/3118401), e sono stati apportati aggiornamenti aggiuntivi con nuove funzionalità e altre correzioni di bug. For aggiornamenti più recenti, cercare Universal C Runtime o Universal CRT, in [support.microsoft.com](https://support.microsoft.com).

Non tutti i computer Microsoft Windows installano regolarmente gli aggiornamenti tramite Windows Update e in alcuni potrebbero non essere installati tutti gli aggiornamenti consigliati. Per supportare l'uso di applicazioni compilate usando Visual Studio 2015 e versioni successive C++ set di strumenti su tali macchine, sono disponibili i file ridistribuibili di Universal CRT per la distribuzione offline. I file ridistribuibili possono essere scaricati da uno dei collegamenti KB riportati sopra. La libreria Universal CRT redistributable è necessario che il computer è stato aggiornato al service pack corrente. Il componente ridistribuibile per Windows 7, ad esempio, può essere installato solo in Windows 7 SP1, non in Windows 7 RTM.

Poiché la libreria Universal CRT è una dipendenza fondamentale del C++ librerie, l'oggetto visivo C++ (VCRedist) redistributable installa la versione iniziale della libreria CRT universale (versione 10.0.10240) nei computer che non contiene già uno installato. Questa versione è sufficiente per soddisfare il C++ dipendenze di libreria. Se l'applicazione dipende da una versione più recente della libreria Universal CRT, è necessario utilizzare Windows Update per l'uso dei computer completamente aggiornati o installare la versione specifica in modo esplicito. È consigliabile installare il Runtime di C universale tramite Windows Update o un file MSU prima di installare VCRedist, per evitare potenziali più richiesto riavvio.

Non tutti i sistemi operativi sono idonei per la più recente Universal C Runtime tramite Windows Update. In Windows 10, la versione distribuita in modo centralizzato corrisponde alla versione del sistema operativo. Per aggiornare il Runtime di C universale, inoltre, è necessario aggiornare il sistema operativo. Per Windows Vista a Windows 8.1, la versione più recente disponibile Universal C Runtime si basa attualmente nella versione inclusa in Windows 10 Anniversary Update, con correzioni aggiuntive (versione 10.0.14393).

## <a name="local-deployment"></a>Distribuzione locale

La distribuzione locale della libreria Universal CRT è supportata ma non consigliata per motivi di prestazioni e di sicurezza. Le DLL per la distribuzione locale sono incluse in Windows SDK, nella subdirectory Windows Kits\\10\\Redist\\ucrt\\DLLs, per architettura. Le DLL necessarie includono ucrtbase.dll e un set di DLL di inoltro APISet denominato api-ms-win-\*.dll. Il set di DLL necessarie in ogni sistema operativo può variare. È consigliabile includere tutte le DLL quando si distribuisce in locale.

Ci sono due limitazioni alla distribuzione locale da tenere presenti:

- In Windows 10, viene sempre usata la libreria Universal CRT nella directory di sistema, anche se una copia di tale libreria è inclusa in una cartella locale dell'applicazione. È vero anche quando la copia locale è più recente, perché la libreria Universal CRT è un componente del sistema operativo core in Windows 10.

- Nelle versioni di Windows precedenti a Windows 8, la libreria Universal CRT non possono essere inserite in locale con un plug-in, se si trova in una directory diversa da quella dell'eseguibile principale dell'app. In questo caso, le DLL di inoltro APISet non sono in grado di risolvere correttamente ucrtbase.dll. Ecco alcune soluzioni alternative consigliate:

  - Collegare la libreria Universal CRT in modo statico
  - Distribuire centralmente la libreria Universal CRT
  - Inserire i file della libreria Universal CRT nella stessa directory dell'app.

## <a name="deployment-on-microsoft-windows-xp"></a>Distribuzione in Microsoft Windows XP

Visual Studio 2015 e Visual Studio 2017 continuano a supportare lo sviluppo di software per Microsoft Windows XP. Per supportare questo sviluppo, usare una versione della libreria Universal CRT in Microsoft Windows XP. Il sistema operativo Microsoft Windows XP non gode più del supporto Mainstream né del supporto Extended. La distribuzione centrale della libreria Universal CRT in Microsoft Windows XP è pertanto diversa da altri sistemi operativi.

Quando l'oggetto visivo C++ redistributable è installato in Windows XP, vengono installati direttamente la libreria Universal CRT e tutte le relative dipendenze nella directory di sistema. Non installare o dipendono da qualsiasi aggiornamento di Windows. I modelli unione ridistribuibili, i file Microsoft_VC*versione*_CRT_\*.msm, si comportano allo stesso modo.

La distribuzione locale di Universal CRT in Windows XP è la stessa di altri sistemi operativi supportati.

## <a name="see-also"></a>Vedere anche

- [Distribuzione in Visual C++](deployment-in-visual-cpp.md)
