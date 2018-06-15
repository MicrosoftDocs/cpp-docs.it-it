---
title: Aggiunta guidata classe da controllo ActiveX | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.class.axcontrol
dev_langs:
- C++
helpviewer_keywords:
- ActiveX Control Wizard
- Add Class from ActiveX Control Wizard [C++]
ms.assetid: 668d801c-5fb6-4176-9191-5c38995a4713
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7ab96943e47287c9b54753c8d3a1edb868804274
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33336817"
---
# <a name="add-class-from-activex-control-wizard"></a>Aggiunta guidata classe da controllo ActiveX
Usare questa procedura guidata per aggiungere una classe MFC da un controllo ActiveX disponibile. La procedura guidata crea una classe per ogni interfaccia aggiunta dal controllo ActiveX selezionato.  
  
 **Aggiungi classe da**  
 Specifica il percorso della libreria dei tipi da cui viene creata la classe.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Registry**|La libreria dei tipi è registrata nel sistema. Le librerie dei tipi registrate sono elencate in **Available type libraries** (Librerie dei tipi disponibili).|  
|**File**|La libreria dei tipi non è necessariamente registrata nel sistema ma è contenuta in un file. È necessario specificare il percorso del file in **Percorso**.|  
  
 **Controlli ActiveX disponibili**  
 Specifica i controlli ActiveX attualmente registrati nel sistema. Selezionare un controllo ActiveX dall'elenco per visualizzarne le interfacce nell'elenco **Interfacce**. Per altre informazioni sulla registrazione dei controlli ActiveX, vedere [Controlli ActiveX MFC: distribuzione dei controlli ActiveX](../mfc/mfc-activex-controls-distributing-activex-controls.md).  
  
 Se si fa clic **File** in **Aggiungi classe da**, questa casella non è disponibile per la modifica.  
  
 **Posizione**  
 Specifica il percorso del controllo ActiveX. Se si fa clic su **File** in **Aggiungi classe da**, è possibile specificare il percorso del file contenente la libreria dei tipi. Per passare al percorso del file, fare clic sul pulsante con i puntini di sospensione.  
  
 Se si fa clic su **Registro di sistema** in **Aggiungi classe da**, questa casella non è disponibile per la modifica.  
  
 **Interfacce**  
 Specifica le interfacce del controllo ActiveX attualmente selezionato in **Controlli ActiveX disponibili** o nella libreria dei tipi nel file specificato in **Percorso**.  
  
|Pulsante Trasferimento|Descrizione|  
|---------------------|-----------------|  
|**>**|Aggiunge l'interfaccia selezionata nell'elenco **Interfacce**. Non disponibile se non è selezionata alcuna interfaccia.|  
|**>>**|Aggiunge tutte le interfacce nel controllo ActiveX selezionato in **Controlli ActiveX disponibili** o nella libreria dei tipi nel file specificato in **Percorso**.|  
|**<**|Rimuove la classe selezionata nell'elenco **Classi generate**. Non disponibile se non è selezionata alcuna classe nell'elenco **Classi generate**.|  
|**<\<**|Rimuove tutte le classi dell'elenco **Classi generate**. Non disponibile se l'elenco **Classi generate** è vuoto.|  
  
 **Classi generate**  
 Specifica i nomi di classe da generare dalle interfacce aggiunte usando il pulsante **>** o **>>**. È possibile fare clic su questa casella per selezionare una classe, quindi usare le frecce Su o Giù per scorrere l'elenco, visualizzando il nome di ogni classe nella casella `Class` e il nome file nella casella **File con estensione h** generati dalla procedura guidata quando si fa clic su **Fine**. È possibile selezionare solo una classe alla volta in questa casella.  
  
 È possibile rimuovere una classe selezionandola nell'elenco e facendo clic su **<**. Non è necessario selezionare una classe nella casella **Classi generate** per rimuovere tutte le classi. Fare clic su **<<** per rimuovere tutte le classi nella casella **Classi generate**.  
  
 `Class`  
 Specifica il nome della classe selezionata nella casella **Classi generate** aggiunta dalla procedura guidata quando si fa clic su **Fine**. È possibile modificare il nome nella casella `Class`.  
  
 **File con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, il nome è basato sul nome specificato in **Classi generate**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine**.  
  
 La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **File con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, il nome è basato sul nome specificato in **Classi generate**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una classe da un controllo ActiveX](../ide/adding-a-class-from-an-activex-control-visual-cpp.md)   
 [Client di automazione: uso delle librerie dei tipi](../mfc/automation-clients-using-type-libraries.md)