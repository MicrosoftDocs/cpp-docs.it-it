---
title: Aggiunta di funzionalità con creazioni guidate codice (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.classes
dev_langs:
- C++
helpviewer_keywords:
- code wizards [C++]
- wizards [C++], code
- Visual C++ projects, adding functionality
- projects [C++], adding functionality
- class wizards [C++]
ms.assetid: 6afb7ef9-7056-423d-b244-91bb4236d1d7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 13d163ad8de9ef3ee6c8c1375c234a412c70de7d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43213136"
---
# <a name="adding-functionality-with-code-wizards-c"></a>Aggiunta di funzionalità con creazioni guidate codice (C++)
Dopo aver creato un progetto, è possibile effettuare modifiche o aggiunte alla funzionalità del progetto. Tali attività includono la creazione di nuove classi, l'aggiunta di nuove funzioni membro e variabili e l'aggiunta di metodi di automazione e proprietà. Le creazioni guidate codice sono progettate per consentire di effettuare tutte queste operazioni.  
  
> [!NOTE]
>  È ora possibile aggiungere gestori di messaggi e associare messaggi ed eseguire l'override di funzioni virtuali MFC mediante la [finestra Proprietà](/visualstudio/ide/reference/properties-window).  
  
## <a name="accessing-visual-c-code-wizards"></a>Accesso alle creazioni guidate codice di Visual C++  
 È possibile accedere alle creazioni guidate codice di Visual C++ in tre modi:  
  
-   Nel menu **Progetto** il comando **Aggiungi nuovo elemento** consente di visualizzare la finestra di dialogo `Add New Item` per aggiungere nuovi file al progetto. Il comando **Aggiungi classe** visualizza la finestra di dialogo [Aggiungi classe](../ide/add-class-dialog-box.md) che apre le procedure guidate per ogni tipo di classe che è possibile aggiungere al progetto. Il comando **Aggiungi risorsa** visualizza la finestra di dialogo [Aggiungi risorsa](../windows/add-resource-dialog-box.md) che consente di creare o selezionare una risorsa da aggiungere al progetto.  
  
     Se si seleziona una classe o un'interfaccia nel progetto nella Visualizzazione classi, il menu **Progetto** visualizza anche i comandi seguenti:  
  
    -   **Implementa interfaccia** (solo da una classe di controllo)  
  
    -   **Aggiungi funzione**  
  
    -   **Aggiungi variabile**  
  
    -   **Aggiungi punto di connessione** (solo classe ATL)  
  
    -   **Aggiungi metodo** (solo da un'interfaccia)  
  
    -   **Aggiungi proprietà** (solo da un'interfaccia)  
  
    -   **Aggiungi evento** (solo da una classe di controllo)  
  
-   In **Esplora soluzioni** è possibile fare clic con il pulsante destro del mouse su una cartella e fare clic su **Aggiungi** dal menu di scelta rapida per aggiungere file nuovi o esistenti, altre cartelle, elementi, classi, risorse e riferimenti Web al progetto.  
  
-   Nella [finestra Visualizzazione classi](https://msdn.microsoft.com/8d7430a9-3e33-454c-a9e1-a85e3d2db925) è possibile fare clic con il pulsante destro del mouse sul nodo appropriato e fare clic su **Aggiungi** dal menu di scelta rapida per aggiungere funzioni, variabili, classi, proprietà, metodi, eventi, interfacce, punti di connessione o altro codice al progetto.  
  
    > [!NOTE]
    >  In Visual Studio non è disponibile una procedura guidata per l'aggiunta di un'interfaccia a un progetto. È possibile aggiungere un'interfaccia a un progetto ATL o a un'[aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) aggiungendo un oggetto semplice con la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md). In alternativa, aprire il file IDL del progetto e creare l'interfaccia digitando quanto segue:  
  
    ```  
    interface IMyInterface {  
    };  
  
    ```  
  
     Per altre informazioni, vedere [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md) e [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).  
  
    |Accesso alla creazione guidata codice da|Descrizione|  
    |-----------------------------|-----------------|  
    |Aggiungi nuovo elemento|Le creazioni guidate codice Aggiungi nuovo elemento consentono di aggiungere i file di origine al progetto. Se necessario, vengono create directory aggiuntive per inserire i file nella posizione in cui il motore di compilazione del progetto prevede di trovarli. Le creazioni guidate codice disponibili dall'icona Aggiungi elemento includono:<br /><br /> -   Aggiungere file di origine C++ (con estensione cpp, h, idl, rc, srf, def, rgs).<br />-   Aggiungere file di sviluppo Web (con estensione html, asp, css, xml).<br />-   Aggiungere file di utilità e risorse (con estensione bmp, cur, ico, rct, sql, txt).<br /><br /> Le creazioni guidate codice in genere non richiedono l'inserimento di informazioni ma l'aggiunta di un file alla struttura di sviluppo. È possibile rinominare il file nella finestra delle proprietà.|  
    |Esplora soluzioni|Le creazioni guidate codice disponibili in Esplora soluzioni variano a seconda della posizione in cui si trova il cursore quando si fa clic su un elemento. Se l'opzione **Aggiungi** non viene visualizzata quando si fa clic con il pulsante destro del mouse su un elemento, spostare il cursore al livello superiore nella struttura di sviluppo e riprovare. Le creazioni guidate codice inseriscono sempre il codice aggiuntivo nella posizione appropriata all'interno della struttura di sviluppo, indipendentemente dalla posizione in cui si trova il cursore. Le creazioni guidate codice disponibili in Esplora soluzioni consentono di:<br /><br /> -   Aggiungere una classe (aprire la finestra di dialogo **Aggiungi classe** contenente le creazioni guidate codice).<br />-   Aggiungere una risorsa (nuova, importata o personalizzata).<br />-   Aggiungere un riferimento Web.|  
    |Visualizzazione classi|Le creazioni guidate codice disponibili nella Visualizzazione classi variano a seconda della posizione in cui si trova il cursore quando si fa clic su un elemento. Se l'opzione **Aggiungi** non viene visualizzata quando si fa clic con il pulsante destro del mouse su un elemento, spostare il cursore al livello superiore nella struttura delle classi e riprovare. Le creazioni guidate codice inseriscono sempre il codice aggiuntivo nella posizione appropriata all'interno della struttura di sviluppo, indipendentemente dalla posizione in cui si trova il cursore. Le creazioni guidate codice disponibili nella Visualizzazione classi includono:<br /><br /> -   [Aggiungi funzione membro](../ide/adding-a-member-function-visual-cpp.md).<br />-   [Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md).<br />-   [Aggiungi classe](../ide/adding-a-class-visual-cpp.md).<br />-   [Implementa interfaccia](../ide/implement-interface-wizard.md) (solo da una classe di controllo)<br />-   [Aggiungi punto di connessione](../ide/implement-connection-point-wizard.md) (solo classe ATL)<br />-   [Aggiungi metodo](../ide/add-method-wizard.md) (solo da un'interfaccia)<br />-   [Aggiungi proprietà](../ide/names-add-property-wizard.md) (solo da un'interfaccia)<br />-   [Aggiungi evento](../ide/add-event-wizard.md) (solo da una classe di controllo)<br /><br /> L'opzione Aggiungi classe visualizza la finestra di dialogo **Aggiungi classe** che consente di accedere a tutte le nuove creazioni guidate codice per l'aggiunta di classi.|  
  
## <a name="see-also"></a>Vedere anche  
 [Override di una funzione virtual](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)   
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Tipi di progetto Visual C++](../ide/visual-cpp-project-types.md)   
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)