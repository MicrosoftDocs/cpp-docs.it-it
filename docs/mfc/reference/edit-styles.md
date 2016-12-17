---
title: "Modifica stili | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ES_READONLY"
  - "ES_WANTRETURN"
  - "ES_UPPERCASE"
  - "ES_NUMBER"
  - "ES_AUTOHSCROLL"
  - "ES_LOWERCASE"
  - "ES_RIGHT"
  - "ES_MULTILINE"
  - "ES_PASSWORD"
  - "ES_NOHIDESEL"
  - "ES_OEMCONVERT"
  - "ES_LEFT"
  - "ES_CENTER"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stili di modifica [MFC]"
  - "ES_AUTOHSCROLL (costante)"
  - "ES_AUTOVSCROLL (costante)"
  - "ES_CENTER (costante)"
  - "ES_LEFT (costante)"
  - "ES_LOWERCASE (costante)"
  - "ES_MULTILINE (costante)"
  - "ES_NOHIDESEL (costante)"
  - "ES_NUMBER (costante)"
  - "ES_OEMCONVERT (costante)"
  - "ES_PASSWORD (costante)"
  - "ES_READONLY (costante)"
  - "ES_RIGHT (costante)"
  - "ES_UPPERCASE (costante)"
  - "ES_WANTRETURN (costante)"
ms.assetid: e6291dd6-f2cb-4ce2-ac31-32272526625c
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifica stili
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

-   Scorre di**ES\_AUTOHSCROLL**automaticamente un testo alla destra di 10 caratteri quando gli utenti un carattere alla fine della riga.  Quando si preme INVIO, il controllo scorre il testo alla posizione 0.  
  
-   Scorre di**ES\_AUTOVSCROLL**automaticamente il testo che in una pagina quando l'utente preme INVIO nell'ultima riga.  
  
-   I centri di**ES\_CENTER**il testo in un controllo di modifica a riga singola o su più righe.  
  
-   **ES\_LEFT** allinea a sinistra del testo in un controllo di modifica a riga singola o su più righe.  
  
-   **ES\_LOWERCASE** converte tutti i caratteri in minuscolo mentre vengono digitati nel controllo di modifica.  
  
-   **ES\_MULTILINE** definisce un controllo di modifica a più righe. L'impostazione predefinita è una singola riga.\) Se lo stile di **ES\_AUTOVSCROLL** viene specificato, il controllo di modifica mostra le righe possibile e scorre verticalmente quando l'utente preme INVIO.  Se **ES\_AUTOVSCROLL** non viene fornito, il controllo di modifica mostra le righe possibile e emette un segnale acustico se INVIO viene raggiunto quando non più riga può essere visualizzato.  Se lo stile di **ES\_AUTOHSCROLL** viene specificato, il controllo di modifica a più righe automaticamente scorre orizzontalmente quando il cursore viene posizionato dopo il bordo destro del controllo.  Per iniziare una nuova riga, sarà necessario premere INVIO.  Se **ES\_AUTOHSCROLL** non viene fornito, il controllo esegue automaticamente il wrapping delle parole va a capo se necessario; una nuova riga viene avviata se INVIO viene premuto.  Il percorso di ritorno a capo automatico è determinata dalla dimensioni della finestra.  Se le modifiche delle dimensioni della finestra, le modifiche percorso di ritorno a capo automatico e il testo viene visualizzata.  I controlli di modifica a più righe possono contenere barre di scorrimento.  Un controllo di modifica con le barre di scorrimento l'elaborazione dei messaggi della barra di scorrimento.  I controlli di modifica senza barre di scorrimento scorrono come descritto in precedenza e elaborano tutti i messaggi di scorrimento inviati dalla finestra padre.  
  
-   **ES\_NOHIDESEL** in genere, un controllo di modifica nasconde la selezione quando il controllo perde lo stato attivo per l'input e inverte la selezione quando il controllo riceve lo stato attivo per l'input.  Specificando **ES\_NOHIDESEL** elimina questa azione predefinita.  
  
-   **ES\_NUMBER** consente solo cifre da inserire nel controllo di modifica.  
  
-   Il testo di**ES\_OEMCONVERT**inserito nel controllo di modifica viene convertito dal set di caratteri ANSI in set di caratteri OEM e quindi nuovamente ad ANSI.  In questo modo la conversione di carattere appropriata quando l'applicazione chiama la funzione Windows di `AnsiToOem` per convertire una stringa ANSI nel controllo di modifica in caratteri OEM.  Questo stile è particolarmente utile per i controlli di modifica che contengono nomi del file.  
  
-   **ES\_PASSWORD** visualizzare tutti i caratteri come un asterisco \(**\***\) come vengono immessi nel controllo di modifica.  Un'applicazione può utilizzare la funzione membro di `SetPasswordChar` per modificare il carattere che visualizza.  
  
-   **ES\_READONLY** impossibilità di immettere o modificare il testo nel controllo di modifica.  
  
-   **ES\_RIGHT** Diritto\- allineare il testo in un controllo di modifica a riga singola o su più righe.  
  
-   **ES\_UPPERCASE** converte tutti i caratteri in maiuscolo mentre vengono digitati nel controllo di modifica.  
  
-   **ES\_WANTRETURN** specifica che un ritorno a capo viene inserito quando l'utente preme il tasto INVIO quando fornisce il testo in un controllo di modifica a più righe in una finestra di dialogo.  Se questo stile, premere il tasto INVIO ha lo stesso effetto di premere il pulsante predefinito delle finestre di dialogo.  Questo stile non ha effetto su un controllo di modifica a riga singola.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CEdit::Create](../Topic/CEdit::Create.md)   
 [Edit Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb775464)