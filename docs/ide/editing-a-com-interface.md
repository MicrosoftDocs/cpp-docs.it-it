---
title: Modifica di un'interfaccia COM | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.com.editing.interfaces
dev_langs:
- C++
helpviewer_keywords:
- methods [C++], adding to COM interfaces
- COM interfaces, editing
- properties [C++], adding to COM interfaces
ms.assetid: 6c2909e0-af2d-4a37-bb39-ed372e6129cf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dd7a61593a1024c00c0fd0de6bd62ff3ee9323b3
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33338682"
---
# <a name="editing-a-com-interface"></a>Modifica di un'interfaccia COM
I comandi del menu di scelta rapida di Visualizzazione classi consentono di definire nuovi metodi e proprietà per le interfacce COM nei progetti Visual C++. Dalla casella degli strumenti è inoltre possibile definire eventi per i controlli ActiveX.  
  
 Per le classi di oggetti COM basati su ATL e MFC è possibile modificare l'implementazione della classe durante la modifica dell'interfaccia.  
  
> [!NOTE]
>  Per le interfacce definite al di fuori della finestra di dialogo **Aggiungi classe**, Visual C++ aggiunge i metodi o le proprietà al file con estensione idl e aggiunge stub alle classi the implementano i metodi, anche quando le interfacce vengono aggiunte manualmente.  
  
 Le tre procedure guidate seguenti consentono di personalizzare le interfacce esistenti. Sono disponibili in Visualizzazione classi:  
  
|Wizard|Tipo di progetto|  
|------------|------------------|  
|[Aggiunta guidata proprietà](../ide/names-add-property-wizard.md)|Progetti ATL o MFC che supportano ATL. Fare clic con il pulsante destro del mouse sull'interfaccia a cui si vuole aggiungere la proprietà.<br /><br /> Visual C++ rileva il tipo di progetto e modifica le opzioni dell'Aggiunta guidata proprietà in base al progetto:<br /><br /> - Per le interfacce dispatch nei progetti creati tramite la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), la chiamata dell'Aggiunta guidata proprietà determina la visualizzazione di opzioni specifiche di MFC.<br />- Per le interfacce del controllo ActiveX MFC, l'Aggiunta guidata proprietà offre un elenco di proprietà e metodi predefiniti da usare così come sono o da personalizzare per il controllo.<br />- Per tutte le altre interfacce, l'Aggiunta guidata proprietà offre opzioni utili nella maggior parte delle situazioni.|  
|[Aggiunta guidata metodo](../ide/add-method-wizard.md)|Progetti ATL o MFC che supportano ATL. Fare clic con il pulsante destro del mouse sull'interfaccia a cui si vuole aggiungere il metodo.<br /><br /> Visual C++ rileva il tipo di progetto e modifica le opzioni dell'Aggiunta guidata metodo in base al progetto:<br /><br /> - Per le interfacce dispatch nei progetti creati tramite la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), la chiamata dell'Aggiunta guidata metodo determina la visualizzazione di opzioni specifiche di MFC.<br />- Per le interfacce del controllo ActiveX MFC, l'Aggiunta guidata metodo offre un elenco di proprietà e metodi predefiniti da usare così come sono o da personalizzare per il controllo.<br />- Per tutte le altre interfacce, le procedure guidate **Aggiungi metodo** offrono opzioni utili nella maggior parte delle situazioni.|  
  
 È anche possibile implementare nuove interfacce nel controllo COM facendo clic con il pulsante destro del mouse sulla classe di controllo dell'oggetto in Visualizzazione classi e selezionando [Implementa interfaccia](../ide/implement-interface-wizard.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di file di risorse](../windows/working-with-resource-files.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Tipi di progetto Visual C++](../ide/visual-cpp-project-types.md)