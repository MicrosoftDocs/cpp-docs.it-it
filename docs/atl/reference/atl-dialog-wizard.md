---
title: Creazione guidata finestra ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.dlg.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding dialog resources
- ATL Dialog Wizard
ms.assetid: b0b9ace5-83c9-40d3-82c3-eb6293f10583
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: 43540b1b86dbbf1777e7d5a7f6d8dec5dc618334
ms.lasthandoff: 02/24/2017

---
# <a name="atl-dialog-wizard"></a>Creazione guidata finestra di dialogo ATL
Questa procedura guidata consente di inserire nel progetto di un oggetto finestra di dialogo ATL, derivato da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). Una finestra di dialogo derivata da `CAxDialogImpl` può contenere controlli ActiveX.  
  
 La procedura guidata crea una risorsa finestra di dialogo predefinito **OK** e **Annulla** pulsanti. È possibile modificare la risorsa finestra di dialogo e aggiungere i controlli ActiveX utilizzando il [Editor finestre](../../windows/dialog-editor.md) in visualizzazione risorse.  
  
 Nel file di intestazione vengono inseriti un [mappa messaggi](../../atl/message-maps-atl.md) e dichiarazioni per il valore predefinito di gestione degli eventi click. Vedere [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per ulteriori informazioni sulle finestre di dialogo ATL.  
  
 **Nome breve**  
 Imposta il nome abbreviato per l'oggetto finestra di dialogo ATL. Il nome fornito determina il nome della classe e i nomi dei file (con estensione cpp e h), a meno che non vengano modificati singolarmente questi campi.  
  
 `Class`  
 Imposta il nome della classe da creare. Questo nome è basato sul nome fornito in **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito in **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, il non verrà salvato nella posizione selezionata finché non si sceglie **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic su **fine**, verrà richiesto di indicare se la dichiarazione di classe al contenuto del file. Fare clic su **Sì** per aggiungere il file, fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito in **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic su **fine**, verrà richiesto di indicare se è necessario aggiungere l'implementazione della classe in base al contenuto del file. Fare clic su **Sì** per aggiungere il file, fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
## <a name="see-also"></a>Vedere anche  
 [La finestra di dialogo ATL](../../atl/reference/adding-an-atl-dialog-box.md)


