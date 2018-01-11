---
title: La modifica di un'interfaccia COM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.com.editing.interfaces
dev_langs: C++
helpviewer_keywords:
- methods [C++], adding to COM interfaces
- COM interfaces, editing
- properties [C++], adding to COM interfaces
ms.assetid: 6c2909e0-af2d-4a37-bb39-ed372e6129cf
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b8911f23ce8e28f2da13c3d8305f4f13a861bb60
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="editing-a-com-interface"></a>Modifica di un'interfaccia COM
Tramite i comandi del menu di scelta rapida Visualizzazione classi, è possibile definire nuovi metodi e proprietà per le interfacce COM nei progetti Visual C++. Dalla casella degli strumenti, inoltre, è possibile definire gli eventi per i controlli ActiveX.  
  
 Per le classi oggetto ATL e MFC-basato su COM, è possibile modificare l'implementazione della classe nello stesso momento in cui si modifica l'interfaccia.  
  
> [!NOTE]
>  Per le interfacce che sono state definite all'esterno del **Aggiungi classe** la finestra di dialogo, Visual C++ aggiunge i metodi o proprietà del file IDL, e gli stub alle classi che implementano i metodi, anche quando le interfacce vengono aggiunte manualmente.  
  
 I seguenti tre procedure guidate consentono di personalizzare le interfacce esistenti. Sono disponibili da Visualizzazione classi:  
  
|Wizard|Tipo di progetto|  
|------------|------------------|  
|[Aggiunta guidata proprietà](../ide/names-add-property-wizard.md)|Progetti ATL o MFC, supporto ATL. Fare clic sull'interfaccia a cui si desidera aggiungere la proprietà.<br /><br /> Visual C++ rileva il tipo di progetto e modifica di conseguenza le opzioni di aggiunta guidata proprietà:<br /><br /> -Per le interfacce dispatch nei progetti creati tramite il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), richiamare l'aggiunta guidata proprietà fornisce opzioni specifiche di MFC.<br />-Per interfacce di controlli ActiveX MFC, l'aggiunta guidata proprietà fornisce un elenco di metodi e proprietà che è possibile utilizzare come previsto o personalizzare per il controllo.<br />-Per tutte le altre interfacce, nella procedura guidata sono disponibili opzioni utili nella maggior parte dei casi.|  
|[Aggiunta guidata metodo](../ide/add-method-wizard.md)|Progetti ATL o MFC, supporto ATL. Fare clic sull'interfaccia a cui si desidera aggiungere il metodo.<br /><br /> Visual C++ rileva il tipo di progetto e modifica di conseguenza le opzioni di aggiunta guidata metodo:<br /><br /> -Per le interfacce dispatch nei progetti creati tramite il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), richiamo dell'Aggiunta guidata metodo fornisce opzioni specifiche di MFC.<br />-Per interfacce di controlli ActiveX MFC, l'aggiunta guidata metodo fornisce un elenco di metodi e proprietà che è possibile utilizzare come previsto o personalizzare per il controllo.<br />-Per tutte le altre interfacce, di **Aggiungi metodo** nelle procedure guidate sono disponibili opzioni utili nella maggior parte dei casi.|  
  
 Inoltre, è possibile implementare nuove interfacce nel controllo COM facendo clic sulla classe del controllo dell'oggetto in visualizzazione classi e facendo clic su [implementa interfaccia](../ide/implement-interface-wizard.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di file di risorse](../windows/working-with-resource-files.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Tipi di progetto Visual C++](../ide/visual-cpp-project-types.md)