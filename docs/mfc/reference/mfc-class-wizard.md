---
title: Creazione guidata classe MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.wizards.classwizard
dev_langs:
- C++
helpviewer_keywords:
- wizards (MFC)
- MFC Class Wizard
ms.assetid: 8b0dd867-5d07-4214-99be-2a1c1995e6d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 409fd7f0cde2090b84ed2a997fedc43b2ffd5db7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33370142"
---
# <a name="mfc-class-wizard"></a>Creazione guidata classe MFC
Consente di aggiungere i messaggi e gestori di messaggi per le classi nel progetto. È anche possibile avviare altre procedure guidate o aggiungere una classe al progetto.  
  
 Per aprire il **Creazione guidata classe MFC**via di **progetto** menu, fare clic su **Creazione guidata classe**. Per aprire la procedura guidata con un tasto di scelta rapida, digitare CTRL + MAIUSC + X.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Progetto**  
 Il nome di un progetto nella soluzione.  
  
 È possibile selezionare altri progetti nella soluzione dall'elenco a discesa.  
  
 **Nome della classe**  
 Il nome di una classe nel progetto.  
  
 Quando si seleziona una classe nel **nome classe** elenco dati della classe popolano i controlli di **Creazione guidata classe MFC**. Quando si modifica il valore di un controllo, i dati della classe selezionata sono interessati.  
  
 **Aggiungi classe**  
 Consente di aggiungere una classe da una delle diverse origini.  
  
 A seconda della selezione, il **guidata aggiunta classe MFC**, **Aggiunta guidata classe da libreria dei tipi**, **Aggiunta guidata classe da controllo ActiveX**, o **ODBC MFC Creazione guidata consumer** viene avviato.  
  
 **Classe di base**  
 La classe di base della classe che viene visualizzata in **nome classe**.  
  
 **Dichiarazione di classe**  
 La classe in cui il **nome classe** classe viene dichiarata.  
  
 Il **dichiarazione di classe** finestra viene visualizzata solo se il nome in esso è diverso dal nome nella **implementazione della classe**.  
  
 **Risorsa**  
 L'ID della risorsa in **nome classe**, se presente. In caso contrario, il **risorse** casella è vuota.  
  
 **Implementazione della classe**  
 Il nome del file che contiene l'implementazione della classe nel **nome classe**.  
  
 È possibile selezionare un file di implementazione diverso facendo clic sulla freccia. Nella tabella seguente elenca le opzioni disponibili.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Apri File**|Chiude la procedura guidata classe e apre il file di implementazione di classe corrente.|  
|**Aprire la cartella contenitore**|Apre la cartella che contiene il file di implementazione di classe corrente.|  
|**Percorso completo di copia negli Appunti**|Copia il percorso del file di implementazione corrente negli Appunti.|  
  
 **Comandi**  
 Consente di aggiungere, eliminare, modificare o eseguire la ricerca di un comando e il relativo gestore di messaggi.  
  
 Per aggiungere un gestore, fare clic su **Aggiungi gestore**, o fare doppio clic su un elemento di **gli ID oggetto** elenco o **messaggi** elenco. Il nome della funzione, un ID e un messaggio risultante vengono visualizzati nel **funzioni membro** elenco.  
  
 Per eliminare un gestore, selezionare un elemento di **funzioni membro** elenco e quindi fare clic su **Elimina gestore**.  
  
 Per modificare un gestore, fare doppio clic sul corrispondente nel **funzioni membro** elenco. In alternativa, selezionare un elemento nella casella di riepilogo e quindi fare clic su **Modifica codice**.  
  
 **Messaggi**  
 Consente di aggiungere, eliminare, modificare o eseguire la ricerca di un messaggio e il relativo gestore di messaggi.  
  
 Per aggiungere un gestore, fare clic su **Aggiungi gestore**, o fare doppio clic su un elemento di **messaggi** elenco.  
  
 Per aggiungere un messaggio personalizzato, fare clic su **Aggiungi messaggio personalizzato** o premere il tasto INVIO e quindi specificare i valori nel **Aggiungi messaggio personalizzato** la finestra di dialogo. Nella finestra di dialogo, è possibile selezionare **messaggio registrato** per gestire un messaggio della finestra che viene garantito l'univocità in tutto il sistema operativo.  
  
 **Funzioni virtuali**  
 Consente di aggiungere, eliminare, modificare o eseguire la ricerca di una funzione virtuale o una funzione virtuale sottoposta a override.  
  
 **Variabili membro**  
 Consente di aggiungere, eliminare, modificare o eseguire la ricerca di una variabile membro.  
  
 **Metodi**  
 Consente di aggiungere, eliminare, o cercare un metodo e anche passare alla definizione o dichiarazione di un metodo.  
  
 Per aggiungere un metodo, fare clic su **Aggiungi metodo**, quindi specificare i valori nel **Aggiungi metodo** la finestra di dialogo.  
  
 Per eliminare un metodo, selezionare un elemento di **metodi** elenco e quindi fare clic su **metodo Delete**.  
  
 Per visualizzare una dichiarazione, selezionare un elemento di **metodi** elenco e quindi fare clic su **Vai a dichiarazione.**  
  
 Per visualizzare una definizione, fare doppio clic su un elemento di **metodi** elenco. In alternativa, selezionare un elemento il **metodi** elenco e quindi fare clic sul **Vai a definizione** pulsante.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)
