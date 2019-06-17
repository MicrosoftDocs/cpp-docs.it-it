---
title: Connettersi al computer Linux remoto in Visual Studio
description: Come connettersi a un computer Linux remoto all'interno di un progetto di Visual Studio C++.
ms.date: 06/07/2019
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
ms.openlocfilehash: 6348681ecc8e6f7863b2119810db24879526a1c6
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821605"
---
# <a name="connect-to-your-remote-linux-computer"></a>Connettersi al computer Linux remoto

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range="vs-2019"

Quando si usa un sottosistema Windows per Linux (WSL), Visual Studio interagisce con la distribuzione di Linux direttamente tramite il file system. Non è necessaria una connessione remota.

::: moniker-end

Durante la compilazione di un progetto Linux C++ per un sistema Linux remoto (macchina virtuale o computer fisico), il codice Linux viene copiato nel computer Linux remoto, quindi compilato in base alle impostazioni di Visual Studio. Per configurare la connessione remota:

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