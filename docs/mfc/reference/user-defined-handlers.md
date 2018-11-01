---
title: Gestori definiti dall'utente
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.handlers
helpviewer_keywords:
- ON_REGISTERED_MESSAGE macro [MFC]
- ON_MESSAGE macro [MFC]
- user-defined handlers [MFC]
ms.assetid: 99478294-bef0-4ba7-a369-25a6abdcdb62
ms.openlocfilehash: 4d2102668b7cc964e6fe3bffdcc6931a2961a737
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50562253"
---
# <a name="user-defined-handlers"></a>Gestori definiti dall'utente

Le voci della mappa seguenti corrispondono ai prototipi di funzione.

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|ON_MESSAGE ( \<messaggio >, \<memberFxn >)|afx_msg LRESULT memberFxn (WPARAM, LPARAM);|
|ON_REGISTERED_MESSAGE ( \<nMessageVariable >, \<memberFxn >)|afx_msg LRESULT memberFxn (WPARAM, LPARAM);|
|ON_THREAD_MESSAGE ( \<messaggio >, \<memberFxn >)|afx_msg memberFxn void (WPARAM, LPARAM);|
|ON_REGISTERED_THREAD_MESSAGE ( \<nMessageVariable >, \<memberFxn >)|afx_msg memberFxn void (WPARAM, LPARAM);|

## <a name="see-also"></a>Vedere anche

[Mappe messaggi](../../mfc/reference/message-maps-mfc.md)<br/>
[Gestori per WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

