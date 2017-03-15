---
redirect_url: /cpp/security/running-as-a-member-of-the-users-group
caps.handback.revision: 17
---
# Esecuzione come membro del gruppo Users
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come aumentare il livello di sicurezza e ridurre le possibilità di essere infettati da codice dannoso mediante la configurazione di account utente Windows come membri del gruppo Users, in contrapposizione al gruppo Administrators.  
  
## Rischi di sicurezza  
 Se si accede con diritti di amministratore, il sistema è vulnerabile a diversi tipi di attacchi alla sicurezza, quali Trojan horse e sovraccarico del buffer. La semplice visita di un sito Web con diritti di amministratore può danneggiare il sistema, in quanto del codice dannoso scaricato dal sito potrebbe infettare il computer.  Se l'attacco riesce, il codice infatti eredita le autorizzazioni di amministratore ed è in grado di eseguire operazioni quali l'eliminazione di tutti i file, la formattazione del disco rigido e la creazione di nuovi account utente con accesso di amministratore.  
  
## Gruppi di utenti diversi dagli amministratori  
 Gli account utente di Windows utilizzati normalmente dagli sviluppatori devono essere aggiunti ai gruppi Users o Power Users.  Gli sviluppatori devono essere aggiunti anche al gruppo di debug.  L'appartenenza al gruppo Users consente di effettuare attività comuni come eseguire programmi e visitare siti Web senza esporre il computer a rischi inutili.  In qualità di membro del gruppo Power Users, è possibile inoltre eseguire attività come installare applicazioni, stampanti e la maggior parte delle operazioni disponibili dal Pannello di controllo.  In caso sia necessario eseguire attività amministrative come l'aggiornamento del sistema operativo o la configurazione di parametri di sistema, è possibile accedere con un account di amministratore per il tempo necessario all'attività.  In alternativa, è possibile utilizzare il comando di Windows **runas** per avviare applicazioni specifiche con accesso amministrativo.  
  
## Esposizione degli utenti a rischi di sicurezza  
 La non appartenenza al gruppo Administrators è di particolare importanza per gli sviluppatori perché, oltre a proteggere i computer di sviluppo, impedisce loro di scrivere inavvertitamente codice che richieda agli utenti di far parte del gruppo Administrators per l'esecuzione delle applicazioni sviluppate.  Se nel corso dello sviluppo viene introdotto codice che richiede l'accesso come amministratore, non verrà eseguito in fase di esecuzione e lo sviluppatore verrà avvisato del fatto che l'applicazione richiederà agli utenti di accedere come amministratori.  
  
## Codice che richiede privilegi di amministratore  
 Per l'esecuzione di alcuni tipi di codice è necessario l'accesso come amministratore.  Se possibile, è consigliabile servirsi di codice alternativo.  Di seguito sono riportati esempi di operazioni di codice che richiedono l'accesso come amministratore:  
  
-   Scrittura in aree protette del file system, quali le directory Windows o Programmi  
  
-   Scrittura in aree protette del Registro di sistema, ad esempio HKEY\_LOCAL\_MACHINE  
  
-   Installazione di assembly nella Global Assembly Cache \(GAC\)  
  
 Generalmente, queste azioni devono essere limitate ai programmi di installazione delle applicazioni.  In questo modo, gli utenti possono utilizzare i privilegi di amministratore solo temporaneamente.  
  
## Debug  
 Entrando a far parte del gruppo di debug, è possibile eseguire il debug di qualsiasi applicazione avviata in Visual Studio \(nativa e non gestita\) come utente non amministratore.  In questo modo è possibile eseguire la connessione a un'applicazione in esecuzione tramite il comando Connetti a processo.  È necessaria tuttavia l'appartenenza al gruppo Administrators per eseguire il debug di applicazioni native o gestite avviate da un altro utente.  
  
## Vedere anche  
 [Procedure di sicurezza consigliate](../top/security-best-practices-for-cpp.md)