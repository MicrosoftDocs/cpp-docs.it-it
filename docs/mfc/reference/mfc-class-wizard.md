---
description: 'Ulteriori informazioni su: creazione guidata classe MFC'
title: Creazione guidata classe MFC
ms.date: 09/06/2019
f1_keywords:
- vc.wizards.classwizard
helpviewer_keywords:
- MFC Class Wizard
ms.assetid: 8b0dd867-5d07-4214-99be-2a1c1995e6d9
ms.openlocfilehash: ba82cabd13fb242f5201243cd9f06c44df8141ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219187"
---
# <a name="mfc-class-wizard"></a>Creazione guidata classe MFC

Utilizzare la **creazione guidata classe** per creare nuove classi MFC o aggiungere messaggi e gestori di messaggi alle classi esistenti nel progetto.

Sono disponibili tre modi per aprire la **creazione guidata classe**:

- Scegliere **creazione guidata classe** dal menu **progetto** .
- Digitare **CTRL**  >  **MAIUSC**  >  **X**.
- In **Visualizzazione classi** fare clic con il pulsante destro del mouse su una classe o sul nodo del progetto e scegliere **creazione guidata classe**.

![Creazione guidata classe](media/class-wizard.png "Creazione guidata classe MFC")

## <a name="uielement-list"></a>Elenco degli elementi di interfaccia

- **Progetto**

   Nome di un progetto nella soluzione.

   Nella casella di riepilogo a discesa è possibile selezionare altri progetti nella soluzione.

- **Nome classe**

   Nome di una classe nel progetto.

   Quando si seleziona una classe nell'elenco **nome classe** , i dati della classe popolano i controlli nella **creazione guidata classe MFC**. Quando si modifica il valore di un controllo, i dati nella classe selezionata sono interessati.

- **Aggiungi classe**

   Consente di aggiungere una nuova classe al progetto MFC.

- **Classe di base**

   Classe di base della classe visualizzata nel **nome della classe**.

- **dichiarazione di classe**

   Classe in cui viene dichiarata la classe del **nome della classe** .

   La casella della **dichiarazione di classe** viene visualizzata solo se il nome in esso è diverso dal nome nell' **implementazione della classe**.

- **Risorsa**

   ID della risorsa nel nome della **classe**, se disponibile. In caso contrario, la casella **risorsa** è vuota.

- **Implementazione della classe**

   Nome del file che contiene l'implementazione della classe nel **nome della classe**.

   È possibile selezionare un file di implementazione diverso facendo clic sulla freccia. Nella tabella seguente sono elencate le opzioni disponibili.

   |Opzione|Description|
   |------------|-----------------|
   |**Apri file**|Chiude la creazione guidata classe e apre il file di implementazione della classe corrente.|
   |**Apri cartella superiore**|Apre la cartella che contiene il file di implementazione della classe corrente.|
   |**Copia percorso completo negli Appunti**|Copia il percorso del file di implementazione corrente negli Appunti.|

- **Comandi**

   Consente di aggiungere, eliminare, modificare o cercare un comando e il relativo gestore messaggi.

   Per aggiungere un gestore, fare clic su **Aggiungi gestore** oppure fare doppio clic su un elemento nell'elenco **ID oggetto** o **messaggi** . Il nome, l'ID e il messaggio della funzione risultante vengono visualizzati nell'elenco delle **funzioni membro** .

   Per eliminare un gestore, selezionare un elemento nell'elenco **funzioni membro** , quindi fare clic su **Elimina gestore**.

   Per modificare un gestore, fare doppio clic sull'elemento corrispondente nell'elenco delle **funzioni membro** . In alternativa, selezionare un elemento nella casella di riepilogo e quindi fare clic su **modifica codice**.

- **Messaggi**

   Consente di aggiungere, eliminare, modificare o cercare un messaggio e il relativo gestore messaggi.

   Per aggiungere un gestore, fare clic su **Aggiungi gestore** oppure fare doppio clic su un elemento nell'elenco **messaggi** .

   Per aggiungere un messaggio personalizzato, fare clic su **Aggiungi messaggio personalizzato** o premere il tasto invio, quindi specificare i valori nella finestra di dialogo **Aggiungi messaggio personalizzato** . In tale finestra di dialogo è inoltre possibile selezionare un **messaggio registrato** per gestire un messaggio di finestra che garantisce l'univocità per tutto il sistema operativo.

- **Funzioni virtuali**

   Consente di aggiungere, eliminare, modificare o cercare una funzione virtuale o una funzione virtuale sottoposta a override.

- **Variabili membro**

   Consente di aggiungere, eliminare, modificare o cercare una variabile membro.

- **Metodi**

   Consente di aggiungere, eliminare o cercare un metodo, nonché di passare alla definizione o alla dichiarazione di un metodo.

   Per aggiungere un metodo, fare clic su **Aggiungi metodo** e quindi specificare i valori nella finestra di dialogo **Aggiungi metodo** .

   Per eliminare un metodo, selezionare un elemento nell'elenco dei **Metodi** e quindi fare clic su **Elimina metodo**.

   Per visualizzare una dichiarazione, selezionare un elemento nell'elenco dei **Metodi** e quindi fare clic su **Vai a dichiarazione.**

   Per visualizzare una definizione, fare doppio clic su un elemento nell'elenco dei **Metodi** . In alternativa, selezionare un elemento nell'elenco dei **Metodi** e quindi fare clic sul pulsante **Vai a definizione** .

## <a name="see-also"></a>Vedi anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)
