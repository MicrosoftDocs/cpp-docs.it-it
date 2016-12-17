---
title: "Procedura dettagliata: creazione di un&#39;applicazione barra multifunzione utilizzando MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "creazione di un'applicazione barra multifunzione (MFC)"
  - "applicazione barra multifunzione, creazione (MFC)"
ms.assetid: e61393e2-1d6b-4594-a7ce-157d3d1b0d9f
caps.latest.revision: 21
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: creazione di un&#39;applicazione barra multifunzione utilizzando MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura dettagliata viene mostrato come usare **Creazione guidata applicazione MFC** per creare un'applicazione che per impostazione predefinita ha una barra multifunzione.  Puoi quindi espandere la barra multifunzione aggiungendo una categoria **Personalizzata** con un pannello **Preferiti** e aggiungendo al pannello alcuni comandi utilizzati frequentemente.  
  
## Prerequisiti  
 In questa procedura dettagliata si presuppone che [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] sia impostato per utilizzare **Impostazioni generali per lo sviluppo**.  Se utilizzi impostazioni diverse, è possibile che alcuni elementi dell'interfaccia utente a cui viene fatto riferimento nelle istruzioni seguenti non vengano visualizzati.  Per informazioni su come modificare le impostazioni, vedi [How to: Reset Your Settings](http://msdn.microsoft.com/it-it/c95c51be-e609-4769-abba-65e6beedec76).  
  
### Per creare un'applicazione MFC con una barra multifunzione  
  
1.  Utilizza **Creazione guidata applicazione MFC** per creare un'applicazione MFC con una barra multifunzione.  Per avviare la procedura guidata, scegli **Nuovo** dal menu **File**, quindi fai clic su **Progetto**.  
  
2.  Nella finestra di dialogo **Nuovo progetto**, espandi il nodo **Visual C\+\+** sotto la voce **Modelli installati**, seleziona **MFC** e quindi **Applicazione MFC**.  Digita un nome per il progetto, ad esempio, `MFCRibbonApp`, quindi scegli **OK**.  
  
3.  Nella prima pagina della **Creazione guidata applicazione MFC** fai clic su **Avanti**.  
  
4.  Nella pagina **Tipo di applicazione**, in **Stile di visualizzazione e colori**, seleziona **Office 2007 \(tema blu\)**.  Lascia invariate le altre impostazioni.  Scegliere **Avanti**.  
  
5.  Nella pagina **Supporto documenti compositi** verifica che sia selezionato **Nessuno**, quindi scegli **Avanti**.  
  
6.  Nella pagina **Proprietà modello documento**, nella casella **Estensione di file** digita un'estensione di file per i documenti che vengono creati da questa applicazione, ad esempio `mfcrbnapp`.  Scegliere **Avanti**.  
  
7.  Nella pagina **Supporto database** verifica che sia selezionato **Nessuno**, quindi scegli **Avanti**.  
  
8.  Nella pagina **Funzionalità interfaccia utente** verifica che sia selezionata l'opzione **Usa barra multifunzione**.  Scegliere **Avanti**.  
  
9. Per impostazione predefinita, **Creazione guidata applicazione MFC** aggiunge il supporto per diversi riquadri ancorati.  Dal momento che questa procedura dettagliata fornisce informazioni unicamente sulla barra multifunzione, puoi rimuovere tali opzioni dall'applicazione.  Nella pagina **Funzionalità avanzate** deseleziona tutte le opzioni.  Scegliere **Avanti**.  
  
10. Nella pagina **Classi generate** scegli **Fine** per creare l'applicazione MFC.  
  
11. Per verificare che l'applicazione sia stata creata correttamente, compilala ed eseguila.  Per compilare l'applicazione, scegliere **Compila soluzione** dal menu **Compila**.  Se l'applicazione viene compilata correttamente, eseguila facendo clic su **Avvia debug** dal menu **Debug**.  
  
     La procedura guidata crea automaticamente una barra multifunzione con una categoria della barra multifunzione denominata **Pagina iniziale**.  Questa barra multifunzione contiene tre pannelli della barra multifunzione, denominati **Appunti**, **Visualizza** e **Finestra**.  
  
### Per aggiungere una categoria e un pannello alla barra multifunzione  
  
1.  Per aprire la risorsa della barra multifunzione creata dalla procedura guidata, nel menu **Visualizza** fai clic su **Altre finestre**, quindi scegli **Visualizzazione risorse**.  In **Visualizzazione risorse** fai clic su **Barra multifunzione**, quindi fai doppio clic su **IDR\_RIBBON**.  
  
