---
title: "Aggiunta di una proprietà (Visual C++) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- interfaces, adding properties
- properties [C++], adding to interfaces
ms.assetid: 37bd4db7-efd3-4faa-87ad-64902ed16a36
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 33fc8c3b5528c0ced4e0d402aec48791b7fbcb9a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-a-property-visual-c"></a>Aggiunta di una proprietà (Visual C++)
È possibile utilizzare il [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md) per aggiungere un metodo su un'interfaccia nel progetto.  
  
### <a name="to-add-a-property-to-your-object"></a>Per aggiungere una proprietà all'oggetto  
  
1.  In [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic sul nome dell'interfaccia a cui si desidera aggiungere la proprietà.  
  
    > [!NOTE]
    >  È inoltre possibile aggiungere proprietà dispatch, che, a meno che il progetto con attribuito, sono annidate all'interno del nodo della libreria.  
  
2.  Dal menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi proprietà**.  
  
3.  Nel [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md), fornire le informazioni per creare la proprietà.  
  
4.  Specificare eventuali impostazioni interface definition language (IDL) per la proprietà di [attributi IDL](../ide/idl-attributes-add-property-wizard.md) pagina della procedura guidata.  
  
5.  Fare clic su **fine** per aggiungere la proprietà.  
  
 Il **ottenere** e `Put` metodi della proprietà vengono visualizzati come due icone in visualizzazione classi, all'interno dell'interfaccia in cui è definito. È possibile facendo doppio clic sull'icona per visualizzare la dichiarazione di proprietà nel file IDL.  
  
-   Per le interfacce ATL, il **ottenere** e **inserire** funzioni vengono aggiunte al file con estensione cpp e riferimenti a tali funzioni vengono aggiunti al file con estensione h.  
  
-   Per le interfacce dispatch MFC, se si seleziona **variabile membro** come tipo di implementazione, vengono aggiunti alla classe che implementa un metodo e una variabile. Se si seleziona **metodi Get/Set** come tipo di implementazione, i due metodi vengono aggiunti alla classe che lo implementa.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un'interfaccia COM](../ide/creating-a-com-interface-visual-cpp.md)   
 [La modifica di un'interfaccia COM](../ide/editing-a-com-interface.md)   
 [Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363)   
 [Puntatori a interfaccia e interfacce](http://msdn.microsoft.com/library/windows/desktop/ms688484)