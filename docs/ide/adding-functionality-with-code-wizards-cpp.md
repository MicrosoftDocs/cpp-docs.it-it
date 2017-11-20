---
title: "Aggiunta di funzionalità con creazioni guidate codice (C++) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.classes
dev_langs: C++
helpviewer_keywords:
- code wizards [C++]
- wizards [C++], code
- Visual C++ projects, adding functionality
- projects [C++], adding functionality
- class wizards [C++]
ms.assetid: 6afb7ef9-7056-423d-b244-91bb4236d1d7
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 53fa4efec4d30753613c02705869c766a5c251eb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="adding-functionality-with-code-wizards-c"></a>Aggiunta di funzionalità con creazioni guidate codice (C++)
Dopo aver creato un progetto, è possibile modificare o aggiungere funzionalità del progetto. Tali attività includono la creazione di nuove classi, aggiunta di nuove funzioni membro e variabili e l'aggiunta di metodi di automazione e proprietà. Le creazioni guidate codice sono progettate per consentire di effettuare tutte queste operazioni.  
  
> [!NOTE]
>  È ora possibile aggiungere gestori di messaggi e associare messaggi ed eseguire l'override di funzioni virtuali MFC mediante la [finestra proprietà](/visualstudio/ide/reference/properties-window).  
  
## <a name="accessing-visual-c-code-wizards"></a>Procedure guidate di accesso al codice Visual C++  
 Sono disponibili tre percorsi in cui è possibile accedere creazioni guidate codice Visual C++:  
  
