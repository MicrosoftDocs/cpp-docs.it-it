---
title: Aggiunta di funzionalità al controllo composito | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- event handlers [C++], ActiveX controls
- composite controls, handling events
- ActiveX controls [C++], events
ms.assetid: 98f85681-9564-480d-af38-03f9733fe58b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 59ee8047e17efdebbae6ee58ec243057a477caff
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43751133"
---
# <a name="adding-functionality-to-the-composite-control"></a>Aggiunta di funzionalità al controllo composito

Dopo aver inserito tutti i controlli necessari nel controllo composito, il passaggio successivo prevede l'aggiunta di nuove funzionalità. Questa nuova funzionalità in genere rientra nelle due categorie seguenti:

- Supporto di interfacce aggiuntive e la personalizzazione del comportamento del controllo composito con ulteriori funzionalità specifiche.

- Gestione di eventi da indipendente o del controllo ActiveX (controlli).

Per lo scopo e ambito di questo articolo, la parte restante di questa sezione riguarda esclusivamente la gestione degli eventi dei controlli ActiveX.

> [!NOTE]
>  Se è necessario gestire i messaggi dai controlli di Windows, vedere [implementazione di una finestra](../atl/implementing-a-window.md) per ulteriori informazioni sulla gestione dei messaggi in ATL.

Dopo aver inserito un controllo ActiveX nella risorsa finestra di dialogo, il pulsante destro del controllo e fare clic su **Aggiungi gestore**. Selezionare l'evento che si desidera gestire e fare clic su **aggiungere e modificare**. Il codice del gestore eventi verrà aggiunto al file con estensione h del controllo.

Punti di connessione per i controlli ActiveX del controllo composito vengono automaticamente connesse e disconnesse tramite chiamate a [CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap).

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sul controllo composito](../atl/atl-composite-control-fundamentals.md)

