---
title: "Utilizzo di CSpinButtonCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CSpinButtonCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSpinButtonCtrl (classe), utilizzo"
  - "controllo pulsante di selezione"
  - "controlli di scorrimento"
  - "controlli di scorrimento, controllo pulsante di selezione"
ms.assetid: a91db36b-e11e-42ef-8e89-51915cc486d2
caps.latest.revision: 14
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di CSpinButtonCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il controllo *pulsante di selezione* \(anche noto come *un controllo slider* \) fornisce una coppia di frecce che l'utente può fare clic per modificare un valore.  Questo valore è noto come *posizione corrente*.  La posizione rimane nell'intervallo del pulsante di selezione.  Quando l'utente fa clic sulla freccia in su, la posizione o al massimo; e quando l'utente fa clic sulla freccia in giù, la posizione o al minimo.  
  
 Il controllo pulsante di selezione è rappresentato in MFC dalla classe di [CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md).  
  
> [!NOTE]
>  Per impostazione predefinita, l'intervallo per il pulsante di selezione è il massimo impostato su zero \(0\) e il set minimo su 100.  Poiché il valore massimo è minore del valore minimo, facendo clic sulla freccia in su riduce la posizione e fare clic sulla freccia giù la aumenta.  Utilizzo [CSpinButtonCtrl::SetRange](../Topic/CSpinButtonCtrl::SetRange.md) modificare questi valori.  
  
 In genere, il percorso corrente viene visualizzato in un controllo correlato.  Il controllo correlato è noto come *la finestra degli utenti*.  Per un'illustrazione su un controllo pulsante di selezione, vedere [Sui controlli di scorrimento](http://msdn.microsoft.com/library/windows/desktop/bb759889) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Per creare una rotazione controlli e una finestra degli utenti di controllo cambia, in Visual Studio, innanzitutto trascinare un controllo di modifica alla finestra di dialogo o alla finestra e trascinare un controllo casella di selezione.  Selezionare la casella di selezione e impostarne le proprietà di **Imposta integer Buddy** e di **Auto Buddy** a **True**.  Impostare inoltre la proprietà di **Allineamento** ; **Allinea a destra** è più comune.  Con queste impostazioni, il controllo di modifica è impostato come la finestra degli utenti perché direttamente precede il controllo di modifica nell'ordine di tabulazione.  Gli interi visualizza il controllo di modifica e il controllo di rotazione viene incorporato in destra del controllo di modifica.  Facoltativamente, è possibile impostare l'intervallo valido di controllo di rotazione tramite il metodo di [CSpinButtonCtrl::SetRange](../Topic/CSpinButtonCtrl::SetRange.md).  Nessun gestore eventi è necessario per comunicare tra il controllo casella di selezione e la finestra buddy per quale motivo scambiare dati direttamente.  Se si utilizza un controllo casella di selezione per un altro scopo, ad esempio, di scorrere una sequenza di windows o finestre di dialogo, quindi aggiungere un gestore per il messaggio di `UDN_DELTAPOS` ed eseguire l'azione personalizzata presenti.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Stili dei pulsanti di selezione](../mfc/spin-button-styles.md)  
  
-   [Funzioni membro pulsante di selezione](../mfc/spin-button-member-functions.md)  
  
## Vedere anche  
 [Controlli](../mfc/controls-mfc.md)