-   Nel **progetto** dal menu di **Aggiungi nuovo elemento** comando consente di visualizzare il `Add New Item` nella finestra di dialogo in cui è possibile aggiungere nuovi file al progetto. Il **Aggiungi classe** comando Visualizza il [Aggiungi classe](../ide/add-class-dialog-box.md) nella finestra di dialogo che consente di avviare le procedure guidate per ogni classe di tipi, è possibile aggiungere al progetto. Il **Aggiungi risorsa** comando Visualizza il [Aggiungi risorsa](../windows/add-resource-dialog-box.md) della finestra di dialogo da cui è possibile creare o selezionare una risorsa da aggiungere al progetto.  
  
     Se si seleziona una classe o un'interfaccia nel progetto in visualizzazione classi, il **progetto** menu Visualizza anche i comandi seguenti:  
  
    -   **Implementare l'interfaccia** (da una classe solo di controllo)  
  
    -   **Add (funzione)**  
  
    -   **Aggiungi variabile**  
  
    -   **Aggiungere il punto di connessione** (solo da una classe ATL)  
  
    -   **Metodo Add** (solo da un'interfaccia)  
  
    -   **Aggiungere proprietà** (solo da un'interfaccia)  
  
    -   **Aggiungere l'evento** (da una classe solo di controllo)  
  
-   In **Esplora**, facendo clic su qualsiasi cartella e fare clic su **Aggiungi** dal collegamento menu consente di aggiungere file nuovi o esistenti, altre cartelle, gli elementi, classi, le risorse e riferimenti Web per il progetto.  
  
-   Dal [finestra Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), facendo clic sul nodo appropriato e facendo clic su **Aggiungi** dal collegamento menu consente di aggiungere funzioni, variabili, classi, proprietà, metodi, eventi, interfacce, punti di connessione o altro codice al progetto.  
  
    > [!NOTE]
    >  Visual Studio non fornisce una procedura guidata per aggiungere un'interfaccia a un progetto. È possibile aggiungere un'interfaccia a un progetto ATL o a un [aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) mediante l'aggiunta di un oggetto semplice mediante il [guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md). In alternativa, aprire il file IDL del progetto e creare l'interfaccia digitando:  
  
    ```  
    interface IMyInterface {  
    };  
  
    ```  
  
     Vedere [che implementa un'interfaccia](../ide/implementing-an-interface-visual-cpp.md) e [aggiunta di oggetti e i controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) per ulteriori informazioni.  
  
    |Procedura guidata di codice di accesso da|Descrizione|  
    |-----------------------------|-----------------|  
    |Aggiungi nuovo elemento|Le creazioni guidate codice Aggiungi nuovo elemento consente di aggiungere i file di origine al progetto. Se necessario, vengono create directory aggiuntive per i file di cui il motore di compilazione progetto prevede per individuarli. Creazioni guidate codice disponibile dall'icona Aggiungi elemento includono:<br /><br /> -Aggiungere file di origine C++ (. cpp, h, IDL, rc, SRF, def, con estensione RGS).<br />-Aggiungere file di sviluppo Web (HTML, ASP, CSS, con estensione XML).<br />-Aggiungere utilità e file di risorse (file con estensione bmp, cur, ico, RCT, con estensione SQL, con estensione txt).<br /><br /> Queste procedure guidate di codice in genere non è necessario per tutte le informazioni ma è aggiungere un file alla struttura ad albero di sviluppo. È possibile rinominare il file nella finestra delle proprietà.|  
    |Esplora soluzioni|Le creazioni guidate codice disponibili in Esplora soluzioni variano a seconda di dove si trova il cursore è quando si fa clic su un elemento. Se il **Aggiungi** opzione non viene visualizzata quando si fa clic su un elemento, quindi spostare il cursore al superiore livello nella struttura di sviluppo e riprovare. Le creazioni guidate codice saranno possibile inserire il codice aggiuntivo nella posizione appropriata all'interno della struttura di sviluppo, indipendentemente in cui il cursore si trova. Creazioni guidate codice disponibili in Esplora soluzioni includono:<br /><br /> -Aggiungere classe (apre il **Aggiungi classe** la finestra di dialogo contenente le creazioni guidate codice nuovo).<br />-Aggiungi risorsa (nuovo, importare o personalizzato).<br />-Aggiungi riferimento Web.|  
    |Visualizzazione classi|Le creazioni guidate codice disponibile in visualizzazione classi variano a seconda di dove si trova il cursore è quando si destro del mouse su un elemento. Se il **Aggiungi** opzione non viene visualizzata quando si destro fare clic su un elemento, quindi spostare il cursore al superiore livello nella struttura della classe e riprovare. Le creazioni guidate codice saranno possibile inserire il codice aggiuntivo nella posizione appropriata all'interno della struttura di sviluppo, indipendentemente in cui il cursore si trova. Creazioni guidate codice disponibile in visualizzazione classi includono:<br /><br /> -   [Aggiungere la funzione membro](../ide/adding-a-member-function-visual-cpp.md).<br />-   [Aggiungere una variabile membro](../ide/adding-a-member-variable-visual-cpp.md).<br />-   [Aggiungi classe](../ide/adding-a-class-visual-cpp.md).<br />-   [Implementare l'interfaccia](../ide/implement-interface-wizard.md) (da una classe solo di controllo)<br />-   [Aggiungere il punto di connessione](../ide/implement-connection-point-wizard.md) (solo da una classe ATL)<br />-   [Metodo Add](../ide/add-method-wizard.md) (solo da un'interfaccia)<br />-   [Aggiungere proprietà](../ide/names-add-property-wizard.md) (solo da un'interfaccia)<br />-   [Aggiungere l'evento](../ide/add-event-wizard.md) (da una classe solo di controllo)<br /><br /> Verrà visualizzata la selezione di Aggiungi classe di **Aggiungi classe** nella finestra di dialogo consente di accedere a tutte le nuove creazioni guidate codice Aggiungi classe.|  
  
## <a name="see-also"></a>Vedere anche  
 [Una funzione Virtual in override](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Esplorazione della struttura di classe](../ide/navigating-the-class-structure-visual-cpp.md)   
 [Creazione di progetti Desktop mediante creazioni guidate applicazione](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Tipi di progetto di Visual C++](../ide/visual-cpp-project-types.md)   
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)