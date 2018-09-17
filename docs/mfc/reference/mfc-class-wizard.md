---
title: Creazione guidata classe MFC | Microsoft Docs
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
ms.openlocfilehash: b06353f7e0756cadb6ad05e1e5b35b3cd36b526c
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45725153"
---
# <a name="mfc-class-wizard"></a>Creazione guidata classe MFC
Consente di aggiungere i messaggi e gestori di messaggi per le classi nel progetto. È anche possibile avviare altre procedure guidate o aggiungere una classe al progetto.  
  
 Per aprire la **Creazione guidata classe MFC**via le **Project** dal menu fare clic su **Creazione guidata classe**. Per aprire la procedura guidata con un tasto di scelta rapida, digitare CTRL + MAIUSC + X.  
  
## <a name="uielement-list"></a>Elenco UIElement

- **Progetto**

   Il nome di un progetto nella soluzione.  
  
   È possibile selezionare altri progetti nella soluzione dall'elenco a discesa.  
  
- **Nome classe**

   Il nome di una classe nel progetto.  
  
   Quando si seleziona una classe nel **nome della classe** dall'elenco dei dati dalla classe popolano i controlli nel **Creazione guidata classe MFC**. Quando si modifica il valore di un controllo, i dati della classe selezionata sono interessati.  
  
- **Aggiungi classe**

   Consente di aggiungere una classe da una delle diverse origini.  
  
   A seconda della selezione, il **Creazione guidata aggiunta classe MFC**, **Aggiunta guidata classe da libreria dei tipi**, **Aggiunta guidata classe da controllo ActiveX**, o **ODBC MFC Creazione guidata consumer** viene avviato.  
  
- **Classe base**

   La classe di base della classe che viene visualizzata nella **nome della classe**.  
  
- **Dichiarazione di classe**

   La classe in cui il **nome della classe** classe viene dichiarata.  
  
   Il **dichiarazione della classe** viene visualizzata solo se il nome in esso è diverso dal nome nella **implementazione della classe**.  
  
- **Risorsa**

   L'ID della risorsa nel **nome della classe**, se presente. In caso contrario, il **risorsa** casella è vuota.  
  
- **Implementazione della classe**

   Il nome del file che contiene l'implementazione della classe nel **nome della classe**.  
  
   È possibile selezionare un file di implementazione diversa facendo clic sulla freccia. Nella tabella seguente sono elencate le opzioni disponibili.  
  
   |Opzione|Descrizione|  
   |------------|-----------------|  
   |**Apri File**|Termina la creazione guidata classe e apre il file di implementazione classe corrente.|  
   |**Apri cartella superiore**|Apre la cartella che contiene il file di implementazione classe corrente.|  
   |**Copia percorso completo negli Appunti**|Copia il percorso del file di implementazione corrente negli Appunti.|  
  
- **Comandi**

   Consente di aggiungere, eliminare, modificare o eseguire la ricerca di un comando e il relativo gestore di messaggi.  
  
   Per aggiungere un gestore, fare clic su **Add Handler**, o fare doppio clic su un elemento nel **gli ID oggetto** elenco oppure **messaggi** elenco. Il nome della funzione, ID e messaggio risultante vengono visualizzati nei **funzioni membro** elenco.  
  
   Per eliminare un gestore, selezionare un elemento di **funzioni membro** elenco e quindi fare clic su **Elimina gestore**.  
  
   Per modificare un gestore, fare doppio clic sul corrispondente nei **funzioni membro** elenco. In alternativa, selezionare un elemento nella casella di riepilogo e quindi fare clic su **modificare il codice**.  
  
- **Messaggi**

   Consente di aggiungere, eliminare, modificare o eseguire la ricerca di un messaggio e il relativo gestore di messaggi.  
  
   Per aggiungere un gestore, fare clic su **Add Handler**, o fare doppio clic su un elemento nel **messaggi** elenco.  
  
   Per aggiungere un messaggio personalizzato, fare clic su **Aggiungi messaggio personalizzato** o premere il tasto INVIO e quindi specificare i valori nel **Aggiungi messaggio personalizzato** nella finestra di dialogo. Nella finestra di dialogo, è anche possibile selezionare **messaggio registrato** per gestire un messaggio della finestra che viene garantito l'univocità in tutto il sistema operativo.  
  
- **Funzioni virtuali**

   Consente di aggiungere, eliminare, modificare o eseguire la ricerca di una funzione virtuale o una funzione virtuale sottoposto a override.  
  
- **Variabili membro**

   Consente di aggiungere, eliminare, modificare o eseguire la ricerca di una variabile membro.  
  
- **Metodi**

   Consente di aggiungere, eliminare, o cercare un metodo e anche scegliere per la definizione o dichiarazione di un metodo.  
  
   Per aggiungere un metodo, fare clic su **Aggiungi metodo**, quindi specificare i valori nel **Aggiungi metodo** nella finestra di dialogo.  
  
   Per eliminare un metodo, selezionare un elemento di **metodi** elenco e quindi fare clic su **metodo Delete**.  
  
   Per visualizzare una dichiarazione, selezionare un elemento di **metodi** elenco e quindi fare clic su **Vai a dichiarazione.**  
  
   Per visualizzare una definizione, fare doppio clic su un elemento di **metodi** elenco. In alternativa, selezionare un elemento nel **metodi** elenco e quindi fare clic sui **Vai a definizione** pulsante.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)
