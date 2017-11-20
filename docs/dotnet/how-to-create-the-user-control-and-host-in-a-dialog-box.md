---
title: 'Procedura: creare il controllo utente e inserirlo in una finestra di dialogo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- MFC [C++], hosting a Windows Forms Control
- Windows Forms [C++], MFC support
ms.assetid: 03a53032-2f03-4fa2-b567-031615a26011
caps.latest.revision: "29"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cf0372029a6f6f3c2e2d3030d9e04ddcf6483f14
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-create-the-user-control-and-host-in-a-dialog-box"></a>Procedura: creare il controllo utente e inserirlo in una finestra di dialogo
I passaggi descritti in questo articolo si presuppongono che si sta creando una finestra di dialogo basate su ([CDialog (classe)](../mfc/reference/cdialog-class.md)) progetto Microsoft Foundation Classes (MFC), ma è possibile anche aggiungere il supporto per un controllo Windows Form per la finestra di dialogo MFC esistente.  
  
### <a name="to-create-the-net-user-control"></a>Per creare il controllo utente .NET  
  
1.  Creare un progetto libreria di controlli Windows Form di Visual c# denominato `WindowsFormsControlLibrary1`.  
  
     Scegliere **Nuovo** dal menu **File** , quindi fare clic su **Progetto**. Nel **Visual c#** cartella, selezionare **libreria di controlli Windows Form**.  
  
     Accettare il `WindowsFormsControlLibrary1` nome del progetto, fare clic su **OK**.  
  
     Per impostazione predefinita, il nome del controllo .NET sarà `UserControl1`.  
  
2.  Aggiungere i controlli figlio per `UserControl1`.  
  
     Nel **della casella degli strumenti**, aprire il **tutti i Windows Form** elenco. Trascinare un **pulsante** controllo il `UserControl1` area di progettazione.  
  
     Aggiungere anche un **TextBox** controllo.  
  
3.  In **Esplora**, fare doppio clic su **UserControl1. Designer.cs** per aprirlo e modificarlo. Modificare le dichiarazioni di casella di testo e il pulsante da `private` a `public`.  
  
4.  Compilare il progetto.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC  
  
1.  Creare un progetto di applicazione MFC.  
  
     Scegliere **Nuovo** dal menu **File** , quindi fare clic su **Progetto**. Nel **Visual C++** cartella, selezionare **applicazione MFC**.  
  
     Nella casella **Nome** digitare `MFC01`. Modificare l'impostazione relativa alla soluzione **aggiungere alla soluzione**. Fare clic su **OK**.  
  
     Nel **Creazione guidata applicazione MFC**, selezionare il tipo di applicazione, **basato su finestra di dialogo**. Accettare le impostazioni predefinite rimanenti e fare clic su **fine**. Verrà creata un'applicazione MFC che dispone di una finestra di dialogo MFC.  
  
2.  Aggiungere un controllo segnaposto per la finestra di dialogo MFC.  
  
     Nel **vista** menu, fare clic su **visualizzazione risorse**. In **visualizzazione risorse**, espandere il **finestra di dialogo** cartella e fare doppio clic su `IDD_MFC01_DIALOG`. La risorsa finestra di dialogo viene visualizzata **Editor risorse**.  
  
     Nel **della casella degli strumenti**, aprire il **finestra di dialogo Editor** elenco. Trascinare un **testo statico** controllo risorsa finestra di dialogo. Il **testo statico** controllo verrà utilizzato come segnaposto per il controllo Windows Form .NET. Ridimensionarlo approssimativamente alle dimensioni del controllo Windows Form.  
  
     Nel **proprietà** finestra, modifica il **ID** del **testo statico** il controllo a `IDC_CTRL1` e modificare il **TabStop** proprietà **True**.  
  
3.  Configurare il progetto per il supporto Common Language Runtime (CLR).  
  
     In **Esplora**, fare doppio clic sul nodo MFC01 del progetto e quindi fare clic su **proprietà**.  
  
     Nel **pagine delle proprietà** nella finestra di dialogo **le proprietà di configurazione**selezionare **generale**. Nel **impostazioni predefinite progetto** sezione, impostare **supporto Common Language Runtime** a **supporto Common Language Runtime (o clr)**.  
  
     In **le proprietà di configurazione**, espandere **C/C++** e selezionare il **generale** nodo. Impostare **formato informazioni di Debug** a **(/Zi) di Database di programma**.  
  
     Selezionare il **la generazione di codice** nodo. Impostare **Abilita ricompilazione minima** a **n (o Gm-)**. Impostare inoltre **controlli Runtime di base** a **predefinito**.  
  
     Fare clic su **OK** per applicare le modifiche.  
  
4.  Aggiungere un riferimento al controllo .NET.  
  
     In **Esplora**, fare doppio clic sul nodo MFC01 del progetto e quindi fare clic su **Aggiungi**, **riferimenti**. Nel **pagina delle proprietà**, fare clic su **Aggiungi nuovo riferimento**, selezionare **WindowsFormsControlLibrary1** (sotto il **progetti** scheda), fare clic su **OK**. Aggiungere un riferimento sotto forma di un [/FU](../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore in modo che il programma verrà compilato. Inoltre inserisce una copia di Windowsformscontrollibrary1 nella cartella del progetto \MFC01\ in modo che il programma verrà eseguito.  
  
5.  In stdafx. h, trovare la riga:  
  
    ```  
    #endif // _AFX_NO_AFXCMN_SUPPORT   
    ```  
  
     Di sopra, aggiungere le righe seguenti:  
  
    ```  
    #include <afxwinforms.h>   // MFC Windows Forms support  
    ```  
  
6.  Aggiungere il codice per creare il controllo gestito.  
  
     Innanzitutto, dichiarare il controllo gestito. In MFC01Dlg, Vai a dichiarazione della classe di finestra di dialogo e aggiungere un membro dati per il controllo utente nell'ambito protetto, come indicato di seguito.  
  
    ```  
    class CMFC01Dlg : public CDialog  
    {  
       // ...  
       // Data member for the .NET User Control:  
       CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_ctrl1;  
    ```  
  
     Successivamente, fornire un'implementazione per il controllo gestito. In MFC01Dlg. cpp, nella finestra di dialogo esegue l'override di `CMFC01Dlg::DoDataExchange` che è stato generato dalla creazione guidata applicazione MFC (non `CAboutDlg::DoDataExchange`, ovvero nello stesso file), aggiungere il codice seguente per creare il controllo gestito e associarlo a statico IDC_CTRL1.  
  
    ```  
    void CMFC01Dlg::DoDataExchange(CDataExchange* pDX)  
    {  
       CDialog::DoDataExchange(pDX);  
       DDX_ManagedControl(pDX, IDC_CTRL1, m_ctrl1);  
    }  
    ```  
  
7.  Compilare ed eseguire il progetto.  
  
     In **Esplora**, fare doppio clic su **MFC01** e quindi fare clic su **imposta come progetto di avvio**.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**. La finestra di dialogo MFC deve essere visualizzato il controllo Windows Form.  
  
## <a name="see-also"></a>Vedere anche  
 [Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)