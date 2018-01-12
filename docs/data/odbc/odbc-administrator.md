---
title: Amministratore ODBC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- installing ODBC
- ODBC data sources [C++], ODBC Administrator
- ODBC drivers [C++], installing
- ODBC [C++], ODBC Administrator
- Administrator in ODBC
- administration ODBC Administrator
- ODBC Administrator [C++]
- drivers [C++], ODBC
ms.assetid: b8652790-3437-4e7d-bc83-6ea6981f008b
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4a7d60f11457e509ae67da83aa6bc589af1ce43a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="odbc-administrator"></a>Amministratore ODBC
Amministratore ODBC registra e configura il [origini dati](../../data/odbc/data-source-odbc.md) disponibili localmente o in una rete. Le procedure guidate di utilizzano le informazioni fornite dall'amministratore ODBC per creare codice nelle applicazioni che si connette gli utenti a origini dati.  
  
 Per impostare un'origine dati ODBC per l'utilizzo con le classi ODBC MFC o le classi MFC oggetto DAO (Data Access), è necessario innanzitutto registrare e configurare l'origine dati. Per aggiungere e rimuovere le origini dati, utilizzare Amministratore ODBC. A seconda di driver ODBC, è anche possibile creare nuove origini dati.  
  
 Amministratore ODBC viene installato durante l'installazione. Se si sceglie **personalizzato** installazione e non si seleziona tutti i driver ODBC nel **opzioni di Database** la finestra di dialogo, è necessario eseguire nuovamente l'installazione per installare i file necessari.  
  
 Durante l'installazione, selezionare il driver ODBC che si desidera installare. In un secondo momento, è possibile installare i driver aggiuntivi forniti con Visual C++ utilizzando il programma di installazione di Visual C++.  
  
 Se si desidera installare il driver ODBC che non vengono forniti con Visual C++, è necessario eseguire il programma di installazione che accompagna il driver.  
  
#### <a name="to-install-odbc-drivers-that-ship-with-visual-c"></a>Per installare driver ODBC forniti con Visual C++  
  
1.  Eseguire il programma di installazione dal CD di distribuzione di Visual C++.  
  
     L'apertura nella finestra di dialogo programma di installazione viene visualizzata.  
  
2.  Fare clic su **Avanti** in ogni finestra di dialogo fino a raggiungere il **opzioni di installazione** la finestra di dialogo. Selezionare **personalizzato**, quindi fare clic su `Next`.  
  
3.  Deselezionare tutte le caselle di controllo nel **installazione di Microsoft Visual C++** la finestra di dialogo, ad eccezione di **opzioni di Database** casella di controllo e quindi fare clic su **dettagli** per visualizzare il **Opzioni di database** la finestra di dialogo.  
  
4.  Cancella il **Microsoft Data Access Objects** casella di controllo, seleziona il **driver Microsoft ODBC** casella di controllo e quindi fare clic su **dettagli**.  
  
     Il **driver Microsoft ODBC** viene visualizzata la finestra di dialogo.  
  
5.  Selezionare i driver che si desidera installare e quindi fare clic su **OK** due volte.  
  
6.  Fare clic su **Avanti** rimanenti finestre di dialogo per avviare l'installazione. Il programma di installazione si invia una notifica al termine dell'installazione.  
  
 Quando vengono installati i driver, è possibile configurare l'origine dati tramite Amministratore ODBC. L'icona ODBC sono disponibili nel Pannello di controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)