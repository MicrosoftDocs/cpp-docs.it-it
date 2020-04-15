---
title: Aggiunta di funzionalità al controllo compositoAdding Functionality to the Composite Control
ms.date: 11/04/2016
helpviewer_keywords:
- event handlers [C++], ActiveX controls
- composite controls, handling events
- ActiveX controls [C++], events
ms.assetid: 98f85681-9564-480d-af38-03f9733fe58b
ms.openlocfilehash: 5de18f863831973af384d2456adb5b2214f0dd68
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317419"
---
# <a name="adding-functionality-to-the-composite-control"></a>Aggiunta di funzionalità al controllo compositoAdding Functionality to the Composite Control

Dopo aver inserito tutti i controlli necessari nel controllo composito, il passaggio successivo prevede l'aggiunta di nuove funzionalità. Questa nuova funzionalità rientra in genere in due categorie:

- Supporto di interfacce aggiuntive e personalizzazione del comportamento del controllo composito con funzionalità aggiuntive e specifiche.

- Gestione degli eventi dal controllo ActiveX contenuto (o controlli).

Ai fini e all'ambito di questo articolo, il resto di questa sezione è incentrato esclusivamente sulla gestione degli eventi dai controlli ActiveX.

> [!NOTE]
> Se è necessario gestire i messaggi dai controlli Windows, vedere [implementazione](../atl/implementing-a-window.md) di una finestra per ulteriori informazioni sulla gestione dei messaggi in ATL.

Dopo aver inserito un controllo ActiveX nella risorsa finestra di dialogo, fare clic con il pulsante destro del mouse sul controllo e **scegliere Aggiungi gestore eventi**. Selezionare l'evento che si desidera gestire e fare clic su **Aggiungi e modifica**. Il codice del gestore eventi verrà aggiunto al file H del controllo.

I punti di connessione per i controlli ActiveX nel controllo composito vengono connessi e disconnessi automaticamente tramite chiamate a [CComCompositeControl::AdviseSinkMap](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap).

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sul controllo composito](../atl/atl-composite-control-fundamentals.md)
