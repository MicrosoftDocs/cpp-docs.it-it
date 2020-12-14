---
description: 'Altre informazioni su: procedura: usare il riferimento incrociato Message-Map'
title: 'Procedura: utilizzare il riferimento incrociato alla mappa messaggi'
ms.date: 11/04/2016
helpviewer_keywords:
- windows [MFC], message maps
ms.assetid: 2e863d23-9e58-45ba-b5e4-a8ceefccd0c8
ms.openlocfilehash: 4bbc140db59a7df4abd42fdcf68b47273ec3e846
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219655"
---
# <a name="how-to-use-the-message-map-cross-reference"></a>Procedura: utilizzare il riferimento incrociato alla mappa messaggi

Nelle voci con etichetta \<memberFxn> scrivere una funzione membro personalizzata per una classe [CWnd](../../mfc/reference/cwnd-class.md) derivata. Assegnare alla funzione un nome. Altre funzioni, come `OnActivate`, sono funzioni membro della classe `CWnd`. Se chiamate, passano il messaggio alla funzione di Windows `DefWindowProc`. Per elaborare i messaggi di notifica di Windows, eseguire l'override della funzione corrispondente `CWnd` nella classe derivata. La funzione deve chiamare la funzione di cui si è eseguito l'override nella classe base per consentire alla classe base e a Windows di rispondere al messaggio.

In ogni caso, inserire il prototipo della funzione nell'intestazione della classe derivata da `CWnd` e codificare la voce della mappa messaggi come indicato.

Vengono utilizzati i seguenti termini:

|Termine|Definizione|
|----------|----------------|
|id|Un qualsiasi ID elemento definito dall'utente (messaggi WM_COMMAND) o un ID controllo (messaggi di notifica della finestra figlio).|
|"message" e "wNotifyCode"|ID messaggi di Windows come definiti in WINDOWS.H.|
|nMessageVariable|Nome di una variabile che contiene il valore restituito dalla `RegisterWindowMessage` funzione di Windows.|

## <a name="see-also"></a>Vedi anche

[Mappe messaggi](../../mfc/reference/message-maps-mfc.md)
