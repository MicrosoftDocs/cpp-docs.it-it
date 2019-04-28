---
title: Aggiunta di funzionalità al controllo composito
ms.date: 11/04/2016
helpviewer_keywords:
- event handlers [C++], ActiveX controls
- composite controls, handling events
- ActiveX controls [C++], events
ms.assetid: 98f85681-9564-480d-af38-03f9733fe58b
ms.openlocfilehash: 9ad7ef3d80579804ac614fbefac1a042a9cf2fba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62252494"
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
