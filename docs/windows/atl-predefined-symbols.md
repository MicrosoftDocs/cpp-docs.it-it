---
title: Simboli predefiniti di ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- symbols [C++], ATL predefined
- ATL symbols
ms.assetid: 60d8f4e6-6ed9-47f3-9051-e4bf34384456
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 965eb339295b86c223b5081dede8e33dd282b95d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46386600"
---
# <a name="atl-predefined-symbols"></a>Simboli predefiniti di ATL

Questi simboli sono definiti nei file di intestazione ATL, ma supportano le azioni e funzioni di applicazione di Windows standard. Questi simboli sono usati principalmente con le finestre di dialogo. Quando si lavora con finestre di dialogo e controlli nel [editor finestre](../windows/dialog-editor.md), questi simboli verranno visualizzati nei **proprietà** finestra associato ai controlli comuni. Ad esempio, se dispone di una finestra di dialogo un **annullare** button, che comando sarà associato il simbolo IDCANCEL nel [finestra proprietà](/visualstudio/ide/reference/properties-window).

|||
|-|-|
|IDABORT|Controllo: Pulsante Interrompi della finestra di dialogo|
|IDC_STATIC|Controllo: Controllo statico|
|IDCANCEL|Controllo: Pulsante Annulla casella finestra di dialogo|
|IDIGNORE|Controllo: Pulsante Ignora casella finestra di dialogo|
|IDNO|Controllo: Nessun pulsante di finestra di dialogo|
|IDOK|Controllo: Pulsante OK della finestra di dialogo|
|IDR_ACCELERATOR1|Risorse: Tabella di tasti di scelta rapida|
|IDRETRY|Controllo: Pulsante Riprova della finestra di dialogo|
|IDS_PROJNAME|Stringa: Nome dell'applicazione corrente|
|IDYES|Controllo: Pulsante Sì nella finestra di dialogo|

## <a name="requirements"></a>Requisiti

ATL

## <a name="see-also"></a>Vedere anche

[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)<br/>
[Simboli: identificatori di risorsa](../windows/symbols-resource-identifiers.md)