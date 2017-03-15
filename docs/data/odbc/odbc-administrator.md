---
title: "Amministratore ODBC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "amministrazione Amministratore ODBC"
  - "Amministratore in ODBC"
  - "driver [C++], ODBC"
  - "installazione di ODBC"
  - "ODBC [C++], Amministratore ODBC"
  - "Amministratore ODBC [C++]"
  - "origini dati ODBC [C++], Amministratore ODBC"
  - "driver ODBC [C++], installazione"
ms.assetid: b8652790-3437-4e7d-bc83-6ea6981f008b
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Amministratore ODBC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'Amministratore ODBC registra e configura le [origini dati](../../data/odbc/data-source-odbc.md) disponibili nel computer locale o in rete.  Le procedure guidate utilizzano le informazioni fornite dall'Amministratore ODBC per creare nelle applicazioni il codice per connettere gli utenti finali alle origini dati.  
  
 Per impostare un'origine dati ODBC per l'utilizzo con le classi ODBC MFC o con le classi DAO MFC, è necessario innanzitutto registrare e configurare l'origine dati.  Utilizzare l'Amministratore ODBC per aggiungere e rimuovere le origini dati.  È inoltre possibile creare nuove origini dati, a seconda del driver ODBC utilizzato.  
  
 L'Amministratore ODBC viene installato durante l'installazione del programma.  Se si sceglie l'installazione **Personalizzata** e non si seleziona alcun driver ODBC nella finestra di dialogo **Opzioni database**, per installare i file richiesti sarà necessario eseguire nuovamente il programma di installazione.  
  
 Durante l'installazione, selezionare i driver ODBC che si desidera installare.  Sarà possibile installare in un secondo momento i driver aggiuntivi forniti con Visual C\+\+ mediante il programma di installazione di Visual C\+\+.  
  
 Se si desidera installare driver ODBC non forniti con Visual C\+\+, è necessario eseguire il programma di installazione fornito con il driver.  
  
#### Per installare i driver ODBC forniti con Visual C\+\+  
  
1.  Avviare il programma di installazione dal CD di distribuzione di Visual C\+\+.  
  
     Verrà visualizzata la finestra di dialogo iniziale del programma di installazione.  
  
2.  Scegliere **Avanti** in tutte le finestre di dialogo fino a quando non viene visualizzata la finestra di dialogo **Opzioni di installazione**.  Selezionare **Personalizzata** e scegliere `Next`.  
  
3.  Deselezionare tutte le caselle di controllo nella finestra di dialogo **Installazione di Microsoft Visual C\+\+**, ad eccezione della casella di controllo **Opzioni database**, quindi scegliere **Dettagli** per visualizzare la finestra di dialogo **Opzioni database**.  
  
4.  Deselezionare la casella di controllo **Microsoft Data Access Objects**, selezionare la casella di controllo **Driver Microsoft ODBC** e scegliere **Dettagli**.  
  
     Verrà visualizzata la finestra di dialogo **Driver Microsoft ODBC**.  
  
5.  Selezionare i driver che si desidera installare, quindi scegliere **OK** per due volte.  
  
6.  Scegliere **Avanti** nelle successive finestre di dialogo per avviare l'installazione.  Il programma di installazione stesso segnalerà il completamento dell'installazione.  
  
 Dopo aver installato i driver, è possibile configurare l'origine dati mediante l'Amministratore ODBC.  L'icona di ODBC si trova nel Pannello di controllo.  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Origine dati \(ODBC\)](../../data/odbc/data-source-odbc.md)