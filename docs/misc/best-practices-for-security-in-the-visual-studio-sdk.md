---
title: "Procedure consigliate per la sicurezza in Visual Studio SDK | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "sicurezza [Visual Studio SDK]"
  - "Controllo dell'account utente [Visual Studio SDK]"
  - "Visual Studio SDK, sicurezza"
  - "Controllo account utente [Visual Studio SDK]"
  - "procedure consigliate per la sicurezza, Visual Studio SDK"
  - "Windows Vista, Controllo dell'account utente [Visual Studio SDK]"
ms.assetid: 56c8a113-0c53-4969-a009-a2ab58d855c3
caps.latest.revision: 30
caps.handback.revision: 30
manager: "douge"
---
# Procedure consigliate per la sicurezza in Visual Studio SDK
Per poter creare i migliori prodotti possibili, è necessario comprendere i concetti relativi alla sicurezza per le estensioni VSPackage.  
  
 Un prodotto sicuro garantisce protezione per quanto riguarda gli aspetti seguenti:  
  
-   Riservatezza, integrità e disponibilità delle informazioni di un cliente.  
  
-   Integrità e disponibilità delle risorse di elaborazione sotto il controllo dell'amministratore o del proprietario del sistema.  
  
## Vulnerabilità di sicurezza  
 Una vulnerabilità di sicurezza è un punto debole di un prodotto che rende impossibile evitare le attività dannose di un utente malintenzionato, anche quando il prodotto viene usato correttamente. Ecco alcuni esempi:  
  
-   Ottenere autorizzazioni in un computer superiori a quelle dell'utente.  
  
-   Acquisire il controllo del funzionamento del computer di un utente.  
  
-   Compromettere i dati nel computer di un utente.  
  
> [!IMPORTANT]
>  Non presupporre mai che l'applicazione verrà eseguita solo in ambienti specifici. L'applicazione potrebbe venire usata in ambienti non previsti, in particolare quando aumenta la sua diffusione. Presupporre invece che il codice verrà eseguito in ambienti ostili e progettare, scrivere e testare il codice di conseguenza.  
  
 I prodotti e i sistemi progettati e creati considerando la sicurezza una caratteristica principale sono più solidi di quelli scritti senza dare la giusta importanza alla sicurezza. I prodotti sicuri sono inoltre più immuni alle critiche dei mezzi di informazione, più interessanti per gli utenti e meno costosi da supportare e aggiornare.  
  
## API pericolose  
 Le chiamate ad alcune funzioni possono produrre vulnerabilità di sicurezza indesiderate se vengono usate in modo non corretto, ma impedirne l'uso non comporta necessariamente la creazione di codice sicuro. Tuttavia, alcuni progetti software hanno ottenuto vantaggi considerevoli in termini di sicurezza grazie alla decisione di impedire funzioni difficili da usare in modo sicuro, come una delle numerose procedure per uno sviluppo sicuro. Per altre informazioni, vedere l'appendice A del libro Microsoft Press "Writing Secure Code" di Michael Howard e David LeBlanc.  
  
 La maggior parte dei problemi di sicurezza deriva dal considerare attendibile l'input senza verificarlo in modo adeguato. Tenere traccia dei dati inseriti nel codice e porsi domande sulle implicazioni dell'uso di tali dati. È possibile scrivere codice sicuro usando la maggior parte delle funzioni se gli input di dati sono ben formati e se ne viene verificata l'attendibilità.  
  
## Problemi relativi a Controllo dell'account utente  
 La funzionalità Controllo dell'account utente ha implicazioni per la sicurezza che è necessario comprendere. Questa funzionalità riduce l'esposizione del sistema operativo e delle applicazioni ad attacchi dannosi.  
  
1.  Per altre informazioni su questa funzionalità in [!INCLUDE[win7](../build/includes/win7_md.md)], vedere [Che cos'è il Controllo account utente?](http://go.microsoft.com/fwlink/?linkid=159927).  
  
2.  Per altre informazioni su questa funzionalità in [!INCLUDE[win8](../build/includes/win8_md.md)], vedere [Che cosa sono le impostazioni di Controllo dell'account utente?](http://windows.microsoft.com/windows-8/what-are-uac-settings).  
  
 Prima dell'avvento di Controllo dell'account utente, gli sviluppatori eseguivano in genere [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] con autorizzazioni di amministratore anche quando non era necessario. È consigliabile eseguire le attività di sviluppo e test dell'estensione come utente normale, per assicurarsi che non siano richiesti diritti elevati quando non è necessario.  
  
 Si noti che Controllo dell'account utente influisce anche sulla distribuzione. I pacchetti di installazione devono essere creati correttamente per supportare Controllo dell'account utente. Un pacchetto creato in modo non corretto causa in genere errori di "accesso negato" perché il programma di installazione prova a usare i normali diritti utente per eseguire un'attività che richiede diritti elevati.  
  
## Vedere anche  
 [Procedure consigliate per la sicurezza in VS](../Topic/Best%20Practices%20for%20Security%20in%20VSPackages.md)   
 [Risorse per la creazione di applicazioni sicure](http://msdn.microsoft.com/it-it/0ebf5f69-76f2-498a-a2df-83cf3443e132)   
 [Key Security Concepts](../Topic/Key%20Security%20Concepts.md)