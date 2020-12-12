---
description: 'Ulteriori informazioni su: amministratore ODBC'
title: Amministratore ODBC
ms.date: 11/04/2016
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
ms.openlocfilehash: bbcb0d93884f29a04f20c130f25bee9a5e2556ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317831"
---
# <a name="odbc-administrator"></a>Amministratore ODBC

L'amministratore ODBC registra e configura le [origini dati](../../data/odbc/data-source-odbc.md) disponibili in locale o in una rete. Le procedure guidate utilizzano le informazioni fornite dall'amministratore ODBC per creare codice nelle applicazioni che connette gli utenti alle origini dati.

Per configurare un'origine dati ODBC da utilizzare con le classi ODBC MFC o con le classi DAO (Data Access Object) MFC, è necessario innanzitutto registrare e configurare l'origine dati. Utilizzare ODBC Administrator per aggiungere e rimuovere origini dati. A seconda del driver ODBC, è inoltre possibile creare nuove origini dati.

L'amministratore ODBC viene installato durante l'installazione di. Se è stata scelta l'installazione **personalizzata** e non è stato selezionato alcun driver ODBC nella finestra di dialogo **Opzioni database** , è necessario eseguire di nuovo il programma di installazione per installare i file necessari.

Durante l'installazione, selezionare i driver ODBC che si desidera installare. In seguito sarà possibile installare driver aggiuntivi forniti con Visual C++ utilizzando il programma di installazione di Visual C++.

Se si desidera installare driver ODBC che non vengono forniti con Visual C++, è necessario eseguire il programma di installazione che accompagna il driver.

#### <a name="to-install-odbc-drivers-that-ship-with-visual-c"></a>Per installare i driver ODBC forniti con Visual C++

1. Eseguire il programma di installazione dal CD di distribuzione di Visual C++.

   Verrà visualizzata la finestra di dialogo di apertura nel programma di installazione.

1. Fare clic su **Avanti** in ogni finestra di dialogo fino a raggiungere la finestra di dialogo **Opzioni di installazione** . Selezionare **personalizzata**, quindi fare clic su **Avanti**.

1. Deselezionare tutte le caselle di controllo nella finestra di dialogo **Microsoft Visual C++ installazione** , ad eccezione della casella di controllo **Opzioni database** , quindi fare clic su **Dettagli** per visualizzare la finestra di dialogo **Opzioni database** .

1. Deselezionare la casella di controllo **Microsoft Data Access Objects** , selezionare la casella di controllo **Microsoft ODBC Drivers** e quindi fare clic su **Details**.

   Verrà visualizzata la finestra di dialogo **driver ODBC Microsoft** .

1. Selezionare i driver che si desidera installare, quindi fare clic su **OK** due volte.

1. Per iniziare l'installazione, fare clic su **Avanti** nelle finestre di dialogo rimanenti. Il programma di installazione invia una notifica al termine dell'installazione.

Quando si installano i driver, è possibile configurare l'origine dati mediante l'amministratore ODBC. L'icona ODBC è presente nel pannello di controllo.

## <a name="see-also"></a>Vedi anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)
