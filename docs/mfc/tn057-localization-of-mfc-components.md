---
title: "TN057: localizzazione di componenti MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.components"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "componenti [MFC], localizzazione"
  - "DLL [C++], localizzazione di MFC"
  - "localizzazione [C++], componenti MFC"
  - "localizzazione [C++], MFC (risorse)"
  - "localizzazione [C++], risorse"
  - "DLL MFC [C++], localizzazione"
  - "risorse [MFC], localizzazione"
  - "TN057"
ms.assetid: 5376d329-bd45-41bd-97f5-3d895a9a0af5
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN057: localizzazione di componenti MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descritte alcune progettazioni e procedure che è possibile utilizzare per localizzare il componente, se un'applicazione o un controllo OLE o una DLL che utilizza MFC.  
  
## Panoramica  
 Esistono due effettivamente problema alla risoluzione quando si localizza un componente che utilizza MFC.  Innanzitutto, è necessario localizzare le risorse \- stringhe, finestre di dialogo e altre risorse specifiche al componente.  La maggior parte dei componenti compilati utilizzando MFC includono anche e utilizzano diverse risorse definite da MFC.  È necessario fornire le risorse localizzate MFC anche.  Fortunatamente, in diversi linguaggi sono già forniti da MFC stessa.  
  
 Inoltre, il componente deve essere preparata l'esecuzione nell'ambiente di destinazione \(ambiente europei o DBCS\- attivato.  In genere, questo dipende dall'applicazione che analizza i caratteri con un bit significativi impostato correttamente e che gestisce le stringhe con una coppia di caratteri in byte.  MFC è abilitato, per impostazione predefinita, per entrambi gli ambienti, in modo che è possibile avere un singolo binario mondiale utilizzato in tutte le piattaforme solo con le risorse diverse inserite in fase di installazione.  
  
## Risorse localizzate del componente  
 Localizzare l'applicazione o DLL deve includere sufficiente sostituire le risorse con le risorse corrispondenti alla lingua di destinazione.  Per le risorse, è relativamente semplice: modificare le risorse nell'editor risorse e compilare l'applicazione.  Se il codice è stato scritto correttamente non saranno stringhe o manderanno un testo a cui si desidera localizzare specificato a livello di codice nel codice sorgente C\+\+ \- all la localizzazione può essere eseguita semplicemente modificando le risorse.  Infatti, è possibile implementare il componente in modo che tutto specificare una versione localizzata non include una compilazione del codice originale.  Ciò è più complessa, ma è consigliabile opportuno ed è il meccanismo scelto della libreria MFC.  È inoltre possibile localizzare un'applicazione caricamento del file exe o DLL nell'editor risorse e la modifica direttamente le risorse.  Quando possibile, è consigliabile riapplicazione delle modifiche ogni volta che si compila una nuova versione dell'applicazione.  
  
 Un modo per evitare che è di individuare tutte le risorse in una DLL separata, talvolta definita DLL satellite.  Questa DLL viene caricata in modo dinamico in fase e le risorse vengono caricate da tale DLL anziché dal form principale in tutto il codice.  MFC supporta direttamente questo approccio.  Si consideri un'applicazione denominata MYAPP.EXE; potrebbe disporre di tutte le risorse contenute in una DLL denominato MYRES.DLL.  In `InitInstance` dell'applicazione in quanto segue per caricare la DLL e per impostare MFC per caricare le risorse da tale percorso:  
  
```  
CMyApp::InitInstance()  
{  
   // one of the first things in the init code  
   HINSTANCE hInst = LoadLibrary("myres.dll");  
   if (hInst != NULL)  
      AfxSetResourceHandle(hInst);  
  
   // other initialization code would follow  
   .  
   .  
   .  
}  
```  
  
 Da quel momento in poi, MFC carica le risorse da tale DLL anziché da myapp.exe.  Tutte le risorse, tuttavia, devono essere presenti in tale DLL; MFC non effettuerà la ricerca dell'istanza dell'applicazione a una data risorsa.  Questa tecnica viene applicato correttamente alle DLL regolari nonché ai controlli OLE.  Il programma di installazione copierebbe la versione appropriata di MYRES.DLL a seconda delle impostazioni locali di risorse dell'utente possono avere soddisfatto.  
  
 È relativamente semplice creare una DLL di sole risorse.  Creare un progetto di DLL, si aggiunge il file RC e si aggiungono risorse necessarie.  Se si dispone di un progetto esistente che non utilizza questa tecnica, è possibile copiare risorse dal progetto.  Dopo l'aggiunta del file di risorse al progetto, è possibile che il progetto.  L'unica operazione da eseguire è impostata le opzioni del linker importare **\/NOENTRY**.  Ciò indica al linker che la DLL non dispone di punto di ingresso \- poiché non dispone di codice, non ha un punto di ingresso.  
  
> [!NOTE]
>  L'editor di risorse in Visual C\+\+ 4,0 e linguaggi supporta più successivi per file RC.  Ciò può risultare molto semplice gestire la localizzazione in un singolo progetto.  Le risorse per ogni linguaggio sono controllate le direttive per il preprocessore generate dall'editor di risorse.  
  
## Utilizzo delle risorse localizzate fornite MFC  
 Qualsiasi applicazione MFC che la compilazione di riutilizzazioni due elementi da MFC: codice e risorse.  Ovvero MFC dispone di diversi messaggi di errore, finestre di dialogo incorporate e di altri metodi utilizzati dalle classi MFC.  Per completamente localizzare l'applicazione, è necessario localizzare non solo le risorse dell'applicazione, ma anche le risorse che derivano direttamente da MFC.  MFC fornisce una serie di diversi file di risorse della lingua automaticamente, in modo che se il linguaggio questione è già uno dei supporti di linguaggi MFC, è solo necessario assicurarsi di utilizzare tali risorse localizzate.  
  
 A partire da questi scrittura, MFC supporta cinese, tedesco, Spagnolo, francese che, italiano, giapponese e Coreano.  I file che contengono queste versioni vengono localizzate nella directory INCLUDONO \\ MFC \\ L.\* \("L" corrisponde a localizzato a\).  I file tedeschi sono in MFC \\ in INCLUDONO IN \\ L.DEU, ad esempio.  Per generare l'applicazione per utilizzare questi file RC anziché i file situati in MFC \\ INCLUDES, aggiungere `/IC:\PROGRAM FILES\MICROSOFT VISUAL STUDIO .NET 2003\VC7\MFC\INCLUDE\L.DEU` alla riga di comando RC \(si tratta solo di un esempio; è necessario sostituire le impostazioni locali scelto nonché la directory in cui è installato Visual C\+\+\).  
  
 Le istruzioni sopra funzioneranno se i si collega in modo statico a MFC.  La maggior parte delle applicazioni si collegano dinamicamente \(corrispondente all'impostazione predefinita di AppWizard\).  In questo scenario, non solo il codice è collegata \- pertanto sono le risorse.  Pertanto, è possibile localizzare le risorse dell'applicazione, le risorse di implementazione MFC continueranno a essere caricati dal MFC7x.DLL \(o una versione successiva\) o da MFC7xLOC.DLL se esiste.  È possibile avvicinarti a questo da due angoli diversi.  
  
 L'approccio più complesso è fornire uno di MFC7xLOC.DLLs localizzato \(come MFC7xDEU, per il tedesco, MFC7xESP.DLL per lo Spagnolo, e così via.\), o una versione successiva e installa il MFC7xLOC.DLL appropriato nella directory di sistema quando l'utente installa l'applicazione.  Ciò può risultare molto complessa sia per lo sviluppatore che l'utente finale e come tali non è consigliata.  Vedere [Nota tecnica 56](../mfc/tn056-installation-of-localized-mfc-components.md) per ulteriori informazioni su questa tecnica e i relativi raccomandazioni.  
  
 Il modo più semplice e più sicuro è includere risorse localizzate MFC nell'applicazione o DLL stessa \(o il relativo DLL satellite se si utilizza uno\).  In questo modo si eviteranno problemi di installazione MFC7xLOC.DLL correttamente.  A tale scopo, si seguono le stesse istruzioni per il caso statico precedente impostando la riga di comando RC correttamente il passaggio alle risorse localizzate\), ma è necessario rimuovere anche `/D_AFXDLL` definite aggiunto da AppWizard.  Quando `/D_AFXDLL` è definito, AFXRES.H \(e gli altri file RC MFC\) non definiscono alcune risorse in quanto verranno estratti da DLL MFC anziché\).  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)