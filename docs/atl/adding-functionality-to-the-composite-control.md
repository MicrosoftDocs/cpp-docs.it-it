---
description: 'Altre informazioni su: aggiunta di funzionalità al controllo composito'
title: Aggiunta di funzionalità al controllo composito
ms.date: 11/04/2016
helpviewer_keywords:
- event handlers [C++], ActiveX controls
- composite controls, handling events
- ActiveX controls [C++], events
ms.assetid: 98f85681-9564-480d-af38-03f9733fe58b
ms.openlocfilehash: 90e1f6b0adfc33817f9fa5a6de6fbdcd276241e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166122"
---
# <a name="adding-functionality-to-the-composite-control"></a>Aggiunta di funzionalità al controllo composito

Dopo aver inserito i controlli necessari nel controllo composito, il passaggio successivo prevede l'aggiunta di nuove funzionalità. Questa nuova funzionalità rientra in genere in due categorie:

- Supporto di interfacce aggiuntive e personalizzazione del comportamento del controllo composito con funzionalità aggiuntive specifiche.

- Gestione degli eventi dal controllo ActiveX (o controlli) contenuti.

Per lo scopo e l'ambito di questo articolo, la parte restante di questa sezione è incentrata esclusivamente sulla gestione degli eventi dai controlli ActiveX.

> [!NOTE]
> Se è necessario gestire i messaggi dai controlli Windows, vedere [implementazione di una finestra](../atl/implementing-a-window.md) per ulteriori informazioni sulla gestione dei messaggi in ATL.

Dopo aver inserito un controllo ActiveX nella risorsa finestra di dialogo, fare clic con il pulsante destro del mouse sul controllo e scegliere **Aggiungi gestore eventi**. Selezionare l'evento che si desidera gestire e fare clic su **Aggiungi e modifica**. Il codice del gestore eventi verrà aggiunto al file con estensione h del controllo.

I punti di connessione per i controlli ActiveX sul controllo composito vengono automaticamente connessi e disconnessi tramite chiamate a [CComCompositeControl:: AdviseSinkMap](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap).

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sul controllo composito](../atl/atl-composite-control-fundamentals.md)
