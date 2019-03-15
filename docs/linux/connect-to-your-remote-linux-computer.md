---
title: Connettersi al computer Linux remoto in Visual Studio
description: Come connettersi a un computer Linux remoto all'interno di un progetto di Visual Studio C++.
ms.date: 07/20/2018
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
ms.openlocfilehash: e20714308448349ee5dac8951a7b5d7bfd2f29ef
ms.sourcegitcommit: b4645761ce5acf8c2fc7a662334dd5a471ea976d
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/07/2019
ms.locfileid: "57562848"
---
# <a name="connect-to-your-remote-linux-computer"></a>Connettersi al computer Linux remoto

Durante la compilazione di un progetto Linux C++, il codice Linux viene copiato nel computer Linux remoto e quindi compilato in base alle impostazioni di Visual Studio. Per configurare la connessione remota:

1. Compilare il progetto per la prima volta oppure creare manualmente una nuova voce selezionando **Strumenti > Opzioni** e quindi aprire il nodo **Multipiattaforma > Gestione connessioni** e fare clic sul pulsante **Aggiungi**.

   ![Gestione connessioni](media/settings_connectionmanager.png)

   In entrambi gli scenari viene visualizzata la finestra **Connect to Remote System** (Connetti al sistema remoto).

   ![Connect to Remote System (Connetti al sistema remoto)](media/connect.png)

1. Immettere le informazioni seguenti:

   | Voce | Description
   | ----- | ---
   | **Nome host**           | Nome o indirizzo IP del dispositivo di destinazione
   | **Porta**                | Porta sui cui è in esecuzione il servizio SSH, solitamente 22
   | **Nome utente**           | Utente da autenticare
   | **Tipo di autenticazione** | Sono supportate sia le password che le chiavi private
   | **Password**            | Password per il nome utente immesso
   | **File di chiave privata**    | File di chiave privata creato per la connessione SSH
   | **Passphrase**          | Passphrase usata con la chiave privata selezionata in precedenza

1. Fare clic sul pulsante **Connetti** per tentare una connessione al computer remoto.  Se la connessione non riesce, le caselle delle voci che devono essere modificate verranno evidenziate in rosso.

   ![Errore Gestione connessioni](media/settings_connectionmanagererror.png)