---
description: 'Altre informazioni su: controlli ActiveX MFC: distribuzione di controlli ActiveX'
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
ms.openlocfilehash: faf85bffd9911c38764aea19d1ddb682fd719be1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280716"
---
# <a name="mfc-activex-controls-distributing-activex-controls"></a>Controlli ActiveX MFC: distribuzione dei controlli ActiveX

Questo articolo illustra diversi problemi relativi alla ridistribuzione dei controlli ActiveX:

- [Versioni del controllo ANSI o Unicode](#_core_ansi_or_unicode_control_versions)

- [Installazione di controlli ActiveX e DLL ridistribuibili](#_core_installing_activex_controls_and_redistributable_dlls)

- [Registrazione di controlli](#_core_registering_controls)

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

## <a name="ansi-or-unicode-control-versions"></a><a name="_core_ansi_or_unicode_control_versions"></a> Versioni del controllo ANSI o Unicode

È necessario decidere se inviare una versione ANSI o Unicode del controllo o entrambi. Questa decisione si basa su fattori di portabilità intrinseci nei set di caratteri ANSI e Unicode.

I controlli ANSI, che funzionano su tutti i sistemi operativi Win32, consentono la massima portabilità tra i diversi sistemi operativi Win32. I controlli Unicode funzionano solo su Windows NT (versione 3,51 o successiva), ma non su Windows 95 o Windows 98. Se la portabilità è la preoccupazione principale, inviare i controlli ANSI. Se i controlli vengono eseguiti solo in Windows NT, è possibile spedire i controlli Unicode. È anche possibile scegliere di spedire sia che l'applicazione installi la versione più appropriata per il sistema operativo dell'utente.

## <a name="installing-activex-controls-and-redistributable-dlls"></a><a name="_core_installing_activex_controls_and_redistributable_dlls"></a> Installazione di controlli ActiveX e DLL ridistribuibili

Il programma di installazione fornito con i controlli ActiveX deve creare una sottodirectory speciale della directory di Windows e installare i controlli. File OCX al suo interno.

> [!NOTE]
> Utilizzare l' `GetWindowsDirectory` API Windows nel programma di installazione di per ottenere il nome della directory di Windows. È possibile che si desideri derivare il nome della sottodirectory dal nome della società o del prodotto.

Il programma di installazione deve installare i file DLL ridistribuibili necessari nella directory di sistema di Windows. Se una qualsiasi dll è già presente nel computer dell'utente, il programma di installazione deve confrontare le versioni con le versioni installate. Reinstallare un file solo se il numero di versione è superiore a quello del file già installato.

Poiché i controlli ActiveX possono essere utilizzati solo nelle applicazioni contenitore OLE, non è necessario distribuire il set completo di DLL OLE con i controlli. Si può presupporre che l'applicazione contenitore (o il sistema operativo stesso) disponga delle DLL OLE standard installate.

## <a name="registering-controls"></a><a name="_core_registering_controls"></a> Registrazione di controlli

Prima di poter utilizzare un controllo, è necessario creare le voci appropriate nel database di registrazione di Windows. Alcuni contenitori di controlli ActiveX forniscono una voce di menu che consente agli utenti di registrare nuovi controlli, ma questa funzionalità potrebbe non essere disponibile in tutti i contenitori. Potrebbe pertanto essere necessario che il programma di installazione registri i controlli quando sono installati.

Se si preferisce, è possibile scrivere il programma di installazione per registrare direttamente il controllo.

Usare l' `LoadLibrary` API Windows per caricare la dll del controllo. Usare quindi `GetProcAddress` per ottenere l'indirizzo della funzione "DllRegisterServer". Infine, chiamare la `DllRegisterServer` funzione. Nell'esempio di codice riportato di seguito viene illustrato un possibile metodo, in cui `hLib` archivia l'handle della libreria di controlli e `lpDllEntryPoint` archivia l'indirizzo della funzione "DllRegisterServer".

[!code-cpp[NVC_MFC_AxCont#16](codesnippet/cpp/mfc-activex-controls-distributing-activex-controls_1.cpp)]

Il vantaggio di registrare direttamente il controllo è che non è necessario richiamare e caricare un processo separato (ovvero, REGSVR32), riducendo i tempi di installazione. Inoltre, poiché la registrazione è un processo interno, il programma di installazione di può gestire gli errori e le situazioni impreviste migliori rispetto a un processo esterno.

> [!NOTE]
> Prima di installare un controllo ActiveX, il programma di installazione deve chiamare `OleInitialize` . Al termine del programma di installazione, chiamare `OleUnitialize` . In questo modo si garantisce che le DLL di sistema OLE siano nello stato appropriato per la registrazione di un controllo ActiveX.

È necessario registrare MFCx0.DLL.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
