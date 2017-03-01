---
title: Modifica stili | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ES_READONLY
- ES_WANTRETURN
- ES_UPPERCASE
- ES_NUMBER
- ES_AUTOHSCROLL
- ES_LOWERCASE
- ES_RIGHT
- ES_MULTILINE
- ES_PASSWORD
- ES_NOHIDESEL
- ES_OEMCONVERT
- ES_LEFT
- ES_CENTER
dev_langs:
- C++
helpviewer_keywords:
- ES_WANTRETURN constant
- edit styles [MFC]
- ES_RIGHT constant
- ES_READONLY constant
- ES_PASSWORD constant
- ES_MULTILINE constant
- ES_LEFT constant
- ES_AUTOVSCROLL constant
- ES_OEMCONVERT constant
- ES_LOWERCASE constant
- ES_NUMBER constant
- ES_UPPERCASE constant
- ES_NOHIDESEL constant
- ES_AUTOHSCROLL constant
- ES_CENTER constant
ms.assetid: e6291dd6-f2cb-4ce2-ac31-32272526625c
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 275e0d2dede038bdbe9061bc8051408442aa70bf
ms.lasthandoff: 02/24/2017

---
# <a name="edit-styles"></a>Modifica stili
-   **ES_AUTOHSCROLL** scorre automaticamente in testo a destra di 10 caratteri quando l'utente digita un carattere alla fine della riga. Quando l'utente preme il tasto INVIO, il controllo scorre tutto il testo nella posizione 0.  
  
-   **ES_AUTOVSCROLL** scorre automaticamente il testo in alto di una pagina quando l'utente preme INVIO, l'ultima riga.  
  
-   **ES_CENTER** Center testo in una riga singola o multiriga controllo di modifica.  
  
-   **ES_LEFT** sinistra-Allinea il testo in una riga singola o multiriga controllo edit.  
  
-   **ES_LOWERCASE** converte tutti i caratteri in lettere minuscole quando vengono digitati nel controllo di modifica.  
  
-   **ES_MULTILINE** indica un controllo di modifica più righe. (Il valore predefinito è l'unica riga). Se il **ES_AUTOVSCROLL** lo stile è specificato, il controllo di modifica Mostra il numero di righe possibili e scorre in senso verticale quando l'utente preme il tasto INVIO. Se **ES_AUTOVSCROLL** non è specificato, il controllo di modifica Mostra il numero di righe e segnali acustici se si preme INVIO quando nessun più righe possono essere visualizzate. Se il **ES_AUTOHSCROLL** lo stile è specificato, il controllo di modifica multiriga scorre automaticamente in senso orizzontale quando il cursore va oltre il bordo destro del controllo. Per avviare una nuova riga, l'utente deve premere INVIO. Se **ES_AUTOHSCROLL** non è specificato, il controllo automaticamente a capo le parole all'inizio della riga successiva quando necessario; una nuova riga viene avviata anche se si preme INVIO. La posizione del ritorno a capo automatico è determinata dalla dimensione della finestra. Se le dimensioni della finestra viene modificato, viene visualizzata di nuovo le modifiche della posizione ritorno a capo automatico e il testo. Controlli di modifica più righe possono avere barre di scorrimento. Un controllo di modifica con barre di scorrimento elabora i propri messaggi della barra di scorrimento. Modificare i controlli senza scorrimento barre di scorrimento come descritto in precedenza ed elaborare i messaggi di scorrimento inviati dalla finestra padre.  
  
-   **ES_NOHIDESEL** in genere, un controllo di modifica consente di nascondere la selezione quando il controllo perde lo stato attivo e inverte la selezione quando il controllo riceve lo stato attivo. Specifica di **ES_NOHIDESEL** Elimina l'azione predefinita.  
  
-   **ES_NUMBER** consente solo cifre deve essere immesso nel controllo di modifica.  
  
-   **ES_OEMCONVERT** il testo immesso nel controllo di modifica viene convertito dal set di caratteri ANSI per il set di caratteri OEM e quindi di nuovo ad ANSI. In questo modo corretta conversione dei caratteri quando l'applicazione chiama il `AnsiToOem` funzione per convertire una stringa ANSI nel controllo di modifica in caratteri OEM di Windows. Questo stile è particolarmente utile per i controlli di modifica che contengono i nomi di file.  
  
-   **ES_PASSWORD** Visualizza tutti i caratteri come un asterisco (**\***) quando vengono digitati nel controllo di modifica. Un'applicazione può utilizzare il `SetPasswordChar` funzione membro per modificare il carattere che viene visualizzato.  
  
-   **ES_READONLY** impedisce all'utente di inserire o la modifica del testo nel controllo di modifica.  
  
-   **ES_RIGHT** testo viene allineato a destra in una riga singola o multiriga controllo di modifica.  
  
-   **ES_UPPERCASE** converte tutti i caratteri in maiuscolo quando vengono digitati nel controllo di modifica.  
  
-   **ES_WANTRETURN** specifica inserire un ritorno a capo quando l'utente preme il tasto INVIO durante l'immissione del testo in un controllo di modifica più righe in una finestra di dialogo. Senza questo stile, premendo il tasto INVIO ha lo stesso effetto premendo il pulsante di comando finestra di dialogo predefinita caselle. Questo stile non ha alcun effetto su una riga singola controllo edit.  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CEdit::Create](../../mfc/reference/cedit-class.md#create)   
 [Modifica degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775464)


