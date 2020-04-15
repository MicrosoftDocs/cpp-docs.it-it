---
title: 'Controlli ActiveX MFC: distribuzione dei controlli ActiveX'
ms.date: 09/12/2018
f1_keywords:
- GetWindowsDirectory
- GetSystemDirectory
helpviewer_keywords:
- MFC ActiveX controls [MFC], ANSI or Unicode versions
- RegSvr32.exe
- MFC ActiveX controls [MFC], distributing
- distributing MFC ActiveX controls
- redistributable files, MFC ActiveX controls
- GetSystemDirectory method [MFC]
- registering ActiveX controls
- MSVCRT40.dll
- registry [MFC], registering controls
- LoadLibrary method, registering ActiveX controls
- MFC40U.DLL
- MFC40.DLL
- GetWindowsDirectory method [MFC]
- installing ActiveX controls
- GetProcAddress method, registering ActiveX controls
- MFC ActiveX controls [MFC], installing
- MFC ActiveX controls [MFC], registering
- registering controls
- OLEPRO32.DLL
ms.assetid: cd70ac9b-f613-4879-9e81-6381fdfda2a1
ms.openlocfilehash: 1ada1c801b2d9d62f1cc4cd5bf72a2995225b3de
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364619"
---
# <a name="mfc-activex-controls-distributing-activex-controls"></a>Controlli ActiveX MFC: distribuzione dei controlli ActiveX

In questo articolo vengono illustrati diversi problemi relativi alla ridistribuzione dei controlli ActiveX:

- [Versioni dei controlli ANSI o Unicode](#_core_ansi_or_unicode_control_versions)

- [Installazione di controlli ActiveX e DLL ridistribuibili](#_core_installing_activex_controls_and_redistributable_dlls)

- [Registrazione dei controlliRegistering Controls](#_core_registering_controls)

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

## <a name="ansi-or-unicode-control-versions"></a><a name="_core_ansi_or_unicode_control_versions"></a>Versioni dei controlli ANSI o Unicode

È necessario decidere se spedire una versione ANSI o Unicode del controllo o entrambi. Questa decisione si basa su fattori di portabilità inerenti ai set di caratteri ANSI e Unicode.

I controlli ANSI, che funzionano su tutti i sistemi operativi Win32, consentono la massima portabilità tra i vari sistemi operativi Win32. I controlli Unicode funzionano solo su Windows NT (versione 3.51 o successiva), ma non su Windows 95 o Windows 98. Se la portabilità è la tua preoccupazione principale, spedire i controlli ANSI. Se i controlli verranno eseguiti solo in Windows NT, è possibile spedire i controlli Unicode. È anche possibile scegliere di spedire entrambi e fare in modo che l'applicazione installi la versione più appropriata per il sistema operativo dell'utente.

## <a name="installing-activex-controls-and-redistributable-dlls"></a><a name="_core_installing_activex_controls_and_redistributable_dlls"></a>Installazione di controlli ActiveX e DLL ridistribuibili

Il programma di installazione fornito con i controlli ActiveX deve creare una sottodirectory speciale della directory di Windows e installare i controlli' . OCX in esso.

> [!NOTE]
> Utilizzare l'API di Windows `GetWindowsDirectory` nel programma di installazione per ottenere il nome della directory di Windows. È possibile derivare il nome della sottodirectory dal nome della società o del prodotto.

Il programma di installazione deve installare i file DLL ridistribuibili necessari nella directory di sistema di Windows. Se una delle DLL è già presente nel computer dell'utente, il programma di installazione deve confrontare le versioni con le versioni che si sta installando. Reinstallare un file solo se il numero di versione è superiore a quello del file già installato.

Poiché i controlli ActiveX possono essere utilizzati solo nelle applicazioni contenitore OLE, non è necessario distribuire il set completo di DLL OLE con i controlli. È possibile presupporre che nell'applicazione contenitore (o nel sistema operativo stesso) siano installate le DLL OLE standard.

## <a name="registering-controls"></a><a name="_core_registering_controls"></a>Registrazione dei controlliRegistering Controls

Prima di poter utilizzare un controllo, è necessario creare voci appropriate nel database di registrazione di Windows.Before a control can be used, appropriate entries must be created for it in the Windows registration database. Alcuni contenitori di controlli ActiveX forniscono una voce di menu per gli utenti di registrare nuovi controlli, ma questa funzionalità potrebbe non essere disponibile in tutti i contenitori. Pertanto, è possibile che si desideri che il programma di installazione registri i controlli al momento dell'installazione.

Se si preferisce, è possibile scrivere il programma di installazione per registrare direttamente il controllo.

Utilizzare `LoadLibrary` l'API di Windows per caricare la DLL di controllo. Successivamente, `GetProcAddress` utilizzare per ottenere l'indirizzo della funzione "DllRegisterServer". Infine, chiamare `DllRegisterServer` la funzione. Nell'esempio di codice riportato `hLib` di seguito viene illustrato `lpDllEntryPoint` un possibile metodo, in cui viene archiviato l'handle della libreria di controlli, e viene archiviato l'indirizzo della funzione "DllRegisterServer".

[!code-cpp[NVC_MFC_AxCont#16](../mfc/codesnippet/cpp/mfc-activex-controls-distributing-activex-controls_1.cpp)]

Il vantaggio di registrare direttamente il controllo è che non è necessario richiamare e caricare un processo separato (vale a dire REGSVR32), riducendo i tempi di installazione. Inoltre, poiché la registrazione è un processo interno, il programma di installazione è in grado di gestire gli errori e le situazioni impreviste meglio di quanto possa fare un processo esterno.

> [!NOTE]
> Prima che il programma di installazione installi `OleInitialize`un controllo ActiveX, deve chiamare . Al termine del programma `OleUnitialize`di installazione, chiamare . Ciò garantisce che le DLL di sistema OLE siano nello stato corretto per la registrazione di un controllo ActiveX.

È necessario registrare MFCx0.DLL.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
