---
title: Aggiunta di una proprietà (Visual C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interfaces, adding properties
- properties [C++], adding to interfaces
ms.assetid: 37bd4db7-efd3-4faa-87ad-64902ed16a36
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e121cf9738910b105f5bb1933592e67d334f8937
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43685326"
---
# <a name="adding-a-property-visual-c"></a>Aggiunta di una proprietà (Visual C++)
È possibile usare l'[Aggiunta guidata proprietà](../ide/names-add-property-wizard.md) per aggiungere un metodo a un'interfaccia del progetto.  
  
### <a name="to-add-a-property-to-your-object"></a>Per aggiungere una proprietà all'oggetto  
  
1.  Nella [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) fare clic con il pulsante destro del mouse sul nome dell'interfaccia a cui si vuole aggiungere la proprietà.  
  
    > [!NOTE]
    >  È anche possibile aggiungere proprietà alle interfacce dispatch che, se il progetto non è attribuito, sono nidificate all'interno del nodo della libreria.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.  
  
3.  Nell'[Aggiunta guidata proprietà](../ide/names-add-property-wizard.md) specificare le informazioni per creare la proprietà.  
  
4.  Specificare le impostazioni del linguaggio di definizione dell'interfaccia (IDL) per la proprietà nella pagina [Attributi IDL](../ide/idl-attributes-add-property-wizard.md) della procedura guidata.  
  
5.  Scegliere **Fine** per aggiungere la proprietà.  
  
 I metodi **Get** e `Put` della proprietà sono visualizzati come due icone nella Visualizzazione classi, sotto l'interfaccia in cui è definita. È possibile fare doppio clic su una delle icone per visualizzare la dichiarazione di proprietà nel file con estensione idl.  
  
-   Per le interfacce ATL, le funzioni **Get** e **Put** vengono aggiunte al file con estensione cpp e i riferimenti a tali funzioni vengono aggiunti al file con estensione h.  
  
-   Per le interfacce dispatch MFC, se si seleziona **Variabile membro** come tipo di implementazione, vengono aggiunti un metodo e una variabile alla classe di implementazione. Se si selezionano i **metodi Get/Set** come tipo di implementazione, vengono aggiunti due metodi alla classe di implementazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un'interfaccia COM](../ide/creating-a-com-interface-visual-cpp.md)   
 [Modifica di un'interfaccia COM](../ide/editing-a-com-interface.md)   
 [Component Object Model (COM)](/windows/desktop/com/the-component-object-model)   
 [Puntatori a interfaccia e interfacce](/windows/desktop/com/interface-pointers-and-interfaces)