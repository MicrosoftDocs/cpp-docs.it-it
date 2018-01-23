---
title: Installare un mancante Microsoft Visual C++ Runtime DLL | Documenti Microsoft
description: Come trovare e installare mancante DLL di runtime di Visual C++.
ms.date: 08/30/2017
ms.topic: article
ms.prod: visual-cpp
dev_langs: C++
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b9037a50740c55d7dd997fd86744459b6fb96125
ms.sourcegitcommit: 6f40bba1772a09ff0e3843d5f70b553e1a15ab50
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2018
---
# <a name="install-a-missing-microsoft-visual-c-runtime-dll"></a>Installare un mancante Microsoft Visual C++ Runtime DLL

Programmi scritti utilizzando Microsoft Visual C++ spesso richiedono alcune ulteriori file di libreria di runtime di Visual C++ o dll, per l'esecuzione. Runtime di queste DLL sono disponibili in un *Redistributable Package*, un programma di installazione file di libreria, per ogni versione di Visual C++. Il pacchetto ridistribuibile richiesto da qualsiasi programma deve essere incluso dal programma di installazione. In caso contrario, in alcuni casi è possibile installare manualmente un pacchetto ridistribuibile e correggere un errore di sistema quando si esegue il programma. 

È possibile indicare che un programma manca un DLL di runtime di Visual C++, se si verifica un errore di sistema quando si avvia il programma per informare che è ad esempio "Impossibile avviare il programma perché VCRuntime140.dll risultano mancanti dal computer in uso". Spesso, questo problema può essere risolto, il programma di disinstallazione, quindi installarlo nuovamente. È consigliabile tenta in primo luogo, questo passaggio prima di eventuali altri possibili correzioni.

In alcuni casi, il pacchetto ridistribuibile installato da un programma non è aggiornato. Microsoft rende le versioni aggiornate di DLL di runtime disponibili a volte, per correggere i bug e problemi di sicurezza. Per mantenere il computer che esegue in modo sicuro e correttamente, è consigliabile utilizzare l'aggiornamento più recente per le DLL di runtime. Verificare se è disponibile per il programma, che può fornire questo aggiornamento è un programma di installazione aggiornato. Se è presente, utilizzare il programma di installazione aggiornato per reinstallare il programma.

Se reinstallare il programma non rende l'errore di sistema chiusa, quindi il programma di installazione potrebbe essere interrotto o danneggiato oppure la DLL di runtime nel computer in uso potrebbe essere danneggiata. Provare a scaricare una nuova copia del programma di installazione per il programma e utilizzarlo per reinstallare prima. Se non è corretto o non è disponibile un programma di installazione, potrebbe essere utile per verificare le installazioni di Microsoft Visual C++ Redistributable nel computer in uso. 

Questa tabella mostra un elenco delle DLL a cui sono inclusi in uno o più pacchetti ridistribuibili, insieme a collegamenti per scaricare una copia del pacchetto ridistribuibile. Prima di scaricare una nuova copia del pacchetto ridistribuibile, verrà visualizzato se è possibile ripristinare un'installazione esistente.

