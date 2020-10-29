---
title: Installare il supporto C11 e C17 in Visual Studio
description: Installare Windows SDK e il supporto CRT per C11 e C17 in Visual Studio
ms.date: 09/11/2020
helpviewer_keywords:
- Install preview Windows SDK
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
ms.openlocfilehash: 9310b0dbb4e436245de820622ec9dd0f52292871
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924410"
---
# <a name="install-c11-and-c17-support-in-visual-studio"></a>Installare il supporto C11 e C17 in Visual Studio

::: moniker range="<=msvc-150"

Il supporto per gli standard C11 e C17 richiede Visual Studio 2019 versione 16,8 o successiva. Per visualizzare la documentazione relativa a questa versione, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range="msvc-160"

Il supporto per gli standard C11 e C17 è disponibile a partire da Visual Studio 2019 versione 16,8. Il supporto richiede un runtime C universale aggiornato (UCRT) e gli aggiornamenti Windows SDK più recenti per funzionare correttamente con il preprocessore conforme ( [`/Zc:preprocessor`](../build/reference/zc-preprocessor.md) ).

Le versioni Windows SDK corrispondono alle versioni del sistema operativo Windows. Poiché non è stata rilasciata una versione di Windows con queste modifiche, sarà necessaria un' *Anteprima di Insider Windows SDK* . Si tratta di una versione di anteprima del Windows SDK che corrisponde alle compilazioni di Windows attualmente sottoposte a *Flight* , o testate, da Windows Insider. Dopo aver installato Windows 10 SDK di insider Preview, i progetti di Visual Studio configurati per l'uso della Windows SDK più recente utilizzeranno l'anteprima di insider.

## <a name="prerequisites"></a>Prerequisites

