---
title: "Creazione guidata classe MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.wizards.classwizard"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata classe MFC"
  - "procedure guidate (MFC)"
ms.assetid: 8b0dd867-5d07-4214-99be-2a1c1995e6d9
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Creazione guidata classe MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di aggiungere messaggi e gestori di messaggi alle classi del progetto.  È possibile iniziare anche alle altre procedure guidate o aggiungere una classe al progetto.  
  
 Per aprire la **Creazione guidata classe MFC**, scegliere **Creazione guidata classe** dal menu **Progetto**.  Per aprire la procedura guidata con un tasto di scelta rapida, digitare CTRL\+MAIUSC\+X.  
  
## Elenco UIElement  
 **Progetto**  
 Nome di un progetto nella soluzione.  
  
 È possibile selezionare altri progetti nella soluzione dall'elenco a discesa.  
  
 **Nome di classe**  
 Nome di una classe nel progetto.  
  
 Quando si seleziona una classe nell'elenco **Nome classe**, i dati dalla classe popolano i controlli nella **Creazione guidata classe MFC**.  Quando si modifica il valore di un controllo, sono interessati i dati nella classe selezionata.  
  
 **Aggiunta di classi**  
 Consente di aggiungere una classe da una delle diverse origini.  
  
 In base a quanto selezionato, **Creazione guidata aggiunta classe MFCAggiunta guidata classe da libreria dei tipi**, **Aggiunta guidata classe da controllo ActiveX** o **Creazione guidata consumer ODBC MFC** viene iniziato.  
  
 **Classe base**  
 Viene impostata la classe che viene visualizzato in **Class name**.  
  
 **Dichiarazione di classe**  
 La classe in cui la classe **Nome classe** viene dichiarata.  
  
 La casella **Dichiarazione classe** viene visualizzata solo se il nome in esso contenuto è diverso dal nome nella **Implementazione classe**.  
  
 **Risorsa**  
 ID della risorsa in **Nome classe**, se presente.  In caso contrario, la casella **Risorsa** è vuota.  
  
 **Implementazione di classe**  
 Il nome del file che contiene l'implementazione della classe in **Nome della classe**.  
  
 È possibile selezionare un file di implementazione diverso facendo clic sulla freccia.  Nella tabella riportata di seguito vengono elencate le opzioni disponibili.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Apri file**|Esce dalla procedura guidata della classe e apre il corrente file di implementazione della classe.|  
|**Aprire la cartella contenitore**|Apre la cartella che contiene il file di implementazione della classe corrente.|  
|**Copiare percorso completo negli Appunti**|Copia il percorso del file di implementazione corrente negli Appunti.|  
  
 **Comandi**  
 Consente di aggiungere, eliminare, modificare o cercare un comando e il relativo gestore di messaggi.  
  
 Per aggiungere un gestore, fare clic su **Aggiungi gestore** o fare doppio clic su un elemento nell'elenco **ID oggetto** o nell'elenco **Messaggi**.  Il nome della funzione risultante, l'ID e il messaggio vengono visualizzati nell'elenco **funzioni membro**.  
  
 Per eliminare un gestore, selezionare un elemento nell'elenco **Funzioni membro**, quindi fare clic su **Elimina gestore**.  
  
 Per modificare un gestore, fare doppio clic sull'elemento corrispondente nell'elenco **Funzioni membro**.  In alternativa, selezionare una casella elenco e quindi fare clic su **Modifica codice**.  
  
 **Messaggi**  
 Consente di aggiungere, eliminare, modificare o cercare un comando e il relativo gestore di messaggi.  
  
 Per aggiungere un gestore, fare clic su **Aggiungi gestore** o fare doppio clic su un elemento nell'elenco **Messaggi**.  
  
 Per aggiungere un messaggio personalizzato, fare clic su **Aggiungi messaggio personalizzato** o premere i tasti INVIO, quindi specificare valori nella finestra di dialogo **Aggiungi messaggio personalizzato**.  In quella finestra di dialogo, è possibile selezionare anche **Messaggio registrato** per gestire un nuovo messaggio della finestra di cui è garantita l'univocità in tutto il sistema operativo.  
  
 **Funzioni virtuali**  
 Consente di aggiungere, eliminare, modificare o cercare una funzione virtuale o una funzione virtuale sottoposta a override.  
  
 **Variabili membro**  
 Consente di aggiungere, eliminare, modificare o cercare una variabile membro.  
  
 **Metodi**  
 Consente di aggiungere, per eliminare o cercare un metodo e di andare anche alla definizione o dichiarazione di un metodo.  
  
 Per aggiungere un metodo, fare clic su **Aggiungi metodo**, quindi specificare i valori nella finestra di dialogo **Aggiungi metodo**.  
  
 Per eliminare un gestore, selezionare un elemento nell'elenco **Funzioni membro**, quindi fare clic su **Elimina gestore**.  
  
 Per visualizzare una dichiarazione, selezionare un elemento nell'elenco **Metodi**, quindi fare clic su **Vai a dichiarazione.**  
  
 Per visualizzare una definizione, fare doppio clic su un elemento nell'elenco **Metodi**.  In alternativa, selezionare un elemento nell'elenco **Metodi**, quindi fare clic sul pulsante **Vai a definizione**.  
  
## Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)