|DLL mancante  |Pacchetto ridistribuibile  |
|---------|---------|
|atl80.dll<br />msvcm80.dll<br />msvcp80.dll<br />msvcr80.dll<br />mfc80.dll<br />mfc80u.dll<br />mfcm80.dll<br />mfcm80u.dll|[Microsoft Visual C++ 2005 Redistributable (x86)](https://www.microsoft.com/en-us/download/details.aspx?id=5638)<br />[Microsoft Visual C++ 2005 Redistributable Package (x64)](https://www.microsoft.com/en-us/download/details.aspx?id=18471)<br />[Aggiornamento della protezione di Microsoft Visual C++ 2005 Service Pack 1 Redistributable Package MFC](https://www.microsoft.com/en-us/download/details.aspx?id=26347)|
|atl90.dll<br />msvcr90.dll<br />msvcm90.dll<br />msvcp90.dll<br />mfc90.dll<br />mfc90u.dll<br />mfcmifc80.dll<br />mfcm90.dll<br />mfcm90u.dll|[Microsoft Visual C++ 2008 Redistributable - x86](https://www.microsoft.com/en-us/download/details.aspx?id=5582)<br />[Microsoft Visual C++ 2008 Redistributable - x64](https://www.microsoft.com/en-us/download/details.aspx?id=2092)<br />[Aggiornamento della protezione di Microsoft Visual C++ 2008 Service Pack 1 Redistributable Package MFC](https://www.microsoft.com/en-us/download/details.aspx?id=26368)|
|atl100.dll<br />msvcr100.dll<br />msvcp100.dll<br />msdia71.dll<br />vcomp100.dll<br />mfc100.dll<br />mfc100u.dll<br />mfcmifc80.dll<br />mfcm100.dll<br />mfcm100u.dll|[Microsoft Visual C++ 2010 x86 ridistribuibili](https://www.microsoft.com/en-us/download/details.aspx?id=8328)<br />[Microsoft Visual C++ 2010 x64 ridistribuibili](https://www.microsoft.com/en-us/download/details.aspx?id=13523)<br />[Aggiornamento della protezione di Microsoft Visual C++ 2010 Service Pack 1 Redistributable Package MFC](https://www.microsoft.com/en-us/download/details.aspx?id=26999)|
|atl110.dll<br />msvcr110.dll<br />msvcp110.dll<br />mfc110.dll<br />mfc110u.dll<br />mfcmifc80.dll<br />mfcm110.dll<br />mfcm110u.dll<br />concrt110.dll<br />vccorlib110.dll<br />vcamp110.dll<br />vcomp110.dll|[Microsoft Visual C++ 2012 Redistributable (per Visual Studio 2012 Update 4)](https://www.microsoft.com/en-us/download/details.aspx?id=30679)|
|msvcr120.dll<br />msvcp120.dll<br />mfc120.dll<br />mfc120u.dll<br />mfcmifc80.dll<br />mfcm120.dll<br />mfcm120u.dll<br />concrt120.dll<br />vccorlib120.dll<br />vcamp120.dll<br />vcomp120.dll|[Microsoft Visual C++ 2013 Redistributable (collegamenti ai download singoli)](https://support.microsoft.com/en-us/help/3179560/update-for-visual-c-2013-and-visual-c-redistributable-package)<br />[Libreria MFC multibyte per Visual Studio 2013](https://www.microsoft.com/en-us/download/details.aspx?id=40770)<br />[Runtime di Visual C++ 2013 per le app trasferite localmente Windows 8.1 (con estensione zip di download)](http://download.microsoft.com/download/5/F/0/5F0F8404-9329-44A9-8176-ED6F7F746F25/VCLibs_Redist_Packages.zip)|
|vcruntime140.dll<br />vcruntime140_app.dll<br />msvcp140.dll<br />mfc140.dll<br />mfc140u.dll<br />mfcmifc80.dll<br />mfcm140.dll<br />mfcm140u.dll<br />concrt140.dll<br />vccorlib140.dll<br />vcamp140.dll<br />vcomp140.dll|[Microsoft Visual C++ 2017 (x86) ridistribuibili](https://go.microsoft.com/fwlink/?LinkId=746571)<br />[Microsoft Visual C++ 2017 (x64) ridistribuibili](https://go.microsoft.com/fwlink/?LinkId=746572)|
|msvcr100_clr0400.dll<br />msvcr110_clr0400.dll<br />msvcr120_clr0400.dll|[Download di .NET Framework](https://www.microsoft.com/net/download/framework)|

### <a name="to-repair-an-existing-redistributable-package"></a>Per ripristinare un pacchetto ridistribuibile esistente

1. Aprire il pannello di controllo. In Windows 10, immettere *Pannello di controllo* nell'istanza desktop di controllo di ricerca nella barra delle applicazioni e quindi scegliere **Pannello di controllo** tra le opzioni.

2. Nel Pannello di controllo, scegliere **programmi** > **programmi e funzionalità**. Selezionare la versione di Microsoft Visual C++ Redistributable che corrisponde alla DLL mancante. Se un **modifica** pulsante viene visualizzato nella parte superiore dell'elenco, selezionarlo. Se è l'unica scelta **Disinstalla**, non è possibile ripristinare questa versione del pacchetto ridistribuibile.

3. Scegliere **ripristino** nella finestra di dialogo programma di installazione per il pacchetto ridistribuibile. Potrebbe essere necessario riavviare il computer una volta completato il ripristino. 