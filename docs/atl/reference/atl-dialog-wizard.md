---
title: Creazione guidata finestra di dialogo ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.dlg.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding dialog resources
- ATL Dialog Wizard
ms.assetid: b0b9ace5-83c9-40d3-82c3-eb6293f10583
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e2d78f0a41edca44f8841d701cc87975c551466
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32358006"
---
# <a name="atl-dialog-wizard"></a>Creazione guidata finestra di dialogo ATL
Questa procedura guidata consente di inserire nel progetto un oggetto finestra di dialogo ATL, derivato da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). Una finestra di dialogo è derivato da `CAxDialogImpl` può ospitare controlli ActiveX.  
  
 La procedura guidata crea una risorsa finestra di dialogo predefinito **OK** e **Annulla** pulsanti. È possibile modificare la risorsa finestra di dialogo e aggiungere controlli ActiveX utilizzando il [finestra di dialogo Editor](../../windows/dialog-editor.md) in visualizzazione risorse.  
  
 Nel file di intestazione vengono inseriti un [mappa messaggi](../../atl/message-maps-atl.md) e dichiarazioni per il valore predefinito di gestione degli eventi click. Vedere [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per ulteriori informazioni sulle finestre di dialogo ATL.  
  
 **Nome breve**  
 Imposta il nome abbreviato per l'oggetto finestra di dialogo ATL. Il nome specificato determina il nome della classe e i nomi dei file (con estensione cpp e h), a meno che non vengano modificati singolarmente tali campi.  
  
 `Class`  
 Imposta il nome della classe da creare. Questo nome è in base al nome fornito in **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito in **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe in un file esistente. Se si sceglie un file esistente, il non verrà salvato nel percorso selezionato finché non si sceglie **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se la dichiarazione di classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito in **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se l'implementazione della classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
## <a name="see-also"></a>Vedere anche  
 [La finestra di dialogo ATL](../../atl/reference/adding-an-atl-dialog-box.md)

