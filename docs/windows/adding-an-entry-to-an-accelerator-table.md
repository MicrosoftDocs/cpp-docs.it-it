---
title: "Aggiunta di una voce a una tabella dei tasti di scelta rapida | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tabelle di tasti di scelta rapida [C++], aggiunta di voci"
  - "Nuovo tasto di scelta rapida (comando)"
ms.assetid: 559c2415-8323-4339-9447-6966665f8288
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Aggiunta di una voce a una tabella dei tasti di scelta rapida
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### <a name="to-add-an-entry-to-an-accelerator-table"></a>Per aggiungere una voce a una tabella dei tasti di scelta rapida  
  
1.  Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare clic all'interno della tabella di tasti di scelta rapida e scegliere **nuovo acceleratore** dal menu di scelta rapida o fare clic sulla riga vuota nella parte inferiore della tabella.  
  
3.  Selezionare un [ID](Id%20Property.xml) dall'elenco a discesa nell'ID casella o digitare un nuovo ID nel **ID** casella.  
  
4.  Tipo di [chiave](../windows/accelerator-key-property.md) si desidera utilizzare come un tasto di scelta rapida o il pulsante destro del mouse e scegliere **digita** dal menu di scelta rapida per impostare una combinazione di tasti (il **digita** comando è disponibile anche il **modificare** menu).  
  
5.  Modifica il [modificatore](../windows/accelerator-modifier-property.md) e [tipo](../windows/accelerator-type-property.md), se necessario.  
  
6.  Premere **INVIO**.  
  
    > [!NOTE]
    >  Verificare che tutti gli acceleratori definiti siano univoci. È possibile che diverse combinazioni di tasti siano assegnate allo stesso ID senza che vi siano problemi, ad esempio, CTRL + P e F8 possono entrambi essere assegnati a ID_PRINT. Tuttavia, l'assegnazione di una combinazione di tasti a più ID non è compatibile, ad esempio, CTRL + Z assegnato a ID_SPELL_CHECK che a ID_THESAURUS.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle tabelle dei tasti di scelta rapida](../windows/editing-accelerator-tables.md)   
 [Editor tasti di scelta rapida](../mfc/accelerator-editor.md)