- Visual Studio 2019 versione 16,8 Preview 3 o successiva installata e in esecuzione nel computer. Nell'installazione, includere il carico di lavoro sviluppo di applicazioni desktop con C++. È possibile scaricare l'anteprima più recente dalla pagina di [Anteprima di Visual Studio](https://visualstudio.microsoft.com/vs/preview/) . Se Visual Studio non è ancora installato, vedere [installare il supporto C++ in Visual Studio](../build/vscpp-step-0-installation.md) per istruzioni di installazione.

## <a name="step-1-sign-in-by-using-an-insider-microsoft-account"></a>Passaggio 1: accedere usando un account Microsoft Insider

Chiunque può creare una [account Microsoft](https://signup.live.com/) gratuita e quindi acconsentire al programma Insider. Andare alla pagina [programma Windows Insider per sviluppatori](https://insider.windows.com/for-developers) , scegliere **registra** ed eseguire l'accesso.

Una volta eseguita la registrazione, si ha la possibilità di avviare le versioni Insider di Windows per il volo. Questo passaggio non è necessario per scaricare e usare l'SDK di Windows 10 Insider. Quando si esegue la registrazione per Windows Insider, il computer non sceglie automaticamente di scaricare i nuovi voli di Windows.

Quando si arriva alla pagina del **programma Windows Insider** , non è necessario scegliere **Flight Now** . Continuare con il passaggio successivo per scaricare il Windows 10 SDK di insider Preview.

## <a name="step-2-download-the-insider-preview-windows-10-sdk"></a>Passaggio 2: scaricare l'SDK di Windows 10 di insider Preview

È possibile installare l'anteprima di Insider Windows SDK dalla pagina dei [download di Windows Insider Preview](https://www.microsoft.com/software-download/windowsinsiderpreviewSDK) . Se viene visualizzato un messaggio che indica che è necessario essere un membro del programma Windows Insider, verificare di aver eseguito l'accesso. Usare lo stesso account Microsoft usato per il programma Insider. Se viene visualizzato un messaggio che indica che la pagina richiesta non è stata trovata, "provare a modificare le impostazioni locali nell'URL in *en-US* .

La pagina Insider sostiene che è richiesto l'uso di un sistema operativo Windows 10 Insider Preview. È vero solo per alcuni contenuti inclusi nel Windows SDK. Il contenuto può dipendere da nuove API non presenti nelle versioni precedenti di Windows. Tuttavia, le intestazioni di runtime di Windows e Universal C possono installare e sono utilizzabili senza un sistema operativo Insider.

Scegliere **Get SDK Insider Preview – Build 20211** (o versione successiva) per avviare il download. Anche le versioni successive del Windows SDK funzioneranno.

## <a name="step-3-install-the-insider-preview-windows-10-sdk"></a>Passaggio 3: installare Insider Preview Windows 10 SDK

L'anteprima di Insider Windows SDK viene scaricata come *`.iso`* file. Aprire la cartella che contiene il file scaricato in Esplora file. Montare il *`.iso`* file e quindi eseguire *`WinSDKSetup.exe`* per avviare l'installazione.

Nella pagina **Specifica percorso** selezionare **installa Windows Software Development Kit- \<version> in questo computer** , quindi fare clic su **Avanti** . Nella pagina **privacy kit Windows** selezionare se consentire a Microsoft di raccogliere informazioni dettagliate per i kit Windows 10, quindi scegliere **Avanti** . Scegliere **accetta** per accettare il contratto di licenza. Nella pagina **selezionare le funzionalità da installare** selezionare solo le funzionalità seguenti:  

- Strumenti di firma Windows SDK per le app desktop

- Windows SDK per le app gestite da UWP

- Windows SDK per le app C++ UWP

- Windows SDK per le app desktop C++ x86 (se si prevede di compilare per x86)

- Windows SDK per le app amd64 per desktop C++ (se si prevede di compilare per amd64)

- Windows SDK per le app ARM C++ desktop (se si prevede di compilare per ARM)

- Windows SDK per le app arm64 di desktop C++ (se si prevede di compilare per arm64)

![Screenshot del programma di installazione di Windows SDK che mostra i componenti selezionati per l'installazione](media/c11-7-windows-sdk-installer-select-features.png)

Scegliere **Installa** per installare i componenti SDK selezionati. Per completare l'installazione, l'SDK richiede un paio di minuti. Al termine, aprire Visual Studio.

## <a name="step-4-configuring-c11-or-c17-mode-in-visual-studio"></a>Passaggio 4: configurazione della modalità C11 o C17 in Visual Studio

In Visual Studio aprire un progetto C nuovo o esistente, quindi aprire la finestra di dialogo **pagine delle proprietà** del progetto.

Impostare il progetto per l'uso dell'anteprima di Windows 10 SDK Insider. Nella pagina **proprietà di configurazione**  >  **generale** impostare la proprietà **versione Windows SDK** su **10,0 (versione installata più recente)** o sulla versione di anteprima specifica installata.

Verrà visualizzata anche una nuova opzione: **standard del linguaggio C** . Impostare questa proprietà su **ISO C11 standard ( `/std:c11` )** o **ISO C17 (2018) standard ( `/std:c17` )** .  

![Screenshot della finestra di dialogo Pagine delle proprietà nella pagina generale proprietà di configurazione che mostra la selezione a discesa della proprietà standard del linguaggio C come ISO C 17](media/c11-9-project-property-page-c-language-standard.png)

Lo standard del linguaggio C++ viene usato quando il linguaggio è C++. Si tratta dell'impostazione predefinita quando l'estensione del file è *`.cpp`* . La versione standard del linguaggio C viene utilizzata quando la lingua è C. Si tratta dell'impostazione predefinita quando l'estensione del file è *`.c`* . Per compilare usando C11 o C17, inserire il codice sorgente in un *`.c`* file o impostare il codice per la compilazione come C. È possibile impostare questa proprietà per il progetto nella pagina **proprietà di configurazione**  >  **C/C++**  >  **Avanzate** . Impostare la proprietà **Compila come** su **Compila come codice C (/TC)** .

Congratulazioni, è stato configurato tutto il necessario per compilare il codice C11 e C17 in Visual Studio 2019 versione 16,8 Preview 3.

## <a name="see-also"></a>Vedere anche

[`/std` (Specifica la versione standard del linguaggio)](../build/reference/std-specify-language-standard-version.md)

::: moniker-end
