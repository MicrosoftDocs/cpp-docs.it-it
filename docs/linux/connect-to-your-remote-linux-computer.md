---
title: Connettersi al computer Linux remoto | Microsoft Docs
ms.custom: 
ms.date: 11/06/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-linux
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6dce0c1c190854b7927c6e023edd76c9d1cb5645
ms.sourcegitcommit: 69632887f7a85f4841c49b4c1353d3144927a52c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/11/2017
---
# <a name="connect-to-your-remote-linux-computer"></a>Connettersi al computer Linux remoto

Durante la compilazione, il codice Linux viene copiato nel computer Linux remoto e quindi compilato nel sistema in base alle impostazioni selezionate in Visual Studio.  Per configurare la connessione remota:

1. Compilare il progetto per la prima volta oppure creare manualmente una nuova voce selezionando **Strumenti > Opzioni** e quindi aprire il nodo **Multipiattaforma > Gestione connessioni** e fare clic sul pulsante **Aggiungi**.

   ![Gestione connessioni](media/settings_connectionmanager.png)

   In entrambi gli scenari viene visualizzata la finestra **Connect to Remote System** (Connetti al sistema remoto).
   
   ![Connect to Remote System (Connetti al sistema remoto)](media/connect.png)

1. Immettere le informazioni seguenti:

   | Voce | Descrizione
   | ----- | ---
   | **Nome host**           | Nome o indirizzo IP del dispositivo di destinazione
   | **Porta**                | Porta sui cui è in esecuzione il servizio SSH, solitamente 22
   | **Nome utente**           | Utente da autenticare
   | **Tipo di autenticazione** | Sono supportate sia le password che le chiavi private
   | **Password**            | Password per il nome utente immesso
   | **File di chiave privata**    | Chiave privata creata per la connessione SSH
   | **Passphrase**          | Passphrase usata con la chiave privata selezionata in precedenza

1. Fare clic sul pulsante **Connetti** per tentare una connessione al computer remoto.  Se la connessione non riesce, le caselle delle voci che devono essere modificate verranno evidenziate in rosso.

   ![Errore Gestione connessioni](media/settings_connectionmanagererror.png)