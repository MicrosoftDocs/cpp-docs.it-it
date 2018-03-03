---
title: "Controlli ActiveX MFC: Proprietà | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- properties [MFC], ActiveX controls
- MFC ActiveX controls [MFC], properties
- properties [MFC]
ms.assetid: b678a53c-0d9e-476f-8aa0-23b80baaba46
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: eea42401255f0aa99dd7a42b8e9b69e45dfe7b5b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls-properties"></a>Controlli ActiveX MFC: proprietà
Un controllo ActiveX genera eventi per comunicare con il relativo contenitore del controllo. Il contenitore, in cambio, utilizza metodi e proprietà per comunicare con il controllo. Metodi e proprietà sono simili in uso e di fine, rispettivamente, per le funzioni membro e le variabili membro di una classe C++. Le proprietà sono membri di dati che vengono esposti a qualsiasi contenitore del controllo ActiveX. Le proprietà forniscono un'interfaccia per le applicazioni che contengono controlli ActiveX, ad esempio i client di automazione e i contenitori dei controlli ActiveX.  
  
 Proprietà sono anche dette attributi.  
  
 Per ulteriori informazioni sui metodi di controllo ActiveX, vedere l'articolo [controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md).  
  
 I controlli ActiveX possono implementare azionario e metodi personalizzati e proprietà. Classe `COleControl` fornisce un'implementazione per le proprietà predefinite. (Per un elenco completo delle proprietà predefinite, vedere l'articolo [controlli ActiveX MFC: aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md).) Proprietà personalizzate, definite dallo sviluppatore di aggiungere funzionalità specifiche a un controllo ActiveX. Per ulteriori informazioni, vedere [controlli ActiveX MFC: aggiunta di proprietà personalizzate](../mfc/mfc-activex-controls-adding-custom-properties.md).  
  
 Le proprietà predefinite e personalizzate, come i metodi, sono supportate da un meccanismo che è costituito da una mappa di invio che gestisce le proprietà e metodi e le funzioni membro esistente del `COleControl` classe. Inoltre, queste proprietà possono avere parametri che lo sviluppatore utilizza per passare informazioni aggiuntive per il controllo.  
  
 Questa sezione illustra gli articoli seguenti proprietà del controllo ActiveX in modo più dettagliato:  
  
-   [Controlli ActiveX MFC: aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)  
  
-   [Controlli ActiveX MFC: aggiunta di proprietà personalizzate](../mfc/mfc-activex-controls-adding-custom-properties.md)  
  
-   [Controlli ActiveX MFC: implementazione di proprietà avanzate](../mfc/mfc-activex-controls-advanced-property-implementation.md)  
  
-   [Controlli ActiveX MFC: accesso a proprietà di ambiente](../mfc/mfc-activex-controls-accessing-ambient-properties.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

