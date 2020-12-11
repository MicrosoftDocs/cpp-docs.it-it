---
description: 'Ulteriori informazioni su: creazione guidata finestra di dialogo ATL'
title: Creazione guidata finestra di dialogo ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.dlg.overview
helpviewer_keywords:
- ATL projects, adding dialog resources
- ATL Dialog Wizard
ms.assetid: b0b9ace5-83c9-40d3-82c3-eb6293f10583
ms.openlocfilehash: 2fc110f12399c0c855cb98a9d7e505180bef7b0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158881"
---
# <a name="atl-dialog-wizard"></a>Creazione guidata finestra di dialogo ATL

Questa procedura guidata consente di inserire nel progetto un oggetto finestra di dialogo ATL, derivato da [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). Una finestra di dialogo derivata da `CAxDialogImpl` può ospitare controlli ActiveX.

La procedura guidata crea una risorsa finestra di dialogo con i pulsanti predefiniti **OK** e **Annulla** . È possibile modificare la risorsa finestra di dialogo e aggiungere controlli ActiveX usando l' [editor finestre](../../windows/dialog-editor.md) di visualizzazione risorse.

La procedura guidata inserisce nel file di intestazione una [mappa messaggi](../../atl/message-maps-atl.md) e le dichiarazioni per la gestione degli eventi Click predefiniti. Per ulteriori informazioni sulle finestre di dialogo ATL, vedere [implementazione di una](../../atl/implementing-a-dialog-box.md) finestra di dialogo.

- **Nome breve**

   Imposta il nome abbreviato per l'oggetto finestra di dialogo ATL. Il nome specificato determina il nome della classe e i nomi di file (con estensione cpp e h), a meno che non si modifichino i campi singolarmente.

- **Classe**

   Imposta il nome della classe da creare. Questo nome è basato sul nome specificato in **Nome breve**, preceduto da "C", il prefisso tipico per un nome di classe.

- **File con estensione h**

   Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine**.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **File con estensione cpp**

   Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome specificato in **Nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

## <a name="see-also"></a>Vedi anche

[Finestra di dialogo ATL](../../atl/reference/adding-an-atl-dialog-box.md)
