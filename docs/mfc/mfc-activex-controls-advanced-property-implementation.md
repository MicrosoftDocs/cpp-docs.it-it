---
title: "Controlli ActiveX MFC: implementazione di propriet&#224; avanzate | Microsoft Docs"
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
  - "MFC (controlli ActiveX), codici di errore"
  - "MFC (controlli ActiveX), proprietà"
  - "proprietà [MFC], controlli ActiveX"
ms.assetid: ec2e6759-5a8e-41d8-a275-99af8ff6f32e
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: implementazione di propriet&#224; avanzate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo descrive gli argomenti correlati all'implementazione delle proprietà avanzate in un controllo ActiveX:  
  
-   [Proprietà di sola lettura e di sola scrittura](#_core_read2donly_and_write2donly_properties)  
  
-   [Restituzione di codici errori di una proprietà](#_core_returning_error_codes_from_a_property)  
  
##  <a name="_core_read2donly_and_write2donly_properties"></a> Proprietà di sola lettura e di sola scrittura  
 L'aggiunta guidata proprietà fornisce un metodo rapido e semplice implementare proprietà di sola lettura o scrittura per il controllo.  
  
#### Per implementare una proprietà di sola lettura o scrittura  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
     Verrà aperto [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).  
  
5.  Nella casella di **Nome proprietà**, digitare il nome della proprietà.  
  
6.  Per **Implementation Type**, fare clic **Metodi Get\/Set**.  
  
7.  Nella casella di **Tipo proprietà**, selezionare il tipo appropriato per la proprietà.  
  
8.  Se si desidera una proprietà di sola lettura, deselezionare il nome della funzione set.  Se si desidera una proprietà di sola scrittura, deselezionare il nome della funzione Get.  
  
9. Scegliere **Fine**.  
  
 In questo caso, l'aggiunta guidata proprietà incollare la funzione `SetNotSupported` o `GetNotSupported` nella voce della mappa di invio anziché un set o di un metodo Get normale.  
  
 Per modificare una proprietà esistente in modalità di sola lettura o scrittura, è possibile modificare la mappa di invio manualmente e rimuovere il set o il metodo Get è protetta dalla classe control.  
  
 Se si desidera che la proprietà sia in modo condizionale di sola lettura o scrittura, ad esempio solo quando il controllo funziona in modo specifico\), è possibile fornire il set o il metodo Get, come normale e si chiama la funzione di `GetNotSupported` o di `SetNotSupported` se appropriato.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFC_AxUI#29](../mfc/codesnippet/CPP/mfc-activex-controls-advanced-property-implementation_1.cpp)]  
  
 Questo esempio di codice seguente viene chiamato `SetNotSupported` se il membro dati di `m_bReadOnlyMode` è **TRUE**.  Se **FALSE**, la proprietà è impostata sul nuovo valore.  
  
##  <a name="_core_returning_error_codes_from_a_property"></a> Restituzione di codici errori di una proprietà  
 Per indicare che si è verificato un errore durante il tentativo di ottenere o impostare una proprietà, utilizzare la funzione di `COleControl::ThrowError`, che accetta `SCODE` \(codice di stato\) come parametro.  È possibile utilizzare `SCODE` predefinito o definire uno dei propri.  Per un elenco di `SCODE`predefinito s e istruzioni per la definizione dell'`SCODE`personalizzato s, vedere [Gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveXarticolo: Argomenti avanzati.  
  
 Le funzioni di supporto disponibili per la maggior parte di `SCODE`predefinito comuni s, come [COleControl::SetNotSupported](../Topic/COleControl::SetNotSupported.md), [COleControl::GetNotSupported](../Topic/COleControl::GetNotSupported.md) e [COleControl::SetNotPermitted](../Topic/COleControl::SetNotPermitted.md).  
  
> [!NOTE]
>  `ThrowError` deve essere utilizzato solo da mezzo di restituire un errore interno di una proprietà recupera o imposta la funzione o un metodo di automazione.  Questi sono gli unici il momento che il gestore eccezioni appropriato sarà presente nello stack.  
  
 Per ulteriori informazioni sulle eccezioni di creazione rapporti in altre aree del codice, vedere [COleControl::FireError](../Topic/COleControl::FireError.md) e la sezione [Gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveXarticolo: Argomenti avanzati.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)