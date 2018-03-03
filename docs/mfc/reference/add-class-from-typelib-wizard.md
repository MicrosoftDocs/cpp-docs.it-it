---
title: Aggiunta classe da libreria dei tipi guidata | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.class.typelib
dev_langs:
- C++
helpviewer_keywords:
- Add Class from TypeLib Wizard [MFC]
- COM interfaces, adding classes
ms.assetid: 96152afd-9374-4649-a6ab-b0fa2a5592a3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a4aad89b6f3227cac59b6429cc67975db3dad424
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="add-class-from-typelib-wizard"></a>Aggiunta guidata classe da libreria dei tipi
Utilizzare questa procedura guidata per aggiungere una classe MFC da una libreria dei tipi disponibili. La procedura guidata crea una classe per ogni interfaccia che aggiunta dalla libreria dei tipi selezionati.  
  
 **Classe da aggiungere**  
 Specifica il percorso della libreria dei tipi, da cui viene creata la classe.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Registry**|La libreria dei tipi è registrata nel sistema. Librerie dei tipi registrati sono elencate **librerie dei tipi disponibili**.|  
|**File**|La libreria dei tipi non è necessariamente registrata nel sistema, ma è contenuta in un file. È necessario specificare il percorso del file in **percorso**.|  
  
 **Librerie dei tipi disponibili**  
 Elenca le librerie dei tipi attualmente registrate nel sistema. Selezionare una libreria dei tipi da questo elenco per visualizzarne le interfacce nel **interfacce** elenco.  
  
 Vedere "All'interno di Distributed COM: tipo di librerie e lingua integrazione" in MSDN library per ulteriori informazioni sulla registrazione delle librerie dei tipi.  
  
 **Percorso**  
 Specifica il percorso della libreria dei tipi. Se si fa clic **File** in **Aggiungi classe da**, è possibile specificare il percorso del file contenente la libreria dei tipi. Per passare al percorso del file, fare clic sul pulsante con puntini di sospensione.  
  
 **Interfacce**  
 Elenca le interfacce nella libreria dei tipi attualmente selezionato nel **librerie dei tipi disponibili** elenco.  
  
|Pulsante di trasferimento|Descrizione|  
|---------------------|-----------------|  
|**>**|Aggiunge l'interfaccia selezionata nel **interfacce** elenco. Se è selezionata alcuna interfaccia disponibile.|  
|**>>**|Aggiunge tutte le interfacce nella libreria dei tipi attualmente selezionata nel **librerie dei tipi disponibili** elenco.|  
|**<**|Rimuove la classe selezionata nel **classi generate** elenco. Visualizzato in grigio se nessuna classe attualmente selezionata nel **classi generate** elenco.|  
|**<\<**|Rimuove tutte le classi di **classi generate** elenco. Se in grigio il **classi generate** elenco è vuoto.|  
  
 **Classi generate**  
 Specifica i nomi di classe da generare dalle interfacce aggiunte mediante il ** > ** o ** >> ** pulsante. È possibile fare clic su questa casella per selezionare una classe, quindi utilizzare le frecce su o giù per scorrere l'elenco, visualizzare il nome di ogni classe nel `Class` casella e il nome file nel **File** casella che viene generato quando si fa clic ** Fine**. È possibile selezionare solo una classe in un momento in questa casella.  
  
 È possibile rimuovere una classe selezionandolo nell'elenco e fare clic su ** < **. Non è necessario selezionare una classe nella casella di classi generate per rimuovere tutte le classi. facendo clic su ** << **, rimuovere tutte le classi di **classi generate** casella.  
  
 `Class`  
 Specifica il nome della classe selezionata nel **classi generate** casella che consente di aggiungere la procedura guidata quando si fa clic **fine**. È possibile modificare il nome di `Class` casella.  
  
 **File**  
 Imposta il nome del file di intestazione per la nuova classe. Per impostazione predefinita, questo nome è in base al nome fornito in **classi generate**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe in un file esistente. Se si sceglie un file esistente, il non verrà salvato nel percorso selezionato finché non si sceglie **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se la dichiarazione di classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe MFC da una libreria dei tipi](../../mfc/reference/adding-an-mfc-class-from-a-type-library.md)   
 [Client di automazione: uso delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)

