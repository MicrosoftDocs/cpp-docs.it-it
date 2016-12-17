---
title: "Procedura: creare il controllo utente e inserirlo in una finestra di dialogo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "MFC [C++], inserimento di controlli Windows Form"
  - "Windows Form [C++], supporto MFC"
ms.assetid: 03a53032-2f03-4fa2-b567-031615a26011
caps.latest.revision: 29
caps.handback.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: creare il controllo utente e inserirlo in una finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I passaggi di questo articolo presuppongono la creazione di un nuovo progetto basato su finestra di dialogo \([CDialog Class](../mfc/reference/cdialog-class.md)\) Microsoft Foundation Classes \(MFC\), ma è possibile anche aggiungere il supporto per un controllo Windows Form a una finestra di dialogo MFC esistente.  
  
### Per creare il controllo utente .NET  
  
1.  Creare un progetto Libreria di controlli Windows Form di Visual C\# denominato `WindowsFormsControlLibrary1`.  
  
     Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  Nella cartella **Visual C\#** selezionare l'icona **Libreria di controlli Windows Forms**.  
  
     Accettare il nome di progetto predefinito `WindowsFormsControlLibrary1` scegliendo **OK**.  
  
     Per impostazione predefinita, il nome del controllo .NET sarà `UserControl1`.  
  
2.  Aggiungere controlli figlio a `UserControl1`.  
  
     Nella **Casella degli strumenti** aprire l'elenco **Tutti i Windows Form**.  Trascinare un controllo **Button** nell'area di progettazione `UserControl1`.  
  
     Aggiungere inoltre un controllo **TextBox**.  
  
3.  In **Esplora soluzioni** fare doppio clic su **UserControl1.Designer.cs** per aprirlo per la modifica.  Modificare le dichiarazioni dei controlli TextBox e Button da `private` a `public`.  
  
4.  Compilare il progetto.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
### Per creare l'applicazione host MFC  
  
1.  Creare un progetto di applicazione MFC.  
  
     Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  Nella cartella **Visual C\+\+** selezionare **Applicazione MFC**.  
  
     Digitare `MFC01` nella casella **Nome**.  Modificare l'impostazione relativa alla soluzione in **Aggiungi a soluzione**.  Scegliere **OK**.  
  
     Nella **Creazione guidata applicazione MFC** selezionare il tipo di applicazione **Basato su finestra di dialogo**.  Accettare le impostazioni predefinite rimanenti e scegliere **Fine**.  Verrà creata un'applicazione MFC che dispone di una finestra di dialogo MFC.  
  
2.  Aggiungere un controllo segnaposto alla finestra di dialogo MFC.  
  
     Scegliere **Visualizzazione risorse** dal menu **Visualizza**.  In **Visualizzazione risorse**, espandere la cartella **Finestra di dialogo** e fare doppio clic su `IDD_MFC01_DIALOG`.  La finestra di dialogo verrà visualizzata in **Editor risorse**.  
  
     Nella **Casella degli strumenti** aprire l'elenco **Editor finestre**.  Trascinare un **Testo statico** nella risorsa finestra di dialogo.  Il controllo di **Testo statico** fungerà da segnaposto per il controllo Windows Form .NET.  Eseguirne il ridimensionamento in base alla dimensione del controllo Windows Form.  
  
     Nella finestra **Proprietà**, modificare l'**ID** del controllo **Testo statico** in `IDC_CTRL1` e modificare il valore della proprietà **TabStop** in **True**.  
  
3.  Configurare il progetto per il supporto di Common Language Runtime \(CLR\).  
  
     In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo MFC01 del progetto, quindi scegliere **Proprietà**.  
  
     Nella finestra di dialogo **Pagine delle proprietà**, sotto **Proprietà di configurazione**, selezionare **Generale**.  Nella sezione **Impostazioni predefinite progetto** impostare **Supporto Common Language Runtime** su **Supporto Common Language Runtime \(\/clr\)**.  
  
     In **Proprietà di configurazione** espandere **C\/C\+\+** e selezionare il nodo **Generale**.  Impostare l'opzione **Formato informazioni di debug** su **Database di programma \(\/Zi\)**.  
  
     Selezionare il nodo **Generazione codice**.  Impostare **Attiva ricompilazione minima** su **No \(\/Gm\-\)**.  Impostare inoltre **Controlli runtime di base** sul valore **Predefinito**.  
  
     Fare clic su **OK** per applicare le modifiche.  
  
4.  Aggiungere un riferimento al controllo .NET.  
  
     In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo MFC01 del progetto, quindi scegliere **Aggiungi**, **Riferimenti**.  Nella **Pagina delle proprietà** scegliere **Aggiungi nuovo riferimento**, selezionare **WindowsFormsControlLibrary1** nella scheda **Progetti** e quindi scegliere **OK**.  Aggiungere un riferimento sotto forma di opzione [\/FU](../build/reference/fu-name-forced-hash-using-file.md) del compilatore in modo che il programma esegua la compilazione.  Inserire anche una copia di WindowsFormsControlLibrary1.dll nella cartella del progetto \\MFC01\\ in modo che il programma venga eseguito.  
  
5.  In Stdafx.h individuare la riga seguente:  
  
    ```  
    #endif // _AFX_NO_AFXCMN_SUPPORT   
    ```  
  
     Aggiungere le seguenti righe sopra di essa:  
  
    ```  
    #include <afxwinforms.h>   // MFC Windows Forms support  
    ```  
  
6.  Aggiungere il codice per la creazione del controllo gestito.  
  
     Dichiarare innanzitutto il controllo gestito.  In MFC01Dlg.h passare alla dichiarazione della classe di finestre di dialogo e aggiungere un membro dati per il controllo utente nell'ambito protetto, come segue:  
  
    ```  
    class CMFC01Dlg : public CDialog  
    {  
       // ...  
       // Data member for the .NET User Control:  
       CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_ctrl1;  
    ```  
  
     Fornire quindi un'implementazione per il controllo gestito.  In MFC01Dlg.cpp, nell'override della finestra di dialogo di `CMFC01Dlg::DoDataExchange` generato dalla Creazione guidata applicazione MFC \(non `CAboutDlg::DoDataExchange`, contenuto nello stesso file\), aggiungere il codice riportato di seguito per creare il controllo gestito e associarlo al segnaposto statico IDC\_CTRL1:  
  
    ```  
    void CMFC01Dlg::DoDataExchange(CDataExchange* pDX)  
    {  
       CDialog::DoDataExchange(pDX);  
       DDX_ManagedControl(pDX, IDC_CTRL1, m_ctrl1);  
    }  
    ```  
  
7.  Compilare ed eseguire il progetto.  
  
     In **Esplora soluzioni** fare clic con il pulsante destro del mouse su **MFC01**, quindi scegliere **Imposta come progetto di avvio**.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Scegliere **Avvia senza eseguire debug** dal menu **Debug**.  La finestra di dialogo MFC dovrebbe visualizzare il controllo Windows Form.  
  
## Vedere anche  
 [Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)