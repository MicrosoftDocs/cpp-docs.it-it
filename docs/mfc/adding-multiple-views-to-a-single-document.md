---
title: "Aggiunta di pi&#249; visualizzazioni a un singolo documento | Microsoft Docs"
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
  - "documenti, visualizzazioni multiple"
  - "visualizzazioni multiple, SDI (applicazioni)"
  - "Single Document Interface (SDI), aggiunta di visualizzazioni"
  - "visualizzazioni, SDI (applicazioni)"
ms.assetid: 86d0c134-01d5-429c-b672-36cfb956dc01
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di pi&#249; visualizzazioni a un singolo documento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In un'applicazione di \(SDI\) di Single Document Interface\) creata con la libreria MFC \(Microsoft Foundation classes \(MFC\), ogni tipo di documento associato a un singolo tipo di visualizzazione.  In alcuni casi, può essere utile avere la possibilità di passare la visualizzazione corrente di un documento con una nuova visualizzazione.  
  
> [!TIP]
>  Per le procedure aggiuntive sull'implementazione più visualizzazioni in un documento, vedere [CDocument::AddView](../Topic/CDocument::AddView.md) e l'esempio di [In COLLECT](../top/visual-cpp-samples.md) MFC.  
  
 È possibile implementare questa funzionalità aggiungendo nuovo `CView`\- classe derivata e altro codice per passare le visualizzazioni in modo dinamico a un'applicazione MFC esistente.  
  
 La procedura è la seguente:  
  
-   [Modificare la classe di applicazione esistente](#vcconmodifyexistingapplicationa1)  
  
-   [Creare e modificare la nuova classe di visualizzazione](#vcconnewviewclassa2)  
  
-   [Creare e collegare la nuova visualizzazione](#vcconattachnewviewa3)  
  
-   [Implementare la funzione di commutazione](#vcconswitchingfunctiona4)  
  
-   [Aggiungere il supporto per alternare la visualizzazione](#vcconswitchingtheviewa5)  
  
 In questo argomento si presuppone la seguente:  
  
-   Il nome di `CWinApp`l'oggetto derivato è `CMyWinApp` e `CMyWinApp` è dichiarata e definita in MYWINAPP.H e in MYWINAPP.CPP.  
  
-   `CNewView` è il nome di un `CView`l'oggetto derivato e `CNewView` è dichiarata e definita in NEWVIEW.H e in NEWVIEW.CPP.  
  
##  <a name="vcconmodifyexistingapplicationa1"></a> Modificare la classe di applicazione esistente  
 Affinché l'applicazione di passare tra le visualizzazioni, è necessario modificare la classe di applicazione aggiungendo le variabili membro per archiviare le visualizzazioni e un metodo per passare.  
  
 Aggiungere il seguente codice alla dichiarazione di `CMyWinApp` in MYWINAPP.H:  
  
 [!code-cpp[NVC_MFCDocViewSDI#1](../mfc/codesnippet/CPP/adding-multiple-views-to-a-single-document_1.h)]  
  
 Nuove variabili membro, `m_pOldView` e `m_pNewView`, selezionare la visualizzazione corrente e quello appena creato.  Il nuovo metodo \(`SwitchView`\) passa le visualizzazioni quando richiesto dall'utente.  Il corpo del metodo viene illustrata più avanti in questo argomento in [Implementare la funzione di commutazione](#vcconswitchingfunctiona4).  
  
 L'ultima modifica alla classe dell'applicazione richiede incluso un nuovo file di intestazione che definisce un messaggio di windows \(**WM\_INITIALUPDATE**\) utilizzato nella funzione di commutazione.  
  
 Incollare la riga seguente nella sezione include di MYWINAPP.CPP:  
  
 [!code-cpp[NVC_MFCDocViewSDI#2](../mfc/codesnippet/CPP/adding-multiple-views-to-a-single-document_2.cpp)]  
  
 Salvare le modifiche e continuare con il passaggio successivo.  
  
##  <a name="vcconnewviewclassa2"></a> Creare e modificare la nuova classe di visualizzazione  
 Creare una nuova classe di visualizzazione viene reso semplice tramite il comando di **Nuova classe** disponibile in Visualizzazione classi.  L'unico requisito per questa classe è che deriva da `CView`.  Aggiungere questa nuova classe all'applicazione.  Per informazioni specifiche sull'aggiunta di una nuova classe al progetto, vedere [Aggiunta di un classe](../ide/adding-a-class-visual-cpp.md).  
  
 Dopo aver aggiunto la classe al progetto, è necessario modificare l'accessibilità di alcuni membri della classe di visualizzazione.  
  
 Modificare NEWVIEW.H modificando l'identificatore di accesso da `protected` a **public** per il costruttore e il distruttore.  In questo modo la classe da creare dinamicamente e distruzione e modificare l'aspetto di visualizzazione prima che sia visibile.  
  
 Salvare le modifiche e continuare con il passaggio successivo.  
  
##  <a name="vcconattachnewviewa3"></a> Creare e collegare la nuova visualizzazione  
 Per creare e associare la nuova visualizzazione, è necessario modificare la funzione di `InitInstance` dell'applicazione.  La modifica aggiungi nuovo codice che crea un nuovo oggetto visualizzazione quindi inizializza sia `m_pOldView` che `m_pNewView` con i due oggetti visualizzazione esistenti.  
  
 Poiché la nuova visualizzazione viene creata all'interno della funzione di `InitInstance`, sia il nuovo visualizzate esistenti vengono mantenuti per la durata dell'applicazione.  Tuttavia, l'applicazione potrebbe ad esempio possibile creare dinamicamente solo la nuova visualizzazione.  
  
 Incollare il codice dopo la chiamata a `ProcessShellCommand`:  
  
 [!code-cpp[NVC_MFCDocViewSDI#3](../mfc/codesnippet/CPP/adding-multiple-views-to-a-single-document_3.cpp)]  
  
 Salvare le modifiche e continuare con il passaggio successivo.  
  
##  <a name="vcconswitchingfunctiona4"></a> Implementare la funzione di commutazione  
 Nel passaggio precedente, è stato aggiunto il codice che ha creato e inizializzato un nuovo oggetto visualizzazione.  L'ultimo parte principale è l'implementazione del metodo di commutazione, `SwitchView`.  
  
 Alla fine del file di implementazione per la classe dell'applicazione \(MYWINAPP.CPP\), aggiungere la seguente definizione di metodo:  
  
 [!code-cpp[NVC_MFCDocViewSDI#4](../mfc/codesnippet/CPP/adding-multiple-views-to-a-single-document_4.cpp)]  
  
 Salvare le modifiche e continuare con il passaggio successivo.  
  
##  <a name="vcconswitchingtheviewa5"></a> Aggiungere il supporto per alternare la visualizzazione  
 Il passaggio finale consiste nell'aggiungere il codice che chiama il metodo di `SwitchView` quando l'applicazione deve passare tra le visualizzazioni.  Questa operazione può essere eseguita in diversi modi: aggiunta di una nuova voce di menu per la scelta dell'utente o passando le visualizzazioni internamente quando determinate condizioni sono soddisfatte.  
  
 Per ulteriori informazioni sull'aggiunta di voci di menu e delle nuove funzioni del gestore comando, vedere [Gestori per i controlli e le notifiche di controllo](../mfc/handlers-for-commands-and-control-notifications.md).  
  
## Vedere anche  
 [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)