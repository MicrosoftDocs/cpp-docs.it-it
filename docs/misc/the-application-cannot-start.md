---
title: "The application cannot start. | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.0x800A0001"
  - "vs.message.VB_E_IDACANTBOOT"
ms.assetid: ffc123a0-99e1-4e9d-8f6e-34aa357bf98f
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The application cannot start.
Un errore imprevisto ha impedito l'avvio di Visual Studio.  Questo errore si verifica in presenza di una delle condizioni seguenti:  
  
-   L'ambiente di sviluppo integrato \(IDE\) non è stato in grado di caricare Msxml3.dll.  
  
-   L'IDE non è stato in grado di caricare Mso.dll.  
  
-   L'IDE non è stato in grado di caricare DTE.olb.  
  
-   Durante l'installazione non è stato creato il codice di licenza per Visual Studio.  
  
-   Il blocco degli script è attivato e non consente l'esecuzione di codice di script.  
  
-   Il programma di installazione di .NET Framework, un componente richiesto da Visual Studio, non è stato in grado di generare un'immagine nativa valida per mscorlib.dll.  
  
-   Nel computer è stato rilevato il virus Klez.  
  
 Per correggere l'errore, attenersi alle procedure riportate di seguito.  
  
> [!WARNING]
>  Alcune di queste risoluzioni richiedono la modifica di una chiave del Registro di sistema.  L'uso non corretto dell'editor del Registro di sistema può causare gravi problemi che possono rendere necessaria la reinstallazione del sistema operativo.  Microsoft non garantisce che i problemi derivanti da un uso errato dell'editor del Registro di sistema possano essere risolti.  L'uso dell'editor del Registro di sistema è a rischio e pericolo dell'utente.  
  
 L'IDE non è stato in grado di caricare Msxml3.dll.  
 Questo comportamento è causato dallo stato in cui è stato lasciato il computer dalla versione beta di MSXML 4.0 Technology Preview del mese di luglio 2001.  Per ripristinare la registrazione di Msxml3.dll, seguire questa procedura:  
  
### Disinstallare Msxml4.dll  
  
1.  Scegliere **Esegui** dal menu **Start**.  
  
2.  Nella casella di testo **Apri** digitare `regsvr32 /u c:\winnt\system32\msxml4.dll` e fare clic su **OK**.  
  
### Scaricare e installare l'aggiornamento della sicurezza per MSXML  
  
1.  Scaricare l'ultimo aggiornamento della sicurezza per la versione di MSXML installata nel computer dall'indirizzo [http:\/\/www.microsoft.com\/windows\/ie\/downloads\/critical\/q317244\/download.asp](http://www.microsoft.com/windows/ie/downloads/critical/q317244/download.asp).  
  
2.  Eseguire il file EXE dell'aggiornamento della sicurezza.  
  
### Scaricare e applicare i valori del Registro di sistema aggiornati  
  
1.  Scaricare i valori del Registro di sistema aggiornati dall'indirizzo [http:\/\/download.microsoft.com\/download\/VisualStudioNET\/fix\/1.0\/WIN98MeXP\/Fixxml4.exe](http://download.microsoft.com/download/VisualStudioNET/fix/1.0/WIN98MeXP/Fixxml4.exe).  
  
2.  Fare doppio clic su fixxml4.exe e decomprimere i file.  
  
3.  Individuare Fixxml4.reg e fare doppio clic sul file per aggiornare i valori del Registro di sistema.  
  
 L'IDE non è stato in grado di caricare Mso.dll.  
 Per risolvere i problemi relativi a Mso.dll, attenersi all'elenco riportato di seguito.  
  
### Microsoft Office  
  
-   Disinstallare le versioni beta di Microsoft Office XP eventualmente installate nel computer.  
  
-   Ripristinare Office XP tramite Installazione applicazioni.  
  
-   Nell'editor del Registro di sistema verificare la chiave seguente:  
  
     `[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\7.0\Path] "MSO"="C:\Program Files\Common Files\Microsoft Shared\Office10\MSO.DLL"`  
  
 L'IDE non è stato in grado di caricare DTE.olb.  
 Per correggere l'errore:  
  
### Registrare Dte.olb  
  
1.  Scegliere **Esegui** dal menu **Start**.  
  
2.  Nella casella di testo **Apri** digitare `regsvr32 C:\Program Files\Common Files\Microsoft Shared\MSEnv\DTE.OLB` e fare clic su **OK**.  
  
 Durante l'installazione non è stato creato il codice di licenza per Visual Studio.  
 Se la schermata iniziale di Visual Studio non contiene un elenco dei prodotti installati e non include informazioni sull'utente che ha installato il prodotto, non è presente il codice di licenza,  così come se Visual Studio non è riportato nell'elenco della finestra di dialogo Installazione applicazioni.  
  
 Per risolvere il problema:  
  
### Creare un codice di licenza per Visual Studio  
  
-   Rimuovere completamente Visual Studio dal computer e quindi reinstallare il prodotto.  
  
 Il blocco degli script è attivato e non consente l'esecuzione di codice di script.  
 Se in un'applicazione di terze parti è attivato il blocco degli script, l'IDE verrà visualizzato e quindi scomparirà.  
  
-   Per risolvere il problema, verificare il corretto funzionamento della funzionalità di blocco degli script.  
  
 Il programma di installazione di .NET Framework, un componente richiesto da Visual Studio, non è stato in grado di generare un'immagine nativa valida per mscorlib.dll.  
 Se la schermata iniziale di Visual Studio viene visualizzata brevemente e successivamente scompare, è possibile che non sia disponibile un'immagine nativa valida per il file Mscorlib.dll.  Questo file viene creato durante l'installazione di .NET Framework nella directory \\%windir%\\assembly\\NativeImages1\_v1.0.3705\\mscorlib.  
  
 Per risolvere il problema:  
  
### Creare un file Mscorlib.dll valido  
  
1.  Disinstallare e quindi reinstallare .NET Framework.  
  
 Nel computer è stato rilevato il virus Klez.  
 Se il computer è infettato dal virus Klez, può essere visualizzato l'errore "Impossibile avviare l'applicazione".  È consigliabile aggiornare il software antivirus e quindi eseguire un'analisi del computer per verificare l'eventuale presenza di virus.