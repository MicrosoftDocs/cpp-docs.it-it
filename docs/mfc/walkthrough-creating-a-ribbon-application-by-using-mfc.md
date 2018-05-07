---
title: "Procedura dettagliata: Creazione di un'applicazione barra multifunzione utilizzando MFC | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ribbon application, creating (MFC)
- creating a ribbon aplication (MFC)
ms.assetid: e61393e2-1d6b-4594-a7ce-157d3d1b0d9f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f715830c110f03811202d2e98dc097bfe712208
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="walkthrough-creating-a-ribbon-application-by-using-mfc"></a>Procedura dettagliata: creazione di un'applicazione barra multifunzione utilizzando MFC
Questa procedura dettagliata viene illustrato come utilizzare il **Creazione guidata applicazione MFC** per creare un'applicazione che dispone di una barra multifunzione per impostazione predefinita. È quindi possibile espandere la barra multifunzione aggiungendo una **personalizzato** categoria della barra multifunzione contenente un **Preferiti** pannello, e aggiungendo alcuni comandi al pannello utilizzati frequentemente.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Questa procedura dettagliata si presuppone di avere impostato [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] utilizzare **impostazioni generali per lo sviluppo**. Se utilizzi impostazioni diverse, è possibile che alcuni elementi dell'interfaccia utente a cui viene fatto riferimento nelle istruzioni seguenti non vengano visualizzati. Per informazioni su come modificare le impostazioni, vedere [procedura: reimpostare le impostazioni di](http://msdn.microsoft.com/en-us/c95c51be-e609-4769-abba-65e6beedec76).  
  
### <a name="to-create-an-mfc-application-that-has-a-ribbon"></a>Per creare un'applicazione MFC con una barra multifunzione  
  
1.  Utilizzare il **Creazione guidata applicazione MFC** per creare un'applicazione MFC con una barra multifunzione. Per eseguire la procedura guidata, scegli il **File** dal menu **New**, quindi fare clic su **progetto**.  
  
2.  Nel **nuovo progetto** finestra di dialogo espandere il **Visual C++** nodo **modelli installati**selezionare **MFC**e quindi selezionare  **Applicazione MFC**. Digitare un nome per il progetto, ad esempio, `MFCRibbonApp`, quindi fare clic su **OK**.  
  
3.  Nella prima pagina del **Creazione guidata applicazione MFC**, fare clic su **Avanti**.  
  
4.  Nel **tipo di applicazione** pagina **dello stile di visualizzazione e colori**selezionare **Office 2007 (tema blu)**. Lascia invariate le altre impostazioni. Scegliere **Avanti**.  
  
5.  Nel **supporto documenti compositi** pagina, assicurarsi che **Nessuno** è selezionata e quindi fare clic su **Avanti**.  
  
6.  Nel **proprietà modello documento** nella pagina di **estensione di File** , digitare un'estensione per i documenti che crea l'applicazione, ad esempio, `mfcrbnapp`. Scegliere **Avanti**.  
  
7.  Nel **supporto Database** pagina, assicurarsi che **Nessuno** è selezionata e quindi fare clic su **Avanti**.  
  
8.  Nel **funzionalità dell'interfaccia utente** pagina, assicurarsi che **utilizzare una barra multifunzione** è selezionata. Scegliere **Avanti**.  
  
9. Per impostazione predefinita, il **Creazione guidata applicazione MFC** aggiunge il supporto per diversi riquadri ancorati. Dal momento che questa procedura dettagliata fornisce informazioni unicamente sulla barra multifunzione, puoi rimuovere tali opzioni dall'applicazione. Nel **funzionalità avanzate** pagina, deselezionare tutte le opzioni. Scegliere **Avanti**.  
  
10. Nel **classi generate** pagina, fare clic su **fine** per creare l'applicazione MFC.  
  
11. Per verificare che l'applicazione sia stata creata correttamente, compilala ed eseguila. Per compilare l'applicazione, scegliere il **compilare** menu, fare clic su **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguirla scegliendo **Avvia debug** sul **Debug** menu.  
  
     La procedura guidata crea automaticamente una barra multifunzione con una categoria della barra multifunzione denominata **Home**. Questa barra multifunzione contiene tre pannelli della barra multifunzione, denominati **Appunti**, **vista**, e **finestra**.  
  
### <a name="to-add-a-category-and-panel-to-the-ribbon"></a>Per aggiungere una categoria e un pannello alla barra multifunzione  
  
1.  Per aprire la risorsa barra multifunzione creata dalla procedura guidata, nel **vista** dal menu **altre finestre** e quindi fare clic su **visualizzazione risorse**. In **visualizzazione risorse**, fare clic su **della barra multifunzione** e quindi fare doppio clic su **IDR_RIBBON**.  
  
2.  In primo luogo, aggiungere una categoria personalizzata alla barra multifunzione facendo doppio clic su **categoria** nel **della casella degli strumenti**.  
  
     Una categoria con il titolo **Category1** viene creato. Per impostazione predefinita, la categoria contiene un pannello.  
  
     Fare doppio clic su **Category1** e quindi fare clic su **proprietà**. Nel **proprietà** finestra Modifica **didascalia** a `Custom`.  
  
     Il **Large Images** e **Small Images** proprietà specificano le bitmap utilizzate come icone per gli elementi della barra multifunzione in questa categoria. La creazione di bitmap personalizzate non rientra nell'ambito di questa procedura dettagliata, pertanto riutilizza le bitmap create dalla procedura guidata. Le bitmap piccole sono 16 x 16 pixel. Per le immagini piccole, utilizza le bitmap a cui si accede tramite l'ID di risorsa IDB_FILESMALL. Le bitmap grandi sono 32 x 32 pixel. Per le immagini grandi, utilizza le bitmap a cui si accede tramite l'ID di risorsa IDB_FILELARGE.  
  
    > [!NOTE]
    >  Sugli schermi HDPI, vengono usate automaticamente le versioni HDPI delle immagini.  
  
3.  Successivamente, personalizza il pannello. I pannelli vengono utilizzati per raggruppare gli elementi logicamente correlati gli uni agli altri. Ad esempio, nel **Home** scheda dell'applicazione, il **Taglia**, **copia**, e **Incolla** comandi si trovano nel  **Appunti** pannello. Per personalizzare il pannello, fare doppio clic su **Panel1** e quindi fare clic su **proprietà**. Nel **proprietà** finestra Modifica **didascalia** a `Favorites`.  
  
     È possibile specificare il **l'indice dell'immagine** per il pannello. Questo numero specifica l'icona da visualizzata se il pannello della barra multifunzione viene aggiunto per il **barra di accesso rapido**. L'icona non viene visualizzata nel pannello della barra multifunzione.  
  
4.  Per verificare che la categoria della barra multifunzione e il pannello siano stati creati correttamente, visualizza in anteprima il controllo della barra multifunzione. Nel **barra degli strumenti Editor Ribbon**, fare clic su di **Test Ribbon** pulsante. Oggetto **personalizzato** scheda e **Preferiti** pannello deve essere visualizzato sulla barra multifunzione.  
  
### <a name="to-add-elements-to-the-ribbon-panels"></a>Per aggiungere elementi ai pannelli della barra multifunzione  
  
1.  Per aggiungere elementi al pannello creato nella procedura precedente, trascinare i controlli dal **Editor Ribbon** sezione la **della casella degli strumenti** al pannello nella visualizzazione progettazione.  
  
2.  Aggiungere innanzitutto un **stampa** pulsante. Il **stampa** pulsante avrà un sottomenu contenente un **Stampa immediata** comando stampare utilizzando la stampante predefinita. Entrambi i comandi sono già definiti per l'applicazione. Si trovano nel menu dell'applicazione.  
  
     Per creare il **stampa** pulsante, trascinare il pannello uno strumento Button.  
  
     Nel **proprietà** finestra, modifica il **ID** proprietà **ID_FILE_PRINT**, che dovrebbe essere già definito. Modifica **didascalia** a `Print`. Modifica **immagine indice** a `4`.  
  
     Per creare il **Stampa immediata** pulsante fare clic accanto alla colonna del valore della proprietà **voci di Menu**e quindi fare clic sui puntini di sospensione (**...** ). Nel **Editor elementi**, fare clic su senza etichetta **Aggiungi** pulsante per creare una voce di menu. Nel **proprietà** finestra Modifica **didascalia** a `Quick Print`, **ID** a `ID_FILE_PRINT_DIRECT`, e **immagine** a `5` . La proprietà dell'immagine specifica l'icona di Stampa immediata nella risorsa bitmap IDB_FILESMALL.  
  
3.  Per verificare che i pulsanti siano stati aggiunti al pannello della barra multifunzione, compila l'applicazione ed eseguila. Per compilare l'applicazione, scegliere il **compilare** menu, fare clic su **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguire l'applicazione facendo clic su **Avvia debug** sul **Debug** menu. Il **stampa** pulsante e la casella combinata nel **Preferiti** pannello sul **personalizzato** scheda della barra multifunzione da visualizzare.  
  
## <a name="next-steps"></a>Passaggi successivi  
 [Procedura: Personalizzare la barra di accesso rapido](../mfc/how-to-customize-the-quick-access-toolbar.md)  
  
 [Procedura: Personalizzare il pulsante dell'applicazione](../mfc/how-to-customize-the-application-button.md)  
  
 Per esempi end-to-end, vedere [esempi (MFC Feature Pack)](../visual-cpp-samples.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate](../mfc/walkthroughs-mfc.md)   
 [Esempi (MFC Feature Pack)](../visual-cpp-samples.md)

