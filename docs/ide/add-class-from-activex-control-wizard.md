---
title: Aggiunta classe da Creazione guidata controllo ActiveX | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.class.axcontrol
dev_langs: C++
helpviewer_keywords:
- ActiveX Control Wizard
- Add Class from ActiveX Control Wizard [C++]
ms.assetid: 668d801c-5fb6-4176-9191-5c38995a4713
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e2b3b1d2b15db47eea8ebc10b2a73cafba5d6952
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="add-class-from-activex-control-wizard"></a>Aggiunta guidata classe da controllo ActiveX
Utilizzare questa procedura guidata per aggiungere una classe MFC da controllo ActiveX disponibile. La procedura guidata crea una classe per ogni interfaccia che aggiunta dal controllo ActiveX selezionato.  
  
 **Classe da aggiungere**  
 Specifica il percorso della libreria dei tipi, da cui viene creata la classe.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Registry**|La libreria dei tipi è registrata nel sistema. Librerie dei tipi registrati sono elencate **controlli ActiveX disponibili**.|  
|**File**|La libreria dei tipi non è necessariamente registrata nel sistema, ma è contenuta in un file. È necessario specificare il percorso del file in **percorso**.|  
  
 **Controlli ActiveX disponibili**  
 Specifica i controlli ActiveX attualmente registrati nel sistema. Selezionare un controllo ActiveX da questo elenco per visualizzarne le interfacce nel **interfacce** elenco. Vedere [controlli ActiveX MFC: distribuzione dei controlli ActiveX](../mfc/mfc-activex-controls-distributing-activex-controls.md) per ulteriori informazioni sulla registrazione di controlli ActiveX.  
  
 Se si fa clic **File** in **Aggiungi classe da**, questa casella è disponibile per la modifica.  
  
 **Percorso**  
 Specifica il percorso del controllo ActiveX. Se si fa clic **File** in **Aggiungi classe da**, è possibile specificare il percorso del file contenente la libreria dei tipi. Per passare al percorso del file, fare clic sul pulsante con puntini di sospensione.  
  
 Se si fa clic **Registro di sistema** in **Aggiungi classe da**, questa casella è disponibile per la modifica.  
  
 **Interfacce**  
 Specifica le interfacce del controllo ActiveX attualmente selezionato in **controlli ActiveX disponibili** o nella libreria dei tipi nel file specificato **percorso**.  
  
|Pulsante di trasferimento|Descrizione|  
|---------------------|-----------------|  
|**>**|Aggiunge l'interfaccia selezionata nel **interfacce** elenco. Non è disponibile se è selezionata alcuna interfaccia.|  
|**>>**|Aggiunge tutte le interfacce del controllo ActiveX attualmente selezionato in **controlli ActiveX disponibili** o nella libreria dei tipi nel file specificato **percorso**.|  
|**<**|Rimuove la classe selezionata nel **classi generate** elenco. Non disponibile se non è selezionata alcuna classe nel **classi generate** elenco.|  
|**<\<**|Rimuove tutte le classi di **classi generate** elenco. Non disponibile se il **classi generate** elenco è vuoto.|  
  
 **Classi generate**  
 Specifica i nomi di classe da generare dalle interfacce aggiunte mediante il  **>**  o  **>>**  pulsante. È possibile fare clic su questa casella per selezionare una classe, quindi utilizzare le frecce su o giù per scorrere l'elenco, visualizzare il nome di ogni classe nel `Class` casella e il nome file nel **file con estensione h** casella che viene generato quando si fa clic  **Fine**. È possibile selezionare solo una classe in un momento in questa casella.  
  
 È possibile rimuovere una classe selezionandolo nell'elenco e fare clic su  **<** . Non è necessario selezionare una classe nel **classi generate** casella per rimuovere tutte le classi; facendo clic sul  **<<** , rimuovere tutte le classi di **classi generate** casella.  
  
 `Class`  
 Specifica il nome della classe selezionata nel **classi generate** casella che consente di aggiungere la procedura guidata quando si fa clic **fine**. È possibile modificare il nome di `Class` casella.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito in **classi generate**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe in un file esistente. Se si sceglie un file esistente, il non verrà salvato nel percorso selezionato finché non si sceglie **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se la dichiarazione di classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito in **classi generate**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se l'implementazione della classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una classe da un controllo ActiveX](../ide/adding-a-class-from-an-activex-control-visual-cpp.md)   
 [Client di automazione: uso delle librerie dei tipi](../mfc/automation-clients-using-type-libraries.md)