2.  Innanzitutto, aggiungi una categoria personalizzata alla barra multifunzione facendo doppio clic su **Categoria** nella **Casella degli strumenti**.  
  
     Viene creata una categoria con il titolo **Category1**.  Per impostazione predefinita, la categoria contiene un pannello.  
  
     Fai clic con il pulsante destro del mouse su **Category1**, quindi scegli **Proprietà**.  Nella finestra **Proprietà** imposta **Titolo** su `Personalizzata`.  
  
     Le proprietà **Large Images** e **Small Images** specificano le bitmap che vengono utilizzate come icone per gli elementi della barra multifunzione in questa categoria.  La creazione di bitmap personalizzate non rientra nell'ambito di questa procedura dettagliata, pertanto riutilizza le bitmap create dalla procedura guidata.  Le bitmap piccole sono 16 x 16 pixel.  Per le immagini piccole, utilizza le bitmap a cui si accede tramite l'ID di risorsa IDB\_FILESMALL.  Le bitmap grandi sono 32 x 32 pixel.  Per le immagini grandi, utilizza le bitmap a cui si accede tramite l'ID di risorsa IDB\_FILELARGE.  
  
    > [!NOTE]
    >  Sugli schermi HDPI, vengono usate automaticamente le versioni HDPI delle immagini.  
  
3.  Successivamente, personalizza il pannello.  I pannelli vengono utilizzati per raggruppare gli elementi logicamente correlati gli uni agli altri.  Ad esempio, nella scheda **Pagina iniziale** di questa applicazione, i comandi **Taglia**, **Copia** e **Incolla** si trovano nel pannello **Appunti**.  Per personalizzare il pannello, fai clic con il pulsante destro del mouse su **Panel1**, quindi scegli **Proprietà**.  Nella finestra **Proprietà** imposta **Titolo** su `Preferiti`.  
  
     Puoi specificare il valore di **Image Index** per il pannello.  Questo numero specifica l'icona da visualizzare se il pannello della barra multifunzione viene aggiunto alla **Barra di accesso rapido**.  L'icona non viene visualizzata nel pannello della barra multifunzione.  
  
4.  Per verificare che la categoria della barra multifunzione e il pannello siano stati creati correttamente, visualizza in anteprima il controllo della barra multifunzione.  Nella **Barra degli strumenti Editor Ribbon** fai clic sul pulsante **Test Ribbon**.  Sulla barra multifunzione vengono visualizzati una scheda **Personalizzata** e un pannello **Preferiti**.  
  
### Per aggiungere elementi ai pannelli della barra multifunzione  
  
1.  Per aggiungere elementi al pannello creato nella procedura precedente, trascina i controlli dalla sezione **Editor Ribbon** della **Casella degli strumenti** al pannello nella visualizzazione progettazione.  
  
2.  Innanzitutto, aggiungi un pulsante **Stampa**.  Il pulsante **Stampa** avrà un sottomenu che contiene un comando **Stampa immediata** per stampare utilizzando la stampante predefinita.  Entrambi i comandi sono già definiti per l'applicazione.  Si trovano nel menu dell'applicazione.  
  
     Per creare il pulsante **Stampa**, trascina sul pannello uno strumento Button.  
  
     Nella finestra **Proprietà**, imposta la proprietà **ID** su **ID\_FILE\_PRINT**, che dovrebbe essere già definito.  Imposta **Titolo** su `Stampa`.  Imposta **Image Index** su `4`.  
  
     Per creare il pulsante **Stampa immediata**, fai clic sulla colonna del valore della proprietà accanto a **Menu Items**, quindi fai clic sui puntini di sospensione \(**...**\).  In **Editor elementi** fai clic sul pulsante senza etichetta **Aggiungi** per creare una voce di menu.  Nella finestra **Proprietà** imposta **Titolo** su `Stampa immediata`, **ID** su `ID_FILE_PRINT_DIRECT` e **Immagine** su `5`.  La proprietà dell'immagine specifica l'icona di Stampa immediata nella risorsa bitmap IDB\_FILESMALL.  
  
3.  Per verificare che i pulsanti siano stati aggiunti al pannello della barra multifunzione, compila l'applicazione ed eseguila.  Per compilare l'applicazione, scegliere **Compila soluzione** dal menu **Compila**.  Se l'applicazione viene compilata correttamente, eseguirla scegliendo **Avvia debug** dal menu **Debug**.  Dovrebbero essere visualizzati il pulsante **Stampa** e la casella combinata nel pannello **Preferiti** della scheda **Personalizzata** nella barra multifunzione.  
  
## Passaggi successivi  
 [Procedura: personalizzare la barra di accesso rapido](../mfc/how-to-customize-the-quick-access-toolbar.md)  
  
 [Procedura: personalizzare il pulsante dell'applicazione](../mfc/how-to-customize-the-application-button.md)  
  
 Per esempi completi, vedi [Esempi \(MFC Feature Pack\)](../top/visual-cpp-samples.md).  
  
## Vedere anche  
 [Procedure dettagliate](../mfc/walkthroughs-mfc.md)   
 [Esempi \(MFC Feature Pack\)](../top/visual-cpp-samples.md)