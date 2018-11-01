---
title: Aggiornamento dell'interfaccia utente per le visualizzazioni di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- user interfaces, updating
- menus, updating as context changes
- record views, user interface
ms.assetid: 2c7914b6-2dc3-40c3-b2f2-8371da2a4063
ms.openlocfilehash: 914a262560a10ba4085e0605a0c9f677d7a447fd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630399"
---
# <a name="user-interface-updating-for-record-views--mfc-data-access"></a>Aggiornamento dell'interfaccia utente per le visualizzazioni di record (accesso ai dati MFC)

`CRecordView` fornisce predefinito i gestori aggiornamento dell'interfaccia utente per i comandi di navigazione. Questi gestori rendono automatica l'abilitazione e la disabilitazione degli oggetti dell'interfaccia utente, ovvero voci di menu e pulsanti delle barre degli strumenti. La creazione guidata applicazione comprendono menu standard e, se si sceglie la **sulla barra degli strumenti ancorabile** opzione, un set di pulsanti della barra degli strumenti per i comandi. Se si crea una classe per la visualizzazione di record mediante `CRecordView`, sarà possibile aggiungere all'applicazione oggetti dell'interfaccia utente simili.

### <a name="to-create-menu-resources-with-the-menu-editor"></a>Per creare risorse di menu con l'editor di menu

1. Che fa riferimento alle informazioni sull'uso di [editor di menu](../windows/menu-editor.md), creare un menu con gli stessi quattro comandi.

#### <a name="to-create-toolbar-buttons-with-the-graphics-editor"></a>Per creare pulsanti delle barre degli strumenti con l'editor grafico

1. Che fa riferimento alle informazioni sull'uso di [editor barra degli strumenti](../windows/toolbar-editor.md), modificare la risorsa barra degli strumenti per aggiungere i pulsanti della barra degli strumenti per i comandi di navigazione tra i record.

## <a name="see-also"></a>Vedere anche

[Supporto della navigazione in una visualizzazione di Record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)<br/>
[Uso di una visualizzazione di Record](../data/using-a-record-view-mfc-data-access.md)