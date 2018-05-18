---
title: Distribuzione di CRT universale | Documenti Microsoft
ms.custom: ''
ms.date: 05/11/2018
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- deploying the CRT [C++]
- application CRT deployment [C++]
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 20006118d4bf27c379b78b84dc8807a4fd6c5e6c
ms.sourcegitcommit: 19a108b4b30e93a9ad5394844c798490cb3e2945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2018
---
# <a name="universal-crt-deployment"></a>Distribuzione di CRT universale

In Visual Studio .NET tramite Visual Studio 2013, ogni versione principale del compilatore C++ e degli strumenti include una versione autonoma di nuovo, della libreria di Microsoft C Runtime (CRT). Queste versioni autonome di CRT sono indipendenti da e a vari livelli, incompatibili tra loro. Ad esempio, la libreria CRT utilizzata da Visual Studio 2012 è stata msvcr110.dll denominata 11, versione e la libreria CRT utilizzata da Visual Studio 2013 è msvcr120.dll denominata 12, versione. A partire da Visual Studio 2015, ciò non è più il caso. Visual Studio 2015 e versioni successive di Visual Studio tutte utilizzano un di Universal CRT.

Universal CRT è un componente del sistema operativo Microsoft Windows. Questa è inclusa come parte del sistema operativo in Windows 10 ed è disponibile per i sistemi operativi precedenti, Windows Vista e Windows 8.1, tramite Windows Update. Inoltre, distribuzione locale di Universal CRT è supportata, con alcune restrizioni.

## <a name="central-deployment"></a>Distribuzione centrale

Il metodo preferito per l'installazione in modo centralizzato Universal CRT consiste nell'utilizzare Microsoft Windows Update. Universal CRT è che un aggiornamento consigliato per tutti i sistemi operativi Microsoft Windows, è supportato per che impostazione predefinita, la maggior parte delle macchine installato come parte del processo di aggiornamento regolare. La versione iniziale di Universal CRT è stata [KB2999226](https://support.microsoft.com/en-us/kb/2999226); è stato effettuato un aggiornamento successivo con varie correzioni di bug in [KB3118401](https://support.microsoft.com/en-us/kb/3118401), e sono state apportate ulteriori aggiornamenti con nuove funzionalità e correzioni di bug ulteriormente. Per gli aggiornamenti più recenti, eseguire una ricerca [support.microsoft.com](https://support.microsoft.com) per Universal C Runtime o Universal CRT.

Non tutti i computer di Microsoft Windows e installare regolarmente gli aggiornamenti mediante l'utilizzo di Windows Update e alcuni potrebbero non venire installati tutti gli aggiornamenti consigliati. Per supportare l'utilizzo di applicazioni compilate utilizzando gli strumenti Visual Studio 2015 e versioni successive C++ competenze su tali macchine, sono disponibili i componenti ridistribuibili Universal CRT per la distribuzione non in linea. Tali componenti ridistribuibili possono essere scaricati da uno dei collegamenti KB riportati sopra. Si noti che i componenti ridistribuibili Universal CRT richiedono che il computer è stato aggiornato al service pack corrente. In tal caso, ad esempio, il componente ridistribuibile per Windows 7 verranno installati solo in Windows 7 SP1, non Windows 7 RTM.

Poiché Universal CRT è una dipendenza fondamentale delle librerie di C++, di Visual C++ redistributable (VCRedist) consente di installare una versione di base della libreria CRT universale nei computer che non contengono una versione già installata, sufficiente per soddisfare la libreria di C++ dipendenze. Se l'applicazione dipende da una versione più recente della libreria CRT universale, è necessario installare la versione più recente in modo esplicito. È consigliabile installare prima di installare VCRedist, per evitare potenziali più richiesto riavvio.

## <a name="local-deployment"></a>Distribuzione locale

Distribuzione locale di Universal CRT è supportata, ma non consigliata per motivi di sicurezza sia sulle prestazioni.  Le DLL per la distribuzione locale sono incluse come parte del SDK di Windows, nel Kit di Windows\\10\\Redist\\ucrt\\sottodirectory di DLL, dall'architettura del computer. Le DLL necessarie includono ucrtbase. dll e un set di server d'inoltro APISet DLL denominata api-ms-win -\*. dll. Varia il set di DLL necessari in ogni sistema operativo, pertanto si consiglia di includere tutte le DLL quando si distribuisce in locale.

Esistono due le limitazioni alla distribuzione locale da tenere presenti:

- In Windows 10 Universal CRT nella directory di sistema viene sempre utilizzata, anche se un'applicazione include una copia locale dell'applicazione di Universal CRT. Questo vale anche se la copia locale di Universal CRT è più recente. Infatti, Universal CRT è un componente del sistema operativo core in Windows 10.

- Nelle versioni di Windows precedenti a Windows 8, CRT universale non può essere incluso nel pacchetto in locale un plug-in cui si trova in una directory diversa dalla directory contenente l'eseguibile principale per l'app. Il server d'inoltro APISet DLL sono in grado di risolvere correttamente in questo caso l'ucrtbase. dll. Alcune soluzioni alternative consigliate includono:

  - Universal CRT, il collegamento statico
  - Distribuire centralmente Universal CRT, o
  - Inserire i file Universal CRT nella stessa directory dell'app.

## <a name="deployment-on-microsoft-windows-xp"></a>Distribuzione in Microsoft Windows XP

Visual Studio 2015 e Visual Studio 2017 continuare supportare lo sviluppo del software per l'uso in Microsoft Windows XP. A tale scopo, utilizzare una versione di Universal CRT in Microsoft Windows XP. Il sistema operativo Microsoft Windows XP non è più in modalità di supporto mainstream o estesa, pertanto la distribuzione centrale della libreria CRT universale in Microsoft Windows XP è diversa da altri sistemi operativi.

Quando Visual C++ redistributable è installato in Windows XP, direttamente installarlo Universal CRT e tutte le relative dipendenze nella directory del sistema, senza installare o a seconda di aggiornamenti di Windows. I moduli unione ridistribuibili di Microsoft_VC*versione*_CRT_\*file MSM, eseguire la stessa operazione.

Distribuzione locale di Universal CRT in Windows XP è lo stesso come in altri sistemi operativi supportati.

## <a name="see-also"></a>Vedere anche

- [Distribuzione in Visual C++](deployment-in-visual-cpp.md)
