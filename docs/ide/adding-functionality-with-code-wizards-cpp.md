---
title: Aggiunta di funzionalità con creazioni guidate codice (C++)
ms.date: 05/14/2019
helpviewer_keywords:
- code wizards [C++]
ms.assetid: 6afb7ef9-7056-423d-b244-91bb4236d1d7
ms.openlocfilehash: 651eac8c630636455dd1ffa04fdd02b71fa3cf62
ms.sourcegitcommit: 6284bca6549e7b4f199d4560c30df6c1278bd4a0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2020
ms.locfileid: "96188913"
---
# <a name="adding-functionality-with-code-wizards-c"></a>Aggiunta di funzionalità con creazioni guidate codice (C++)

Dopo aver creato un progetto, è possibile effettuare modifiche o aggiunte alla funzionalità del progetto. Tali attività includono la creazione di nuove classi, l'aggiunta di nuove funzioni membro e variabili e l'aggiunta di metodi di automazione e proprietà. Le creazioni guidate codice sono progettate per consentire di effettuare tutte queste operazioni.

> [!NOTE]
> In Visual Studio 2019 le creazioni guidate codice seguenti, usate raramente, sono state rimosse. Il supporto generale per ATL e MFC subisce attualmente l'effetto della rimozione di queste procedure guidate. Il codice di esempio per queste tecnologie è archiviato in Microsoft Docs e nel repository GitHub VCSamples.

- Creazione guidata componente ATL COM+ 1.0
- Creazione guidata componente ASP ATL
- Creazione guidata provider OLE DB ATL
- Creazione guidata pagina delle proprietà ATL
- Creazione guidata consumer OLE DB ATL
- Consumer ODBC MFC
- Classe MFC da controllo ActiveX
- Classe MFC da libreria di tipi.

> [!NOTE]
> È possibile aggiungere gestori di messaggi e mappare messaggi ad essi ed eseguire l'override delle funzioni virtuali MFC utilizzando la [creazione guidata classe MFC](../mfc/reference/mfc-class-wizard.md).

## <a name="accessing-c-code-wizards"></a>Accesso alle creazioni guidate codice C++

È possibile accedere alle creazioni guidate codice C++ in tre modi:

