---
title: "Controlli ActiveX MFC: distribuzione dei controlli ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetWindowsDirectory"
  - "GetSystemDirectory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distribuzione di controlli ActiveX MFC"
  - "GetProcAddress (metodo), registrazione di controlli ActiveX"
  - "GetSystemDirectory (metodo)"
  - "GetWindowsDirectory (metodo)"
  - "installazione di controlli ActiveX"
  - "LoadLibrary (metodo), registrazione di controlli ActiveX"
  - "MFC (controlli ActiveX), versioni ANSI o Unicode"
  - "MFC (controlli ActiveX), distribuzione"
  - "MFC (controlli ActiveX), installazione"
  - "MFC (controlli ActiveX), registrazione"
  - "MFC40.DLL"
  - "MFC40U.DLL"
  - "MSVCRT40.dll"
  - "OLEPRO32.DLL"
  - "file ridistribuibili, controlli ActiveX MFC"
  - "registrazione di controlli ActiveX"
  - "registrazione di controlli"
  - "Registro di sistema, registrazione di controlli"
  - "RegSvr32.exe"
ms.assetid: cd70ac9b-f613-4879-9e81-6381fdfda2a1
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Controlli ActiveX MFC: distribuzione dei controlli ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono discussi alcuni problemi correlati a ridistribuire i controlli ActiveX:  
  
-   [ANSI o versioni di controllo Unicode](#_core_ansi_or_unicode_control_versions)  
  
-   [Configurare i controlli ActiveX e le DLL ridistribuibili](#_core_installing_activex_controls_and_redistributable_dlls)  
  
-   [Registrare i controlli](#_core_registering_controls)  
  
    > [!NOTE]
    >  Per ulteriori informazioni sulla ridistribuzione dei controlli ActiveX, vedere [Ridistribuzione dei controlli](../data/ado-rdo/redistributing-controls.md).  
  
##  <a name="_core_ansi_or_unicode_control_versions"></a> ANSI o versioni di controllo Unicode  
 È necessario decidere se fornire un ANSI o la versione Unicode del controllo, oppure entrambe.  Questa decisione è basata sui fattori di portabilità inerenti a ANSI e ai set di caratteri Unicode.  
  
 I controlli ANSI, che funzionano con tutti i sistemi operativi Win32, consentono la portabilità massima tra i vari sistemi operativi Win32.  Funzionamento dei controlli Unicode solo in Windows NT versione 3,51 o successiva\), ma non in Windows 95 o Windows 98.  Se la portabilità è la problematica principale, fornire i controlli ANSI.  Se i controlli funzioneranno solo in Windows NT, è possibile fornire i controlli Unicode.  È inoltre possibile scegliere di fornisca e effettuare la domanda installare la versione appropriata del sistema operativo dell'utente.  
  
##  <a name="_core_installing_activex_controls_and_redistributable_dlls"></a> Configurare i controlli ActiveX e le DLL ridistribuibili  
 Il programma di installazione fornito con i controlli ActiveX deve creare una sottodirectory speciale della directory di Windows e installare i file di .OCX dei comandi.  
  
> [!NOTE]
>  Utilizzare le finestre **GetWindowsDirectory** API nel programma di installazione per ottenere il nome della directory di Windows.  È possibile derivare il nome della sottodirectory dal nome della società o prodotto.  
  
 Il programma di installazione deve installare i file ridistribuibili DLL necessarie nella directory di sistema di Windows.  Se una delle DLL sono già presenti nel computer dell'utente, il programma di installazione deve confrontare le versioni con le versioni che viene installata.  Reinstallare un file solo se il relativo numero di versione è superiore al file già installato.  
  
 Poiché i controlli ActiveX possono essere utilizzati solo nelle applicazioni del contenitore OLE, non è necessario distribuire il set completo della DLL OLE con i controlli.  È possibile presupporre che l'applicazione contenitore \(o il sistema operativo stesso\) dispone delle DLL OLE standard installati.  
  
##  <a name="_core_registering_controls"></a> Registrare i controlli  
 Prima che un controllo possa essere utilizzato, le voci appropriate devono essere creati nel database di registrazione di windows.  Alcuni contenitori di controlli ActiveX forniscono una voce di menu degli utenti ai nuovi controlli del registro, ma questa funzionalità potrebbe non essere disponibile in tutti i contenitori.  Pertanto, è possibile utilizzare il programma di installazione per registrare i controlli quando vengono installati.  
  
 Se si preferisce, è possibile scrivere il programma di installazione per registrare direttamente il controllo.  
  
 Utilizzare **LoadLibrary** API Windows per caricare la DLL del controllo.  Successivamente, utilizzare **GetProcAddress**  ottenere l'indirizzo della funzione DllRegisterServer "".  Infine, chiamare la funzione `DllRegisterServer`.  Nell'esempio di codice seguente viene illustrato un metodo possibile, dove `hLib` memorizzare l'handle di libreria di controlli e gli archivi di `lpDllEntryPoint` l'indirizzo della funzione DllRegisterServer "".  
  
 [!code-cpp[NVC_MFC_AxCont#16](../mfc/codesnippet/CPP/mfc-activex-controls-distributing-activex-controls_1.cpp)]  
  
 Il vantaggio di registrazione del controllo direttamente è che non è necessario richiamare e caricare un processo separato \(ovvero, a indicare REGSVR32\), riducendo la fase di installazione.  Inoltre, poiché la registrazione è un processo interno, il programma di installazione può gestire meglio gli errori e situazioni di questo tipo di un processo esterno può.  
  
> [!NOTE]
>  Prima che il programma di installazione installare un controllo ActiveX, deve chiamare **OleInitialize**.  Quando il programma di installazione, chiamare **OleUnitialize**.  Questo assicura che le DLL di sistema OLE siano nello stato corretto per registrare un controllo ActiveX.  
  
 È necessario registrare MFCx0.DLL.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)