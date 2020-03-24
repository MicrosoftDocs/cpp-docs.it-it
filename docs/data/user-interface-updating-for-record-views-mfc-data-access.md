---
title: Aggiornamento dell'interfaccia utente per le visualizzazioni di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- user interfaces, updating
- menus, updating as context changes
- record views, user interface
ms.assetid: 2c7914b6-2dc3-40c3-b2f2-8371da2a4063
ms.openlocfilehash: 9bfb907d21c928c605b304c595acb834d0046e35
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209053"
---
# <a name="user-interface-updating-for-record-views--mfc-data-access"></a>Aggiornamento dell'interfaccia utente per le visualizzazioni di record (accesso ai dati MFC)

`CRecordView` fornisce gestori di aggiornamenti predefiniti dell'interfaccia utente per i comandi di navigazione. Questi gestori rendono automatica l'abilitazione e la disabilitazione degli oggetti dell'interfaccia utente, ovvero voci di menu e pulsanti delle barre degli strumenti. La creazione guidata applicazione fornisce menu standard e, se si sceglie l'opzione **barra degli strumenti ancorabile** , un set di pulsanti della barra degli strumenti per i comandi. Se si crea una classe per la visualizzazione di record mediante `CRecordView`, sarà possibile aggiungere all'applicazione oggetti dell'interfaccia utente simili.

### <a name="to-create-menu-resources-with-the-menu-editor"></a>Per creare risorse di menu con l'editor di menu

1. Facendo riferimento alle informazioni sull'uso dell'editor di [menu](../windows/menu-editor.md), creare un menu personalizzato con gli stessi quattro comandi.

#### <a name="to-create-toolbar-buttons-with-the-graphics-editor"></a>Per creare pulsanti delle barre degli strumenti con l'editor grafico

1. Facendo riferimento alle informazioni sull'utilizzo dell'editor della [barra degli strumenti](../windows/toolbar-editor.md), modificare la risorsa della barra degli strumenti per aggiungere i pulsanti della barra degli strumenti per i comandi di spostamento dei record.

## <a name="see-also"></a>Vedere anche

[Supporto della navigazione in una visualizzazione di record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)<br/>
[Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)
