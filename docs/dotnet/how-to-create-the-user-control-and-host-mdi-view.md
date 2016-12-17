---
title: "Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC [C++], Controlli per Windows Form"
  - "Windows Form [C++], supporto MFC"
ms.assetid: 625b5821-f923-4701-aca0-c1a4ceca4f63
caps.latest.revision: 25
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nei passaggi riportati di seguito viene illustrato come creare un controllo utente .NET Framework, modificare un controllo utente in una libreria di classi di controlli \(in particolare, in un progetto Libreria di controlli Windows\) e quindi compilare il progetto in un assembly.  Il controllo può quindi essere utilizzato da un'applicazione MFC che utilizza classi derivate da [CView Class](../mfc/reference/cview-class.md) e [CWinFormsView Class](../mfc/reference/cwinformsview-class.md).  
  
 Per informazioni sulla creazione di un controllo utente Windows Form e una libreria di classi di controlli, vedere [Procedura: creare controlli utente](../Topic/How%20to:%20Author%20Composite%20Controls.md).  
  
> [!NOTE]
>  In alcuni casi, è possibile che i controlli Windows Form, ad esempio un controllo griglia di terze parti, presentino un comportamento inaffidabile se inseriti in un'applicazione MFC.  Una soluzione consigliata consiste nell'inserire un controllo utente Windows Form nell'applicazione MFC e quindi inserire il controllo griglia di terze parti all'interno del controllo utente.  
  
 In questa procedura si presuppone che sia stato creato un progetto di libreria di controlli Windows Form denominato WindowsFormsControlLibrary1, come nella procedura descritta in [Procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).  
  
### Per creare l'applicazione host MFC  
  
1.  Creare un progetto di applicazione MFC.  
  
     Dal menu **File** scegliere **Nuovo**, quindi fare clic su **Progetto**.  Nella cartella **Visual C\+\+** selezionare **Applicazione MFC**.  
  
     Nella casella **Nome** immettere `MFC02` e modificare l'impostazione relativa alla **Soluzione** in **Aggiungi soluzione**.  Scegliere **OK**.  
  
     Nella **Creazione guidata applicazione MFC** accettare tutte le impostazioni predefinite e quindi scegliere **Fine**.  Verrà così creata un'applicazione MFC con interfaccia a documenti multipli \(MDI, Multiple Document Interface\).  
  
2.  Configurare il progetto per il supporto di Common Language Runtime \(CLR\).  
  
     In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto `MFC01` e quindi scegliere **Proprietà** dal menu di scelta rapida.  Verrà visualizzata la finestra di dialogo **Pagine delle proprietà**.  
  
     In **Proprietà di configurazione** selezionare **Generale**.  Nella sezione **Impostazioni predefinite progetto** impostare **Supporto Common Language Runtime** su **Supporto Common Language Runtime \(\/clr\)**.  
  
     In **Proprietà di configurazione** espandere **C\/C\+\+** e fare clic sul nodo **Generale**.  Impostare l'opzione **Formato informazioni di debug** su **Database di programma \(\/Zi\)**.  
  
     Fare clic sul nodo **Generazione codice**.  Impostare **Attiva ricompilazione minima** su **No \(\/Gm\-\)**.  Impostare inoltre **Controlli runtime di base** sul valore **Predefinito**.  
  
     Fare clic su **OK** per applicare le modifiche.  
  
3.  In stdafx.h aggiungere la riga seguente:  
  
    ```  
    #using <System.Windows.Forms.dll>  
    ```  
  
4.  Aggiungere un riferimento al controllo .NET.  
  
     In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto `MFC02` e quindi scegliere **Aggiungi**, **Riferimenti**.  In **Pagina delle proprietà** fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsFormsControlLibrary1 nella scheda **Progetti**, quindi fare clic su **OK**.  Viene così aggiunto un riferimento sotto forma di opzione [\/FU](../build/reference/fu-name-forced-hash-using-file.md) del compilatore per la compilazione del programma e viene copiato il file WindowsFormsControlLibrary1.dll nella directory di progetto `MFC02` per l'esecuzione del programma.  
  
5.  In stdafx.h individuare la seguente riga:  
  
    ```  
    #endif // _AFX_NO_AFXCMN_SUPPORT   
    ```  
  
     Aggiungere le seguenti righe sopra di essa:  
  
    ```  
    #include <afxwinforms.h>   // MFC Windows Forms support  
    ```  
  
6.  Modificare la classe di visualizzazione in modo da ereditare da [CWinFormsView](../mfc/reference/cwinformsview-class.md).  
  
     In MFC02View.h, sostituire [CView](../mfc/reference/cview-class.md) con [CWinFormsView](../mfc/reference/cwinformsview-class.md), in modo da ottenere il codice seguente:  
  
    ```  
    class CMFC02View : public CWinFormsView  
    {  
    };  
    ```  
  
     Se si desidera aggiungere ulteriori visualizzazioni all'applicazione MDI, è necessario chiamare [CWinApp::AddDocTemplate](../Topic/CWinApp::AddDocTemplate.md) per ogni visualizzazione creata.  
  
7.  Modificare il file MFC02View.cpp in modo da modificare CView in CWinFormsView nella mappa dei messaggi e nella macro IMPLEMENT\_DYNCREATE e sostituire il costruttore vuoto esistente con il costruttore riportato di seguito:  
  
    ```  
    IMPLEMENT_DYNCREATE(CMFC02View, CWinFormsView)  
  
    CMFC02View::CMFC02View(): CWinFormsView(WindowsFormsControlLibrary1::UserControl1::typeid)   
    {  
    }  
    BEGIN_MESSAGE_MAP(CMFC02View, CWinFormsView)  
    //leave existing body as is  
    END_MESSAGE_MAP()  
    ```  
  
8.  Compilare ed eseguire il progetto.  
  
     In **Esplora soluzioni** fare clic con il pulsante destro del mouse su MFC02 e quindi scegliere **Imposta come progetto di avvio**.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Scegliere **Avvia senza eseguire debug** dal menu **Debug**.  
  
## Vedere anche  
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)