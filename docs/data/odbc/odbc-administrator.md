---
title: Amministratore ODBC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5c00527b5378805e0aa81c74c23175edd39bd144
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50052577"
---
# <a name="odbc-administrator"></a>Amministratore ODBC

L'amministratore ODBC registra e consente di configurare il [zdroje dat](../../data/odbc/data-source-odbc.md) disponibili localmente o in una rete. Le procedure guidate di usano le informazioni fornite dall'amministratore ODBC per creare codice nelle applicazioni che si connette gli utenti a origini dati.

Per configurare un'origine dati ODBC per l'uso con le classi ODBC MFC o le classi MFC oggetto DAO (Data Access), è innanzitutto necessario registrare e configurare l'origine dati. Utilizzare Amministratore ODBC per aggiungere e rimuovere le origini dati. A seconda del driver ODBC, è anche possibile creare nuove origini dati.

Amministratore ODBC viene installato durante l'installazione. Se si è scelto **Custom** installazione e non è stato selezionato alcun driver ODBC nel **opzioni di Database** finestra di dialogo, è necessario eseguire nuovamente l'installazione per installare i file necessari.

Durante l'installazione, si seleziona i driver ODBC che si desidera installare. In un secondo momento, è possibile installare driver aggiuntivi forniti con Visual C++ tramite il programma di installazione di Visual C++.

Se si desidera installare i driver ODBC non forniti con Visual C++, è necessario eseguire il programma di installazione che accompagna il driver.

#### <a name="to-install-odbc-drivers-that-ship-with-visual-c"></a>Per installare i driver ODBC forniti con Visual C++

1. Eseguire il programma di installazione dal CD di distribuzione di Visual C++.

   L'apertura nella finestra di dialogo del programma di installazione viene visualizzata.

1. Fare clic su **successivo** in ogni finestra di dialogo fino a raggiungere il **opzioni di installazione** nella finestra di dialogo. Selezionare **Custom**, quindi fare clic su **successivo**.

1. Deselezionare tutte le caselle di controllo nel **installazione di Microsoft Visual C++** finestra di dialogo, ad eccezione di **opzioni di Database** casella di controllo e quindi fare clic su **dettagli** per visualizzare il **Opzioni database** nella finestra di dialogo.

1. Cancella il **Microsoft Data Access Objects** casella di controllo, seleziona il **Microsoft ODBC driver** casella di controllo e quindi fare clic su **dettagli**.

   Il **Microsoft ODBC driver** verrà visualizzata la finestra di dialogo.

1. Selezionare i driver che si desidera installare e quindi fare clic su **OK** due volte.

1. Fare clic su **successivo** rimanenti finestre di dialogo per avviare l'installazione. Il programma di installazione si invia una notifica una volta completata l'installazione.

Quando vengono installati i driver, è possibile configurare l'origine dati tramite Amministratore ODBC. Si noterà l'icona ODBC nel Pannello di controllo.

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)