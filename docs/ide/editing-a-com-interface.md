---
title: "Modifica di un&#39;interfaccia COM | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.com.editing.interfaces"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM (interfacce), modifica"
  - "metodi [C++], aggiunta a interfacce COM"
  - "proprietà [C++], aggiunta a interfacce COM"
ms.assetid: 6c2909e0-af2d-4a37-bb39-ed372e6129cf
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifica di un&#39;interfaccia COM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Mediante i comandi del menu di scelta rapida di Visualizzazione classi è possibile definire nuovi metodi e proprietà per le interfacce COM nei progetti di Visual C\+\+.  Utilizzando la Casella degli strumenti è inoltre possibile definire gli eventi per i controlli ActiveX.  
  
 Per le classi di oggetti COM basate su ATL e MFC, è possibile modificare l'implementazione contemporaneamente all'interfaccia.  
  
> [!NOTE]
>  Per le interfacce definite al di fuori della finestra di dialogo **Aggiungi classe**, i metodi o le proprietà vengono aggiunti al file IDL e gli stub alle classi che implementano i metodi, anche quando le interfacce vengono aggiunte manualmente.  
  
 Per personalizzare le interfacce esistenti è possibile utilizzare le procedure guidate seguenti,  disponibili in Visualizzazione classi.  
  
|Procedura guidata|Tipo di progetto|  
|-----------------------|----------------------|  
|[Aggiunta guidata proprietà](../ide/names-add-property-wizard.md)|Progetti ATL o MFC che supportano ATL.  Fare clic con il pulsante destro del mouse sull'interfaccia a cui aggiungere la proprietà.<br /><br /> Il tipo di progetto viene rilevato automaticamente e le opzioni nell'Aggiunta guidata proprietà vengono modificate in base a esso.<br /><br /> -   Per le interfacce dispatch nei progetti creati mediante la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) il richiamo dell'Aggiunta guidata proprietà fornisce opzioni specifiche di MFC.<br />-   Per le interfacce di controlli ActiveX MFC, l'Aggiunta guidata proprietà fornisce un elenco di metodi e proprietà standard che è possibile utilizzare direttamente o personalizzare per il controllo.<br />-   Per tutte le altre interfacce, nella procedura guidata si trovano opzioni utili nella maggior parte delle situazioni.|  
|[Aggiunta guidata metodo](../ide/add-method-wizard.md)|Progetti ATL o MFC che supportano ATL.  Fare clic con il pulsante destro del mouse sull'interfaccia a cui aggiungere il metodo.<br /><br /> Viene rilevato automaticamente il tipo di progetto e le opzioni nell'Aggiunta guidata proprietà vengono modificate in base a esso.<br /><br /> -   Per le interfacce dispatch nei progetti creati con la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) il richiamo dell'Aggiunta guidata metodo fornisce opzioni specifiche di MFC.<br />-   Per le interfacce di controlli ActiveX MFC, l'Aggiunta guidata metodo fornisce un elenco di metodi e proprietà standard del controllo che è possibile utilizzare direttamente o personalizzare.<br />-   Per tutte le altre interfacce, nelle procedure guidate **Aggiungi metodo** sono disponibili opzioni utili nella maggior parte delle situazioni.|  
  
 È inoltre possibile implementare nuove interfacce nel controllo COM facendo clic con il pulsante destro del mouse sulla classe Control dell'oggetto in Visualizzazione classi e scegliendo [Implementa interfaccia](../ide/implement-interface-wizard.md).  
  
## Vedere anche  
 [Working with Resource Files](../mfc/working-with-resource-files.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Tipi di progetto Visual C\+\+](../ide/visual-cpp-project-types.md)