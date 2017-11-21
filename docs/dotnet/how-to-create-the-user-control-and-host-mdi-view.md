---
title: 'Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- MFC [C++], Windows Forms Controls
- Windows Forms [C++], MFC support
ms.assetid: 625b5821-f923-4701-aca0-c1a4ceca4f63
caps.latest.revision: "25"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 298a08689d6c4aa69d4a52af5fad965e3e353b5c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-create-the-user-control-and-host-mdi-view"></a>Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI
La procedura seguente viene illustrato come creare un controllo utente .NET Framework, modificare il controllo utente in una libreria di classi di controllo (in particolare, un progetto libreria di controlli Windows) e quindi compilare il progetto in un assembly. Il controllo può essere quindi usato da un'applicazione MFC che utilizza le classi derivate da [classe CView](../mfc/reference/cview-class.md) e [classe CWinFormsView](../mfc/reference/cwinformsview-class.md).  
  
 Per informazioni su come creare un controllo utente Windows Form e creare una libreria di classi di controllo, vedere [procedura: creare controlli utente](/dotnet/framework/winforms/controls/how-to-author-composite-controls).  
  
> [!NOTE]
>  In alcuni casi, i controlli Windows Form, ad esempio un controllo griglia di terze parti, potrebbero non funzionare in modo affidabile quando sono ospitati in un'applicazione MFC. Una soluzione consigliata consiste nel posizionare un controllo utente Windows Form nell'applicazione MFC e inserire il controllo griglia di terze parti all'interno del controllo utente.  
  
 Questa procedura si presuppone che sia stato creato un progetto di libreria di controlli Windows Form denominato WindowsFormsControlLibrary1, nella procedura descritta in [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).  
  
### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC  
  
1.  Creare un progetto di applicazione MFC.  
  
     Nel **File** dal menu **New**, quindi fare clic su **progetto**. Nel **Visual C++** cartella, selezionare **applicazione MFC**.  
  
     Nel **nome** immettere `MFC02` e modificare il **soluzione** impostando su **aggiungere alla soluzione**. Fare clic su **OK**.  
  
     Nel **Creazione guidata applicazione MFC**, accettare tutte le impostazioni predefinite e quindi fare clic su **fine**. Consente di creare un'applicazione MFC con interfaccia a documenti multipli.  
  
2.  Configurare il progetto per il supporto Common Language Runtime (CLR).  
  
     In **Esplora**, fare doppio clic su di `MFC01` nodo del progetto e selezionare **proprietà** dal menu di scelta rapida. Il **pagine delle proprietà** viene visualizzata la finestra di dialogo.  
  
     In **le proprietà di configurazione**selezionare **generale**. Sotto il **impostazioni predefinite progetto** sezione, impostare **supporto Common Language Runtime** a **supporto Common Language Runtime (o clr)**.  
  
     In **le proprietà di configurazione**, espandere **C/C++** e fare clic su di **generale** nodo. Impostare **formato informazioni di Debug** a **(/Zi) di Database di programma**.  
  
     Fare clic su di **la generazione di codice** nodo. Impostare **Abilita ricompilazione minima** a **n (o Gm-)**. Impostare inoltre **controlli Runtime di base** a **predefinito**.  
  
     Fare clic su **OK** per applicare le modifiche.  
  
3.  In stdafx. h, aggiungere la riga seguente:  
  
    ```  
    #using <System.Windows.Forms.dll>  
    ```  
  
4.  Aggiungere un riferimento al controllo .NET.  
  
     In **Esplora**, fare doppio clic su di `MFC02` nodo del progetto e selezionare **Aggiungi**, **riferimenti**. Nel **pagina delle proprietà**, fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsFormsControlLibrary1 (sotto il **progetti** scheda), fare clic su **OK** . Verrà aggiunto un riferimento sotto forma di un [/FU](../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore in modo che il programma verrà compilato; Windowsformscontrollibrary1 in copia anche il `MFC02` directory del progetto in modo che il programma verrà eseguito.  
  
5.  In stdafx. h, trovare la riga:  
  
    ```  
    #endif // _AFX_NO_AFXCMN_SUPPORT   
    ```  
  
     Aggiungere queste righe sopra di essa:  
  
    ```  
    #include <afxwinforms.h>   // MFC Windows Forms support  
    ```  
  
6.  Modificare la classe di visualizzazione in modo che erediti da [CWinFormsView](../mfc/reference/cwinformsview-class.md).  
  
     In MFC02View, sostituire [CView](../mfc/reference/cview-class.md) con [CWinFormsView](../mfc/reference/cwinformsview-class.md) in modo che il codice viene visualizzato come segue:  
  
    ```  
    class CMFC02View : public CWinFormsView  
    {  
    };  
    ```  
  
     Se si desidera aggiungere visualizzazioni aggiuntive a un'applicazione MDI, è necessario chiamare [CWinApp:: AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate) per ogni visualizzazione creata.  
  
7.  Modificare il file MFC02View per modificare CView in CWinFormsView nella mappa IMPLEMENT_DYNCREATE (macro) e il messaggio e sostituire il costruttore vuoto esistente con il costruttore illustrato di seguito:  
  
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
  
     In **Esplora**, fare doppio clic su MFC02 e selezionare **imposta come progetto di avvio**.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.  
  
## <a name="see-also"></a>Vedere anche  
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)