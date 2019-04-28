---
title: Gestori dei pulsanti dell'utente
ms.date: 11/04/2016
f1_keywords:
- ON_BN_HILITE
- ON_BN_DOUBLECLICKED
- ON_BN_CLICKED
- ON_BN_PAINT
- ON_BN_DISABLE
- ON_BN_UNHILITE
helpviewer_keywords:
- ON_BN_PAINT
- user buttons [MFC]
- ON_BN_DOUBLECLICKED [MFC]
- ON_BN_DISABLE [MFC]
- ON_BN_UNHILITE [MFC]
- ON_BN_HILITE [MFC]
- ON_BN_CLICKED [MFC]
ms.assetid: 410ea968-478f-4806-b7b8-5d7c8dc2bf42
ms.openlocfilehash: 1b79c781243b0af02479d37865a86577311789da
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62309733"
---
# <a name="user-button-handlers"></a>Gestori dei pulsanti dell'utente

Le voci della mappa seguenti corrispondono ai prototipi di funzione.

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|ON_BN_CLICKED ( \<id >, \<memberFxn >)|() memberFxn void afx_msg;|
|ON_BN_DISABLE( \<id>, \<memberFxn> )|() memberFxn void afx_msg;|
|ON_BN_DOUBLECLICKED( \<id>, \<memberFxn> )|() memberFxn void afx_msg;|
|ON_BN_HILITE ( \<id >, \<memberFxn >)|() memberFxn void afx_msg;|
|ON_BN_PAINT ( \<id >, \<memberFxn >)|() memberFxn void afx_msg;|
|ON_BN_UNHILITE( \<id>, \<memberFxn> )|() memberFxn void afx_msg;|

## <a name="see-also"></a>Vedere anche

[Mappe messaggi](../../mfc/reference/message-maps-mfc.md)
