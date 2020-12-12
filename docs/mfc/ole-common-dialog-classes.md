---
description: 'Altre informazioni su: classi della finestra di dialogo comuni OLE'
title: Classi di finestre di dialogo comuni OLE
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX classes [MFC]
- dialog classes [MFC], OLE
- OLE common dialog classes [MFC]
- common dialog classes [MFC]
ms.assetid: 706526ae-f94f-4909-a0f8-6b5fe954fd97
ms.openlocfilehash: c30871c8f49be608f5ceeea3d84c86d483e20a81
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222281"
---
# <a name="ole-common-dialog-classes"></a>Classi di finestre di dialogo comuni OLE

Queste classi gestiscono le attività OLE comuni implementando una serie di finestre di dialogo OLE standard. Forniscono inoltre un'interfaccia utente coerente per la funzionalità OLE.

[COleDialog](reference/coledialog-class.md)<br/>
Utilizzato dal Framework per includere implementazioni comuni per tutte le finestre di dialogo OLE. Tutte le classi della finestra di dialogo nella categoria interfaccia utente sono derivate da questa classe di base. `COleDialog` non può essere utilizzato direttamente.

[COleInsertDialog](reference/coleinsertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Inserisci oggetto, l'interfaccia utente standard per l'inserimento di nuovi elementi collegati o incorporati OLE.

[COlePasteSpecialDialog](reference/colepastespecialdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Incolla speciale, l'interfaccia utente standard per l'implementazione del comando Modifica Incolla speciale.

[COleLinksDialog](reference/colelinksdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica collegamenti, l'interfaccia utente standard per la modifica delle informazioni sugli elementi collegati.

[COleChangeIconDialog](reference/colechangeicondialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Cambia icona, l'interfaccia utente standard per la modifica dell'icona associata a un elemento OLE incorporato o collegato.

[COleConvertDialog](reference/coleconvertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Converti, ovvero l'interfaccia utente standard per la conversione di elementi OLE da un tipo a un altro.

[COlePropertiesDialog](reference/colepropertiesdialog-class.md)<br/>
Incapsula la finestra di dialogo proprietà OLE comuni di Windows. Le finestre di dialogo delle proprietà OLE comuni forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows.

[Classe COleUpdateDialog](reference/coleupdatedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo aggiornamento, l'interfaccia utente standard per l'aggiornamento di tutti i collegamenti in un documento. La finestra di dialogo contiene un indicatore di stato per indicare la modalità di completamento della procedura di aggiornamento.

[COleChangeSourceDialog](reference/colechangesourcedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica origine, l'interfaccia utente standard per la modifica della destinazione o dell'origine di un collegamento.

[COleBusyDialog](reference/colebusydialog-class.md)<br/>
Consente di visualizzare le finestre di dialogo Server occupato e server non in risposta, l'interfaccia utente standard per la gestione delle chiamate alle applicazioni occupate. Viene in genere visualizzato automaticamente dall' `COleMessageFilter` implementazione di.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
