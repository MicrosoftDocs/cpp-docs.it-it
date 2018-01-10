---
title: Trasferimento alla piattaforma UWP (Universal Windows Platform) (C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: f662d2e4-8940-418d-8109-cb76cb8f8569
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e6dd42eae54f61d03d4d490a17cf1282e2d2e51f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="porting-to-the-universal-windows-platform-c"></a>Trasferimento alla piattaforma UWP (Universal Windows Platform) (C++)
In questo argomento è possibile trovare informazioni su come eseguire il porting di codice C++ esistente alla piattaforma di app Windows 10, la piattaforma UWP (Universal Windows Platform). Il termine *universale* indica che il codice può essere eseguito su uno qualsiasi dei dispositivi su cui è in esecuzione Windows 10, tra cui desktop, tablet e dispositivi futuri che eseguono Windows 10. Si crea un unico progetto e un'unica interfaccia utente basata su XAML che funziona con qualsiasi dispositivo che esegue Windows 10. È possibile usare le funzionalità di layout dinamico in XAML per consentire l'interfaccia utente dell'applicazione di adattarsi alle dimensioni del display diverse.  
  
 La documentazione di Windows Developer Center contiene una guida al trasferimento di app di Windows 8.1 alla piattaforma UWP (Universal Windows Platform). Vedere [Passare da Windows Runtime 8 a UWP](https://msdn.microsoft.com/windows/uwp/porting/w8x-to-uwp-root). Nonostante la Guida illustri principalmente il codice C#, la maggior parte delle informazioni contenute nella Guida sono applicabili a C++. Le procedure seguenti contengono informazioni più dettagliate.  
  
 Questo argomento contiene le procedure seguenti per convertire il codice per la piattaforma UWP.  
  
1.  [Porting di un'app di Windows Store 8.1 alla piattaforma UWP](#BK_81StoreApp)  
  
2.  [Porting di un componente Runtime di Windows 8.1 per il UWP](#BK_81Component)  
  
 Se si ha a disposizione una DLL Win32 per desktop classico e la si vuole chiamare da un'applicazione UWP, è anche possibile eseguire queste operazioni. Usando queste procedure, è possibile creare un livello dell'interfaccia utente UWP per un'applicazione C++ per desktop Windows classico esistente oppure un codice C++ multipiattaforma standard. Vedere [Procedura: usare codice C++ esistente in un'app della piattaforma UWP (Universal Windows Platform)](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md).  
  
##  <a name="BK_81StoreApp"></a> Porting di un'app di Windows Store 8.1 alla piattaforma UWP  
 Se è disponibile un'app di Windows 8.1 Store, è possibile usare questa procedura per ottenere lo stesso risultato in UWP e nei dispositivi che eseguono Windows 10.  È consigliabile iniziare compilando il progetto con Visual Studio 2017 come progetto di Windows 8.1, per eliminare eventuali problemi originati dalle modifiche apportate al compilatore e alle librerie. Dopo aver eseguito l'operazione, sono disponibili due modi per convertirlo in un progetto UWP Windows 10. Il modo più semplice (come spiegato nella procedura seguente) consiste nel creare un progetto Windows universale e copiarvi il codice esistente. Se si usa un progetto universale per desktop per Windows 8.1 e Windows 8.1 Phone, il progetto verrà avviato con due layout diversi in XAML, ma terminerà con un singolo layout dinamico che consente di regolare le dimensioni di visualizzazione.  
  
#### <a name="to-port-a-windows-81-store-app-to-the-uwp"></a>Per eseguire il porting di un'app di Windows Store 8.1 alla piattaforma UWP  
  
1.  Se necessario, aprire il progetto di app Windows 8.1 in Visual Studio 2017 e seguire le istruzioni per aggiornare il file di progetto.  
  
     È necessario aver installato gli strumenti di Windows 8.1 nel programma di installazione di Visual Studio. Se questi strumenti installati non sono disponibili, avviare l'installazione di Visual Studio dalla finestra Programmi e funzionalità, scegliere Visual Studio 2017 e nella finestra di dialogo del programma di installazione scegliere **Modifica**. Individuare gli strumenti di Windows 8.1, assicurarsi che l'opzione è selezionata e scegliere OK.  
  
2.  Aprire la finestra Proprietà progetto e in C++, Generale impostare il set di strumenti della piattaforma su v141, gli strumenti di compilazione per Visual Studio 2017.  
  
3.  Compilare il progetto come progetto di Windows 8.1 e risolvere gli eventuali errori di compilazione. Eventuali errori in questa fase sono probabilmente a causa di modifiche importanti nelle librerie e strumenti di compilazione. Vedere [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](../porting/visual-cpp-change-history-2003-2015.md) per la spiegazione dettagliata delle modifiche che potrebbero influire sul codice.  
  
     Una volta che il progetto verrà compilato correttamente, si è pronti a porta universale Windows (Windows 10).  
  
4.  Creare un nuovo progetto di App Windows universale usando il modello vuoto. È possibile assegnare lo stesso nome del progetto esistente, anche se a tale scopo, i progetti deve essere in directory diverse.  
  
5.  Chiudere la soluzione e quindi usando Esplora risorse o la riga di comando, è possibile copiare i file di codice (con estensioni cpp, h e con estensione XAML) dal progetto Windows 8.1 nella stessa cartella del file di progetto (vcxproj) per il progetto creato nel passaggio 1. Non copiare il file package appxmanifest e se si dispone di codice separato per desktop di Windows 8.1 e telefono, scegliere uno di essi alla porta prima (sarà necessario eseguire alcune operazioni in un secondo momento per adattarsi a altro). Assicurarsi di copia e le sottocartelle e il relativo contenuto. Se richiesto, scegliere di sostituire tutti i file con nomi duplicati.  
  
6.  Riaprire la soluzione e scegliere **Aggiungi, Elemento esistente** dal menu di scelta rapida per il nodo progetto. Selezionare tutti i file copiati, ad eccezione di quelle che fanno già parte del progetto.  
  
     Controllare eventuali sottocartelle e assicurarsi di aggiungere anche i file in esse.  
  
7.  Se non si usa lo stesso nome del progetto precedente, aprire il file package appxmanifest e aggiornare il punto di ingresso per riflettere il nome dello spazio dei nomi per la classe App.  
  
     Il campo **Punto di ingresso** nel file Package.appxmanifest contiene un nome con ambito per la classe App, che include lo spazio dei nomi contenente la classe App. Quando si crea un progetto Windows universale, lo spazio dei nomi viene impostato sul nome del progetto. Se questa è diversa da quella i file copiati dal progetto precedente, è necessario aggiornare uno o l'altro in modo adeguato.  
  
8.  Compilare il progetto e risolvere gli eventuali errori di compilazione a causa di modifiche importanti tra le diverse versioni di Windows SDK.  
  
9. Eseguire il progetto sul Desktop locale. Verificare che non siano presenti errori di distribuzione e che il layout dell'applicazione è ragionevole e che funzioni correttamente sul desktop.  
  
10. Se si dispone di file di codice separati e XAML per un altro dispositivo, ad esempio Windows Phone 8.1, esaminare il codice e identificare dove è diversa dal dispositivo standard. Se la differenza è solo nel layout, è possibile usare un gestore dello stato di visualizzazione nel codice xaml per personalizzare la visualizzazione a seconda delle dimensioni dello schermo. Per altre differenze è possibile usare le sezioni di condizioni nel codice usando le istruzioni #if seguenti.  
  
    ```  
    #if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)  
    #if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PHONE_APP)  
    #if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)  
    #if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)  
    ```  
  
     Queste istruzioni rispettivamente si applicano alle app di Windows Store, Windows Phone Store, a entrambe o a nessuna delle due (solo desktop Win32 classico). Queste macro sono disponibili solo in Windows SDK 8.1 e versioni successive, quindi se il codice deve essere compilato con le versioni precedenti di Windows SDK o per altre piattaforme diverse da Windows, è necessario prendere in considerazione il fatto che nessuna di queste venga definita.  
  
11. Esecuzione e il debug dell'app su un emulatore o un dispositivo fisico, per ogni tipo di dispositivo che supporta l'applicazione. Per eseguire un emulatore, è necessario eseguire Visual Studio in un computer fisico, non una macchina virtuale.  
  
##  <a name="BK_81Component"></a> Porting di un componente Runtime di Windows 8.1 per il UWP  
 Se si dispone di una DLL o di un componente Windows Runtime già compatibile con app di Windows Store 8.1, è possibile usare questa procedura per ottenere il componente o una DLL compatibili con la piattaforma UWP e con Windows 10. La procedura di base consiste nel creare un nuovo progetto e copiarvi il codice.  
  
#### <a name="to-port-a-windows-81-runtime-component-to-the-uwp"></a>Per trasferire un componente Windows 8.1 Runtime nella piattaforma UWP  
  
1.  Nella finestra di dialogo **Nuovo progetto** in Visual Studio 2017, trovare il nodo **Universale di Windows**. Se questo nodo non viene visualizzato, installare prima [Strumenti per Windows 10](http://go.microsoft.com/fwlink/p/?LinkID=617903) . Scegliere il modello **Componente Windows Runtime** , assegnare un nome al componente e scegliere il pulsante **OK** . Il nome del componente verrà usato come nome dello spazio dei nomi, quindi si potrebbe voler usare lo stesso nome del precedente spazio dei nomi del progetto. Di conseguenza, si deve creare il progetto in una cartella diversa da quella precedente. Se si sceglie un nome diverso, è possibile aggiornare lo spazio dei nomi nei file di codice generato.  
  
2.  Chiudere il progetto.  
  
3.  Copiare tutti i file di codice (estensioni cpp, h, xaml e così via.) dal componente Windows 8.1 nel progetto appena creato. Non copiare il file Package.appxmanifest.  
  
4.  Compilare il progetto e risolvere gli eventuali errori di compilazione a causa di modifiche importanti tra le diverse versioni di Windows SDK.  
  
## <a name="troubleshooting"></a>Risoluzione dei problemi  
 Possono verificarsi diversi errori durante il processo di porting di codice per la piattaforma Windows universale. Di seguito sono riportati alcuni possibili problemi riscontrati.  
  
 **Configurazione progetto non valida.**  
  
 È possibile ricevere l'errore:  
  
```Output  
could not find assembly 'platform.winmd': please specify the assembly search path using /AI or by setting the LIBPATH environment variable  
```  
  
 In questo caso, il progetto non è la creazione di un progetto Windows universale. Controllare il file di progetto e assicurarsi che gli elementi XML corretti che identificano un progetto come Windows universale. Gli elementi seguenti devono essere presenti (il numero di versione della piattaforma di destinazione potrebbe essere diversa):  
  
```xml  
<AppContainerApplication>true</AppContainerApplication>  
<ApplicationType>Windows Store</ApplicationType>  
<WindowsTargetPlatformVersion>10.0.10156.0</WindowsTargetPlatformVersion>  
<WindowsTargetPlatformMinVersion>10.0.10156.0</WindowsTargetPlatformMinVersion>  
<ApplicationTypeRevision>10.0</ApplicationTypeRevision>  
```  
  
 Se si crea un nuovo progetto della piattaforma UWP (Universal Windows Platform) usando Visual Studio, questo errore non verrà visualizzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Guida al porting di Visual C++](../porting/porting-to-the-universal-windows-platform-cpp.md)   
 [Sviluppare app per la piattaforma UWP (Universal Windows Platform)](/visualstudio/cross-platform/develop-apps-for-the-universal-windows-platform-uwp)
