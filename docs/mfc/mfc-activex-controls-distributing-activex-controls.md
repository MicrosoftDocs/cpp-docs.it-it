---
title: 'Controlli ActiveX MFC: Distribuzione dei controlli ActiveX | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- GetWindowsDirectory
- GetSystemDirectory
dev_langs: C++
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
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e4ce6602696f733ca3bac03441a58515c57e0dc1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls-distributing-activex-controls"></a>Controlli ActiveX MFC: distribuzione dei controlli ActiveX
In questo articolo vengono illustrati vari problemi relativi alla ridistribuzione di controlli ActiveX:  
  
-   [Versioni ANSI o Unicode controllo](#_core_ansi_or_unicode_control_versions)  
  
-   [L'installazione di controlli ActiveX e DLL ridistribuibili](#_core_installing_activex_controls_and_redistributable_dlls)  
  
-   [Registrazione di controlli](#_core_registering_controls)  
  
##  <a name="_core_ansi_or_unicode_control_versions"></a>Versioni ANSI o Unicode controllo  
 È necessario decidere se fornire una versione ANSI o Unicode del controllo, o entrambi. Questa decisione si basa sui fattori di portabilità inerenti nel set di caratteri ANSI e Unicode.  
  
 Controlli ANSI, che funziona in tutti i sistemi operativi Win32, consentono di garantire la massima portabilità tra i diversi sistemi operativi Win32. I controlli Unicode funzionano solo Windows NT (versione 3.51 o versioni successive), ma non su Windows 95 o Windows 98. Se la portabilità è il fattore determinante, controlli ANSI. Se i controlli verranno eseguiti solo in Windows NT, è possibile fornire controlli Unicode. È anche possibile scegliere di fornire entrambi e con un'applicazione di installare la versione più appropriata per il sistema operativo dell'utente.  
  
##  <a name="_core_installing_activex_controls_and_redistributable_dlls"></a>L'installazione di controlli ActiveX e DLL ridistribuibili  
 Il programma di installazione fornito con i controlli ActiveX deve creare una sottodirectory della directory di Windows speciale e installare dei controlli. File OCX in essa contenuti.  
  
> [!NOTE]
>  Utilizzare le finestre **GetWindowsDirectory** API nel programma di installazione per ottenere il nome della directory di Windows. È consigliabile derivare il nome della sottodirectory con il nome della società o prodotto.  
  
 Il programma di installazione è necessario installare i file DLL ridistribuibili necessari nella directory di sistema di Windows. Se una delle DLL sono già presente nel computer dell'utente, il programma di installazione deve confrontare le versioni con le versioni di cui che si sta installando. Reinstallare un file solo se il numero di versione superiore già installato il file.  
  
 Poiché i controlli ActiveX possono essere utilizzati solo nelle applicazioni contenitore OLE, non è necessario distribuire il set completo di DLL OLE con i controlli. Si può presupporre che l'applicazione contenente (o il sistema operativo) siano già installate le DLL OLE standard.  
  
##  <a name="_core_registering_controls"></a>Registrazione di controlli  
 Prima di poter utilizzare un controllo, è necessario creare per tale voci appropriate nel database di registrazione di Windows. Alcuni contenitori dei controlli ActiveX forniscono una voce di menu per gli utenti di registrare i nuovi controlli, ma questa funzionalità potrebbe non essere disponibile in tutti i contenitori. Pertanto è necessario che il programma di installazione per registrare i controlli quando vengono installati.  
  
 Se si preferisce, è possibile scrivere il programma di installazione per registrare il controllo direttamente invece.  
  
 Utilizzare il **LoadLibrary** API Windows per caricare la DLL del controllo. Successivamente, utilizzare **GetProcAddress** per ottenere l'indirizzo della funzione "DllRegisterServer". Infine, chiamare il `DllRegisterServer` (funzione). Esempio di codice riportato di seguito viene illustrato un possibile metodo, in cui `hLib` archivia l'handle della libreria di controllo, e `lpDllEntryPoint` archivia l'indirizzo della funzione "DllRegisterServer".  
  
 [!code-cpp[NVC_MFC_AxCont#16](../mfc/codesnippet/cpp/mfc-activex-controls-distributing-activex-controls_1.cpp)]  
  
 Il vantaggio di registrazione diretta del controllo è che non devi richiamare e caricare un processo separato (vale a dire, REGSVR32), riducendo il tempo di installazione. Inoltre, poiché la registrazione è un processo interno, il programma di installazione è possibile gestire gli errori e le situazioni impreviste migliore di un processo esterno possono.  
  
> [!NOTE]
>  Il programma di installazione installa un controllo ActiveX, questo deve chiamare **OleInitialize**. Quando il programma di installazione è completato, chiamare **OleUnitialize**. In questo modo si garantisce che le DLL di sistema OLE sono nello stato appropriato per la registrazione di un controllo ActiveX.  
  
 È consigliabile registrare MFCx0.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

