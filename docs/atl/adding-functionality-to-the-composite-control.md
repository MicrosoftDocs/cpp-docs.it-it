---
title: "Aggiunta di funzionalità per il controllo composito | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- event handlers [C++], ActiveX controls
- composite controls, handling events
- ActiveX controls [C++], events
ms.assetid: 98f85681-9564-480d-af38-03f9733fe58b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6dcf3ffa0c3168c2f96a3ad9bed13ab1213f63da
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-functionality-to-the-composite-control"></a>Aggiunta di funzionalità per il controllo composito
Dopo aver inserito eventuali controlli nel controllo composito, il passaggio successivo prevede l'aggiunta di nuove funzionalità. Questa nuova funzionalità in genere può essere suddiviso in due categorie:  
  
-   Supporto di interfacce aggiuntive e personalizzazione del comportamento del controllo composito con ulteriori funzionalità specifiche.  
  
-   Gestione di eventi da contenuti o del controllo ActiveX (controlli).  
  
 Per lo scopo e ambito di questo articolo, il resto di questa sezione è incentrata unicamente sulla gestione degli eventi dei controlli ActiveX.  
  
> [!NOTE]
>  Se è necessario gestire i messaggi dai controlli di Windows, vedere [implementazione di una finestra](../atl/implementing-a-window.md) per ulteriori informazioni sulla gestione dei messaggi in ATL.  
  
 Dopo aver inserito un controllo ActiveX nella risorsa della finestra di dialogo, il pulsante destro del controllo e fare clic su **Aggiungi gestore**. Selezionare l'evento che si desidera gestire e fare clic su **aggiungere e modificare**. Il codice del gestore eventi verrà aggiunto al file con estensione h del controllo.  
  
 Punti di connessione per i controlli ActiveX del controllo composito vengono automaticamente connessi e disconnesso tramite chiamate a [CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap).  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali sul controllo composito](../atl/atl-composite-control-fundamentals.md)

