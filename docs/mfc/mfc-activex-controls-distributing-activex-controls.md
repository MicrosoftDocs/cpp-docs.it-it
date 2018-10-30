---
title: 'Controlli ActiveX MFC: Distribuzione dei controlli ActiveX | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- GetWindowsDirectory
- GetSystemDirectory
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d75f84a8cb5ca2cb5a867cc640410c7de978d4fc
ms.sourcegitcommit: a3c9e7888b8f437a170327c4c175733ad9eb0454
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2018
ms.locfileid: "50204665"
---
# <a name="mfc-activex-controls-distributing-activex-controls"></a>Controlli ActiveX MFC: distribuzione dei controlli ActiveX

Questo articolo vengono illustrati diversi problemi relativi alla ridistribuzione di controlli ActiveX:

- [Versioni ANSI o Unicode controllo](#_core_ansi_or_unicode_control_versions)

- [Installazione di controlli ActiveX e DLL ridistribuibili](#_core_installing_activex_controls_and_redistributable_dlls)

- [Registrazione di controlli](#_core_registering_controls)

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

##  <a name="_core_ansi_or_unicode_control_versions"></a> Versioni ANSI o Unicode controllo

È necessario decidere se si desidera fornire una versione ANSI o Unicode del controllo, oppure entrambi. Questa decisione si basa sui fattori di portabilità intrinseci in set di caratteri ANSI e Unicode.

I controlli di ANSI, che funzionano in tutti i sistemi operativi Win32, consentono la massima portabilità tra i vari sistemi operativi Win32. I controlli di Unicode funzionano solo Windows NT (versione 3.51 o versioni successive), ma non in Windows 95 o Windows 98. Se la portabilità è un problema primari, controlli ANSI. Se i controlli verranno eseguita solo su Windows NT, è possibile spedire i controlli di Unicode. È anche possibile scegliere di utilizzarli entrambi e che l'applicazione di installare la versione più appropriata per sistema operativo dell'utente.

##  <a name="_core_installing_activex_controls_and_redistributable_dlls"></a> Installazione di controlli ActiveX e DLL ridistribuibili

Il programma di installazione fornito con i controlli ActiveX debba creare una sottodirectory della directory Windows speciale e installare dei controlli. File OCX in essa contenuti.

> [!NOTE]
>  Utilizzare il Windows `GetWindowsDirectory` API nel programma di installazione per ottenere il nome della directory Windows. È possibile derivare il nome della sottodirectory dal nome della società o prodotto.

Il programma di installazione è necessario installare i file DLL ridistribuibili necessari nella directory di sistema Windows. Se una delle due DLL sono già presente nel computer dell'utente, il programma di installazione deve confrontare le versioni con le versioni di cui che si sta installando. Reinstallare un file solo se il numero di versione è superiore a quella del file già installato.

Poiché i controlli ActiveX possono essere usati solo nelle applicazioni contenitore OLE, non è necessario distribuire il set completo di OLE DLL con i controlli. Si può presupporre che l'applicazione che lo contiene (o il sistema operativo stesso) ha installato le DLL OLE standard.

##  <a name="_core_registering_controls"></a> Registrazione di controlli

Prima di poter usare un controllo, è necessario creare le voci appropriate per tale nel database di registrazione di Windows. Alcuni contenitori di controlli ActiveX forniscono una voce di menu per gli utenti di registrare i nuovi controlli, ma questa funzionalità potrebbe non essere disponibile in tutti i contenitori. Pertanto, è possibile che il programma di installazione per registrare i controlli quando vengono installati.

Se si preferisce, è possibile scrivere il programma di installazione per registrare il controllo direttamente invece.

Usare il `LoadLibrary` API Windows per caricare la DLL del controllo. Successivamente, utilizziamo `GetProcAddress` per ottenere l'indirizzo della funzione "DllRegisterServer". Infine, chiamare il `DllRegisterServer` (funzione). Esempio di codice seguente viene illustrato un possibile metodo, in cui `hLib` archivia l'handle della libreria, controllo e `lpDllEntryPoint` archivia l'indirizzo della funzione "DllRegisterServer".

[!code-cpp[NVC_MFC_AxCont#16](../mfc/codesnippet/cpp/mfc-activex-controls-distributing-activex-controls_1.cpp)]

Il vantaggio della registrazione del controllo direttamente è che non è necessaria richiamare e caricare un processo separato (vale a dire, REGSVR32), riducendo i tempi di installazione. Inoltre, poiché la registrazione è un processo interno, il programma di installazione è possibile gestire gli errori e le situazioni impreviste migliore rispetto a un processo esterno possono.

> [!NOTE]
>  Prima che il programma di installazione installi un controllo ActiveX, questo deve chiamare `OleInitialize`. Al termine del programma di installazione, chiamare `OleUnitialize`. Ciò garantisce che le DLL di sistema OLE sono nello stato appropriato per la registrazione di un controllo ActiveX.

È consigliabile registrare MFCx0.DLL.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

