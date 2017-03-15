---
title: "Aggiunta di una propriet&#224; (Visual C++) | Microsoft Docs"
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
  - "interfacce, aggiunta di proprietà"
  - "proprietà [C++], aggiunta a interfacce"
ms.assetid: 37bd4db7-efd3-4faa-87ad-64902ed16a36
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di una propriet&#224; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare l'[Aggiunta guidata proprietà](../ide/names-add-property-wizard.md) per aggiungere una proprietà a un'interfaccia nel progetto.  
  
### Per aggiungere una proprietà all'oggetto  
  
1.  In [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nome dell'interfaccia cui si desidera aggiungere la proprietà.  
  
    > [!NOTE]
    >  È possibile anche aggiungere proprietà a interfacce dispatch, le quali, se il progetto non dispone di attributi, sono annidate all'interno del nodo della libreria.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.  
  
3.  Nell'[Aggiunta guidata proprietà](../ide/names-add-property-wizard.md) fornire le informazioni per creare la proprietà.  
  
4.  Specificare eventuali impostazioni IDL \(interface definition language\) relative alla proprietà nella pagina [Attributi IDL](../ide/idl-attributes-add-property-wizard.md) della procedura guidata.  
  
5.  Fare clic su **Fine** per aggiungere la proprietà.  
  
 I metodi **Get** e `Put` della proprietà vengono visualizzati come due icone in Visualizzazione classe, all'interno dell'interfaccia in cui essa viene definita.  È possibile fare doppio clic sull'icona per visualizzare la dichiarazione della proprietà nel file IDL.  
  
-   Per le interfacce ATL le funzioni **Get** e **Put** vengono aggiunte al file CPP e i riferimenti a tali funzioni vengono aggiunti al file H.  
  
-   Per le interfacce dispatch MFC, se si seleziona **Variabile membro** come tipo di implementazione, un metodo e una variabile vengono aggiunti alla classe che li implementa.  Se si seleziona **Metodi Get\/Set** come tipo di implementazione, due metodi vengono aggiunti alla classe che li implementa.  
  
## Vedere anche  
 [Creazione di un'interfaccia COM](../ide/creating-a-com-interface-visual-cpp.md)   
 [Modifica di un'interfaccia COM](../ide/editing-a-com-interface.md)   
 [Modello COM \(Component Object Model\)](http://msdn.microsoft.com/library/windows/desktop/ms694363)   
 [Puntatori a interfaccia e interfacce](http://msdn.microsoft.com/library/windows/desktop/ms688484)