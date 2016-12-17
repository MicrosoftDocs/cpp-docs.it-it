---
title: "Memoria virtuale insufficiente | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: aec803b1-9d76-46bb-8f14-8c63d80112a5
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Memoria virtuale insufficiente
Questo messaggio viene visualizzato quando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] non risponde più e la memoria virtuale sta per esaurirsi.  Tuttavia, questo errore non si verifica quando la memoria virtuale nel computer è bassa ma quando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] sta esaurendo lo spazio degli indirizzi.  In genere, questo errore si verifica nei computer con sistemi operativi a 32 bit che limitano a 2 GB lo spazio degli indirizzi di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Quando si utilizzano i processi a 32 bit, l'applicazione può utilizzare solo 4 GB di memoria \(2^32 bit\).  Tuttavia, le versioni di Windows a 32 bit riservano 2 GB di spazio degli indirizzi virtuali di un processo per fini interni \(ad esempio, per per lavorare con la scheda grafica o accedere ad altri driver di sistema\).  Di conseguenza, il processo a 32 bit può utilizzare solo 2 GB per i fini interni.  Gli utenti possono impostare l'opzione \/3GB per forzare Windows a riservare solo 1 GB di spazio per se stesso e 3GB al processo.  Nella maggior parte dei casi, le prestazioni non diminuiscono riservando solo 1 GB a Windows.  
  
 Nei sistemi che eseguono versioni a 64 bit di Windows, questo errore si verifica raramente perché il processo può utilizzare tutti i 4 GB di spazio indirizzabile, e Windows può utilizzare gli indirizzi di memoria a 64 bit per lavorare con i driver del sistema e l'hardware.  Tuttavia, l'utilizzo della memoria può superare i 3 GB o addirittura 4 GB quando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] elabora alcuni insiemi di dati.  Per ulteriori informazioni, vedere [Visual Studio: Perché non c'è nessuna versione a 64 bit? \(e ancora\)](http://go.microsoft.com/fwlink/?LinkId=246307).  
  
 Questo errore si verifica in genere quando in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] vengono memorizzate grandi quantità di dati nella cache o quando sono in esecuzione più processi che comportano un consumo elevato di memoria.  
  
 I seguenti scenari richiedono di memorizzare grandi quantità di dati nella cache e in genere è possibile risolvere il problema riavviando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   Esecuzione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per la prima volta dopo l'installazione.  
  
-   Installazione o disinstallazione di un'estensione.  
  
-   Scelta o personalizzazione degli elementi della **casella degli strumenti**.  
  
-   Scelta delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   Attivazione della modalità sospensione \(ibernazione\) quando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è ancora aperto.  
  
 Gli scenari elencati di seguito richiedono grandi quantità di memoria attiva.  In questi casi, è consigliabile eseguire [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] solo con i componenti essenziali o eseguire i processi aggiuntivi in una seconda istanza di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   Compilazione di soluzioni di grandi dimensioni.  
  
-   Utilizzo di documenti XML di grandi dimensioni.  
  
-   Aggiornamento delle soluzioni da una versione precedente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   Reindirizzamento di soluzioni verso nuove destinazioni.  
  
-   Eseguire [!INCLUDE[esprtfc](../misc/includes/esprtfc_md.md)] durante la modifica di codice.  
  
-   Esecuzione di IntelliTrace in più progetti.  
  
 Se queste misure non impediscono l'errore, è possibile aumentare lo spazio degli indirizzi disponibile in un sistema che esegue [!INCLUDE[win7](../build/includes/win7_md.md)] eseguendo bcedit.exe con la seguente sintassi:  
  
 **bcdedit \/set IncreaseUserVa 3072**  
  
 Questo comando permette di aumentare la memoria virtuale in modalità utente da 2 GB a 3 GB in un sistema basato su x86.  Se si aggiunge l'opzione \/3GB, l'intero sistema può utilizzare più memoria e assegnare a ogni applicazione una percentuale maggiore di memoria disponibile.  
  
> [!NOTE]
>  È necessario eseguire bcdedit.exe con i permessi di amministratore.  Se la crittografia BitLocker è abilitata, è necessario sospendere Bitlocker, effettuare la modifica, riavviare il sistema, e abilitare nuovamente Bitlocker.  
  
 Anche dopo aver incrementato l'allocazione della memoria virtuale a 3 GB, questo errore potrebbe ripetersi in quanto ogni singola applicazione può utilizzare solo 2 GB di memoria virtuale.  Se questo errore continua ad essere visualizzato, ridurre la dimensione della soluzione e quindi riavviare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  È possibile ridurre la soluzione o effettuando il refactoring per rimuovere i progetti che vengono utilizzati raramente o scaricando i progetti che non sono più necessari.  Se l'errore si verifica quando si compila la soluzione, provare a eseguire la compilazione dal prompt dei comandi.  
  
## Vedere anche  
 [Resources for Troubleshooting IDE Errors](../Topic/Resources%20for%20Troubleshooting%20Integrated%20Development%20Environment%20Errors.md)