- Nel menu **Progetto** il comando **Aggiungi nuovo elemento** consente di visualizzare la finestra di dialogo `Add New Item` per aggiungere nuovi file al progetto. Il comando **Aggiungi classe** visualizza la finestra di dialogo [Aggiungi classe](./adding-a-class-visual-cpp.md#add-class-dialog-box) che apre le procedure guidate per ogni tipo di classe che è possibile aggiungere al progetto. Per le classi MFC, utilizzare la [creazione guidata classe MFC](../mfc/reference/mfc-class-wizard.md). Il comando **Aggiungi risorsa** visualizza la finestra di dialogo [Aggiungi risorsa](../windows/how-to-create-a-resource-script-file.md) che consente di creare o selezionare una risorsa da aggiungere al progetto.

   Se si seleziona una classe o un'interfaccia nel progetto nella Visualizzazione classi, il menu **Progetto** visualizza anche i comandi seguenti:

  - **Implementa interfaccia** (solo da una classe di controllo)

  - **Aggiungi funzione**

  - **Aggiungi variabile**

  - **Aggiungi punto di connessione** (solo classe ATL)

  - **Aggiungi metodo** (solo da un'interfaccia)

  - **Aggiungi proprietà** (solo da un'interfaccia)

  - **Aggiungi evento** (solo da una classe di controllo)

- In **Esplora soluzioni** è possibile fare clic con il pulsante destro del mouse su una cartella e fare clic su **Aggiungi** dal menu di scelta rapida per aggiungere file nuovi o esistenti, altre cartelle, elementi, classi, risorse e riferimenti Web al progetto.

- Nella [finestra Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) è possibile fare clic con il pulsante destro del mouse sul nodo appropriato e fare clic su **Aggiungi** dal menu di scelta rapida per aggiungere funzioni, variabili, classi, proprietà, metodi, eventi, interfacce, punti di connessione o altro codice al progetto.

   > [!NOTE]
   > In Visual Studio non è disponibile una procedura guidata per l'aggiunta di un'interfaccia a un progetto. È possibile aggiungere un'interfaccia a un progetto ATL o a un'[aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) aggiungendo un oggetto semplice con la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md). In alternativa, aprire il file IDL del progetto e creare l'interfaccia digitando quanto segue:

    ```IDL
    interface IMyInterface {
    };
    ```

   Per altre informazioni, vedere [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md) e [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).

   |Accesso alla creazione guidata codice da|Description|
   |-----------------------------|-----------------|
   |Aggiungi nuovo elemento|Le creazioni guidate codice Aggiungi nuovo elemento consentono di aggiungere i file di origine al progetto. Se necessario, vengono create directory aggiuntive per inserire i file nella posizione in cui il motore di compilazione del progetto prevede di trovarli. Le creazioni guidate codice disponibili dall'icona Aggiungi elemento includono:<br /><br />- Aggiungere file di origine C++ (con estensione cpp, h, idl, rc, srf, def, rgs).<br />- Aggiungere file di sviluppo Web (con estensione html, asp, css, xml).<br />- Aggiungere file di utilità e risorse (con estensione bmp, cur, ico, rct, sql, txt).<br /><br />Le creazioni guidate codice in genere non richiedono l'inserimento di informazioni ma l'aggiunta di un file alla struttura di sviluppo. È possibile rinominare il file nella finestra delle proprietà.|
   |Esplora soluzioni|Le creazioni guidate codice disponibili in Esplora soluzioni variano a seconda della posizione in cui si trova il cursore quando si fa clic su un elemento. Se l'opzione **Aggiungi** non viene visualizzata quando si fa clic con il pulsante destro del mouse su un elemento, spostare il cursore al livello superiore nella struttura di sviluppo e riprovare. Le creazioni guidate codice inseriscono sempre il codice aggiuntivo nella posizione appropriata all'interno della struttura di sviluppo, indipendentemente dalla posizione in cui si trova il cursore. Le creazioni guidate codice disponibili in Esplora soluzioni consentono di:<br /><br />-Aggiungi classe (apre la finestra di dialogo **Aggiungi classe** contenente le creazioni guidate nuove codice).<br />- Aggiungere una risorsa (nuova, importata o personalizzata).<br />- Aggiungere un riferimento Web.|
   |Visualizzazione classi|Le creazioni guidate codice disponibili nella Visualizzazione classi variano a seconda della posizione in cui si trova il cursore quando si fa clic su un elemento. Se l'opzione **Aggiungi** non viene visualizzata quando si fa clic con il pulsante destro del mouse su un elemento, spostare il cursore al livello superiore nella struttura delle classi e riprovare. Le creazioni guidate codice inseriscono sempre il codice aggiuntivo nella posizione appropriata all'interno della struttura di sviluppo, indipendentemente dalla posizione in cui si trova il cursore. Le creazioni guidate codice disponibili nella Visualizzazione classi includono:<br /><br />- [Aggiungi funzione membro](../ide/adding-a-member-function-visual-cpp.md).<br />- [Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md).<br />- [Aggiungi classe](../ide/adding-a-class-visual-cpp.md).<br />- [Implementa interfaccia](./implementing-an-interface-visual-cpp.md#implement-interface-wizard) (solo da una classe di controllo)<br />- [Aggiungi punto di connessione](./implementing-a-connection-point-visual-cpp.md#implement-connection-point-wizard) (solo classe ATL)<br />- [Aggiungi metodo](./adding-a-method-visual-cpp.md#add-method-wizard) (solo da un'interfaccia)<br />- [Aggiungi proprietà](./adding-a-property-visual-cpp.md#names-add-property-wizard) (solo da un'interfaccia)<br />- [Aggiungi evento](./adding-an-event-visual-cpp.md#add-event-wizard) (solo da una classe di controllo)<br /><br />L'opzione Aggiungi classe visualizza la finestra di dialogo **Aggiungi classe** che consente di accedere a tutte le nuove creazioni guidate codice per l'aggiunta di classi.|

## <a name="see-also"></a>Vedere anche

[Override di una funzione virtual](../ide/overriding-a-virtual-function-visual-cpp.md)<br>
[Spostarsi all'interno del codice C++ in Visual Studio](../ide/navigate-code-cpp.md)<br>
[Tipi di progetto C++ in Visual Studio](../build/reference/visual-cpp-project-types.md)<br>
[Tipi di file creati per i progetti di Visual Studio C++](../build/reference/file-types-created-for-visual-cpp-projects.md)
