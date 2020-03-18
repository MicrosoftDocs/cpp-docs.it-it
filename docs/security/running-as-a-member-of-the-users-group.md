---
title: Esecuzione come membro del gruppo Users
ms.date: 11/04/2016
helpviewer_keywords:
- Users Group [C++]
- security [C++], Users Group
- Windows accounts [C++]
- non administrator users [C++]
- user accounts [C++]
- administrator (not running as) [C++]
ms.assetid: e48a03ec-d345-49f6-809a-1a291eecbc81
ms.openlocfilehash: 117ef426950fc9aff5ae41e894f0d7ae898369cd
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79445437"
---
# <a name="running-as-a-member-of-the-users-group"></a>Esecuzione come membro del gruppo Users

In questo argomento viene illustrato come aumentare il livello di sicurezza e ridurre le possibilità di essere infettati da codice dannoso mediante la configurazione di account utente Windows come membri del gruppo Users, in contrapposizione al gruppo Administrators.

## <a name="security-risks"></a>Rischi per la sicurezza

Se si accede con diritti di amministratore, il sistema è vulnerabile a diversi tipi di attacchi alla sicurezza, quali Trojan horse e sovraccarico del buffer. La semplice visita di un sito Web con diritti di amministratore può danneggiare il sistema, in quanto del codice dannoso scaricato dal sito potrebbe infettare il computer. Se l'attacco riesce, il codice infatti eredita le autorizzazioni di amministratore ed è in grado di eseguire operazioni quali l'eliminazione di tutti i file, la formattazione del disco rigido e la creazione di nuovi account utente con accesso di amministratore.

## <a name="non-administrator-user-groups"></a>Gruppi di utenti diversi dagli amministratori

Gli account utente di Windows utilizzati normalmente dagli sviluppatori devono essere aggiunti ai gruppi Users o Power Users. Gli sviluppatori devono essere aggiunti anche al gruppo di debug. L'appartenenza al gruppo Users consente di effettuare attività comuni come eseguire programmi e visitare siti Web senza esporre il computer a rischi inutili. In qualità di membro del gruppo Power Users, è possibile inoltre eseguire attività come installare applicazioni, stampanti e la maggior parte delle operazioni disponibili dal Pannello di controllo. In caso sia necessario eseguire attività amministrative come l'aggiornamento del sistema operativo o la configurazione di parametri di sistema, è possibile accedere con un account di amministratore per il tempo necessario all'attività. In alternativa, è possibile utilizzare il comando **RunAs** di Windows per avviare applicazioni specifiche con accesso amministrativo.

## <a name="exposing-customers-to-security-risks"></a>Esposizione degli utenti a rischi di sicurezza

La non appartenenza al gruppo Administrators è di particolare importanza per gli sviluppatori perché, oltre a proteggere i computer di sviluppo, impedisce loro di scrivere inavvertitamente codice che richieda agli utenti di far parte del gruppo Administrators per l'esecuzione delle applicazioni sviluppate. Se nel corso dello sviluppo viene introdotto codice che richiede l'accesso come amministratore, non verrà eseguito in fase di esecuzione e lo sviluppatore verrà avvisato del fatto che l'applicazione richiederà agli utenti di accedere come amministratori.

## <a name="code-that-requires-administrator-privileges"></a>Codice che richiede privilegi di amministratore

Per l'esecuzione di alcuni tipi di codice è necessario l'accesso come amministratore. Se possibile, è consigliabile servirsi di codice alternativo. Di seguito sono riportati esempi di operazioni di codice che richiedono l'accesso come amministratore:

- Scrittura in aree protette del file system, quali le directory Windows o Programmi

- Scrittura in aree protette del Registro di sistema, ad esempio HKEY_LOCAL_MACHINE

- Installazione di assembly nella Global Assembly Cache (GAC)

Generalmente, queste azioni devono essere limitate ai programmi di installazione delle applicazioni. In questo modo, gli utenti possono utilizzare i privilegi di amministratore solo temporaneamente.

## <a name="debugging"></a>Debug

Entrando a far parte del gruppo di debug, è possibile eseguire il debug di qualsiasi applicazione avviata in Visual Studio (nativa e non gestita) come utente non amministratore. In questo modo è possibile eseguire la connessione a un'applicazione in esecuzione tramite il comando Connetti a processo. È necessaria tuttavia l'appartenenza al gruppo Administrators per eseguire il debug di applicazioni native o gestite avviate da un altro utente.

## <a name="see-also"></a>Vedere anche

[Procedure di sicurezza consigliate](security-best-practices-for-cpp.md)
