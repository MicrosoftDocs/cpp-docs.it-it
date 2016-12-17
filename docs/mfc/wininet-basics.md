---
title: "Concetti di base su WinInet | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnStatusCallback (metodo)"
  - "WinInet (classi), informazioni sulle classi WinInet"
  - "WinInet (classi), visualizzazione dello stato di avanzamento"
ms.assetid: 665de5ac-e80d-427d-8d91-2ae466885940
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Concetti di base su WinInet
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare WinInet per aggiungere il supporto di FTP per scaricare o caricare file dall'interno dell'applicazione.  È possibile eseguire l'override di [OnStatusCallback](../Topic/CInternetSession::OnStatusCallback.md) e utilizzare il parametro di `dwContext` per fornire informazioni sullo stato di avanzamento agli utenti mentre trovato e scaricano i file.  
  
 In questo articolo sono i seguenti argomenti:  
  
-   [Creare un browser molto semplice](#_core_create_a_very_simple_browser)  
  
-   [Scaricare una pagina Web](#_core_download_a_web_page)  
  
-   [FTP un file](#_core_ftp_a_file)  
  
-   [Recuperare una directory di gopher](#_core_retrieve_a_gopher_directory)  
  
-   [Visualizzare informazioni sullo stato di avanzamento mentre contengono i file](#_core_display_progress_information_while_transferring_files)  
  
 Gli estratti di codice riportato di seguito viene illustrato come creare un browser semplice, scaricare una pagina Web, un server FTP un file e una ricerca di un file di gopher.  Permetterne come gli esempi completi e non tutti contengono la gestione delle eccezioni.  
  
 Per ulteriori informazioni su WinInet, vedere [Estensioni internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md).  
  
##  <a name="_core_create_a_very_simple_browser"></a> Creare un browser molto semplice  
 [!code-cpp[NVC_MFCWinInet#1](../mfc/codesnippet/CPP/wininet-basics_1.cpp)]  
  
##  <a name="_core_download_a_web_page"></a> Scaricare una pagina Web  
 [!code-cpp[NVC_MFCWinInet#2](../mfc/codesnippet/CPP/wininet-basics_2.cpp)]  
  
##  <a name="_core_ftp_a_file"></a> FTP un file  
 [!code-cpp[NVC_MFCWinInet#3](../mfc/codesnippet/CPP/wininet-basics_3.cpp)]  
  
##  <a name="_core_retrieve_a_gopher_directory"></a> Recuperare una directory di gopher  
 [!code-cpp[NVC_MFCWinInet#4](../mfc/codesnippet/CPP/wininet-basics_4.cpp)]  
  
## Utilizzare OnStatusCallback  
 Quando si utilizza WinInet classi, è possibile utilizzare il membro di [OnStatusCallback](../Topic/CInternetSession::OnStatusCallback.md) dell'oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md) dell'applicazione per recuperare le informazioni sullo stato.  Se si deriva il proprio oggetto di `CInternetSession`, eseguire l'override di `OnStatusCallback` e si abilita i callback dello stato, MFC chiama la funzione di `OnStatusCallback` con informazioni sullo stato di avanzamento su qualsiasi attività in tale sessione Internet.  
  
 Poiché una singola sessione può supportare diverse connessioni \(che, sulla loro durata, potrebbero eseguire molte operazioni distinte diversi\), `OnStatusCallback` richiede un meccanismo di identificare ogni modifica di stato con una connessione o una transazione particolare.  Questo meccanismo è specificato dal parametro ID del contesto specificato a molte delle funzioni membro delle classi di supporto WinInet.  Questo parametro è sempre di tipo `DWORD` la cartella radice ed `dwContext`.  
  
 Il contesto assegnato a un determinato oggetto internet viene utilizzato per identificare solo l'attività le cause dell'oggetto nel membro di `OnStatusCallback` dell'oggetto di `CInternetSession`.  La chiamata a `OnStatusCallback` riceve diversi parametri; questi parametri vengono utilizzati insieme per indicare all'applicazione che lo sono stati eseguiti per il quale sulla transazione e di connessione.  
  
 Quando si crea un oggetto di `CInternetSession`, è possibile specificare un parametro di `dwContext` al costruttore.  `CInternetSession` stesso non utilizza l'id del contesto; al contrario, passare l'id del contesto rispetto a qualsiasi **InternetConnection**\- oggetti derivati in modo esplicito non vengano un ID di contesto propri.  A sua volta, gli oggetti di `CInternetConnection` passeranno l'id del contesto in avanti agli oggetti di `CInternetFile` creano se in modo esplicito non si specifica un ID diverso di contesto  Se, invece, si specifica un ID di contesto specifico personalizzati, object e tutto il lavoro svolto verrà associato all'identificazione di contesto  È possibile utilizzare il contesto ID per identificare le informazioni sullo stato non fornire un nella funzione di `OnStatusCallback`.  
  
##  <a name="_core_display_progress_information_while_transferring_files"></a> Visualizzare informazioni sullo stato di avanzamento mentre contengono i file  
 Ad esempio, si scrive un'applicazione che crea una connessione a un server FTP per leggere un file e si connette a un server HTTP per ottenere una pagina Web, si otterrà un oggetto di `CInternetSession`, due oggetti di `CInternetConnection` \(uno sarebbe **CFtpSession** e l'altro è **CHttpSession**\) e due oggetti di `CInternetFile` \(uno per ogni connessione\).  Se sono stati utilizzati i valori predefiniti per i parametri di `dwContext`, non è possibile distinguere tra le chiamate di `OnStatusCallback` che indicano lo stato di avanzamento per la connessione a FTP e le chiamate che indicano lo stato della connessione HTTP.  Se si specifica `dwContext` ID, che successivamente è possibile verificare in `OnStatusCallback`, sarà possibile riconoscerlo quale operazione ha generato il callback.  
  
## Vedere anche  
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)   
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)